#include "usr_main.hpp"

#include "queued_uart.hpp"
#include "console_manager.hpp"

/* global variables */
QueuedUart* uart_console;
ConsoleManager *console_mng;

/* interrupt function */
extern "C" void USART2_IRQHandler(void){
    uart_console->handle_irq();
}

/* uart command function */
void example_command(const char** argv, int argc, UartInterface *output);

int usr_main(void)
{
    /* Lチカ用初期化 */
    __HAL_RCC_GPIOC_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin   = GPIO_PIN_13;
    GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull  = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    /* uartコンソールの初期化 */
    uart_console = new QueuedUart;
    uart_console->init(USART2, 115200, 10, 0);
    console_mng = new ConsoleManager;
    console_mng->init(uart_console->getUartInterface());

    /* コマンドの追加 */
    console_mng->add_command("example", example_command, 0);

    /* コマンドライン処理 */
    std::string cmd;
    uart_console->getUartInterface()->transmit("\n$ ");
    while (1) {
        if(uart_console->getline(cmd) == 0)
        {
            /* コマンドを受信 */
            GPIOC->ODR ^= 1 << 13;
            console_mng->execute(cmd);
            uart_console->getUartInterface()->transmit("$ ");
        }
    }
}

void example_command(const char** argv, int argc, UartInterface *output)
{
    for(int i = 0; i < argc; i++) output->printf("%d:[%s]\n", i, argv[i]);
}
