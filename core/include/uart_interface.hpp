/*
 * uart_interface.h
 *
 *  Created on: Aug 4, 2019
 *      Author: Yuhei
 */

#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

#include "stm32f1xx.h"

class UartInterface
{
public:
    typedef void (*uart_callback_t)(uint16_t *, size_t, uint32_t);

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
     * @brief uartペリフェラルを通信用として通信用として初期化起動する。
     *
     * @param[in] instance 使用するペリフェラル(USART1, USART2, ...)
     * @param[in] baud ボーレート
     * @param[in] priority 割り込みのプライオリティ
     * @param[in] byte_length 1バイトのビット数(パリティビットを含む)
     * @param[in] stop_bits stopビット長
     * @param[in] parity parityビットの設定
     * @param[in] remap_gpio remap設定
     * @retval None
     */
    void init(USART_TypeDef *instance, uint32_t baud, uint32_t priority, uint32_t byte_length, uint32_t stop_bits, uint32_t parity,
              uint8_t remap_gpio);

    /**
     * @brief GPIOの設定を行い、割り込みを有効化して、通信を開始する。
     *
     * @param[in] cb_function データを受信した際のcallback関数
     * @retval None
     */
    void start(uart_callback_t cb_function);

    /**
     * @brief 割り込み要求ハンドラを処理する。
     *
     * @retval None
     */
    void handle_irq(void);

    /**
     * @brief 割り込みを有効にする。
     *
     * @retval None
     */
    void enable_it(void);

    /**
     * @brief 割り込みを無効にする。
     *
     * @retval None
     */
    void disable_it(void);

    /**
     * @brief データを送信
     *
     * @param[in] data 送信するデータの先頭ポインタ
     * @param[in] size 送信するデータのデータ長
     * @param[in] timeout 送信のtimeout時間
     * @retval None
     */
    void transmit(uint8_t *data, uint16_t size, uint32_t timeout);

    /**
     * @brief 文字列データを送信
     *
     * @param[in] data 送信する文字列
     * @retval None
     */
    void transmit(const char *data);

    /**
     * @brief フォーマット文字列を送信
     *
     * @param[in] format 送信するformat指定子を含む文字列
     * @param[in] ... 可変長引数
     * @retval None
     */
    void printf(const char *format, ...);

private:
    UART_HandleTypeDef huart;
    IRQn_Type          usart_irq;
    uart_callback_t    cb;
    uint32_t           remap;
    uint32_t           nvic_priority;
    /**
     * @brief USART_DRから1Byte(8,9bits)のデータを取得する。
     *
     * @note 各種レジスタの値を参照し、USART_DRからデータ取得可能なことを確認してから呼び出すこと。
     * @retval None
     */
    uint16_t receive(void);
};

inline uint16_t UartInterface::receive(void)
{
    uint16_t formated_data = 0;

    if (huart.Init.WordLength == UART_WORDLENGTH_9B) {
        if (huart.Init.Parity == UART_PARITY_NONE) {
            formated_data = (uint16_t)(huart.Instance->DR & (uint32_t)0x01FF);
        } else {
            formated_data = (uint16_t)(huart.Instance->DR & (uint32_t)0x00FF);
        }
    } else {
        if (huart.Init.Parity == UART_PARITY_NONE) {
            formated_data = (uint16_t)(huart.Instance->DR & (uint32_t)0x00FF);
        } else {
            formated_data = (uint16_t)(huart.Instance->DR & (uint32_t)0x007F);
        }
    }

    return formated_data;
}

inline void UartInterface::handle_irq(void)
{
    uint32_t isrflags   = READ_REG(huart.Instance->SR);
    uint32_t cr1its     = READ_REG(huart.Instance->CR1);
    uint32_t errorflags = 0x00U;

    /* check error flags */
    errorflags = (isrflags & (uint32_t)(USART_SR_PE | USART_SR_FE | USART_SR_ORE | USART_SR_NE));

    /* UART received data is enabled */
    if (((isrflags & USART_SR_RXNE) != RESET) && ((cr1its & USART_CR1_RXNEIE) != RESET)) {
        uint16_t rx_data = receive();
        cb(&rx_data, 1, errorflags);
    }

    return;
}

#endif /* UART_INTERFACE_H_ */
