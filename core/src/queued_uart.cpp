/*
queued_uart.cpp

Copyright (c) 2020 kutei

This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/

#include "queued_uart.hpp"


void QueuedUart::init(USART_TypeDef *instance, uint32_t baud, uint32_t priority, uint8_t remap_gpio)
{
    uart.init(instance, baud, priority, remap_gpio);
    uart.start(nullptr);
    line_num = 0;
}

void QueuedUart::handle_irq()
{
    uint8_t rec;

    if (uart.receive(&rec) != 0) {
        return;
    }

    if (rec == '\b') {
        uart.transmit("\b ");
        if (cmd_que.size() > 0) {
            cmd_que.pop_back();
            uart.transmit(rec);
        }
    } else {
        if (rec == '\n') {
            line_num++;
        }
        cmd_que.emplace_back(rec);
        uart.transmit(rec);
    }
}

int QueuedUart::getline(std::string &str)
{
    int cmd_len;
    if (line_num <= 0)
    {
        return -1;
    }
    else
    {
        // 改行コードの前までを取得
        uart.disable_it();
        for (cmd_len = 0;;) {
            char c = cmd_que.front();
            cmd_que.pop_front();
            if (c == '\n') {
                break;
            } else if (c == '\r') {
                // 何もしない
            } else {
                if (cmd_len < MAX_CMD_LENGTH - 1)
                {
                    cmd_buf[cmd_len] = c;
                    cmd_len++;
                }
            }
        }
        uart.enable_it();

        // stringを作る
        cmd_buf[cmd_len] = 0;
        str = std::string((char*)cmd_buf);
        line_num--;
        return 0;
    }

}
