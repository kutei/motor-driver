/*
console_manager.hpp

Copyright (c) 2020 kutei

This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/
#ifndef CONSOLE_MANAGER_HPP
#define CONSOLE_MANAGER_HPP

#include "stdint.h"
#include "uart_interface.hpp"

#include <string>
#include <vector>

class ConsoleManager
{
public:
    static constexpr int NUM_MAX_ARGS = 20;
    typedef void (*command_function_ptr)(const char**, int, UartInterface*);

    struct CommandFunction
    {
        const char *name;
        command_function_ptr cf;
        int exclusive;
    };

    /**
     * @brief クラスの初期化
     *
     * @param[in] out コマンドの出力先を指定する
     * @retval None
     */
    void init(UartInterface *uart);

    /**
     * @brief 処理を実行する関数を指定して、コマンドを追加する。
     *
     * @param[in] name コマンド名
     * @param[in] cf 追加するコマンドを処理する関数
     * @param[in] exclusive 排他処理が必要かどうか
     * @retval None
     */
    void add_command(const char *name, command_function_ptr cf, int exclusive);

    /**
     * @brief 入力文字列がパースできる場合はパースし、該当コマンドがある場合は実行する。
     *
     * @retval None
     */
    void execute(std::string &cmd);

private:
    UartInterface *output;
    int num_line;
    std::vector<CommandFunction> cmd_list;

    std::vector<std::string> split(const std::string &s, char delim);

    /**
     * @brief 排他処理の観点(exclusive)からコマンドが実行可能化を確認する。
     *
     * @param[in] exclusive 排他処理の観点を指定する。0ならば排他処理を行わない。
     * @retval true コマンドが実行可能である。
     * @retval false コマンドが実行不可能である。
     */
    bool isExecutable(int exclusive);
};


#endif /* CONSOLE_MANAGER_HPP */
