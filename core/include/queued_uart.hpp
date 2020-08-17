/*
queued_uart.hpp

Copyright (c) 2020 kutei

This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/

#include "uart_interface.hpp"

#include <deque>
#include <string>

class QueuedUart
{
public:
    static constexpr int MAX_CMD_LENGTH = 256;  // コマンド1行の最大文字数

    /**
     * @brief uartペリフェラルを通信用として通信用として初期化起動する。(8bit,no-parity,1stop)
     *
     * @param[in] instance 使用するペリフェラル(USART1, USART2, ...)
     * @param[in] baud ボーレート
     * @param[in] priority 割り込みのプライオリティ
     * @param[in] remap_gpio remap設定
     * @retval None
     */
    void init(USART_TypeDef *instance, uint32_t baud, uint32_t priority, uint8_t remap_gpio);

    /**
     * @brief 割り込み要求ハンドラを処理する。
     *
     * @retval None
     */
    void handle_irq();

    /**
     * @brief 改行コードまでの文字列を取得する。割り込みを停止して排他処理を行う。
     *
     * @param[in] str 改行コードを含まない文字列を返す。
     * @retval 負の数 取得する文字列が存在しない。
     * @retval 0 取得に成功した。
     */
    int getline(std::string &str);

    /**
     * @brief UartInterfaceを取得する。
     *
     * @return UartInterfaceのポインタを返す。
     */
    inline UartInterface *getUartInterface();

private:
    UartInterface uart;
    std::deque<uint8_t> cmd_que;
    int line_num;
    uint8_t cmd_buf[MAX_CMD_LENGTH];
};

inline UartInterface *QueuedUart::getUartInterface()
{
    return &uart;
}