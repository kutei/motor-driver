/*
 * uart_interface.cpp
 *
 *  Created on: Aug 4, 2019
 *      Author: Yuhei
 */
#include "uart_interface.hpp"

#include "stm32f1xx.h"

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int TestClass::init(USART_TypeDef* instance, uint32_t baud, uint32_t priority, uint8_t remap_gpio)
{
    return init(instance, baud, priority, UART_WORDLENGTH_8B, UART_STOPBITS_1, UART_PARITY_NONE, remap_gpio);
}
int TestClass::init(USART_TypeDef* instance, uint32_t baud, uint32_t priority,
        uint32_t byte_length, uint32_t stop_bits, uint32_t parity, uint8_t remap_gpio)
{
    GPIO_TypeDef* gpio_tx = nullptr;
    GPIO_TypeDef* gpio_rx = nullptr;
    uint32_t gpio_tx_pin = 0;
    uint32_t gpio_rx_pin = 0;

    _nvic_priority = priority;
    _remap = remap_gpio;
    _huart.Instance = instance;
    _huart.Init.BaudRate = baud;
    _huart.Init.WordLength = byte_length;
    _huart.Init.StopBits = stop_bits;
    _huart.Init.Parity = parity;
    _huart.Init.Mode = UART_MODE_TX_RX;
    _huart.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    _huart.Init.OverSampling = UART_OVERSAMPLING_16;

    if(_huart.Instance == USART1){
        __HAL_RCC_USART1_CLK_ENABLE();
        _usart_irq = USART1_IRQn;
        if (_remap == 0)
        {
            __HAL_RCC_GPIOA_CLK_ENABLE();
            gpio_tx = GPIOA;
            gpio_tx_pin = GPIO_PIN_9;
            gpio_rx = GPIOA;
            gpio_rx_pin = GPIO_PIN_10;
        }
        else
        {
            __HAL_RCC_GPIOB_CLK_ENABLE();
            gpio_tx = GPIOB;
            gpio_tx_pin = GPIO_PIN_6;
            gpio_rx = GPIOB;
            gpio_rx_pin = GPIO_PIN_7;
        }
    } else if(_huart.Instance == USART2){
        __HAL_RCC_USART2_CLK_ENABLE();
        _usart_irq = USART2_IRQn;
        if (_remap == 0)
        {
            __HAL_RCC_GPIOA_CLK_ENABLE();
            gpio_tx = GPIOA;
            gpio_tx_pin = GPIO_PIN_2;
            gpio_rx = GPIOA;
            gpio_rx_pin = GPIO_PIN_3;
        }
        else
        {
            __HAL_RCC_GPIOD_CLK_ENABLE();
            gpio_tx = GPIOD;
            gpio_tx_pin = GPIO_PIN_5;
            gpio_rx = GPIOD;
            gpio_rx_pin = GPIO_PIN_6;
        }
    }

    /* initialize peripheral */
    if (HAL_UART_Init(&_huart) != HAL_OK){
        // Error_Handler(__FILE__, __LINE__);
    }

    /* initialize gpio */
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = gpio_tx_pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(gpio_tx, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = gpio_rx_pin;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(gpio_rx, &GPIO_InitStruct);

    /* peripheral interrupt init */
    HAL_NVIC_SetPriority(_usart_irq, _nvic_priority, 0);
    HAL_NVIC_EnableIRQ(_usart_irq);

    /* start interrupt */
    // enable_it();

    return 0;

}

UartInterface::UartInterface(USART_TypeDef* instance, uint32_t baud, uint32_t priority, uint8_t remap_gpio)
{
    UartInterface(instance, baud, priority, UART_WORDLENGTH_8B, UART_STOPBITS_1, UART_PARITY_NONE, remap_gpio);
}

UartInterface::UartInterface(USART_TypeDef* instance, uint32_t baud, uint32_t priority,
        uint32_t byte_length, uint32_t stop_bits, uint32_t parity, uint8_t remap_gpio)
{
    nvic_priority = priority;
    remap = remap_gpio;
    huart.Instance = instance;
    huart.Init.BaudRate = baud;
    huart.Init.WordLength = byte_length;
    huart.Init.StopBits = stop_bits;
    huart.Init.Parity = parity;
    huart.Init.Mode = UART_MODE_TX_RX;
    huart.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    huart.Init.OverSampling = UART_OVERSAMPLING_16;
}

void UartInterface::init(uart_callback_t cb_function){
    GPIO_TypeDef* gpio_tx = nullptr;
    GPIO_TypeDef* gpio_rx = nullptr;
    uint32_t gpio_tx_pin = 0;
    uint32_t gpio_rx_pin = 0;

    this->cb = cb_function;

    if (huart.Instance == USART1)
    {
        __HAL_RCC_USART1_CLK_ENABLE();
        usart_irq = USART1_IRQn;
        if (remap == 0)
        {
            __HAL_RCC_GPIOA_CLK_ENABLE();
            gpio_tx = GPIOA;
            gpio_tx_pin = GPIO_PIN_9;
            gpio_rx = GPIOA;
            gpio_rx_pin = GPIO_PIN_10;
        }
        else
        {
            __HAL_RCC_GPIOB_CLK_ENABLE();
            gpio_tx = GPIOB;
            gpio_tx_pin = GPIO_PIN_6;
            gpio_rx = GPIOB;
            gpio_rx_pin = GPIO_PIN_7;
        }
    }
    else if(huart.Instance == USART2)
    {
        __HAL_RCC_USART2_CLK_ENABLE();
        usart_irq = USART2_IRQn;
        if (remap == 0)
        {
            __HAL_RCC_GPIOA_CLK_ENABLE();
            gpio_tx = GPIOA;
            gpio_tx_pin = GPIO_PIN_2;
            gpio_rx = GPIOA;
            gpio_rx_pin = GPIO_PIN_3;
        }
        else
        {
            __HAL_RCC_GPIOD_CLK_ENABLE();
            gpio_tx = GPIOD;
            gpio_tx_pin = GPIO_PIN_5;
            gpio_rx = GPIOD;
            gpio_rx_pin = GPIO_PIN_6;
        }
    }

    /* initialize peripheral */
    if (HAL_UART_Init(&huart) != HAL_OK){
        // Error_Handler(__FILE__, __LINE__);
    }

    /* initialize gpio */
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = gpio_tx_pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(gpio_tx, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = gpio_rx_pin;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(gpio_rx, &GPIO_InitStruct);

    /* peripheral interrupt init */
    HAL_NVIC_SetPriority(usart_irq, nvic_priority, 0);
    HAL_NVIC_EnableIRQ(usart_irq);

    /* start interrupt */
    // enable_it();
}

void UartInterface::enable_it(void)
{
    __HAL_UART_ENABLE_IT(&huart, UART_IT_PE); // enable the UART Parity Error Interrupt
    __HAL_UART_ENABLE_IT(&huart, UART_IT_ERR); // enable the UART Error Interrupt: (Frame error, noise error, overrun error)
    __HAL_UART_ENABLE_IT(&huart, UART_IT_RXNE); // enable the UART Data Register not empty Interrupt
}

void UartInterface::disable_it(void)
{
    __HAL_UART_DISABLE_IT(&huart, UART_IT_RXNE); // disable the UART Data Register not empty Interrupt
    __HAL_UART_DISABLE_IT(&huart, UART_IT_PE); // disable the UART Parity Error Interrupt
    __HAL_UART_DISABLE_IT(&huart, UART_IT_ERR); // disable the UART Error Interrupt: (Frame error, noise error, overrun error)
}

void UartInterface::transmit(uint8_t *pData, uint16_t Size, uint32_t Timeout){
    HAL_UART_Transmit(&huart, pData, Size, Timeout);
}

void UartInterface::transmit(const char *pData){
    uint8_t cnt = 0;
    for(;*(pData+cnt);cnt++);
    transmit((uint8_t *)pData, cnt, 10);
}

void UartInterface::printf(const char *format, ...){
    char buf[256];
    int16_t cnt = 0;

    va_list list;
    va_start(list, format);
    cnt = vsprintf(buf, format, list);
    transmit((uint8_t *)buf, cnt, 10);
    va_end(list);
}

