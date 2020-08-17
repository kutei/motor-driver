/*
console_manager.cpp

Copyright (c) 2020 kutei

This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/

#include "console_manager.hpp"

#include <string.h>

void ConsoleManager::init(UartInterface *uart)
{
    output = uart;
}

void ConsoleManager::add_command(const char *name, command_function_ptr cf, int exclusive)
{
    CommandFunction cmd;
    cmd.name = name;
    cmd.cf = cf;
    cmd.exclusive = exclusive;
    cmd_list.emplace_back(cmd);
}

void ConsoleManager::execute(std::string &cmd)
{
    size_t cnt;
    std::vector<std::string> cmd_split = split(cmd, ' ');

    if (cmd_split.size() == 0) {
        return;
    } else if (cmd_split.size() >= NUM_MAX_ARGS) {
        output->transmit("error: command args must be less than 20(include command)\n");
        return;
    } else {
        for (cnt = 0; cnt < cmd_list.size(); cnt++) {
            if (strcmp(cmd_split[0].c_str(), cmd_list[cnt].name) == 0)
            {
                if (!isExecutable(cmd_list[cnt].exclusive)) {
                    output->printf("error: command mode is exclusive: %d\n", cmd_list[cnt].exclusive);
                    return;
                }
                // 引数配列を作る
                const char *args[NUM_MAX_ARGS] = { 0 };
                for (size_t i = 0; i < cmd_split.size(); i++) {
                    args[i] = cmd_split[i].c_str();
                }
                cmd_list[cnt].cf(args, cmd_split.size(), output);
                return;
            }
        }
        output->printf("error: no such a command: %s\n", cmd_split[0].c_str());
    }
}

std::vector<std::string> ConsoleManager::split(const std::string &s, char delim)
{
    std::vector<std::string> elems;
    std::string item;

    for (char ch: s) {
        if (ch == delim) {
            if (!item.empty()) {
                elems.push_back(item);
            }
            item.clear();
        } else {
            item += ch;
        }
    }

    if (!item.empty()) {
        elems.push_back(item);
    }
    return elems;
}

bool ConsoleManager::isExecutable(int exclusive)
{
    if (exclusive == 0)
    {
        return true;
    }

    return false;
}
