#include "usr_main.hpp"

#include "uart_interface.hpp"

/* global variables */
UartInterface* uart_console;
void           cb(uint16_t* data, size_t size, uint32_t status)
{
    (void)(data);
    (void)(size);
    (void)(status);
}

int usr_main(void)
{
    /* 外部クロックとSWDを有効化するため、GIPOを有効化 */
    __HAL_RCC_GPIOD_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();

    /* Lチカ用初期化 */
    __HAL_RCC_GPIOC_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin   = GPIO_PIN_13;
    GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull  = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    /* uartの初期化 */
    uart_console = new UartInterface;
    uart_console->init(USART2, 9600, 10, 0);
    uart_console->start(cb);

    while (1) {
        uart_console->transmit("coco");
        GPIOC->ODR ^= 1 << 13;
        HAL_Delay(500);
    }
}
