/**
 ******************************************************************************
 * @file    stm32f107xc.h
 * @author  MCD Application Team
 * @brief   CMSIS Cortex-M3 Device Peripheral Access Layer Header File.
 *          This file contains all the peripheral register's definitions, bits
 *          definitions and memory mapping for STM32F1xx devices.
 *
 *          This file contains:
 *           - Data structures and the address mapping for all peripherals
 *           - Peripheral's registers declarations and bits definition
 *           - Macros to access peripheral’s registers hardware
 *
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

/** @addtogroup CMSIS
 * @{
 */

/** @addtogroup stm32f107xc
 * @{
 */

#ifndef __STM32F107xC_H
#define __STM32F107xC_H

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup Configuration_section_for_CMSIS
 * @{
 */
/**
 * @brief Configuration of the Cortex-M3 Processor and Core Peripherals
 */
#define __CM3_REV 0x0200U         /*!< Core Revision r2p0                           */
#define __MPU_PRESENT 0U          /*!< Other STM32 devices does not provide an MPU  */
#define __NVIC_PRIO_BITS 4U       /*!< STM32 uses 4 Bits for the Priority Levels    */
#define __Vendor_SysTickConfig 0U /*!< Set to 1 if different SysTick Config is used */

/**
 * @}
 */

/** @addtogroup Peripheral_interrupt_number_definition
 * @{
 */

/**
 * @brief STM32F10x Interrupt Number Definition, according to the selected device
 *        in @ref Library_configuration_section
 */

/*!< Interrupt Number Definition */
typedef enum {
    /******  Cortex-M3 Processor Exceptions Numbers ***************************************************/
    NonMaskableInt_IRQn   = -14, /*!< 2 Non Maskable Interrupt                             */
    HardFault_IRQn        = -13, /*!< 3 Cortex-M3 Hard Fault Interrupt                     */
    MemoryManagement_IRQn = -12, /*!< 4 Cortex-M3 Memory Management Interrupt              */
    BusFault_IRQn         = -11, /*!< 5 Cortex-M3 Bus Fault Interrupt                      */
    UsageFault_IRQn       = -10, /*!< 6 Cortex-M3 Usage Fault Interrupt                    */
    SVCall_IRQn           = -5,  /*!< 11 Cortex-M3 SV Call Interrupt                       */
    DebugMonitor_IRQn     = -4,  /*!< 12 Cortex-M3 Debug Monitor Interrupt                 */
    PendSV_IRQn           = -2,  /*!< 14 Cortex-M3 Pend SV Interrupt                       */
    SysTick_IRQn          = -1,  /*!< 15 Cortex-M3 System Tick Interrupt                   */

    /******  STM32 specific Interrupt Numbers *********************************************************/
    WWDG_IRQn          = 0,  /*!< Window WatchDog Interrupt                            */
    PVD_IRQn           = 1,  /*!< PVD through EXTI Line detection Interrupt            */
    TAMPER_IRQn        = 2,  /*!< Tamper Interrupt                                     */
    RTC_IRQn           = 3,  /*!< RTC global Interrupt                                 */
    FLASH_IRQn         = 4,  /*!< FLASH global Interrupt                               */
    RCC_IRQn           = 5,  /*!< RCC global Interrupt                                 */
    EXTI0_IRQn         = 6,  /*!< EXTI Line0 Interrupt                                 */
    EXTI1_IRQn         = 7,  /*!< EXTI Line1 Interrupt                                 */
    EXTI2_IRQn         = 8,  /*!< EXTI Line2 Interrupt                                 */
    EXTI3_IRQn         = 9,  /*!< EXTI Line3 Interrupt                                 */
    EXTI4_IRQn         = 10, /*!< EXTI Line4 Interrupt                                 */
    DMA1_Channel1_IRQn = 11, /*!< DMA1 Channel 1 global Interrupt                      */
    DMA1_Channel2_IRQn = 12, /*!< DMA1 Channel 2 global Interrupt                      */
    DMA1_Channel3_IRQn = 13, /*!< DMA1 Channel 3 global Interrupt                      */
    DMA1_Channel4_IRQn = 14, /*!< DMA1 Channel 4 global Interrupt                      */
    DMA1_Channel5_IRQn = 15, /*!< DMA1 Channel 5 global Interrupt                      */
    DMA1_Channel6_IRQn = 16, /*!< DMA1 Channel 6 global Interrupt                      */
    DMA1_Channel7_IRQn = 17, /*!< DMA1 Channel 7 global Interrupt                      */
    ADC1_2_IRQn        = 18, /*!< ADC1 and ADC2 global Interrupt                       */
    CAN1_TX_IRQn       = 19, /*!< CAN1 TX Interrupts                                   */
    CAN1_RX0_IRQn      = 20, /*!< CAN1 RX0 Interrupts                                  */
    CAN1_RX1_IRQn      = 21, /*!< CAN1 RX1 Interrupt                                   */
    CAN1_SCE_IRQn      = 22, /*!< CAN1 SCE Interrupt                                   */
    EXTI9_5_IRQn       = 23, /*!< External Line[9:5] Interrupts                        */
    TIM1_BRK_IRQn      = 24, /*!< TIM1 Break Interrupt                                 */
    TIM1_UP_IRQn       = 25, /*!< TIM1 Update Interrupt                                */
    TIM1_TRG_COM_IRQn  = 26, /*!< TIM1 Trigger and Commutation Interrupt               */
    TIM1_CC_IRQn       = 27, /*!< TIM1 Capture Compare Interrupt                       */
    TIM2_IRQn          = 28, /*!< TIM2 global Interrupt                                */
    TIM3_IRQn          = 29, /*!< TIM3 global Interrupt                                */
    TIM4_IRQn          = 30, /*!< TIM4 global Interrupt                                */
    I2C1_EV_IRQn       = 31, /*!< I2C1 Event Interrupt                                 */
    I2C1_ER_IRQn       = 32, /*!< I2C1 Error Interrupt                                 */
    I2C2_EV_IRQn       = 33, /*!< I2C2 Event Interrupt                                 */
    I2C2_ER_IRQn       = 34, /*!< I2C2 Error Interrupt                                 */
    SPI1_IRQn          = 35, /*!< SPI1 global Interrupt                                */
    SPI2_IRQn          = 36, /*!< SPI2 global Interrupt                                */
    USART1_IRQn        = 37, /*!< USART1 global Interrupt                              */
    USART2_IRQn        = 38, /*!< USART2 global Interrupt                              */
    USART3_IRQn        = 39, /*!< USART3 global Interrupt                              */
    EXTI15_10_IRQn     = 40, /*!< External Line[15:10] Interrupts                      */
    RTC_Alarm_IRQn     = 41, /*!< RTC Alarm through EXTI Line Interrupt                */
    OTG_FS_WKUP_IRQn   = 42, /*!< USB OTG FS WakeUp from suspend through EXTI Line Interrupt */
    TIM5_IRQn          = 50, /*!< TIM5 global Interrupt                                */
    SPI3_IRQn          = 51, /*!< SPI3 global Interrupt                                */
    UART4_IRQn         = 52, /*!< UART4 global Interrupt                               */
    UART5_IRQn         = 53, /*!< UART5 global Interrupt                               */
    TIM6_IRQn          = 54, /*!< TIM6 global Interrupt                                */
    TIM7_IRQn          = 55, /*!< TIM7 global Interrupt                                */
    DMA2_Channel1_IRQn = 56, /*!< DMA2 Channel 1 global Interrupt                      */
    DMA2_Channel2_IRQn = 57, /*!< DMA2 Channel 2 global Interrupt                      */
    DMA2_Channel3_IRQn = 58, /*!< DMA2 Channel 3 global Interrupt                      */
    DMA2_Channel4_IRQn = 59, /*!< DMA2 Channel 4 global Interrupt                      */
    DMA2_Channel5_IRQn = 60, /*!< DMA2 Channel 5 global Interrupt                      */
    ETH_IRQn           = 61, /*!< Ethernet global Interrupt                            */
    ETH_WKUP_IRQn      = 62, /*!< Ethernet Wakeup through EXTI line Interrupt          */
    CAN2_TX_IRQn       = 63, /*!< CAN2 TX Interrupt                                    */
    CAN2_RX0_IRQn      = 64, /*!< CAN2 RX0 Interrupt                                   */
    CAN2_RX1_IRQn      = 65, /*!< CAN2 RX1 Interrupt                                   */
    CAN2_SCE_IRQn      = 66, /*!< CAN2 SCE Interrupt                                   */
    OTG_FS_IRQn        = 67  /*!< USB OTG FS global Interrupt                          */
} IRQn_Type;

/**
 * @}
 */

#include "core_cm3.h"
#include "system_stm32f1xx.h"
#include <stdint.h>

/** @addtogroup Peripheral_registers_structures
 * @{
 */

/**
 * @brief Analog to Digital Converter
 */

typedef struct {
    __IO uint32_t SR;
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    __IO uint32_t SMPR1;
    __IO uint32_t SMPR2;
    __IO uint32_t JOFR1;
    __IO uint32_t JOFR2;
    __IO uint32_t JOFR3;
    __IO uint32_t JOFR4;
    __IO uint32_t HTR;
    __IO uint32_t LTR;
    __IO uint32_t SQR1;
    __IO uint32_t SQR2;
    __IO uint32_t SQR3;
    __IO uint32_t JSQR;
    __IO uint32_t JDR1;
    __IO uint32_t JDR2;
    __IO uint32_t JDR3;
    __IO uint32_t JDR4;
    __IO uint32_t DR;
} ADC_TypeDef;

typedef struct {
    __IO uint32_t SR;  /*!< ADC status register,    used for ADC multimode (bits common to several ADC instances).
                          Address offset: ADC1 base address         */
    __IO uint32_t CR1; /*!< ADC control register 1, used for ADC multimode (bits common to several ADC instances).
                          Address offset: ADC1 base address + 0x04  */
    __IO uint32_t CR2; /*!< ADC control register 2, used for ADC multimode (bits common to several ADC instances).
                          Address offset: ADC1 base address + 0x08  */
    uint32_t      RESERVED[16];
    __IO uint32_t DR; /*!< ADC data register,      used for ADC multimode (bits common to several ADC instances).
                         Address offset: ADC1 base address + 0x4C  */
} ADC_Common_TypeDef;

/**
 * @brief Backup Registers
 */

typedef struct {
    uint32_t      RESERVED0;
    __IO uint32_t DR1;
    __IO uint32_t DR2;
    __IO uint32_t DR3;
    __IO uint32_t DR4;
    __IO uint32_t DR5;
    __IO uint32_t DR6;
    __IO uint32_t DR7;
    __IO uint32_t DR8;
    __IO uint32_t DR9;
    __IO uint32_t DR10;
    __IO uint32_t RTCCR;
    __IO uint32_t CR;
    __IO uint32_t CSR;
    uint32_t      RESERVED13[2];
    __IO uint32_t DR11;
    __IO uint32_t DR12;
    __IO uint32_t DR13;
    __IO uint32_t DR14;
    __IO uint32_t DR15;
    __IO uint32_t DR16;
    __IO uint32_t DR17;
    __IO uint32_t DR18;
    __IO uint32_t DR19;
    __IO uint32_t DR20;
    __IO uint32_t DR21;
    __IO uint32_t DR22;
    __IO uint32_t DR23;
    __IO uint32_t DR24;
    __IO uint32_t DR25;
    __IO uint32_t DR26;
    __IO uint32_t DR27;
    __IO uint32_t DR28;
    __IO uint32_t DR29;
    __IO uint32_t DR30;
    __IO uint32_t DR31;
    __IO uint32_t DR32;
    __IO uint32_t DR33;
    __IO uint32_t DR34;
    __IO uint32_t DR35;
    __IO uint32_t DR36;
    __IO uint32_t DR37;
    __IO uint32_t DR38;
    __IO uint32_t DR39;
    __IO uint32_t DR40;
    __IO uint32_t DR41;
    __IO uint32_t DR42;
} BKP_TypeDef;

/**
 * @brief Controller Area Network TxMailBox
 */

typedef struct {
    __IO uint32_t TIR;
    __IO uint32_t TDTR;
    __IO uint32_t TDLR;
    __IO uint32_t TDHR;
} CAN_TxMailBox_TypeDef;

/**
 * @brief Controller Area Network FIFOMailBox
 */

typedef struct {
    __IO uint32_t RIR;
    __IO uint32_t RDTR;
    __IO uint32_t RDLR;
    __IO uint32_t RDHR;
} CAN_FIFOMailBox_TypeDef;

/**
 * @brief Controller Area Network FilterRegister
 */

typedef struct {
    __IO uint32_t FR1;
    __IO uint32_t FR2;
} CAN_FilterRegister_TypeDef;

/**
 * @brief Controller Area Network
 */

typedef struct {
    __IO uint32_t              MCR;
    __IO uint32_t              MSR;
    __IO uint32_t              TSR;
    __IO uint32_t              RF0R;
    __IO uint32_t              RF1R;
    __IO uint32_t              IER;
    __IO uint32_t              ESR;
    __IO uint32_t              BTR;
    uint32_t                   RESERVED0[88];
    CAN_TxMailBox_TypeDef      sTxMailBox[3];
    CAN_FIFOMailBox_TypeDef    sFIFOMailBox[2];
    uint32_t                   RESERVED1[12];
    __IO uint32_t              FMR;
    __IO uint32_t              FM1R;
    uint32_t                   RESERVED2;
    __IO uint32_t              FS1R;
    uint32_t                   RESERVED3;
    __IO uint32_t              FFA1R;
    uint32_t                   RESERVED4;
    __IO uint32_t              FA1R;
    uint32_t                   RESERVED5[8];
    CAN_FilterRegister_TypeDef sFilterRegister[28];
} CAN_TypeDef;

/**
 * @brief CRC calculation unit
 */

typedef struct {
    __IO uint32_t DR;        /*!< CRC Data register,                           Address offset: 0x00 */
    __IO uint8_t  IDR;       /*!< CRC Independent data register,               Address offset: 0x04 */
    uint8_t       RESERVED0; /*!< Reserved,                                    Address offset: 0x05 */
    uint16_t      RESERVED1; /*!< Reserved,                                    Address offset: 0x06 */
    __IO uint32_t CR;        /*!< CRC Control register,                        Address offset: 0x08 */
} CRC_TypeDef;

/**
 * @brief Digital to Analog Converter
 */

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t SWTRIGR;
    __IO uint32_t DHR12R1;
    __IO uint32_t DHR12L1;
    __IO uint32_t DHR8R1;
    __IO uint32_t DHR12R2;
    __IO uint32_t DHR12L2;
    __IO uint32_t DHR8R2;
    __IO uint32_t DHR12RD;
    __IO uint32_t DHR12LD;
    __IO uint32_t DHR8RD;
    __IO uint32_t DOR1;
    __IO uint32_t DOR2;
} DAC_TypeDef;

/**
 * @brief Debug MCU
 */

typedef struct {
    __IO uint32_t IDCODE;
    __IO uint32_t CR;
} DBGMCU_TypeDef;

/**
 * @brief DMA Controller
 */

typedef struct {
    __IO uint32_t CCR;
    __IO uint32_t CNDTR;
    __IO uint32_t CPAR;
    __IO uint32_t CMAR;
} DMA_Channel_TypeDef;

typedef struct {
    __IO uint32_t ISR;
    __IO uint32_t IFCR;
} DMA_TypeDef;

/**
 * @brief Ethernet MAC
 */

typedef struct {
    __IO uint32_t MACCR;
    __IO uint32_t MACFFR;
    __IO uint32_t MACHTHR;
    __IO uint32_t MACHTLR;
    __IO uint32_t MACMIIAR;
    __IO uint32_t MACMIIDR;
    __IO uint32_t MACFCR;
    __IO uint32_t MACVLANTR; /*    8 */
    uint32_t      RESERVED0[2];
    __IO uint32_t MACRWUFFR; /*   11 */
    __IO uint32_t MACPMTCSR;
    uint32_t      RESERVED1[2];
    __IO uint32_t MACSR; /*   15 */
    __IO uint32_t MACIMR;
    __IO uint32_t MACA0HR;
    __IO uint32_t MACA0LR;
    __IO uint32_t MACA1HR;
    __IO uint32_t MACA1LR;
    __IO uint32_t MACA2HR;
    __IO uint32_t MACA2LR;
    __IO uint32_t MACA3HR;
    __IO uint32_t MACA3LR; /*   24 */
    uint32_t      RESERVED2[40];
    __IO uint32_t MMCCR; /*   65 */
    __IO uint32_t MMCRIR;
    __IO uint32_t MMCTIR;
    __IO uint32_t MMCRIMR;
    __IO uint32_t MMCTIMR; /*   69 */
    uint32_t      RESERVED3[14];
    __IO uint32_t MMCTGFSCCR; /*   84 */
    __IO uint32_t MMCTGFMSCCR;
    uint32_t      RESERVED4[5];
    __IO uint32_t MMCTGFCR;
    uint32_t      RESERVED5[10];
    __IO uint32_t MMCRFCECR;
    __IO uint32_t MMCRFAECR;
    uint32_t      RESERVED6[10];
    __IO uint32_t MMCRGUFCR;
    uint32_t      RESERVED7[334];
    __IO uint32_t PTPTSCR;
    __IO uint32_t PTPSSIR;
    __IO uint32_t PTPTSHR;
    __IO uint32_t PTPTSLR;
    __IO uint32_t PTPTSHUR;
    __IO uint32_t PTPTSLUR;
    __IO uint32_t PTPTSAR;
    __IO uint32_t PTPTTHR;
    __IO uint32_t PTPTTLR;
    uint32_t      RESERVED8[567];
    __IO uint32_t DMABMR;
    __IO uint32_t DMATPDR;
    __IO uint32_t DMARPDR;
    __IO uint32_t DMARDLAR;
    __IO uint32_t DMATDLAR;
    __IO uint32_t DMASR;
    __IO uint32_t DMAOMR;
    __IO uint32_t DMAIER;
    __IO uint32_t DMAMFBOCR;
    uint32_t      RESERVED9[9];
    __IO uint32_t DMACHTDR;
    __IO uint32_t DMACHRDR;
    __IO uint32_t DMACHTBAR;
    __IO uint32_t DMACHRBAR;
} ETH_TypeDef;

/**
 * @brief External Interrupt/Event Controller
 */

typedef struct {
    __IO uint32_t IMR;
    __IO uint32_t EMR;
    __IO uint32_t RTSR;
    __IO uint32_t FTSR;
    __IO uint32_t SWIER;
    __IO uint32_t PR;
} EXTI_TypeDef;

/**
 * @brief FLASH Registers
 */

typedef struct {
    __IO uint32_t ACR;
    __IO uint32_t KEYR;
    __IO uint32_t OPTKEYR;
    __IO uint32_t SR;
    __IO uint32_t CR;
    __IO uint32_t AR;
    __IO uint32_t RESERVED;
    __IO uint32_t OBR;
    __IO uint32_t WRPR;
} FLASH_TypeDef;

/**
 * @brief Option Bytes Registers
 */

typedef struct {
    __IO uint16_t RDP;
    __IO uint16_t USER;
    __IO uint16_t Data0;
    __IO uint16_t Data1;
    __IO uint16_t WRP0;
    __IO uint16_t WRP1;
    __IO uint16_t WRP2;
    __IO uint16_t WRP3;
} OB_TypeDef;

/**
 * @brief General Purpose I/O
 */

typedef struct {
    __IO uint32_t CRL;
    __IO uint32_t CRH;
    __IO uint32_t IDR;
    __IO uint32_t ODR;
    __IO uint32_t BSRR;
    __IO uint32_t BRR;
    __IO uint32_t LCKR;
} GPIO_TypeDef;

/**
 * @brief Alternate Function I/O
 */

typedef struct {
    __IO uint32_t EVCR;
    __IO uint32_t MAPR;
    __IO uint32_t EXTICR[4];
    uint32_t      RESERVED0;
    __IO uint32_t MAPR2;
} AFIO_TypeDef;
/**
 * @brief Inter Integrated Circuit Interface
 */

typedef struct {
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    __IO uint32_t OAR1;
    __IO uint32_t OAR2;
    __IO uint32_t DR;
    __IO uint32_t SR1;
    __IO uint32_t SR2;
    __IO uint32_t CCR;
    __IO uint32_t TRISE;
} I2C_TypeDef;

/**
 * @brief Independent WATCHDOG
 */

typedef struct {
    __IO uint32_t KR;  /*!< Key register,                                Address offset: 0x00 */
    __IO uint32_t PR;  /*!< Prescaler register,                          Address offset: 0x04 */
    __IO uint32_t RLR; /*!< Reload register,                             Address offset: 0x08 */
    __IO uint32_t SR;  /*!< Status register,                             Address offset: 0x0C */
} IWDG_TypeDef;

/**
 * @brief Power Control
 */

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t CSR;
} PWR_TypeDef;

/**
 * @brief Reset and Clock Control
 */

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t CFGR;
    __IO uint32_t CIR;
    __IO uint32_t APB2RSTR;
    __IO uint32_t APB1RSTR;
    __IO uint32_t AHBENR;
    __IO uint32_t APB2ENR;
    __IO uint32_t APB1ENR;
    __IO uint32_t BDCR;
    __IO uint32_t CSR;

    __IO uint32_t AHBRSTR;
    __IO uint32_t CFGR2;

} RCC_TypeDef;

/**
 * @brief Real-Time Clock
 */

typedef struct {
    __IO uint32_t CRH;
    __IO uint32_t CRL;
    __IO uint32_t PRLH;
    __IO uint32_t PRLL;
    __IO uint32_t DIVH;
    __IO uint32_t DIVL;
    __IO uint32_t CNTH;
    __IO uint32_t CNTL;
    __IO uint32_t ALRH;
    __IO uint32_t ALRL;
} RTC_TypeDef;

/**
 * @brief Serial Peripheral Interface
 */

typedef struct {
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    __IO uint32_t SR;
    __IO uint32_t DR;
    __IO uint32_t CRCPR;
    __IO uint32_t RXCRCR;
    __IO uint32_t TXCRCR;
    __IO uint32_t I2SCFGR;
    __IO uint32_t I2SPR;
} SPI_TypeDef;

/**
 * @brief TIM Timers
 */
typedef struct {
    __IO uint32_t CR1;   /*!< TIM control register 1,                      Address offset: 0x00 */
    __IO uint32_t CR2;   /*!< TIM control register 2,                      Address offset: 0x04 */
    __IO uint32_t SMCR;  /*!< TIM slave Mode Control register,             Address offset: 0x08 */
    __IO uint32_t DIER;  /*!< TIM DMA/interrupt enable register,           Address offset: 0x0C */
    __IO uint32_t SR;    /*!< TIM status register,                         Address offset: 0x10 */
    __IO uint32_t EGR;   /*!< TIM event generation register,               Address offset: 0x14 */
    __IO uint32_t CCMR1; /*!< TIM  capture/compare mode register 1,        Address offset: 0x18 */
    __IO uint32_t CCMR2; /*!< TIM  capture/compare mode register 2,        Address offset: 0x1C */
    __IO uint32_t CCER;  /*!< TIM capture/compare enable register,         Address offset: 0x20 */
    __IO uint32_t CNT;   /*!< TIM counter register,                        Address offset: 0x24 */
    __IO uint32_t PSC;   /*!< TIM prescaler register,                      Address offset: 0x28 */
    __IO uint32_t ARR;   /*!< TIM auto-reload register,                    Address offset: 0x2C */
    __IO uint32_t RCR;   /*!< TIM  repetition counter register,            Address offset: 0x30 */
    __IO uint32_t CCR1;  /*!< TIM capture/compare register 1,              Address offset: 0x34 */
    __IO uint32_t CCR2;  /*!< TIM capture/compare register 2,              Address offset: 0x38 */
    __IO uint32_t CCR3;  /*!< TIM capture/compare register 3,              Address offset: 0x3C */
    __IO uint32_t CCR4;  /*!< TIM capture/compare register 4,              Address offset: 0x40 */
    __IO uint32_t BDTR;  /*!< TIM break and dead-time register,            Address offset: 0x44 */
    __IO uint32_t DCR;   /*!< TIM DMA control register,                    Address offset: 0x48 */
    __IO uint32_t DMAR;  /*!< TIM DMA address for full transfer register,  Address offset: 0x4C */
    __IO uint32_t OR;    /*!< TIM option register,                         Address offset: 0x50 */
} TIM_TypeDef;

/**
 * @brief Universal Synchronous Asynchronous Receiver Transmitter
 */

typedef struct {
    __IO uint32_t SR;   /*!< USART Status register,                   Address offset: 0x00 */
    __IO uint32_t DR;   /*!< USART Data register,                     Address offset: 0x04 */
    __IO uint32_t BRR;  /*!< USART Baud rate register,                Address offset: 0x08 */
    __IO uint32_t CR1;  /*!< USART Control register 1,                Address offset: 0x0C */
    __IO uint32_t CR2;  /*!< USART Control register 2,                Address offset: 0x10 */
    __IO uint32_t CR3;  /*!< USART Control register 3,                Address offset: 0x14 */
    __IO uint32_t GTPR; /*!< USART Guard time and prescaler register, Address offset: 0x18 */
} USART_TypeDef;

/**
 * @brief __USB_OTG_Core_register
 */

typedef struct {
    __IO uint32_t GOTGCTL;            /*!<  USB_OTG Control and Status Register       Address offset: 000h */
    __IO uint32_t GOTGINT;            /*!<  USB_OTG Interrupt Register                Address offset: 004h */
    __IO uint32_t GAHBCFG;            /*!<  Core AHB Configuration Register           Address offset: 008h */
    __IO uint32_t GUSBCFG;            /*!<  Core USB Configuration Register           Address offset: 00Ch */
    __IO uint32_t GRSTCTL;            /*!<  Core Reset Register                       Address offset: 010h */
    __IO uint32_t GINTSTS;            /*!<  Core Interrupt Register                   Address offset: 014h */
    __IO uint32_t GINTMSK;            /*!<  Core Interrupt Mask Register              Address offset: 018h */
    __IO uint32_t GRXSTSR;            /*!<  Receive Sts Q Read Register               Address offset: 01Ch */
    __IO uint32_t GRXSTSP;            /*!<  Receive Sts Q Read & POP Register         Address offset: 020h */
    __IO uint32_t GRXFSIZ;            /*!< Receive FIFO Size Register                 Address offset: 024h */
    __IO uint32_t DIEPTXF0_HNPTXFSIZ; /*!<  EP0 / Non Periodic Tx FIFO Size Register  Address offset: 028h */
    __IO uint32_t HNPTXSTS;           /*!<  Non Periodic Tx FIFO/Queue Sts reg        Address offset: 02Ch */
    uint32_t      Reserved30[2];      /*!< Reserved 030h*/
    __IO uint32_t GCCFG;              /*!< General Purpose IO Register                Address offset: 038h */
    __IO uint32_t CID;                /*!< User ID Register                           Address offset: 03Ch */
    uint32_t      Reserved40[48];     /*!< Reserved 040h-0FFh */
    __IO uint32_t HPTXFSIZ;           /*!< Host Periodic Tx FIFO Size Reg             Address offset: 100h */
    __IO uint32_t DIEPTXF[0x0F];      /*!< dev Periodic Transmit FIFO                 Address offset: 0x104 */
} USB_OTG_GlobalTypeDef;

/**
 * @brief __device_Registers
 */

typedef struct {
    __IO uint32_t DCFG;           /*!< dev Configuration Register                 Address offset: 800h*/
    __IO uint32_t DCTL;           /*!< dev Control Register                       Address offset: 804h*/
    __IO uint32_t DSTS;           /*!< dev Status Register (RO)                   Address offset: 808h*/
    uint32_t      Reserved0C;     /*!< Reserved 80Ch*/
    __IO uint32_t DIEPMSK;        /*!< dev IN Endpoint Mask                       Address offset: 810h*/
    __IO uint32_t DOEPMSK;        /*!< dev OUT Endpoint Mask                      Address offset: 814h*/
    __IO uint32_t DAINT;          /*!< dev All Endpoints Itr Reg                  Address offset: 818h*/
    __IO uint32_t DAINTMSK;       /*!< dev All Endpoints Itr Mask                 Address offset: 81Ch*/
    uint32_t      Reserved20;     /*!< Reserved 820h*/
    uint32_t      Reserved9;      /*!< Reserved 824h*/
    __IO uint32_t DVBUSDIS;       /*!< dev VBUS discharge Register                Address offset: 828h*/
    __IO uint32_t DVBUSPULSE;     /*!< dev VBUS Pulse Register                    Address offset: 82Ch*/
    __IO uint32_t DTHRCTL;        /*!< dev thr                                    Address offset: 830h*/
    __IO uint32_t DIEPEMPMSK;     /*!< dev empty msk                              Address offset: 834h*/
    __IO uint32_t DEACHINT;       /*!< dedicated EP interrupt                     Address offset: 838h*/
    __IO uint32_t DEACHMSK;       /*!< dedicated EP msk                           Address offset: 83Ch*/
    uint32_t      Reserved40;     /*!< dedicated EP mask                          Address offset: 840h*/
    __IO uint32_t DINEP1MSK;      /*!< dedicated EP mask                          Address offset: 844h*/
    uint32_t      Reserved44[15]; /*!< Reserved 844-87Ch*/
    __IO uint32_t DOUTEP1MSK;     /*!< dedicated EP msk                           Address offset: 884h*/
} USB_OTG_DeviceTypeDef;

/**
 * @brief __IN_Endpoint-Specific_Register
 */

typedef struct {
    __IO uint32_t DIEPCTL;    /*!< dev IN Endpoint Control Reg                900h + (ep_num * 20h) + 00h*/
    uint32_t      Reserved04; /*!< Reserved                                   900h + (ep_num * 20h) + 04h*/
    __IO uint32_t DIEPINT;    /*!< dev IN Endpoint Itr Reg                    900h + (ep_num * 20h) + 08h*/
    uint32_t      Reserved0C; /*!< Reserved                                   900h + (ep_num * 20h) + 0Ch*/
    __IO uint32_t DIEPTSIZ;   /*!< IN Endpoint Txfer Size                     900h + (ep_num * 20h) + 10h*/
    __IO uint32_t DIEPDMA;    /*!< IN Endpoint DMA Address Reg                900h + (ep_num * 20h) + 14h*/
    __IO uint32_t DTXFSTS;    /*!< IN Endpoint Tx FIFO Status Reg             900h + (ep_num * 20h) + 18h*/
    uint32_t      Reserved18; /*!< Reserved                                   900h+(ep_num*20h)+1Ch-900h+ (ep_num * 20h) + 1Ch*/
} USB_OTG_INEndpointTypeDef;

/**
 * @brief __OUT_Endpoint-Specific_Registers
 */

typedef struct {
    __IO uint32_t DOEPCTL;       /*!< dev OUT Endpoint Control Reg               B00h + (ep_num * 20h) + 00h*/
    uint32_t      Reserved04;    /*!< Reserved                                   B00h + (ep_num * 20h) + 04h*/
    __IO uint32_t DOEPINT;       /*!< dev OUT Endpoint Itr Reg                   B00h + (ep_num * 20h) + 08h*/
    uint32_t      Reserved0C;    /*!< Reserved                                   B00h + (ep_num * 20h) + 0Ch*/
    __IO uint32_t DOEPTSIZ;      /*!< dev OUT Endpoint Txfer Size                B00h + (ep_num * 20h) + 10h*/
    __IO uint32_t DOEPDMA;       /*!< dev OUT Endpoint DMA Address               B00h + (ep_num * 20h) + 14h*/
    uint32_t      Reserved18[2]; /*!< Reserved                                   B00h + (ep_num * 20h) + 18h - B00h + (ep_num
                                  * 20h) + 1Ch*/
} USB_OTG_OUTEndpointTypeDef;

/**
 * @brief __Host_Mode_Register_Structures
 */

typedef struct {
    __IO uint32_t HCFG;        /*!< Host Configuration Register    400h*/
    __IO uint32_t HFIR;        /*!< Host Frame Interval Register   404h*/
    __IO uint32_t HFNUM;       /*!< Host Frame Nbr/Frame Remaining 408h*/
    uint32_t      Reserved40C; /*!< Reserved                       40Ch*/
    __IO uint32_t HPTXSTS;     /*!< Host Periodic Tx FIFO/ Queue Status 410h*/
    __IO uint32_t HAINT;       /*!< Host All Channels Interrupt Register 414h*/
    __IO uint32_t HAINTMSK;    /*!< Host All Channels Interrupt Mask 418h*/
} USB_OTG_HostTypeDef;

/**
 * @brief __Host_Channel_Specific_Registers
 */

typedef struct {
    __IO uint32_t HCCHAR;
    __IO uint32_t HCSPLT;
    __IO uint32_t HCINT;
    __IO uint32_t HCINTMSK;
    __IO uint32_t HCTSIZ;
    __IO uint32_t HCDMA;
    uint32_t      Reserved[2];
} USB_OTG_HostChannelTypeDef;

/**
 * @brief Window WATCHDOG
 */

typedef struct {
    __IO uint32_t CR;  /*!< WWDG Control register,       Address offset: 0x00 */
    __IO uint32_t CFR; /*!< WWDG Configuration register, Address offset: 0x04 */
    __IO uint32_t SR;  /*!< WWDG Status register,        Address offset: 0x08 */
} WWDG_TypeDef;

/**
 * @}
 */

/** @addtogroup Peripheral_memory_map
 * @{
 */

#define FLASH_BASE 0x08000000UL      /*!< FLASH base address in the alias region */
#define FLASH_BANK1_END 0x0803FFFFUL /*!< FLASH END address of bank1 */
#define SRAM_BASE 0x20000000UL       /*!< SRAM base address in the alias region */
#define PERIPH_BASE 0x40000000UL     /*!< Peripheral base address in the alias region */

#define SRAM_BB_BASE 0x22000000UL   /*!< SRAM base address in the bit-band region */
#define PERIPH_BB_BASE 0x42000000UL /*!< Peripheral base address in the bit-band region */

/*!< Peripheral memory map */
#define APB1PERIPH_BASE PERIPH_BASE
#define APB2PERIPH_BASE (PERIPH_BASE + 0x00010000UL)
#define AHBPERIPH_BASE (PERIPH_BASE + 0x00020000UL)

#define TIM2_BASE (APB1PERIPH_BASE + 0x00000000UL)
#define TIM3_BASE (APB1PERIPH_BASE + 0x00000400UL)
#define TIM4_BASE (APB1PERIPH_BASE + 0x00000800UL)
#define TIM5_BASE (APB1PERIPH_BASE + 0x00000C00UL)
#define TIM6_BASE (APB1PERIPH_BASE + 0x00001000UL)
#define TIM7_BASE (APB1PERIPH_BASE + 0x00001400UL)
#define RTC_BASE (APB1PERIPH_BASE + 0x00002800UL)
#define WWDG_BASE (APB1PERIPH_BASE + 0x00002C00UL)
#define IWDG_BASE (APB1PERIPH_BASE + 0x00003000UL)
#define SPI2_BASE (APB1PERIPH_BASE + 0x00003800UL)
#define SPI3_BASE (APB1PERIPH_BASE + 0x00003C00UL)
#define USART2_BASE (APB1PERIPH_BASE + 0x00004400UL)
#define USART3_BASE (APB1PERIPH_BASE + 0x00004800UL)
#define UART4_BASE (APB1PERIPH_BASE + 0x00004C00UL)
#define UART5_BASE (APB1PERIPH_BASE + 0x00005000UL)
#define I2C1_BASE (APB1PERIPH_BASE + 0x00005400UL)
#define I2C2_BASE (APB1PERIPH_BASE + 0x00005800UL)
#define CAN1_BASE (APB1PERIPH_BASE + 0x00006400UL)
#define CAN2_BASE (APB1PERIPH_BASE + 0x00006800UL)
#define BKP_BASE (APB1PERIPH_BASE + 0x00006C00UL)
#define PWR_BASE (APB1PERIPH_BASE + 0x00007000UL)
#define DAC_BASE (APB1PERIPH_BASE + 0x00007400UL)
#define AFIO_BASE (APB2PERIPH_BASE + 0x00000000UL)
#define EXTI_BASE (APB2PERIPH_BASE + 0x00000400UL)
#define GPIOA_BASE (APB2PERIPH_BASE + 0x00000800UL)
#define GPIOB_BASE (APB2PERIPH_BASE + 0x00000C00UL)
#define GPIOC_BASE (APB2PERIPH_BASE + 0x00001000UL)
#define GPIOD_BASE (APB2PERIPH_BASE + 0x00001400UL)
#define GPIOE_BASE (APB2PERIPH_BASE + 0x00001800UL)
#define ADC1_BASE (APB2PERIPH_BASE + 0x00002400UL)
#define ADC2_BASE (APB2PERIPH_BASE + 0x00002800UL)
#define TIM1_BASE (APB2PERIPH_BASE + 0x00002C00UL)
#define SPI1_BASE (APB2PERIPH_BASE + 0x00003000UL)
#define USART1_BASE (APB2PERIPH_BASE + 0x00003800UL)

#define DMA1_BASE (AHBPERIPH_BASE + 0x00000000UL)
#define DMA1_Channel1_BASE (AHBPERIPH_BASE + 0x00000008UL)
#define DMA1_Channel2_BASE (AHBPERIPH_BASE + 0x0000001CUL)
#define DMA1_Channel3_BASE (AHBPERIPH_BASE + 0x00000030UL)
#define DMA1_Channel4_BASE (AHBPERIPH_BASE + 0x00000044UL)
#define DMA1_Channel5_BASE (AHBPERIPH_BASE + 0x00000058UL)
#define DMA1_Channel6_BASE (AHBPERIPH_BASE + 0x0000006CUL)
#define DMA1_Channel7_BASE (AHBPERIPH_BASE + 0x00000080UL)
#define DMA2_BASE (AHBPERIPH_BASE + 0x00000400UL)
#define DMA2_Channel1_BASE (AHBPERIPH_BASE + 0x00000408UL)
#define DMA2_Channel2_BASE (AHBPERIPH_BASE + 0x0000041CUL)
#define DMA2_Channel3_BASE (AHBPERIPH_BASE + 0x00000430UL)
#define DMA2_Channel4_BASE (AHBPERIPH_BASE + 0x00000444UL)
#define DMA2_Channel5_BASE (AHBPERIPH_BASE + 0x00000458UL)
#define RCC_BASE (AHBPERIPH_BASE + 0x00001000UL)
#define CRC_BASE (AHBPERIPH_BASE + 0x00003000UL)

#define FLASH_R_BASE (AHBPERIPH_BASE + 0x00002000UL) /*!< Flash registers base address */
#define FLASHSIZE_BASE 0x1FFFF7E0UL                  /*!< FLASH Size register base address */
#define UID_BASE 0x1FFFF7E8UL                        /*!< Unique device ID register base address */
#define OB_BASE 0x1FFFF800UL                         /*!< Flash Option Bytes base address */

#define ETH_BASE (AHBPERIPH_BASE + 0x00008000UL)
#define ETH_MAC_BASE (ETH_BASE)
#define ETH_MMC_BASE (ETH_BASE + 0x00000100UL)
#define ETH_PTP_BASE (ETH_BASE + 0x00000700UL)
#define ETH_DMA_BASE (ETH_BASE + 0x00001000UL)

#define DBGMCU_BASE 0xE0042000UL /*!< Debug MCU registers base address */

/*!< USB registers base address */
#define USB_OTG_FS_PERIPH_BASE 0x50000000UL

#define USB_OTG_GLOBAL_BASE 0x00000000UL
#define USB_OTG_DEVICE_BASE 0x00000800UL
#define USB_OTG_IN_ENDPOINT_BASE 0x00000900UL
#define USB_OTG_OUT_ENDPOINT_BASE 0x00000B00UL
#define USB_OTG_EP_REG_SIZE 0x00000020UL
#define USB_OTG_HOST_BASE 0x00000400UL
#define USB_OTG_HOST_PORT_BASE 0x00000440UL
#define USB_OTG_HOST_CHANNEL_BASE 0x00000500UL
#define USB_OTG_HOST_CHANNEL_SIZE 0x00000020UL
#define USB_OTG_PCGCCTL_BASE 0x00000E00UL
#define USB_OTG_FIFO_BASE 0x00001000UL
#define USB_OTG_FIFO_SIZE 0x00001000UL

/**
 * @}
 */

/** @addtogroup Peripheral_declaration
 * @{
 */

#define TIM2 ((TIM_TypeDef *)TIM2_BASE)
#define TIM3 ((TIM_TypeDef *)TIM3_BASE)
#define TIM4 ((TIM_TypeDef *)TIM4_BASE)
#define TIM5 ((TIM_TypeDef *)TIM5_BASE)
#define TIM6 ((TIM_TypeDef *)TIM6_BASE)
#define TIM7 ((TIM_TypeDef *)TIM7_BASE)
#define RTC ((RTC_TypeDef *)RTC_BASE)
#define WWDG ((WWDG_TypeDef *)WWDG_BASE)
#define IWDG ((IWDG_TypeDef *)IWDG_BASE)
#define SPI2 ((SPI_TypeDef *)SPI2_BASE)
#define SPI3 ((SPI_TypeDef *)SPI3_BASE)
#define USART2 ((USART_TypeDef *)USART2_BASE)
#define USART3 ((USART_TypeDef *)USART3_BASE)
#define UART4 ((USART_TypeDef *)UART4_BASE)
#define UART5 ((USART_TypeDef *)UART5_BASE)
#define I2C1 ((I2C_TypeDef *)I2C1_BASE)
#define I2C2 ((I2C_TypeDef *)I2C2_BASE)
#define CAN1 ((CAN_TypeDef *)CAN1_BASE)
#define CAN2 ((CAN_TypeDef *)CAN2_BASE)
#define BKP ((BKP_TypeDef *)BKP_BASE)
#define PWR ((PWR_TypeDef *)PWR_BASE)
#define DAC1 ((DAC_TypeDef *)DAC_BASE)
#define DAC ((DAC_TypeDef *)DAC_BASE) /* Kept for legacy purpose */
#define AFIO ((AFIO_TypeDef *)AFIO_BASE)
#define EXTI ((EXTI_TypeDef *)EXTI_BASE)
#define GPIOA ((GPIO_TypeDef *)GPIOA_BASE)
#define GPIOB ((GPIO_TypeDef *)GPIOB_BASE)
#define GPIOC ((GPIO_TypeDef *)GPIOC_BASE)
#define GPIOD ((GPIO_TypeDef *)GPIOD_BASE)
#define GPIOE ((GPIO_TypeDef *)GPIOE_BASE)
#define ADC1 ((ADC_TypeDef *)ADC1_BASE)
#define ADC2 ((ADC_TypeDef *)ADC2_BASE)
#define ADC12_COMMON ((ADC_Common_TypeDef *)ADC1_BASE)
#define TIM1 ((TIM_TypeDef *)TIM1_BASE)
#define SPI1 ((SPI_TypeDef *)SPI1_BASE)
#define USART1 ((USART_TypeDef *)USART1_BASE)
#define DMA1 ((DMA_TypeDef *)DMA1_BASE)
#define DMA2 ((DMA_TypeDef *)DMA2_BASE)
#define DMA1_Channel1 ((DMA_Channel_TypeDef *)DMA1_Channel1_BASE)
#define DMA1_Channel2 ((DMA_Channel_TypeDef *)DMA1_Channel2_BASE)
#define DMA1_Channel3 ((DMA_Channel_TypeDef *)DMA1_Channel3_BASE)
#define DMA1_Channel4 ((DMA_Channel_TypeDef *)DMA1_Channel4_BASE)
#define DMA1_Channel5 ((DMA_Channel_TypeDef *)DMA1_Channel5_BASE)
#define DMA1_Channel6 ((DMA_Channel_TypeDef *)DMA1_Channel6_BASE)
#define DMA1_Channel7 ((DMA_Channel_TypeDef *)DMA1_Channel7_BASE)
#define DMA2_Channel1 ((DMA_Channel_TypeDef *)DMA2_Channel1_BASE)
#define DMA2_Channel2 ((DMA_Channel_TypeDef *)DMA2_Channel2_BASE)
#define DMA2_Channel3 ((DMA_Channel_TypeDef *)DMA2_Channel3_BASE)
#define DMA2_Channel4 ((DMA_Channel_TypeDef *)DMA2_Channel4_BASE)
#define DMA2_Channel5 ((DMA_Channel_TypeDef *)DMA2_Channel5_BASE)
#define RCC ((RCC_TypeDef *)RCC_BASE)
#define CRC ((CRC_TypeDef *)CRC_BASE)
#define FLASH ((FLASH_TypeDef *)FLASH_R_BASE)
#define OB ((OB_TypeDef *)OB_BASE)
#define ETH ((ETH_TypeDef *)ETH_BASE)
#define DBGMCU ((DBGMCU_TypeDef *)DBGMCU_BASE)

#define USB_OTG_FS ((USB_OTG_GlobalTypeDef *)USB_OTG_FS_PERIPH_BASE)

/**
 * @}
 */

/** @addtogroup Exported_constants
 * @{
 */

/** @addtogroup Peripheral_Registers_Bits_Definition
 * @{
 */

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*                       CRC calculation unit (CRC)                           */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for CRC_DR register  *********************/
#define CRC_DR_DR_Pos (0U)
#define CRC_DR_DR_Msk (0xFFFFFFFFUL << CRC_DR_DR_Pos) /*!< 0xFFFFFFFF */
#define CRC_DR_DR CRC_DR_DR_Msk                       /*!< Data register bits */

/*******************  Bit definition for CRC_IDR register  ********************/
#define CRC_IDR_IDR_Pos (0U)
#define CRC_IDR_IDR_Msk (0xFFUL << CRC_IDR_IDR_Pos) /*!< 0x000000FF */
#define CRC_IDR_IDR CRC_IDR_IDR_Msk                 /*!< General-purpose 8-bit data register bits */

/********************  Bit definition for CRC_CR register  ********************/
#define CRC_CR_RESET_Pos (0U)
#define CRC_CR_RESET_Msk (0x1UL << CRC_CR_RESET_Pos) /*!< 0x00000001 */
#define CRC_CR_RESET CRC_CR_RESET_Msk                /*!< RESET bit */

/******************************************************************************/
/*                                                                            */
/*                             Power Control                                  */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for PWR_CR register  ********************/
#define PWR_CR_LPDS_Pos (0U)
#define PWR_CR_LPDS_Msk (0x1UL << PWR_CR_LPDS_Pos) /*!< 0x00000001 */
#define PWR_CR_LPDS PWR_CR_LPDS_Msk                /*!< Low-Power Deepsleep */
#define PWR_CR_PDDS_Pos (1U)
#define PWR_CR_PDDS_Msk (0x1UL << PWR_CR_PDDS_Pos) /*!< 0x00000002 */
#define PWR_CR_PDDS PWR_CR_PDDS_Msk                /*!< Power Down Deepsleep */
#define PWR_CR_CWUF_Pos (2U)
#define PWR_CR_CWUF_Msk (0x1UL << PWR_CR_CWUF_Pos) /*!< 0x00000004 */
#define PWR_CR_CWUF PWR_CR_CWUF_Msk                /*!< Clear Wakeup Flag */
#define PWR_CR_CSBF_Pos (3U)
#define PWR_CR_CSBF_Msk (0x1UL << PWR_CR_CSBF_Pos) /*!< 0x00000008 */
#define PWR_CR_CSBF PWR_CR_CSBF_Msk                /*!< Clear Standby Flag */
#define PWR_CR_PVDE_Pos (4U)
#define PWR_CR_PVDE_Msk (0x1UL << PWR_CR_PVDE_Pos) /*!< 0x00000010 */
#define PWR_CR_PVDE PWR_CR_PVDE_Msk                /*!< Power Voltage Detector Enable */

#define PWR_CR_PLS_Pos (5U)
#define PWR_CR_PLS_Msk (0x7UL << PWR_CR_PLS_Pos) /*!< 0x000000E0 */
#define PWR_CR_PLS PWR_CR_PLS_Msk                /*!< PLS[2:0] bits (PVD Level Selection) */
#define PWR_CR_PLS_0 (0x1UL << PWR_CR_PLS_Pos)   /*!< 0x00000020 */
#define PWR_CR_PLS_1 (0x2UL << PWR_CR_PLS_Pos)   /*!< 0x00000040 */
#define PWR_CR_PLS_2 (0x4UL << PWR_CR_PLS_Pos)   /*!< 0x00000080 */

/*!< PVD level configuration */
#define PWR_CR_PLS_LEV0 0x00000000U /*!< PVD level 2.2V */
#define PWR_CR_PLS_LEV1 0x00000020U /*!< PVD level 2.3V */
#define PWR_CR_PLS_LEV2 0x00000040U /*!< PVD level 2.4V */
#define PWR_CR_PLS_LEV3 0x00000060U /*!< PVD level 2.5V */
#define PWR_CR_PLS_LEV4 0x00000080U /*!< PVD level 2.6V */
#define PWR_CR_PLS_LEV5 0x000000A0U /*!< PVD level 2.7V */
#define PWR_CR_PLS_LEV6 0x000000C0U /*!< PVD level 2.8V */
#define PWR_CR_PLS_LEV7 0x000000E0U /*!< PVD level 2.9V */

/* Legacy defines */
#define PWR_CR_PLS_2V2 PWR_CR_PLS_LEV0
#define PWR_CR_PLS_2V3 PWR_CR_PLS_LEV1
#define PWR_CR_PLS_2V4 PWR_CR_PLS_LEV2
#define PWR_CR_PLS_2V5 PWR_CR_PLS_LEV3
#define PWR_CR_PLS_2V6 PWR_CR_PLS_LEV4
#define PWR_CR_PLS_2V7 PWR_CR_PLS_LEV5
#define PWR_CR_PLS_2V8 PWR_CR_PLS_LEV6
#define PWR_CR_PLS_2V9 PWR_CR_PLS_LEV7

#define PWR_CR_DBP_Pos (8U)
#define PWR_CR_DBP_Msk (0x1UL << PWR_CR_DBP_Pos) /*!< 0x00000100 */
#define PWR_CR_DBP PWR_CR_DBP_Msk                /*!< Disable Backup Domain write protection */

/*******************  Bit definition for PWR_CSR register  ********************/
#define PWR_CSR_WUF_Pos (0U)
#define PWR_CSR_WUF_Msk (0x1UL << PWR_CSR_WUF_Pos) /*!< 0x00000001 */
#define PWR_CSR_WUF PWR_CSR_WUF_Msk                /*!< Wakeup Flag */
#define PWR_CSR_SBF_Pos (1U)
#define PWR_CSR_SBF_Msk (0x1UL << PWR_CSR_SBF_Pos) /*!< 0x00000002 */
#define PWR_CSR_SBF PWR_CSR_SBF_Msk                /*!< Standby Flag */
#define PWR_CSR_PVDO_Pos (2U)
#define PWR_CSR_PVDO_Msk (0x1UL << PWR_CSR_PVDO_Pos) /*!< 0x00000004 */
#define PWR_CSR_PVDO PWR_CSR_PVDO_Msk                /*!< PVD Output */
#define PWR_CSR_EWUP_Pos (8U)
#define PWR_CSR_EWUP_Msk (0x1UL << PWR_CSR_EWUP_Pos) /*!< 0x00000100 */
#define PWR_CSR_EWUP PWR_CSR_EWUP_Msk                /*!< Enable WKUP pin */

/******************************************************************************/
/*                                                                            */
/*                            Backup registers                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for BKP_DR1 register  ********************/
#define BKP_DR1_D_Pos (0U)
#define BKP_DR1_D_Msk (0xFFFFUL << BKP_DR1_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR1_D BKP_DR1_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR2 register  ********************/
#define BKP_DR2_D_Pos (0U)
#define BKP_DR2_D_Msk (0xFFFFUL << BKP_DR2_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR2_D BKP_DR2_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR3 register  ********************/
#define BKP_DR3_D_Pos (0U)
#define BKP_DR3_D_Msk (0xFFFFUL << BKP_DR3_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR3_D BKP_DR3_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR4 register  ********************/
#define BKP_DR4_D_Pos (0U)
#define BKP_DR4_D_Msk (0xFFFFUL << BKP_DR4_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR4_D BKP_DR4_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR5 register  ********************/
#define BKP_DR5_D_Pos (0U)
#define BKP_DR5_D_Msk (0xFFFFUL << BKP_DR5_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR5_D BKP_DR5_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR6 register  ********************/
#define BKP_DR6_D_Pos (0U)
#define BKP_DR6_D_Msk (0xFFFFUL << BKP_DR6_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR6_D BKP_DR6_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR7 register  ********************/
#define BKP_DR7_D_Pos (0U)
#define BKP_DR7_D_Msk (0xFFFFUL << BKP_DR7_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR7_D BKP_DR7_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR8 register  ********************/
#define BKP_DR8_D_Pos (0U)
#define BKP_DR8_D_Msk (0xFFFFUL << BKP_DR8_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR8_D BKP_DR8_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR9 register  ********************/
#define BKP_DR9_D_Pos (0U)
#define BKP_DR9_D_Msk (0xFFFFUL << BKP_DR9_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR9_D BKP_DR9_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR10_D_Pos (0U)
#define BKP_DR10_D_Msk (0xFFFFUL << BKP_DR10_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR10_D BKP_DR10_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR11 register  *******************/
#define BKP_DR11_D_Pos (0U)
#define BKP_DR11_D_Msk (0xFFFFUL << BKP_DR11_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR11_D BKP_DR11_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR12 register  *******************/
#define BKP_DR12_D_Pos (0U)
#define BKP_DR12_D_Msk (0xFFFFUL << BKP_DR12_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR12_D BKP_DR12_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR13 register  *******************/
#define BKP_DR13_D_Pos (0U)
#define BKP_DR13_D_Msk (0xFFFFUL << BKP_DR13_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR13_D BKP_DR13_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR14 register  *******************/
#define BKP_DR14_D_Pos (0U)
#define BKP_DR14_D_Msk (0xFFFFUL << BKP_DR14_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR14_D BKP_DR14_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR15 register  *******************/
#define BKP_DR15_D_Pos (0U)
#define BKP_DR15_D_Msk (0xFFFFUL << BKP_DR15_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR15_D BKP_DR15_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR16 register  *******************/
#define BKP_DR16_D_Pos (0U)
#define BKP_DR16_D_Msk (0xFFFFUL << BKP_DR16_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR16_D BKP_DR16_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR17 register  *******************/
#define BKP_DR17_D_Pos (0U)
#define BKP_DR17_D_Msk (0xFFFFUL << BKP_DR17_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR17_D BKP_DR17_D_Msk                   /*!< Backup data */

/******************  Bit definition for BKP_DR18 register  ********************/
#define BKP_DR18_D_Pos (0U)
#define BKP_DR18_D_Msk (0xFFFFUL << BKP_DR18_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR18_D BKP_DR18_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR19 register  *******************/
#define BKP_DR19_D_Pos (0U)
#define BKP_DR19_D_Msk (0xFFFFUL << BKP_DR19_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR19_D BKP_DR19_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR20 register  *******************/
#define BKP_DR20_D_Pos (0U)
#define BKP_DR20_D_Msk (0xFFFFUL << BKP_DR20_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR20_D BKP_DR20_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR21 register  *******************/
#define BKP_DR21_D_Pos (0U)
#define BKP_DR21_D_Msk (0xFFFFUL << BKP_DR21_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR21_D BKP_DR21_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR22 register  *******************/
#define BKP_DR22_D_Pos (0U)
#define BKP_DR22_D_Msk (0xFFFFUL << BKP_DR22_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR22_D BKP_DR22_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR23 register  *******************/
#define BKP_DR23_D_Pos (0U)
#define BKP_DR23_D_Msk (0xFFFFUL << BKP_DR23_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR23_D BKP_DR23_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR24 register  *******************/
#define BKP_DR24_D_Pos (0U)
#define BKP_DR24_D_Msk (0xFFFFUL << BKP_DR24_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR24_D BKP_DR24_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR25 register  *******************/
#define BKP_DR25_D_Pos (0U)
#define BKP_DR25_D_Msk (0xFFFFUL << BKP_DR25_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR25_D BKP_DR25_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR26 register  *******************/
#define BKP_DR26_D_Pos (0U)
#define BKP_DR26_D_Msk (0xFFFFUL << BKP_DR26_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR26_D BKP_DR26_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR27 register  *******************/
#define BKP_DR27_D_Pos (0U)
#define BKP_DR27_D_Msk (0xFFFFUL << BKP_DR27_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR27_D BKP_DR27_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR28 register  *******************/
#define BKP_DR28_D_Pos (0U)
#define BKP_DR28_D_Msk (0xFFFFUL << BKP_DR28_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR28_D BKP_DR28_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR29 register  *******************/
#define BKP_DR29_D_Pos (0U)
#define BKP_DR29_D_Msk (0xFFFFUL << BKP_DR29_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR29_D BKP_DR29_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR30 register  *******************/
#define BKP_DR30_D_Pos (0U)
#define BKP_DR30_D_Msk (0xFFFFUL << BKP_DR30_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR30_D BKP_DR30_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR31 register  *******************/
#define BKP_DR31_D_Pos (0U)
#define BKP_DR31_D_Msk (0xFFFFUL << BKP_DR31_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR31_D BKP_DR31_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR32 register  *******************/
#define BKP_DR32_D_Pos (0U)
#define BKP_DR32_D_Msk (0xFFFFUL << BKP_DR32_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR32_D BKP_DR32_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR33 register  *******************/
#define BKP_DR33_D_Pos (0U)
#define BKP_DR33_D_Msk (0xFFFFUL << BKP_DR33_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR33_D BKP_DR33_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR34 register  *******************/
#define BKP_DR34_D_Pos (0U)
#define BKP_DR34_D_Msk (0xFFFFUL << BKP_DR34_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR34_D BKP_DR34_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR35 register  *******************/
#define BKP_DR35_D_Pos (0U)
#define BKP_DR35_D_Msk (0xFFFFUL << BKP_DR35_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR35_D BKP_DR35_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR36 register  *******************/
#define BKP_DR36_D_Pos (0U)
#define BKP_DR36_D_Msk (0xFFFFUL << BKP_DR36_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR36_D BKP_DR36_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR37 register  *******************/
#define BKP_DR37_D_Pos (0U)
#define BKP_DR37_D_Msk (0xFFFFUL << BKP_DR37_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR37_D BKP_DR37_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR38 register  *******************/
#define BKP_DR38_D_Pos (0U)
#define BKP_DR38_D_Msk (0xFFFFUL << BKP_DR38_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR38_D BKP_DR38_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR39 register  *******************/
#define BKP_DR39_D_Pos (0U)
#define BKP_DR39_D_Msk (0xFFFFUL << BKP_DR39_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR39_D BKP_DR39_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR40 register  *******************/
#define BKP_DR40_D_Pos (0U)
#define BKP_DR40_D_Msk (0xFFFFUL << BKP_DR40_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR40_D BKP_DR40_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR41 register  *******************/
#define BKP_DR41_D_Pos (0U)
#define BKP_DR41_D_Msk (0xFFFFUL << BKP_DR41_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR41_D BKP_DR41_D_Msk                   /*!< Backup data */

/*******************  Bit definition for BKP_DR42 register  *******************/
#define BKP_DR42_D_Pos (0U)
#define BKP_DR42_D_Msk (0xFFFFUL << BKP_DR42_D_Pos) /*!< 0x0000FFFF */
#define BKP_DR42_D BKP_DR42_D_Msk                   /*!< Backup data */

#define RTC_BKP_NUMBER 42

/******************  Bit definition for BKP_RTCCR register  *******************/
#define BKP_RTCCR_CAL_Pos (0U)
#define BKP_RTCCR_CAL_Msk (0x7FUL << BKP_RTCCR_CAL_Pos) /*!< 0x0000007F */
#define BKP_RTCCR_CAL BKP_RTCCR_CAL_Msk                 /*!< Calibration value */
#define BKP_RTCCR_CCO_Pos (7U)
#define BKP_RTCCR_CCO_Msk (0x1UL << BKP_RTCCR_CCO_Pos) /*!< 0x00000080 */
#define BKP_RTCCR_CCO BKP_RTCCR_CCO_Msk                /*!< Calibration Clock Output */
#define BKP_RTCCR_ASOE_Pos (8U)
#define BKP_RTCCR_ASOE_Msk (0x1UL << BKP_RTCCR_ASOE_Pos) /*!< 0x00000100 */
#define BKP_RTCCR_ASOE BKP_RTCCR_ASOE_Msk                /*!< Alarm or Second Output Enable */
#define BKP_RTCCR_ASOS_Pos (9U)
#define BKP_RTCCR_ASOS_Msk (0x1UL << BKP_RTCCR_ASOS_Pos) /*!< 0x00000200 */
#define BKP_RTCCR_ASOS BKP_RTCCR_ASOS_Msk                /*!< Alarm or Second Output Selection */

/********************  Bit definition for BKP_CR register  ********************/
#define BKP_CR_TPE_Pos (0U)
#define BKP_CR_TPE_Msk (0x1UL << BKP_CR_TPE_Pos) /*!< 0x00000001 */
#define BKP_CR_TPE BKP_CR_TPE_Msk                /*!< TAMPER pin enable */
#define BKP_CR_TPAL_Pos (1U)
#define BKP_CR_TPAL_Msk (0x1UL << BKP_CR_TPAL_Pos) /*!< 0x00000002 */
#define BKP_CR_TPAL BKP_CR_TPAL_Msk                /*!< TAMPER pin active level */

/*******************  Bit definition for BKP_CSR register  ********************/
#define BKP_CSR_CTE_Pos (0U)
#define BKP_CSR_CTE_Msk (0x1UL << BKP_CSR_CTE_Pos) /*!< 0x00000001 */
#define BKP_CSR_CTE BKP_CSR_CTE_Msk                /*!< Clear Tamper event */
#define BKP_CSR_CTI_Pos (1U)
#define BKP_CSR_CTI_Msk (0x1UL << BKP_CSR_CTI_Pos) /*!< 0x00000002 */
#define BKP_CSR_CTI BKP_CSR_CTI_Msk                /*!< Clear Tamper Interrupt */
#define BKP_CSR_TPIE_Pos (2U)
#define BKP_CSR_TPIE_Msk (0x1UL << BKP_CSR_TPIE_Pos) /*!< 0x00000004 */
#define BKP_CSR_TPIE BKP_CSR_TPIE_Msk                /*!< TAMPER Pin interrupt enable */
#define BKP_CSR_TEF_Pos (8U)
#define BKP_CSR_TEF_Msk (0x1UL << BKP_CSR_TEF_Pos) /*!< 0x00000100 */
#define BKP_CSR_TEF BKP_CSR_TEF_Msk                /*!< Tamper Event Flag */
#define BKP_CSR_TIF_Pos (9U)
#define BKP_CSR_TIF_Msk (0x1UL << BKP_CSR_TIF_Pos) /*!< 0x00000200 */
#define BKP_CSR_TIF BKP_CSR_TIF_Msk                /*!< Tamper Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for RCC_CR register  ********************/
#define RCC_CR_HSION_Pos (0U)
#define RCC_CR_HSION_Msk (0x1UL << RCC_CR_HSION_Pos) /*!< 0x00000001 */
#define RCC_CR_HSION RCC_CR_HSION_Msk                /*!< Internal High Speed clock enable */
#define RCC_CR_HSIRDY_Pos (1U)
#define RCC_CR_HSIRDY_Msk (0x1UL << RCC_CR_HSIRDY_Pos) /*!< 0x00000002 */
#define RCC_CR_HSIRDY RCC_CR_HSIRDY_Msk                /*!< Internal High Speed clock ready flag */
#define RCC_CR_HSITRIM_Pos (3U)
#define RCC_CR_HSITRIM_Msk (0x1FUL << RCC_CR_HSITRIM_Pos) /*!< 0x000000F8 */
#define RCC_CR_HSITRIM RCC_CR_HSITRIM_Msk                 /*!< Internal High Speed clock trimming */
#define RCC_CR_HSICAL_Pos (8U)
#define RCC_CR_HSICAL_Msk (0xFFUL << RCC_CR_HSICAL_Pos) /*!< 0x0000FF00 */
#define RCC_CR_HSICAL RCC_CR_HSICAL_Msk                 /*!< Internal High Speed clock Calibration */
#define RCC_CR_HSEON_Pos (16U)
#define RCC_CR_HSEON_Msk (0x1UL << RCC_CR_HSEON_Pos) /*!< 0x00010000 */
#define RCC_CR_HSEON RCC_CR_HSEON_Msk                /*!< External High Speed clock enable */
#define RCC_CR_HSERDY_Pos (17U)
#define RCC_CR_HSERDY_Msk (0x1UL << RCC_CR_HSERDY_Pos) /*!< 0x00020000 */
#define RCC_CR_HSERDY RCC_CR_HSERDY_Msk                /*!< External High Speed clock ready flag */
#define RCC_CR_HSEBYP_Pos (18U)
#define RCC_CR_HSEBYP_Msk (0x1UL << RCC_CR_HSEBYP_Pos) /*!< 0x00040000 */
#define RCC_CR_HSEBYP RCC_CR_HSEBYP_Msk                /*!< External High Speed clock Bypass */
#define RCC_CR_CSSON_Pos (19U)
#define RCC_CR_CSSON_Msk (0x1UL << RCC_CR_CSSON_Pos) /*!< 0x00080000 */
#define RCC_CR_CSSON RCC_CR_CSSON_Msk                /*!< Clock Security System enable */
#define RCC_CR_PLLON_Pos (24U)
#define RCC_CR_PLLON_Msk (0x1UL << RCC_CR_PLLON_Pos) /*!< 0x01000000 */
#define RCC_CR_PLLON RCC_CR_PLLON_Msk                /*!< PLL enable */
#define RCC_CR_PLLRDY_Pos (25U)
#define RCC_CR_PLLRDY_Msk (0x1UL << RCC_CR_PLLRDY_Pos) /*!< 0x02000000 */
#define RCC_CR_PLLRDY RCC_CR_PLLRDY_Msk                /*!< PLL clock ready flag */

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F1 serie)
 */
#define RCC_PLL2_SUPPORT /*!< Support PLL2 */

#define RCC_CR_PLL2ON_Pos (26U)
#define RCC_CR_PLL2ON_Msk (0x1UL << RCC_CR_PLL2ON_Pos) /*!< 0x04000000 */
#define RCC_CR_PLL2ON RCC_CR_PLL2ON_Msk                /*!< PLL2 enable */
#define RCC_CR_PLL2RDY_Pos (27U)
#define RCC_CR_PLL2RDY_Msk (0x1UL << RCC_CR_PLL2RDY_Pos) /*!< 0x08000000 */
#define RCC_CR_PLL2RDY RCC_CR_PLL2RDY_Msk                /*!< PLL2 clock ready flag */

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F1 serie)
 */
#define RCC_PLLI2S_SUPPORT /*!< Support PLL3 (PLLI2S)*/

#define RCC_CR_PLL3ON_Pos (28U)
#define RCC_CR_PLL3ON_Msk (0x1UL << RCC_CR_PLL3ON_Pos) /*!< 0x10000000 */
#define RCC_CR_PLL3ON RCC_CR_PLL3ON_Msk                /*!< PLL3 enable */
#define RCC_CR_PLL3RDY_Pos (29U)
#define RCC_CR_PLL3RDY_Msk (0x1UL << RCC_CR_PLL3RDY_Pos) /*!< 0x20000000 */
#define RCC_CR_PLL3RDY RCC_CR_PLL3RDY_Msk                /*!< PLL3 clock ready flag */

/*******************  Bit definition for RCC_CFGR register  *******************/
/*!< SW configuration */
#define RCC_CFGR_SW_Pos (0U)
#define RCC_CFGR_SW_Msk (0x3UL << RCC_CFGR_SW_Pos) /*!< 0x00000003 */
#define RCC_CFGR_SW RCC_CFGR_SW_Msk                /*!< SW[1:0] bits (System clock Switch) */
#define RCC_CFGR_SW_0 (0x1UL << RCC_CFGR_SW_Pos)   /*!< 0x00000001 */
#define RCC_CFGR_SW_1 (0x2UL << RCC_CFGR_SW_Pos)   /*!< 0x00000002 */

#define RCC_CFGR_SW_HSI 0x00000000U /*!< HSI selected as system clock */
#define RCC_CFGR_SW_HSE 0x00000001U /*!< HSE selected as system clock */
#define RCC_CFGR_SW_PLL 0x00000002U /*!< PLL selected as system clock */

/*!< SWS configuration */
#define RCC_CFGR_SWS_Pos (2U)
#define RCC_CFGR_SWS_Msk (0x3UL << RCC_CFGR_SWS_Pos) /*!< 0x0000000C */
#define RCC_CFGR_SWS RCC_CFGR_SWS_Msk                /*!< SWS[1:0] bits (System Clock Switch Status) */
#define RCC_CFGR_SWS_0 (0x1UL << RCC_CFGR_SWS_Pos)   /*!< 0x00000004 */
#define RCC_CFGR_SWS_1 (0x2UL << RCC_CFGR_SWS_Pos)   /*!< 0x00000008 */

#define RCC_CFGR_SWS_HSI 0x00000000U /*!< HSI oscillator used as system clock */
#define RCC_CFGR_SWS_HSE 0x00000004U /*!< HSE oscillator used as system clock */
#define RCC_CFGR_SWS_PLL 0x00000008U /*!< PLL used as system clock */

/*!< HPRE configuration */
#define RCC_CFGR_HPRE_Pos (4U)
#define RCC_CFGR_HPRE_Msk (0xFUL << RCC_CFGR_HPRE_Pos) /*!< 0x000000F0 */
#define RCC_CFGR_HPRE RCC_CFGR_HPRE_Msk                /*!< HPRE[3:0] bits (AHB prescaler) */
#define RCC_CFGR_HPRE_0 (0x1UL << RCC_CFGR_HPRE_Pos)   /*!< 0x00000010 */
#define RCC_CFGR_HPRE_1 (0x2UL << RCC_CFGR_HPRE_Pos)   /*!< 0x00000020 */
#define RCC_CFGR_HPRE_2 (0x4UL << RCC_CFGR_HPRE_Pos)   /*!< 0x00000040 */
#define RCC_CFGR_HPRE_3 (0x8UL << RCC_CFGR_HPRE_Pos)   /*!< 0x00000080 */

#define RCC_CFGR_HPRE_DIV1 0x00000000U   /*!< SYSCLK not divided */
#define RCC_CFGR_HPRE_DIV2 0x00000080U   /*!< SYSCLK divided by 2 */
#define RCC_CFGR_HPRE_DIV4 0x00000090U   /*!< SYSCLK divided by 4 */
#define RCC_CFGR_HPRE_DIV8 0x000000A0U   /*!< SYSCLK divided by 8 */
#define RCC_CFGR_HPRE_DIV16 0x000000B0U  /*!< SYSCLK divided by 16 */
#define RCC_CFGR_HPRE_DIV64 0x000000C0U  /*!< SYSCLK divided by 64 */
#define RCC_CFGR_HPRE_DIV128 0x000000D0U /*!< SYSCLK divided by 128 */
#define RCC_CFGR_HPRE_DIV256 0x000000E0U /*!< SYSCLK divided by 256 */
#define RCC_CFGR_HPRE_DIV512 0x000000F0U /*!< SYSCLK divided by 512 */

/*!< PPRE1 configuration */
#define RCC_CFGR_PPRE1_Pos (8U)
#define RCC_CFGR_PPRE1_Msk (0x7UL << RCC_CFGR_PPRE1_Pos) /*!< 0x00000700 */
#define RCC_CFGR_PPRE1 RCC_CFGR_PPRE1_Msk                /*!< PRE1[2:0] bits (APB1 prescaler) */
#define RCC_CFGR_PPRE1_0 (0x1UL << RCC_CFGR_PPRE1_Pos)   /*!< 0x00000100 */
#define RCC_CFGR_PPRE1_1 (0x2UL << RCC_CFGR_PPRE1_Pos)   /*!< 0x00000200 */
#define RCC_CFGR_PPRE1_2 (0x4UL << RCC_CFGR_PPRE1_Pos)   /*!< 0x00000400 */

#define RCC_CFGR_PPRE1_DIV1 0x00000000U  /*!< HCLK not divided */
#define RCC_CFGR_PPRE1_DIV2 0x00000400U  /*!< HCLK divided by 2 */
#define RCC_CFGR_PPRE1_DIV4 0x00000500U  /*!< HCLK divided by 4 */
#define RCC_CFGR_PPRE1_DIV8 0x00000600U  /*!< HCLK divided by 8 */
#define RCC_CFGR_PPRE1_DIV16 0x00000700U /*!< HCLK divided by 16 */

/*!< PPRE2 configuration */
#define RCC_CFGR_PPRE2_Pos (11U)
#define RCC_CFGR_PPRE2_Msk (0x7UL << RCC_CFGR_PPRE2_Pos) /*!< 0x00003800 */
#define RCC_CFGR_PPRE2 RCC_CFGR_PPRE2_Msk                /*!< PRE2[2:0] bits (APB2 prescaler) */
#define RCC_CFGR_PPRE2_0 (0x1UL << RCC_CFGR_PPRE2_Pos)   /*!< 0x00000800 */
#define RCC_CFGR_PPRE2_1 (0x2UL << RCC_CFGR_PPRE2_Pos)   /*!< 0x00001000 */
#define RCC_CFGR_PPRE2_2 (0x4UL << RCC_CFGR_PPRE2_Pos)   /*!< 0x00002000 */

#define RCC_CFGR_PPRE2_DIV1 0x00000000U  /*!< HCLK not divided */
#define RCC_CFGR_PPRE2_DIV2 0x00002000U  /*!< HCLK divided by 2 */
#define RCC_CFGR_PPRE2_DIV4 0x00002800U  /*!< HCLK divided by 4 */
#define RCC_CFGR_PPRE2_DIV8 0x00003000U  /*!< HCLK divided by 8 */
#define RCC_CFGR_PPRE2_DIV16 0x00003800U /*!< HCLK divided by 16 */

/*!< ADCPPRE configuration */
#define RCC_CFGR_ADCPRE_Pos (14U)
#define RCC_CFGR_ADCPRE_Msk (0x3UL << RCC_CFGR_ADCPRE_Pos) /*!< 0x0000C000 */
#define RCC_CFGR_ADCPRE RCC_CFGR_ADCPRE_Msk                /*!< ADCPRE[1:0] bits (ADC prescaler) */
#define RCC_CFGR_ADCPRE_0 (0x1UL << RCC_CFGR_ADCPRE_Pos)   /*!< 0x00004000 */
#define RCC_CFGR_ADCPRE_1 (0x2UL << RCC_CFGR_ADCPRE_Pos)   /*!< 0x00008000 */

#define RCC_CFGR_ADCPRE_DIV2 0x00000000U /*!< PCLK2 divided by 2 */
#define RCC_CFGR_ADCPRE_DIV4 0x00004000U /*!< PCLK2 divided by 4 */
#define RCC_CFGR_ADCPRE_DIV6 0x00008000U /*!< PCLK2 divided by 6 */
#define RCC_CFGR_ADCPRE_DIV8 0x0000C000U /*!< PCLK2 divided by 8 */

#define RCC_CFGR_PLLSRC_Pos (16U)
#define RCC_CFGR_PLLSRC_Msk (0x1UL << RCC_CFGR_PLLSRC_Pos) /*!< 0x00010000 */
#define RCC_CFGR_PLLSRC RCC_CFGR_PLLSRC_Msk                /*!< PLL entry clock source */

#define RCC_CFGR_PLLXTPRE_Pos (17U)
#define RCC_CFGR_PLLXTPRE_Msk (0x1UL << RCC_CFGR_PLLXTPRE_Pos) /*!< 0x00020000 */
#define RCC_CFGR_PLLXTPRE RCC_CFGR_PLLXTPRE_Msk                /*!< HSE divider for PLL entry */

/*!< PLLMUL configuration */
#define RCC_CFGR_PLLMULL_Pos (18U)
#define RCC_CFGR_PLLMULL_Msk (0xFUL << RCC_CFGR_PLLMULL_Pos) /*!< 0x003C0000 */
#define RCC_CFGR_PLLMULL RCC_CFGR_PLLMULL_Msk                /*!< PLLMUL[3:0] bits (PLL multiplication factor) */
#define RCC_CFGR_PLLMULL_0 (0x1UL << RCC_CFGR_PLLMULL_Pos)   /*!< 0x00040000 */
#define RCC_CFGR_PLLMULL_1 (0x2UL << RCC_CFGR_PLLMULL_Pos)   /*!< 0x00080000 */
#define RCC_CFGR_PLLMULL_2 (0x4UL << RCC_CFGR_PLLMULL_Pos)   /*!< 0x00100000 */
#define RCC_CFGR_PLLMULL_3 (0x8UL << RCC_CFGR_PLLMULL_Pos)   /*!< 0x00200000 */

#define RCC_CFGR_PLLXTPRE_PREDIV1 0x00000000U      /*!< PREDIV1 clock not divided for PLL entry */
#define RCC_CFGR_PLLXTPRE_PREDIV1_DIV2 0x00020000U /*!< PREDIV1 clock divided by 2 for PLL entry */

#define RCC_CFGR_PLLMULL4_Pos (19U)
#define RCC_CFGR_PLLMULL4_Msk (0x1UL << RCC_CFGR_PLLMULL4_Pos) /*!< 0x00080000 */
#define RCC_CFGR_PLLMULL4 RCC_CFGR_PLLMULL4_Msk                /*!< PLL input clock * 4 */
#define RCC_CFGR_PLLMULL5_Pos (18U)
#define RCC_CFGR_PLLMULL5_Msk (0x3UL << RCC_CFGR_PLLMULL5_Pos) /*!< 0x000C0000 */
#define RCC_CFGR_PLLMULL5 RCC_CFGR_PLLMULL5_Msk                /*!< PLL input clock * 5 */
#define RCC_CFGR_PLLMULL6_Pos (20U)
#define RCC_CFGR_PLLMULL6_Msk (0x1UL << RCC_CFGR_PLLMULL6_Pos) /*!< 0x00100000 */
#define RCC_CFGR_PLLMULL6 RCC_CFGR_PLLMULL6_Msk                /*!< PLL input clock * 6 */
#define RCC_CFGR_PLLMULL7_Pos (18U)
#define RCC_CFGR_PLLMULL7_Msk (0x5UL << RCC_CFGR_PLLMULL7_Pos) /*!< 0x00140000 */
#define RCC_CFGR_PLLMULL7 RCC_CFGR_PLLMULL7_Msk                /*!< PLL input clock * 7 */
#define RCC_CFGR_PLLMULL8_Pos (19U)
#define RCC_CFGR_PLLMULL8_Msk (0x3UL << RCC_CFGR_PLLMULL8_Pos) /*!< 0x00180000 */
#define RCC_CFGR_PLLMULL8 RCC_CFGR_PLLMULL8_Msk                /*!< PLL input clock * 8 */
#define RCC_CFGR_PLLMULL9_Pos (18U)
#define RCC_CFGR_PLLMULL9_Msk (0x7UL << RCC_CFGR_PLLMULL9_Pos) /*!< 0x001C0000 */
#define RCC_CFGR_PLLMULL9 RCC_CFGR_PLLMULL9_Msk                /*!< PLL input clock * 9 */
#define RCC_CFGR_PLLMULL6_5 0x00340000U                        /*!< PLL input clock * 6.5 */

#define RCC_CFGR_OTGFSPRE_Pos (22U)
#define RCC_CFGR_OTGFSPRE_Msk (0x1UL << RCC_CFGR_OTGFSPRE_Pos) /*!< 0x00400000 */
#define RCC_CFGR_OTGFSPRE RCC_CFGR_OTGFSPRE_Msk                /*!< USB OTG FS prescaler */

/*!< MCO configuration */
#define RCC_CFGR_MCO_Pos (24U)
#define RCC_CFGR_MCO_Msk (0xFUL << RCC_CFGR_MCO_Pos) /*!< 0x0F000000 */
#define RCC_CFGR_MCO RCC_CFGR_MCO_Msk                /*!< MCO[3:0] bits (Microcontroller Clock Output) */
#define RCC_CFGR_MCO_0 (0x1UL << RCC_CFGR_MCO_Pos)   /*!< 0x01000000 */
#define RCC_CFGR_MCO_1 (0x2UL << RCC_CFGR_MCO_Pos)   /*!< 0x02000000 */
#define RCC_CFGR_MCO_2 (0x4UL << RCC_CFGR_MCO_Pos)   /*!< 0x04000000 */
#define RCC_CFGR_MCO_3 (0x8UL << RCC_CFGR_MCO_Pos)   /*!< 0x08000000 */

#define RCC_CFGR_MCO_NOCLOCK 0x00000000U      /*!< No clock */
#define RCC_CFGR_MCO_SYSCLK 0x04000000U       /*!< System clock selected as MCO source */
#define RCC_CFGR_MCO_HSI 0x05000000U          /*!< HSI clock selected as MCO source */
#define RCC_CFGR_MCO_HSE 0x06000000U          /*!< HSE clock selected as MCO source */
#define RCC_CFGR_MCO_PLLCLK_DIV2 0x07000000U  /*!< PLL clock divided by 2 selected as MCO source */
#define RCC_CFGR_MCO_PLL2CLK 0x08000000U      /*!< PLL2 clock selected as MCO source*/
#define RCC_CFGR_MCO_PLL3CLK_DIV2 0x09000000U /*!< PLL3 clock divided by 2 selected as MCO source*/
#define RCC_CFGR_MCO_EXT_HSE 0x0A000000U      /*!< XT1 external 3-25 MHz oscillator clock selected as MCO source */
#define RCC_CFGR_MCO_PLL3CLK 0x0B000000U      /*!< PLL3 clock selected as MCO source */

/* Reference defines */
#define RCC_CFGR_MCOSEL RCC_CFGR_MCO
#define RCC_CFGR_MCOSEL_0 RCC_CFGR_MCO_0
#define RCC_CFGR_MCOSEL_1 RCC_CFGR_MCO_1
#define RCC_CFGR_MCOSEL_2 RCC_CFGR_MCO_2
#define RCC_CFGR_MCOSEL_3 RCC_CFGR_MCO_3
#define RCC_CFGR_MCOSEL_NOCLOCK RCC_CFGR_MCO_NOCLOCK
#define RCC_CFGR_MCOSEL_SYSCLK RCC_CFGR_MCO_SYSCLK
#define RCC_CFGR_MCOSEL_HSI RCC_CFGR_MCO_HSI
#define RCC_CFGR_MCOSEL_HSE RCC_CFGR_MCO_HSE
#define RCC_CFGR_MCOSEL_PLL_DIV2 RCC_CFGR_MCO_PLLCLK_DIV2
#define RCC_CFGR_MCOSEL_PLL2 RCC_CFGR_MCO_PLL2CLK
#define RCC_CFGR_MCOSEL_PLL3_DIV2 RCC_CFGR_MCO_PLL3CLK_DIV2
#define RCC_CFGR_MCOSEL_EXT_HSE RCC_CFGR_MCO_EXT_HSE
#define RCC_CFGR_MCOSEL_PLL3CLK RCC_CFGR_MCO_PLL3CLK

/*!<******************  Bit definition for RCC_CIR register  ********************/
#define RCC_CIR_LSIRDYF_Pos (0U)
#define RCC_CIR_LSIRDYF_Msk (0x1UL << RCC_CIR_LSIRDYF_Pos) /*!< 0x00000001 */
#define RCC_CIR_LSIRDYF RCC_CIR_LSIRDYF_Msk                /*!< LSI Ready Interrupt flag */
#define RCC_CIR_LSERDYF_Pos (1U)
#define RCC_CIR_LSERDYF_Msk (0x1UL << RCC_CIR_LSERDYF_Pos) /*!< 0x00000002 */
#define RCC_CIR_LSERDYF RCC_CIR_LSERDYF_Msk                /*!< LSE Ready Interrupt flag */
#define RCC_CIR_HSIRDYF_Pos (2U)
#define RCC_CIR_HSIRDYF_Msk (0x1UL << RCC_CIR_HSIRDYF_Pos) /*!< 0x00000004 */
#define RCC_CIR_HSIRDYF RCC_CIR_HSIRDYF_Msk                /*!< HSI Ready Interrupt flag */
#define RCC_CIR_HSERDYF_Pos (3U)
#define RCC_CIR_HSERDYF_Msk (0x1UL << RCC_CIR_HSERDYF_Pos) /*!< 0x00000008 */
#define RCC_CIR_HSERDYF RCC_CIR_HSERDYF_Msk                /*!< HSE Ready Interrupt flag */
#define RCC_CIR_PLLRDYF_Pos (4U)
#define RCC_CIR_PLLRDYF_Msk (0x1UL << RCC_CIR_PLLRDYF_Pos) /*!< 0x00000010 */
#define RCC_CIR_PLLRDYF RCC_CIR_PLLRDYF_Msk                /*!< PLL Ready Interrupt flag */
#define RCC_CIR_CSSF_Pos (7U)
#define RCC_CIR_CSSF_Msk (0x1UL << RCC_CIR_CSSF_Pos) /*!< 0x00000080 */
#define RCC_CIR_CSSF RCC_CIR_CSSF_Msk                /*!< Clock Security System Interrupt flag */
#define RCC_CIR_LSIRDYIE_Pos (8U)
#define RCC_CIR_LSIRDYIE_Msk (0x1UL << RCC_CIR_LSIRDYIE_Pos) /*!< 0x00000100 */
#define RCC_CIR_LSIRDYIE RCC_CIR_LSIRDYIE_Msk                /*!< LSI Ready Interrupt Enable */
#define RCC_CIR_LSERDYIE_Pos (9U)
#define RCC_CIR_LSERDYIE_Msk (0x1UL << RCC_CIR_LSERDYIE_Pos) /*!< 0x00000200 */
#define RCC_CIR_LSERDYIE RCC_CIR_LSERDYIE_Msk                /*!< LSE Ready Interrupt Enable */
#define RCC_CIR_HSIRDYIE_Pos (10U)
#define RCC_CIR_HSIRDYIE_Msk (0x1UL << RCC_CIR_HSIRDYIE_Pos) /*!< 0x00000400 */
#define RCC_CIR_HSIRDYIE RCC_CIR_HSIRDYIE_Msk                /*!< HSI Ready Interrupt Enable */
#define RCC_CIR_HSERDYIE_Pos (11U)
#define RCC_CIR_HSERDYIE_Msk (0x1UL << RCC_CIR_HSERDYIE_Pos) /*!< 0x00000800 */
#define RCC_CIR_HSERDYIE RCC_CIR_HSERDYIE_Msk                /*!< HSE Ready Interrupt Enable */
#define RCC_CIR_PLLRDYIE_Pos (12U)
#define RCC_CIR_PLLRDYIE_Msk (0x1UL << RCC_CIR_PLLRDYIE_Pos) /*!< 0x00001000 */
#define RCC_CIR_PLLRDYIE RCC_CIR_PLLRDYIE_Msk                /*!< PLL Ready Interrupt Enable */
#define RCC_CIR_LSIRDYC_Pos (16U)
#define RCC_CIR_LSIRDYC_Msk (0x1UL << RCC_CIR_LSIRDYC_Pos) /*!< 0x00010000 */
#define RCC_CIR_LSIRDYC RCC_CIR_LSIRDYC_Msk                /*!< LSI Ready Interrupt Clear */
#define RCC_CIR_LSERDYC_Pos (17U)
#define RCC_CIR_LSERDYC_Msk (0x1UL << RCC_CIR_LSERDYC_Pos) /*!< 0x00020000 */
#define RCC_CIR_LSERDYC RCC_CIR_LSERDYC_Msk                /*!< LSE Ready Interrupt Clear */
#define RCC_CIR_HSIRDYC_Pos (18U)
#define RCC_CIR_HSIRDYC_Msk (0x1UL << RCC_CIR_HSIRDYC_Pos) /*!< 0x00040000 */
#define RCC_CIR_HSIRDYC RCC_CIR_HSIRDYC_Msk                /*!< HSI Ready Interrupt Clear */
#define RCC_CIR_HSERDYC_Pos (19U)
#define RCC_CIR_HSERDYC_Msk (0x1UL << RCC_CIR_HSERDYC_Pos) /*!< 0x00080000 */
#define RCC_CIR_HSERDYC RCC_CIR_HSERDYC_Msk                /*!< HSE Ready Interrupt Clear */
#define RCC_CIR_PLLRDYC_Pos (20U)
#define RCC_CIR_PLLRDYC_Msk (0x1UL << RCC_CIR_PLLRDYC_Pos) /*!< 0x00100000 */
#define RCC_CIR_PLLRDYC RCC_CIR_PLLRDYC_Msk                /*!< PLL Ready Interrupt Clear */
#define RCC_CIR_CSSC_Pos (23U)
#define RCC_CIR_CSSC_Msk (0x1UL << RCC_CIR_CSSC_Pos) /*!< 0x00800000 */
#define RCC_CIR_CSSC RCC_CIR_CSSC_Msk                /*!< Clock Security System Interrupt Clear */

#define RCC_CIR_PLL2RDYF_Pos (5U)
#define RCC_CIR_PLL2RDYF_Msk (0x1UL << RCC_CIR_PLL2RDYF_Pos) /*!< 0x00000020 */
#define RCC_CIR_PLL2RDYF RCC_CIR_PLL2RDYF_Msk                /*!< PLL2 Ready Interrupt flag */
#define RCC_CIR_PLL3RDYF_Pos (6U)
#define RCC_CIR_PLL3RDYF_Msk (0x1UL << RCC_CIR_PLL3RDYF_Pos) /*!< 0x00000040 */
#define RCC_CIR_PLL3RDYF RCC_CIR_PLL3RDYF_Msk                /*!< PLL3 Ready Interrupt flag */
#define RCC_CIR_PLL2RDYIE_Pos (13U)
#define RCC_CIR_PLL2RDYIE_Msk (0x1UL << RCC_CIR_PLL2RDYIE_Pos) /*!< 0x00002000 */
#define RCC_CIR_PLL2RDYIE RCC_CIR_PLL2RDYIE_Msk                /*!< PLL2 Ready Interrupt Enable */
#define RCC_CIR_PLL3RDYIE_Pos (14U)
#define RCC_CIR_PLL3RDYIE_Msk (0x1UL << RCC_CIR_PLL3RDYIE_Pos) /*!< 0x00004000 */
#define RCC_CIR_PLL3RDYIE RCC_CIR_PLL3RDYIE_Msk                /*!< PLL3 Ready Interrupt Enable */
#define RCC_CIR_PLL2RDYC_Pos (21U)
#define RCC_CIR_PLL2RDYC_Msk (0x1UL << RCC_CIR_PLL2RDYC_Pos) /*!< 0x00200000 */
#define RCC_CIR_PLL2RDYC RCC_CIR_PLL2RDYC_Msk                /*!< PLL2 Ready Interrupt Clear */
#define RCC_CIR_PLL3RDYC_Pos (22U)
#define RCC_CIR_PLL3RDYC_Msk (0x1UL << RCC_CIR_PLL3RDYC_Pos) /*!< 0x00400000 */
#define RCC_CIR_PLL3RDYC RCC_CIR_PLL3RDYC_Msk                /*!< PLL3 Ready Interrupt Clear */

/*****************  Bit definition for RCC_APB2RSTR register  *****************/
#define RCC_APB2RSTR_AFIORST_Pos (0U)
#define RCC_APB2RSTR_AFIORST_Msk (0x1UL << RCC_APB2RSTR_AFIORST_Pos) /*!< 0x00000001 */
#define RCC_APB2RSTR_AFIORST RCC_APB2RSTR_AFIORST_Msk                /*!< Alternate Function I/O reset */
#define RCC_APB2RSTR_IOPARST_Pos (2U)
#define RCC_APB2RSTR_IOPARST_Msk (0x1UL << RCC_APB2RSTR_IOPARST_Pos) /*!< 0x00000004 */
#define RCC_APB2RSTR_IOPARST RCC_APB2RSTR_IOPARST_Msk                /*!< I/O port A reset */
#define RCC_APB2RSTR_IOPBRST_Pos (3U)
#define RCC_APB2RSTR_IOPBRST_Msk (0x1UL << RCC_APB2RSTR_IOPBRST_Pos) /*!< 0x00000008 */
#define RCC_APB2RSTR_IOPBRST RCC_APB2RSTR_IOPBRST_Msk                /*!< I/O port B reset */
#define RCC_APB2RSTR_IOPCRST_Pos (4U)
#define RCC_APB2RSTR_IOPCRST_Msk (0x1UL << RCC_APB2RSTR_IOPCRST_Pos) /*!< 0x00000010 */
#define RCC_APB2RSTR_IOPCRST RCC_APB2RSTR_IOPCRST_Msk                /*!< I/O port C reset */
#define RCC_APB2RSTR_IOPDRST_Pos (5U)
#define RCC_APB2RSTR_IOPDRST_Msk (0x1UL << RCC_APB2RSTR_IOPDRST_Pos) /*!< 0x00000020 */
#define RCC_APB2RSTR_IOPDRST RCC_APB2RSTR_IOPDRST_Msk                /*!< I/O port D reset */
#define RCC_APB2RSTR_ADC1RST_Pos (9U)
#define RCC_APB2RSTR_ADC1RST_Msk (0x1UL << RCC_APB2RSTR_ADC1RST_Pos) /*!< 0x00000200 */
#define RCC_APB2RSTR_ADC1RST RCC_APB2RSTR_ADC1RST_Msk                /*!< ADC 1 interface reset */

#define RCC_APB2RSTR_ADC2RST_Pos (10U)
#define RCC_APB2RSTR_ADC2RST_Msk (0x1UL << RCC_APB2RSTR_ADC2RST_Pos) /*!< 0x00000400 */
#define RCC_APB2RSTR_ADC2RST RCC_APB2RSTR_ADC2RST_Msk                /*!< ADC 2 interface reset */

#define RCC_APB2RSTR_TIM1RST_Pos (11U)
#define RCC_APB2RSTR_TIM1RST_Msk (0x1UL << RCC_APB2RSTR_TIM1RST_Pos) /*!< 0x00000800 */
#define RCC_APB2RSTR_TIM1RST RCC_APB2RSTR_TIM1RST_Msk                /*!< TIM1 Timer reset */
#define RCC_APB2RSTR_SPI1RST_Pos (12U)
#define RCC_APB2RSTR_SPI1RST_Msk (0x1UL << RCC_APB2RSTR_SPI1RST_Pos) /*!< 0x00001000 */
#define RCC_APB2RSTR_SPI1RST RCC_APB2RSTR_SPI1RST_Msk                /*!< SPI 1 reset */
#define RCC_APB2RSTR_USART1RST_Pos (14U)
#define RCC_APB2RSTR_USART1RST_Msk (0x1UL << RCC_APB2RSTR_USART1RST_Pos) /*!< 0x00004000 */
#define RCC_APB2RSTR_USART1RST RCC_APB2RSTR_USART1RST_Msk                /*!< USART1 reset */

#define RCC_APB2RSTR_IOPERST_Pos (6U)
#define RCC_APB2RSTR_IOPERST_Msk (0x1UL << RCC_APB2RSTR_IOPERST_Pos) /*!< 0x00000040 */
#define RCC_APB2RSTR_IOPERST RCC_APB2RSTR_IOPERST_Msk                /*!< I/O port E reset */

/*****************  Bit definition for RCC_APB1RSTR register  *****************/
#define RCC_APB1RSTR_TIM2RST_Pos (0U)
#define RCC_APB1RSTR_TIM2RST_Msk (0x1UL << RCC_APB1RSTR_TIM2RST_Pos) /*!< 0x00000001 */
#define RCC_APB1RSTR_TIM2RST RCC_APB1RSTR_TIM2RST_Msk                /*!< Timer 2 reset */
#define RCC_APB1RSTR_TIM3RST_Pos (1U)
#define RCC_APB1RSTR_TIM3RST_Msk (0x1UL << RCC_APB1RSTR_TIM3RST_Pos) /*!< 0x00000002 */
#define RCC_APB1RSTR_TIM3RST RCC_APB1RSTR_TIM3RST_Msk                /*!< Timer 3 reset */
#define RCC_APB1RSTR_WWDGRST_Pos (11U)
#define RCC_APB1RSTR_WWDGRST_Msk (0x1UL << RCC_APB1RSTR_WWDGRST_Pos) /*!< 0x00000800 */
#define RCC_APB1RSTR_WWDGRST RCC_APB1RSTR_WWDGRST_Msk                /*!< Window Watchdog reset */
#define RCC_APB1RSTR_USART2RST_Pos (17U)
#define RCC_APB1RSTR_USART2RST_Msk (0x1UL << RCC_APB1RSTR_USART2RST_Pos) /*!< 0x00020000 */
#define RCC_APB1RSTR_USART2RST RCC_APB1RSTR_USART2RST_Msk                /*!< USART 2 reset */
#define RCC_APB1RSTR_I2C1RST_Pos (21U)
#define RCC_APB1RSTR_I2C1RST_Msk (0x1UL << RCC_APB1RSTR_I2C1RST_Pos) /*!< 0x00200000 */
#define RCC_APB1RSTR_I2C1RST RCC_APB1RSTR_I2C1RST_Msk                /*!< I2C 1 reset */

#define RCC_APB1RSTR_CAN1RST_Pos (25U)
#define RCC_APB1RSTR_CAN1RST_Msk (0x1UL << RCC_APB1RSTR_CAN1RST_Pos) /*!< 0x02000000 */
#define RCC_APB1RSTR_CAN1RST RCC_APB1RSTR_CAN1RST_Msk                /*!< CAN1 reset */

#define RCC_APB1RSTR_BKPRST_Pos (27U)
#define RCC_APB1RSTR_BKPRST_Msk (0x1UL << RCC_APB1RSTR_BKPRST_Pos) /*!< 0x08000000 */
#define RCC_APB1RSTR_BKPRST RCC_APB1RSTR_BKPRST_Msk                /*!< Backup interface reset */
#define RCC_APB1RSTR_PWRRST_Pos (28U)
#define RCC_APB1RSTR_PWRRST_Msk (0x1UL << RCC_APB1RSTR_PWRRST_Pos) /*!< 0x10000000 */
#define RCC_APB1RSTR_PWRRST RCC_APB1RSTR_PWRRST_Msk                /*!< Power interface reset */

#define RCC_APB1RSTR_TIM4RST_Pos (2U)
#define RCC_APB1RSTR_TIM4RST_Msk (0x1UL << RCC_APB1RSTR_TIM4RST_Pos) /*!< 0x00000004 */
#define RCC_APB1RSTR_TIM4RST RCC_APB1RSTR_TIM4RST_Msk                /*!< Timer 4 reset */
#define RCC_APB1RSTR_SPI2RST_Pos (14U)
#define RCC_APB1RSTR_SPI2RST_Msk (0x1UL << RCC_APB1RSTR_SPI2RST_Pos) /*!< 0x00004000 */
#define RCC_APB1RSTR_SPI2RST RCC_APB1RSTR_SPI2RST_Msk                /*!< SPI 2 reset */
#define RCC_APB1RSTR_USART3RST_Pos (18U)
#define RCC_APB1RSTR_USART3RST_Msk (0x1UL << RCC_APB1RSTR_USART3RST_Pos) /*!< 0x00040000 */
#define RCC_APB1RSTR_USART3RST RCC_APB1RSTR_USART3RST_Msk                /*!< USART 3 reset */
#define RCC_APB1RSTR_I2C2RST_Pos (22U)
#define RCC_APB1RSTR_I2C2RST_Msk (0x1UL << RCC_APB1RSTR_I2C2RST_Pos) /*!< 0x00400000 */
#define RCC_APB1RSTR_I2C2RST RCC_APB1RSTR_I2C2RST_Msk                /*!< I2C 2 reset */

#define RCC_APB1RSTR_TIM5RST_Pos (3U)
#define RCC_APB1RSTR_TIM5RST_Msk (0x1UL << RCC_APB1RSTR_TIM5RST_Pos) /*!< 0x00000008 */
#define RCC_APB1RSTR_TIM5RST RCC_APB1RSTR_TIM5RST_Msk                /*!< Timer 5 reset */
#define RCC_APB1RSTR_TIM6RST_Pos (4U)
#define RCC_APB1RSTR_TIM6RST_Msk (0x1UL << RCC_APB1RSTR_TIM6RST_Pos) /*!< 0x00000010 */
#define RCC_APB1RSTR_TIM6RST RCC_APB1RSTR_TIM6RST_Msk                /*!< Timer 6 reset */
#define RCC_APB1RSTR_TIM7RST_Pos (5U)
#define RCC_APB1RSTR_TIM7RST_Msk (0x1UL << RCC_APB1RSTR_TIM7RST_Pos) /*!< 0x00000020 */
#define RCC_APB1RSTR_TIM7RST RCC_APB1RSTR_TIM7RST_Msk                /*!< Timer 7 reset */
#define RCC_APB1RSTR_SPI3RST_Pos (15U)
#define RCC_APB1RSTR_SPI3RST_Msk (0x1UL << RCC_APB1RSTR_SPI3RST_Pos) /*!< 0x00008000 */
#define RCC_APB1RSTR_SPI3RST RCC_APB1RSTR_SPI3RST_Msk                /*!< SPI 3 reset */
#define RCC_APB1RSTR_UART4RST_Pos (19U)
#define RCC_APB1RSTR_UART4RST_Msk (0x1UL << RCC_APB1RSTR_UART4RST_Pos) /*!< 0x00080000 */
#define RCC_APB1RSTR_UART4RST RCC_APB1RSTR_UART4RST_Msk                /*!< UART 4 reset */
#define RCC_APB1RSTR_UART5RST_Pos (20U)
#define RCC_APB1RSTR_UART5RST_Msk (0x1UL << RCC_APB1RSTR_UART5RST_Pos) /*!< 0x00100000 */
#define RCC_APB1RSTR_UART5RST RCC_APB1RSTR_UART5RST_Msk                /*!< UART 5 reset */

#define RCC_APB1RSTR_CAN2RST_Pos (26U)
#define RCC_APB1RSTR_CAN2RST_Msk (0x1UL << RCC_APB1RSTR_CAN2RST_Pos) /*!< 0x04000000 */
#define RCC_APB1RSTR_CAN2RST RCC_APB1RSTR_CAN2RST_Msk                /*!< CAN2 reset */

#define RCC_APB1RSTR_DACRST_Pos (29U)
#define RCC_APB1RSTR_DACRST_Msk (0x1UL << RCC_APB1RSTR_DACRST_Pos) /*!< 0x20000000 */
#define RCC_APB1RSTR_DACRST RCC_APB1RSTR_DACRST_Msk                /*!< DAC interface reset */

/******************  Bit definition for RCC_AHBENR register  ******************/
#define RCC_AHBENR_DMA1EN_Pos (0U)
#define RCC_AHBENR_DMA1EN_Msk (0x1UL << RCC_AHBENR_DMA1EN_Pos) /*!< 0x00000001 */
#define RCC_AHBENR_DMA1EN RCC_AHBENR_DMA1EN_Msk                /*!< DMA1 clock enable */
#define RCC_AHBENR_SRAMEN_Pos (2U)
#define RCC_AHBENR_SRAMEN_Msk (0x1UL << RCC_AHBENR_SRAMEN_Pos) /*!< 0x00000004 */
#define RCC_AHBENR_SRAMEN RCC_AHBENR_SRAMEN_Msk                /*!< SRAM interface clock enable */
#define RCC_AHBENR_FLITFEN_Pos (4U)
#define RCC_AHBENR_FLITFEN_Msk (0x1UL << RCC_AHBENR_FLITFEN_Pos) /*!< 0x00000010 */
#define RCC_AHBENR_FLITFEN RCC_AHBENR_FLITFEN_Msk                /*!< FLITF clock enable */
#define RCC_AHBENR_CRCEN_Pos (6U)
#define RCC_AHBENR_CRCEN_Msk (0x1UL << RCC_AHBENR_CRCEN_Pos) /*!< 0x00000040 */
#define RCC_AHBENR_CRCEN RCC_AHBENR_CRCEN_Msk                /*!< CRC clock enable */

#define RCC_AHBENR_DMA2EN_Pos (1U)
#define RCC_AHBENR_DMA2EN_Msk (0x1UL << RCC_AHBENR_DMA2EN_Pos) /*!< 0x00000002 */
#define RCC_AHBENR_DMA2EN RCC_AHBENR_DMA2EN_Msk                /*!< DMA2 clock enable */

#define RCC_AHBENR_OTGFSEN_Pos (12U)
#define RCC_AHBENR_OTGFSEN_Msk (0x1UL << RCC_AHBENR_OTGFSEN_Pos) /*!< 0x00001000 */
#define RCC_AHBENR_OTGFSEN RCC_AHBENR_OTGFSEN_Msk                /*!< USB OTG FS clock enable */
#define RCC_AHBENR_ETHMACEN_Pos (14U)
#define RCC_AHBENR_ETHMACEN_Msk (0x1UL << RCC_AHBENR_ETHMACEN_Pos) /*!< 0x00004000 */
#define RCC_AHBENR_ETHMACEN RCC_AHBENR_ETHMACEN_Msk                /*!< ETHERNET MAC clock enable */
#define RCC_AHBENR_ETHMACTXEN_Pos (15U)
#define RCC_AHBENR_ETHMACTXEN_Msk (0x1UL << RCC_AHBENR_ETHMACTXEN_Pos) /*!< 0x00008000 */
#define RCC_AHBENR_ETHMACTXEN RCC_AHBENR_ETHMACTXEN_Msk                /*!< ETHERNET MAC Tx clock enable */
#define RCC_AHBENR_ETHMACRXEN_Pos (16U)
#define RCC_AHBENR_ETHMACRXEN_Msk (0x1UL << RCC_AHBENR_ETHMACRXEN_Pos) /*!< 0x00010000 */
#define RCC_AHBENR_ETHMACRXEN RCC_AHBENR_ETHMACRXEN_Msk                /*!< ETHERNET MAC Rx clock enable */

/******************  Bit definition for RCC_APB2ENR register  *****************/
#define RCC_APB2ENR_AFIOEN_Pos (0U)
#define RCC_APB2ENR_AFIOEN_Msk (0x1UL << RCC_APB2ENR_AFIOEN_Pos) /*!< 0x00000001 */
#define RCC_APB2ENR_AFIOEN RCC_APB2ENR_AFIOEN_Msk                /*!< Alternate Function I/O clock enable */
#define RCC_APB2ENR_IOPAEN_Pos (2U)
#define RCC_APB2ENR_IOPAEN_Msk (0x1UL << RCC_APB2ENR_IOPAEN_Pos) /*!< 0x00000004 */
#define RCC_APB2ENR_IOPAEN RCC_APB2ENR_IOPAEN_Msk                /*!< I/O port A clock enable */
#define RCC_APB2ENR_IOPBEN_Pos (3U)
#define RCC_APB2ENR_IOPBEN_Msk (0x1UL << RCC_APB2ENR_IOPBEN_Pos) /*!< 0x00000008 */
#define RCC_APB2ENR_IOPBEN RCC_APB2ENR_IOPBEN_Msk                /*!< I/O port B clock enable */
#define RCC_APB2ENR_IOPCEN_Pos (4U)
#define RCC_APB2ENR_IOPCEN_Msk (0x1UL << RCC_APB2ENR_IOPCEN_Pos) /*!< 0x00000010 */
#define RCC_APB2ENR_IOPCEN RCC_APB2ENR_IOPCEN_Msk                /*!< I/O port C clock enable */
#define RCC_APB2ENR_IOPDEN_Pos (5U)
#define RCC_APB2ENR_IOPDEN_Msk (0x1UL << RCC_APB2ENR_IOPDEN_Pos) /*!< 0x00000020 */
#define RCC_APB2ENR_IOPDEN RCC_APB2ENR_IOPDEN_Msk                /*!< I/O port D clock enable */
#define RCC_APB2ENR_ADC1EN_Pos (9U)
#define RCC_APB2ENR_ADC1EN_Msk (0x1UL << RCC_APB2ENR_ADC1EN_Pos) /*!< 0x00000200 */
#define RCC_APB2ENR_ADC1EN RCC_APB2ENR_ADC1EN_Msk                /*!< ADC 1 interface clock enable */

#define RCC_APB2ENR_ADC2EN_Pos (10U)
#define RCC_APB2ENR_ADC2EN_Msk (0x1UL << RCC_APB2ENR_ADC2EN_Pos) /*!< 0x00000400 */
#define RCC_APB2ENR_ADC2EN RCC_APB2ENR_ADC2EN_Msk                /*!< ADC 2 interface clock enable */

#define RCC_APB2ENR_TIM1EN_Pos (11U)
#define RCC_APB2ENR_TIM1EN_Msk (0x1UL << RCC_APB2ENR_TIM1EN_Pos) /*!< 0x00000800 */
#define RCC_APB2ENR_TIM1EN RCC_APB2ENR_TIM1EN_Msk                /*!< TIM1 Timer clock enable */
#define RCC_APB2ENR_SPI1EN_Pos (12U)
#define RCC_APB2ENR_SPI1EN_Msk (0x1UL << RCC_APB2ENR_SPI1EN_Pos) /*!< 0x00001000 */
#define RCC_APB2ENR_SPI1EN RCC_APB2ENR_SPI1EN_Msk                /*!< SPI 1 clock enable */
#define RCC_APB2ENR_USART1EN_Pos (14U)
#define RCC_APB2ENR_USART1EN_Msk (0x1UL << RCC_APB2ENR_USART1EN_Pos) /*!< 0x00004000 */
#define RCC_APB2ENR_USART1EN RCC_APB2ENR_USART1EN_Msk                /*!< USART1 clock enable */

#define RCC_APB2ENR_IOPEEN_Pos (6U)
#define RCC_APB2ENR_IOPEEN_Msk (0x1UL << RCC_APB2ENR_IOPEEN_Pos) /*!< 0x00000040 */
#define RCC_APB2ENR_IOPEEN RCC_APB2ENR_IOPEEN_Msk                /*!< I/O port E clock enable */

/*****************  Bit definition for RCC_APB1ENR register  ******************/
#define RCC_APB1ENR_TIM2EN_Pos (0U)
#define RCC_APB1ENR_TIM2EN_Msk (0x1UL << RCC_APB1ENR_TIM2EN_Pos) /*!< 0x00000001 */
#define RCC_APB1ENR_TIM2EN RCC_APB1ENR_TIM2EN_Msk                /*!< Timer 2 clock enabled*/
#define RCC_APB1ENR_TIM3EN_Pos (1U)
#define RCC_APB1ENR_TIM3EN_Msk (0x1UL << RCC_APB1ENR_TIM3EN_Pos) /*!< 0x00000002 */
#define RCC_APB1ENR_TIM3EN RCC_APB1ENR_TIM3EN_Msk                /*!< Timer 3 clock enable */
#define RCC_APB1ENR_WWDGEN_Pos (11U)
#define RCC_APB1ENR_WWDGEN_Msk (0x1UL << RCC_APB1ENR_WWDGEN_Pos) /*!< 0x00000800 */
#define RCC_APB1ENR_WWDGEN RCC_APB1ENR_WWDGEN_Msk                /*!< Window Watchdog clock enable */
#define RCC_APB1ENR_USART2EN_Pos (17U)
#define RCC_APB1ENR_USART2EN_Msk (0x1UL << RCC_APB1ENR_USART2EN_Pos) /*!< 0x00020000 */
#define RCC_APB1ENR_USART2EN RCC_APB1ENR_USART2EN_Msk                /*!< USART 2 clock enable */
#define RCC_APB1ENR_I2C1EN_Pos (21U)
#define RCC_APB1ENR_I2C1EN_Msk (0x1UL << RCC_APB1ENR_I2C1EN_Pos) /*!< 0x00200000 */
#define RCC_APB1ENR_I2C1EN RCC_APB1ENR_I2C1EN_Msk                /*!< I2C 1 clock enable */

#define RCC_APB1ENR_CAN1EN_Pos (25U)
#define RCC_APB1ENR_CAN1EN_Msk (0x1UL << RCC_APB1ENR_CAN1EN_Pos) /*!< 0x02000000 */
#define RCC_APB1ENR_CAN1EN RCC_APB1ENR_CAN1EN_Msk                /*!< CAN1 clock enable */

#define RCC_APB1ENR_BKPEN_Pos (27U)
#define RCC_APB1ENR_BKPEN_Msk (0x1UL << RCC_APB1ENR_BKPEN_Pos) /*!< 0x08000000 */
#define RCC_APB1ENR_BKPEN RCC_APB1ENR_BKPEN_Msk                /*!< Backup interface clock enable */
#define RCC_APB1ENR_PWREN_Pos (28U)
#define RCC_APB1ENR_PWREN_Msk (0x1UL << RCC_APB1ENR_PWREN_Pos) /*!< 0x10000000 */
#define RCC_APB1ENR_PWREN RCC_APB1ENR_PWREN_Msk                /*!< Power interface clock enable */

#define RCC_APB1ENR_TIM4EN_Pos (2U)
#define RCC_APB1ENR_TIM4EN_Msk (0x1UL << RCC_APB1ENR_TIM4EN_Pos) /*!< 0x00000004 */
#define RCC_APB1ENR_TIM4EN RCC_APB1ENR_TIM4EN_Msk                /*!< Timer 4 clock enable */
#define RCC_APB1ENR_SPI2EN_Pos (14U)
#define RCC_APB1ENR_SPI2EN_Msk (0x1UL << RCC_APB1ENR_SPI2EN_Pos) /*!< 0x00004000 */
#define RCC_APB1ENR_SPI2EN RCC_APB1ENR_SPI2EN_Msk                /*!< SPI 2 clock enable */
#define RCC_APB1ENR_USART3EN_Pos (18U)
#define RCC_APB1ENR_USART3EN_Msk (0x1UL << RCC_APB1ENR_USART3EN_Pos) /*!< 0x00040000 */
#define RCC_APB1ENR_USART3EN RCC_APB1ENR_USART3EN_Msk                /*!< USART 3 clock enable */
#define RCC_APB1ENR_I2C2EN_Pos (22U)
#define RCC_APB1ENR_I2C2EN_Msk (0x1UL << RCC_APB1ENR_I2C2EN_Pos) /*!< 0x00400000 */
#define RCC_APB1ENR_I2C2EN RCC_APB1ENR_I2C2EN_Msk                /*!< I2C 2 clock enable */

#define RCC_APB1ENR_TIM5EN_Pos (3U)
#define RCC_APB1ENR_TIM5EN_Msk (0x1UL << RCC_APB1ENR_TIM5EN_Pos) /*!< 0x00000008 */
#define RCC_APB1ENR_TIM5EN RCC_APB1ENR_TIM5EN_Msk                /*!< Timer 5 clock enable */
#define RCC_APB1ENR_TIM6EN_Pos (4U)
#define RCC_APB1ENR_TIM6EN_Msk (0x1UL << RCC_APB1ENR_TIM6EN_Pos) /*!< 0x00000010 */
#define RCC_APB1ENR_TIM6EN RCC_APB1ENR_TIM6EN_Msk                /*!< Timer 6 clock enable */
#define RCC_APB1ENR_TIM7EN_Pos (5U)
#define RCC_APB1ENR_TIM7EN_Msk (0x1UL << RCC_APB1ENR_TIM7EN_Pos) /*!< 0x00000020 */
#define RCC_APB1ENR_TIM7EN RCC_APB1ENR_TIM7EN_Msk                /*!< Timer 7 clock enable */
#define RCC_APB1ENR_SPI3EN_Pos (15U)
#define RCC_APB1ENR_SPI3EN_Msk (0x1UL << RCC_APB1ENR_SPI3EN_Pos) /*!< 0x00008000 */
#define RCC_APB1ENR_SPI3EN RCC_APB1ENR_SPI3EN_Msk                /*!< SPI 3 clock enable */
#define RCC_APB1ENR_UART4EN_Pos (19U)
#define RCC_APB1ENR_UART4EN_Msk (0x1UL << RCC_APB1ENR_UART4EN_Pos) /*!< 0x00080000 */
#define RCC_APB1ENR_UART4EN RCC_APB1ENR_UART4EN_Msk                /*!< UART 4 clock enable */
#define RCC_APB1ENR_UART5EN_Pos (20U)
#define RCC_APB1ENR_UART5EN_Msk (0x1UL << RCC_APB1ENR_UART5EN_Pos) /*!< 0x00100000 */
#define RCC_APB1ENR_UART5EN RCC_APB1ENR_UART5EN_Msk                /*!< UART 5 clock enable */

#define RCC_APB1ENR_CAN2EN_Pos (26U)
#define RCC_APB1ENR_CAN2EN_Msk (0x1UL << RCC_APB1ENR_CAN2EN_Pos) /*!< 0x04000000 */
#define RCC_APB1ENR_CAN2EN RCC_APB1ENR_CAN2EN_Msk                /*!< CAN2 clock enable */

#define RCC_APB1ENR_DACEN_Pos (29U)
#define RCC_APB1ENR_DACEN_Msk (0x1UL << RCC_APB1ENR_DACEN_Pos) /*!< 0x20000000 */
#define RCC_APB1ENR_DACEN RCC_APB1ENR_DACEN_Msk                /*!< DAC interface clock enable */

/*******************  Bit definition for RCC_BDCR register  *******************/
#define RCC_BDCR_LSEON_Pos (0U)
#define RCC_BDCR_LSEON_Msk (0x1UL << RCC_BDCR_LSEON_Pos) /*!< 0x00000001 */
#define RCC_BDCR_LSEON RCC_BDCR_LSEON_Msk                /*!< External Low Speed oscillator enable */
#define RCC_BDCR_LSERDY_Pos (1U)
#define RCC_BDCR_LSERDY_Msk (0x1UL << RCC_BDCR_LSERDY_Pos) /*!< 0x00000002 */
#define RCC_BDCR_LSERDY RCC_BDCR_LSERDY_Msk                /*!< External Low Speed oscillator Ready */
#define RCC_BDCR_LSEBYP_Pos (2U)
#define RCC_BDCR_LSEBYP_Msk (0x1UL << RCC_BDCR_LSEBYP_Pos) /*!< 0x00000004 */
#define RCC_BDCR_LSEBYP RCC_BDCR_LSEBYP_Msk                /*!< External Low Speed oscillator Bypass */

#define RCC_BDCR_RTCSEL_Pos (8U)
#define RCC_BDCR_RTCSEL_Msk (0x3UL << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000300 */
#define RCC_BDCR_RTCSEL RCC_BDCR_RTCSEL_Msk                /*!< RTCSEL[1:0] bits (RTC clock source selection) */
#define RCC_BDCR_RTCSEL_0 (0x1UL << RCC_BDCR_RTCSEL_Pos)   /*!< 0x00000100 */
#define RCC_BDCR_RTCSEL_1 (0x2UL << RCC_BDCR_RTCSEL_Pos)   /*!< 0x00000200 */

/*!< RTC congiguration */
#define RCC_BDCR_RTCSEL_NOCLOCK 0x00000000U /*!< No clock */
#define RCC_BDCR_RTCSEL_LSE 0x00000100U     /*!< LSE oscillator clock used as RTC clock */
#define RCC_BDCR_RTCSEL_LSI 0x00000200U     /*!< LSI oscillator clock used as RTC clock */
#define RCC_BDCR_RTCSEL_HSE 0x00000300U     /*!< HSE oscillator clock divided by 128 used as RTC clock */

#define RCC_BDCR_RTCEN_Pos (15U)
#define RCC_BDCR_RTCEN_Msk (0x1UL << RCC_BDCR_RTCEN_Pos) /*!< 0x00008000 */
#define RCC_BDCR_RTCEN RCC_BDCR_RTCEN_Msk                /*!< RTC clock enable */
#define RCC_BDCR_BDRST_Pos (16U)
#define RCC_BDCR_BDRST_Msk (0x1UL << RCC_BDCR_BDRST_Pos) /*!< 0x00010000 */
#define RCC_BDCR_BDRST RCC_BDCR_BDRST_Msk                /*!< Backup domain software reset  */

/*******************  Bit definition for RCC_CSR register  ********************/
#define RCC_CSR_LSION_Pos (0U)
#define RCC_CSR_LSION_Msk (0x1UL << RCC_CSR_LSION_Pos) /*!< 0x00000001 */
#define RCC_CSR_LSION RCC_CSR_LSION_Msk                /*!< Internal Low Speed oscillator enable */
#define RCC_CSR_LSIRDY_Pos (1U)
#define RCC_CSR_LSIRDY_Msk (0x1UL << RCC_CSR_LSIRDY_Pos) /*!< 0x00000002 */
#define RCC_CSR_LSIRDY RCC_CSR_LSIRDY_Msk                /*!< Internal Low Speed oscillator Ready */
#define RCC_CSR_RMVF_Pos (24U)
#define RCC_CSR_RMVF_Msk (0x1UL << RCC_CSR_RMVF_Pos) /*!< 0x01000000 */
#define RCC_CSR_RMVF RCC_CSR_RMVF_Msk                /*!< Remove reset flag */
#define RCC_CSR_PINRSTF_Pos (26U)
#define RCC_CSR_PINRSTF_Msk (0x1UL << RCC_CSR_PINRSTF_Pos) /*!< 0x04000000 */
#define RCC_CSR_PINRSTF RCC_CSR_PINRSTF_Msk                /*!< PIN reset flag */
#define RCC_CSR_PORRSTF_Pos (27U)
#define RCC_CSR_PORRSTF_Msk (0x1UL << RCC_CSR_PORRSTF_Pos) /*!< 0x08000000 */
#define RCC_CSR_PORRSTF RCC_CSR_PORRSTF_Msk                /*!< POR/PDR reset flag */
#define RCC_CSR_SFTRSTF_Pos (28U)
#define RCC_CSR_SFTRSTF_Msk (0x1UL << RCC_CSR_SFTRSTF_Pos) /*!< 0x10000000 */
#define RCC_CSR_SFTRSTF RCC_CSR_SFTRSTF_Msk                /*!< Software Reset flag */
#define RCC_CSR_IWDGRSTF_Pos (29U)
#define RCC_CSR_IWDGRSTF_Msk (0x1UL << RCC_CSR_IWDGRSTF_Pos) /*!< 0x20000000 */
#define RCC_CSR_IWDGRSTF RCC_CSR_IWDGRSTF_Msk                /*!< Independent Watchdog reset flag */
#define RCC_CSR_WWDGRSTF_Pos (30U)
#define RCC_CSR_WWDGRSTF_Msk (0x1UL << RCC_CSR_WWDGRSTF_Pos) /*!< 0x40000000 */
#define RCC_CSR_WWDGRSTF RCC_CSR_WWDGRSTF_Msk                /*!< Window watchdog reset flag */
#define RCC_CSR_LPWRRSTF_Pos (31U)
#define RCC_CSR_LPWRRSTF_Msk (0x1UL << RCC_CSR_LPWRRSTF_Pos) /*!< 0x80000000 */
#define RCC_CSR_LPWRRSTF RCC_CSR_LPWRRSTF_Msk                /*!< Low-Power reset flag */

/*******************  Bit definition for RCC_AHBRSTR register  ****************/
#define RCC_AHBRSTR_OTGFSRST_Pos (12U)
#define RCC_AHBRSTR_OTGFSRST_Msk (0x1UL << RCC_AHBRSTR_OTGFSRST_Pos) /*!< 0x00001000 */
#define RCC_AHBRSTR_OTGFSRST RCC_AHBRSTR_OTGFSRST_Msk                /*!< USB OTG FS reset */
#define RCC_AHBRSTR_ETHMACRST_Pos (14U)
#define RCC_AHBRSTR_ETHMACRST_Msk (0x1UL << RCC_AHBRSTR_ETHMACRST_Pos) /*!< 0x00004000 */
#define RCC_AHBRSTR_ETHMACRST RCC_AHBRSTR_ETHMACRST_Msk                /*!< ETHERNET MAC reset */

/*******************  Bit definition for RCC_CFGR2 register  ******************/
/*!< PREDIV1 configuration */
#define RCC_CFGR2_PREDIV1_Pos (0U)
#define RCC_CFGR2_PREDIV1_Msk (0xFUL << RCC_CFGR2_PREDIV1_Pos) /*!< 0x0000000F */
#define RCC_CFGR2_PREDIV1 RCC_CFGR2_PREDIV1_Msk                /*!< PREDIV1[3:0] bits */
#define RCC_CFGR2_PREDIV1_0 (0x1UL << RCC_CFGR2_PREDIV1_Pos)   /*!< 0x00000001 */
#define RCC_CFGR2_PREDIV1_1 (0x2UL << RCC_CFGR2_PREDIV1_Pos)   /*!< 0x00000002 */
#define RCC_CFGR2_PREDIV1_2 (0x4UL << RCC_CFGR2_PREDIV1_Pos)   /*!< 0x00000004 */
#define RCC_CFGR2_PREDIV1_3 (0x8UL << RCC_CFGR2_PREDIV1_Pos)   /*!< 0x00000008 */

#define RCC_CFGR2_PREDIV1_DIV1 0x00000000U /*!< PREDIV1 input clock not divided */
#define RCC_CFGR2_PREDIV1_DIV2_Pos (0U)
#define RCC_CFGR2_PREDIV1_DIV2_Msk (0x1UL << RCC_CFGR2_PREDIV1_DIV2_Pos) /*!< 0x00000001 */
#define RCC_CFGR2_PREDIV1_DIV2 RCC_CFGR2_PREDIV1_DIV2_Msk                /*!< PREDIV1 input clock divided by 2 */
#define RCC_CFGR2_PREDIV1_DIV3_Pos (1U)
#define RCC_CFGR2_PREDIV1_DIV3_Msk (0x1UL << RCC_CFGR2_PREDIV1_DIV3_Pos) /*!< 0x00000002 */
#define RCC_CFGR2_PREDIV1_DIV3 RCC_CFGR2_PREDIV1_DIV3_Msk                /*!< PREDIV1 input clock divided by 3 */
#define RCC_CFGR2_PREDIV1_DIV4_Pos (0U)
#define RCC_CFGR2_PREDIV1_DIV4_Msk (0x3UL << RCC_CFGR2_PREDIV1_DIV4_Pos) /*!< 0x00000003 */
#define RCC_CFGR2_PREDIV1_DIV4 RCC_CFGR2_PREDIV1_DIV4_Msk                /*!< PREDIV1 input clock divided by 4 */
#define RCC_CFGR2_PREDIV1_DIV5_Pos (2U)
#define RCC_CFGR2_PREDIV1_DIV5_Msk (0x1UL << RCC_CFGR2_PREDIV1_DIV5_Pos) /*!< 0x00000004 */
#define RCC_CFGR2_PREDIV1_DIV5 RCC_CFGR2_PREDIV1_DIV5_Msk                /*!< PREDIV1 input clock divided by 5 */
#define RCC_CFGR2_PREDIV1_DIV6_Pos (0U)
#define RCC_CFGR2_PREDIV1_DIV6_Msk (0x5UL << RCC_CFGR2_PREDIV1_DIV6_Pos) /*!< 0x00000005 */
#define RCC_CFGR2_PREDIV1_DIV6 RCC_CFGR2_PREDIV1_DIV6_Msk                /*!< PREDIV1 input clock divided by 6 */
#define RCC_CFGR2_PREDIV1_DIV7_Pos (1U)
#define RCC_CFGR2_PREDIV1_DIV7_Msk (0x3UL << RCC_CFGR2_PREDIV1_DIV7_Pos) /*!< 0x00000006 */
#define RCC_CFGR2_PREDIV1_DIV7 RCC_CFGR2_PREDIV1_DIV7_Msk                /*!< PREDIV1 input clock divided by 7 */
#define RCC_CFGR2_PREDIV1_DIV8_Pos (0U)
#define RCC_CFGR2_PREDIV1_DIV8_Msk (0x7UL << RCC_CFGR2_PREDIV1_DIV8_Pos) /*!< 0x00000007 */
#define RCC_CFGR2_PREDIV1_DIV8 RCC_CFGR2_PREDIV1_DIV8_Msk                /*!< PREDIV1 input clock divided by 8 */
#define RCC_CFGR2_PREDIV1_DIV9_Pos (3U)
#define RCC_CFGR2_PREDIV1_DIV9_Msk (0x1UL << RCC_CFGR2_PREDIV1_DIV9_Pos) /*!< 0x00000008 */
#define RCC_CFGR2_PREDIV1_DIV9 RCC_CFGR2_PREDIV1_DIV9_Msk                /*!< PREDIV1 input clock divided by 9 */
#define RCC_CFGR2_PREDIV1_DIV10_Pos (0U)
#define RCC_CFGR2_PREDIV1_DIV10_Msk (0x9UL << RCC_CFGR2_PREDIV1_DIV10_Pos) /*!< 0x00000009 */
#define RCC_CFGR2_PREDIV1_DIV10 RCC_CFGR2_PREDIV1_DIV10_Msk                /*!< PREDIV1 input clock divided by 10 */
#define RCC_CFGR2_PREDIV1_DIV11_Pos (1U)
#define RCC_CFGR2_PREDIV1_DIV11_Msk (0x5UL << RCC_CFGR2_PREDIV1_DIV11_Pos) /*!< 0x0000000A */
#define RCC_CFGR2_PREDIV1_DIV11 RCC_CFGR2_PREDIV1_DIV11_Msk                /*!< PREDIV1 input clock divided by 11 */
#define RCC_CFGR2_PREDIV1_DIV12_Pos (0U)
#define RCC_CFGR2_PREDIV1_DIV12_Msk (0xBUL << RCC_CFGR2_PREDIV1_DIV12_Pos) /*!< 0x0000000B */
#define RCC_CFGR2_PREDIV1_DIV12 RCC_CFGR2_PREDIV1_DIV12_Msk                /*!< PREDIV1 input clock divided by 12 */
#define RCC_CFGR2_PREDIV1_DIV13_Pos (2U)
#define RCC_CFGR2_PREDIV1_DIV13_Msk (0x3UL << RCC_CFGR2_PREDIV1_DIV13_Pos) /*!< 0x0000000C */
#define RCC_CFGR2_PREDIV1_DIV13 RCC_CFGR2_PREDIV1_DIV13_Msk                /*!< PREDIV1 input clock divided by 13 */
#define RCC_CFGR2_PREDIV1_DIV14_Pos (0U)
#define RCC_CFGR2_PREDIV1_DIV14_Msk (0xDUL << RCC_CFGR2_PREDIV1_DIV14_Pos) /*!< 0x0000000D */
#define RCC_CFGR2_PREDIV1_DIV14 RCC_CFGR2_PREDIV1_DIV14_Msk                /*!< PREDIV1 input clock divided by 14 */
#define RCC_CFGR2_PREDIV1_DIV15_Pos (1U)
#define RCC_CFGR2_PREDIV1_DIV15_Msk (0x7UL << RCC_CFGR2_PREDIV1_DIV15_Pos) /*!< 0x0000000E */
#define RCC_CFGR2_PREDIV1_DIV15 RCC_CFGR2_PREDIV1_DIV15_Msk                /*!< PREDIV1 input clock divided by 15 */
#define RCC_CFGR2_PREDIV1_DIV16_Pos (0U)
#define RCC_CFGR2_PREDIV1_DIV16_Msk (0xFUL << RCC_CFGR2_PREDIV1_DIV16_Pos) /*!< 0x0000000F */
#define RCC_CFGR2_PREDIV1_DIV16 RCC_CFGR2_PREDIV1_DIV16_Msk                /*!< PREDIV1 input clock divided by 16 */

/*!< PREDIV2 configuration */
#define RCC_CFGR2_PREDIV2_Pos (4U)
#define RCC_CFGR2_PREDIV2_Msk (0xFUL << RCC_CFGR2_PREDIV2_Pos) /*!< 0x000000F0 */
#define RCC_CFGR2_PREDIV2 RCC_CFGR2_PREDIV2_Msk                /*!< PREDIV2[3:0] bits */
#define RCC_CFGR2_PREDIV2_0 (0x1UL << RCC_CFGR2_PREDIV2_Pos)   /*!< 0x00000010 */
#define RCC_CFGR2_PREDIV2_1 (0x2UL << RCC_CFGR2_PREDIV2_Pos)   /*!< 0x00000020 */
#define RCC_CFGR2_PREDIV2_2 (0x4UL << RCC_CFGR2_PREDIV2_Pos)   /*!< 0x00000040 */
#define RCC_CFGR2_PREDIV2_3 (0x8UL << RCC_CFGR2_PREDIV2_Pos)   /*!< 0x00000080 */

#define RCC_CFGR2_PREDIV2_DIV1 0x00000000U /*!< PREDIV2 input clock not divided */
#define RCC_CFGR2_PREDIV2_DIV2_Pos (4U)
#define RCC_CFGR2_PREDIV2_DIV2_Msk (0x1UL << RCC_CFGR2_PREDIV2_DIV2_Pos) /*!< 0x00000010 */
#define RCC_CFGR2_PREDIV2_DIV2 RCC_CFGR2_PREDIV2_DIV2_Msk                /*!< PREDIV2 input clock divided by 2 */
#define RCC_CFGR2_PREDIV2_DIV3_Pos (5U)
#define RCC_CFGR2_PREDIV2_DIV3_Msk (0x1UL << RCC_CFGR2_PREDIV2_DIV3_Pos) /*!< 0x00000020 */
#define RCC_CFGR2_PREDIV2_DIV3 RCC_CFGR2_PREDIV2_DIV3_Msk                /*!< PREDIV2 input clock divided by 3 */
#define RCC_CFGR2_PREDIV2_DIV4_Pos (4U)
#define RCC_CFGR2_PREDIV2_DIV4_Msk (0x3UL << RCC_CFGR2_PREDIV2_DIV4_Pos) /*!< 0x00000030 */
#define RCC_CFGR2_PREDIV2_DIV4 RCC_CFGR2_PREDIV2_DIV4_Msk                /*!< PREDIV2 input clock divided by 4 */
#define RCC_CFGR2_PREDIV2_DIV5_Pos (6U)
#define RCC_CFGR2_PREDIV2_DIV5_Msk (0x1UL << RCC_CFGR2_PREDIV2_DIV5_Pos) /*!< 0x00000040 */
#define RCC_CFGR2_PREDIV2_DIV5 RCC_CFGR2_PREDIV2_DIV5_Msk                /*!< PREDIV2 input clock divided by 5 */
#define RCC_CFGR2_PREDIV2_DIV6_Pos (4U)
#define RCC_CFGR2_PREDIV2_DIV6_Msk (0x5UL << RCC_CFGR2_PREDIV2_DIV6_Pos) /*!< 0x00000050 */
#define RCC_CFGR2_PREDIV2_DIV6 RCC_CFGR2_PREDIV2_DIV6_Msk                /*!< PREDIV2 input clock divided by 6 */
#define RCC_CFGR2_PREDIV2_DIV7_Pos (5U)
#define RCC_CFGR2_PREDIV2_DIV7_Msk (0x3UL << RCC_CFGR2_PREDIV2_DIV7_Pos) /*!< 0x00000060 */
#define RCC_CFGR2_PREDIV2_DIV7 RCC_CFGR2_PREDIV2_DIV7_Msk                /*!< PREDIV2 input clock divided by 7 */
#define RCC_CFGR2_PREDIV2_DIV8_Pos (4U)
#define RCC_CFGR2_PREDIV2_DIV8_Msk (0x7UL << RCC_CFGR2_PREDIV2_DIV8_Pos) /*!< 0x00000070 */
#define RCC_CFGR2_PREDIV2_DIV8 RCC_CFGR2_PREDIV2_DIV8_Msk                /*!< PREDIV2 input clock divided by 8 */
#define RCC_CFGR2_PREDIV2_DIV9_Pos (7U)
#define RCC_CFGR2_PREDIV2_DIV9_Msk (0x1UL << RCC_CFGR2_PREDIV2_DIV9_Pos) /*!< 0x00000080 */
#define RCC_CFGR2_PREDIV2_DIV9 RCC_CFGR2_PREDIV2_DIV9_Msk                /*!< PREDIV2 input clock divided by 9 */
#define RCC_CFGR2_PREDIV2_DIV10_Pos (4U)
#define RCC_CFGR2_PREDIV2_DIV10_Msk (0x9UL << RCC_CFGR2_PREDIV2_DIV10_Pos) /*!< 0x00000090 */
#define RCC_CFGR2_PREDIV2_DIV10 RCC_CFGR2_PREDIV2_DIV10_Msk                /*!< PREDIV2 input clock divided by 10 */
#define RCC_CFGR2_PREDIV2_DIV11_Pos (5U)
#define RCC_CFGR2_PREDIV2_DIV11_Msk (0x5UL << RCC_CFGR2_PREDIV2_DIV11_Pos) /*!< 0x000000A0 */
#define RCC_CFGR2_PREDIV2_DIV11 RCC_CFGR2_PREDIV2_DIV11_Msk                /*!< PREDIV2 input clock divided by 11 */
#define RCC_CFGR2_PREDIV2_DIV12_Pos (4U)
#define RCC_CFGR2_PREDIV2_DIV12_Msk (0xBUL << RCC_CFGR2_PREDIV2_DIV12_Pos) /*!< 0x000000B0 */
#define RCC_CFGR2_PREDIV2_DIV12 RCC_CFGR2_PREDIV2_DIV12_Msk                /*!< PREDIV2 input clock divided by 12 */
#define RCC_CFGR2_PREDIV2_DIV13_Pos (6U)
#define RCC_CFGR2_PREDIV2_DIV13_Msk (0x3UL << RCC_CFGR2_PREDIV2_DIV13_Pos) /*!< 0x000000C0 */
#define RCC_CFGR2_PREDIV2_DIV13 RCC_CFGR2_PREDIV2_DIV13_Msk                /*!< PREDIV2 input clock divided by 13 */
#define RCC_CFGR2_PREDIV2_DIV14_Pos (4U)
#define RCC_CFGR2_PREDIV2_DIV14_Msk (0xDUL << RCC_CFGR2_PREDIV2_DIV14_Pos) /*!< 0x000000D0 */
#define RCC_CFGR2_PREDIV2_DIV14 RCC_CFGR2_PREDIV2_DIV14_Msk                /*!< PREDIV2 input clock divided by 14 */
#define RCC_CFGR2_PREDIV2_DIV15_Pos (5U)
#define RCC_CFGR2_PREDIV2_DIV15_Msk (0x7UL << RCC_CFGR2_PREDIV2_DIV15_Pos) /*!< 0x000000E0 */
#define RCC_CFGR2_PREDIV2_DIV15 RCC_CFGR2_PREDIV2_DIV15_Msk                /*!< PREDIV2 input clock divided by 15 */
#define RCC_CFGR2_PREDIV2_DIV16_Pos (4U)
#define RCC_CFGR2_PREDIV2_DIV16_Msk (0xFUL << RCC_CFGR2_PREDIV2_DIV16_Pos) /*!< 0x000000F0 */
#define RCC_CFGR2_PREDIV2_DIV16 RCC_CFGR2_PREDIV2_DIV16_Msk                /*!< PREDIV2 input clock divided by 16 */

/*!< PLL2MUL configuration */
#define RCC_CFGR2_PLL2MUL_Pos (8U)
#define RCC_CFGR2_PLL2MUL_Msk (0xFUL << RCC_CFGR2_PLL2MUL_Pos) /*!< 0x00000F00 */
#define RCC_CFGR2_PLL2MUL RCC_CFGR2_PLL2MUL_Msk                /*!< PLL2MUL[3:0] bits */
#define RCC_CFGR2_PLL2MUL_0 (0x1UL << RCC_CFGR2_PLL2MUL_Pos)   /*!< 0x00000100 */
#define RCC_CFGR2_PLL2MUL_1 (0x2UL << RCC_CFGR2_PLL2MUL_Pos)   /*!< 0x00000200 */
#define RCC_CFGR2_PLL2MUL_2 (0x4UL << RCC_CFGR2_PLL2MUL_Pos)   /*!< 0x00000400 */
#define RCC_CFGR2_PLL2MUL_3 (0x8UL << RCC_CFGR2_PLL2MUL_Pos)   /*!< 0x00000800 */

#define RCC_CFGR2_PLL2MUL8_Pos (9U)
#define RCC_CFGR2_PLL2MUL8_Msk (0x3UL << RCC_CFGR2_PLL2MUL8_Pos) /*!< 0x00000600 */
#define RCC_CFGR2_PLL2MUL8 RCC_CFGR2_PLL2MUL8_Msk                /*!< PLL2 input clock * 8 */
#define RCC_CFGR2_PLL2MUL9_Pos (8U)
#define RCC_CFGR2_PLL2MUL9_Msk (0x7UL << RCC_CFGR2_PLL2MUL9_Pos) /*!< 0x00000700 */
#define RCC_CFGR2_PLL2MUL9 RCC_CFGR2_PLL2MUL9_Msk                /*!< PLL2 input clock * 9 */
#define RCC_CFGR2_PLL2MUL10_Pos (11U)
#define RCC_CFGR2_PLL2MUL10_Msk (0x1UL << RCC_CFGR2_PLL2MUL10_Pos) /*!< 0x00000800 */
#define RCC_CFGR2_PLL2MUL10 RCC_CFGR2_PLL2MUL10_Msk                /*!< PLL2 input clock * 10 */
#define RCC_CFGR2_PLL2MUL11_Pos (8U)
#define RCC_CFGR2_PLL2MUL11_Msk (0x9UL << RCC_CFGR2_PLL2MUL11_Pos) /*!< 0x00000900 */
#define RCC_CFGR2_PLL2MUL11 RCC_CFGR2_PLL2MUL11_Msk                /*!< PLL2 input clock * 11 */
#define RCC_CFGR2_PLL2MUL12_Pos (9U)
#define RCC_CFGR2_PLL2MUL12_Msk (0x5UL << RCC_CFGR2_PLL2MUL12_Pos) /*!< 0x00000A00 */
#define RCC_CFGR2_PLL2MUL12 RCC_CFGR2_PLL2MUL12_Msk                /*!< PLL2 input clock * 12 */
#define RCC_CFGR2_PLL2MUL13_Pos (8U)
#define RCC_CFGR2_PLL2MUL13_Msk (0xBUL << RCC_CFGR2_PLL2MUL13_Pos) /*!< 0x00000B00 */
#define RCC_CFGR2_PLL2MUL13 RCC_CFGR2_PLL2MUL13_Msk                /*!< PLL2 input clock * 13 */
#define RCC_CFGR2_PLL2MUL14_Pos (10U)
#define RCC_CFGR2_PLL2MUL14_Msk (0x3UL << RCC_CFGR2_PLL2MUL14_Pos) /*!< 0x00000C00 */
#define RCC_CFGR2_PLL2MUL14 RCC_CFGR2_PLL2MUL14_Msk                /*!< PLL2 input clock * 14 */
#define RCC_CFGR2_PLL2MUL16_Pos (9U)
#define RCC_CFGR2_PLL2MUL16_Msk (0x7UL << RCC_CFGR2_PLL2MUL16_Pos) /*!< 0x00000E00 */
#define RCC_CFGR2_PLL2MUL16 RCC_CFGR2_PLL2MUL16_Msk                /*!< PLL2 input clock * 16 */
#define RCC_CFGR2_PLL2MUL20_Pos (8U)
#define RCC_CFGR2_PLL2MUL20_Msk (0xFUL << RCC_CFGR2_PLL2MUL20_Pos) /*!< 0x00000F00 */
#define RCC_CFGR2_PLL2MUL20 RCC_CFGR2_PLL2MUL20_Msk                /*!< PLL2 input clock * 20 */

/*!< PLL3MUL configuration */
#define RCC_CFGR2_PLL3MUL_Pos (12U)
#define RCC_CFGR2_PLL3MUL_Msk (0xFUL << RCC_CFGR2_PLL3MUL_Pos) /*!< 0x0000F000 */
#define RCC_CFGR2_PLL3MUL RCC_CFGR2_PLL3MUL_Msk                /*!< PLL3MUL[3:0] bits */
#define RCC_CFGR2_PLL3MUL_0 (0x1UL << RCC_CFGR2_PLL3MUL_Pos)   /*!< 0x00001000 */
#define RCC_CFGR2_PLL3MUL_1 (0x2UL << RCC_CFGR2_PLL3MUL_Pos)   /*!< 0x00002000 */
#define RCC_CFGR2_PLL3MUL_2 (0x4UL << RCC_CFGR2_PLL3MUL_Pos)   /*!< 0x00004000 */
#define RCC_CFGR2_PLL3MUL_3 (0x8UL << RCC_CFGR2_PLL3MUL_Pos)   /*!< 0x00008000 */

#define RCC_CFGR2_PLL3MUL8_Pos (13U)
#define RCC_CFGR2_PLL3MUL8_Msk (0x3UL << RCC_CFGR2_PLL3MUL8_Pos) /*!< 0x00006000 */
#define RCC_CFGR2_PLL3MUL8 RCC_CFGR2_PLL3MUL8_Msk                /*!< PLL3 input clock * 8 */
#define RCC_CFGR2_PLL3MUL9_Pos (12U)
#define RCC_CFGR2_PLL3MUL9_Msk (0x7UL << RCC_CFGR2_PLL3MUL9_Pos) /*!< 0x00007000 */
#define RCC_CFGR2_PLL3MUL9 RCC_CFGR2_PLL3MUL9_Msk                /*!< PLL3 input clock * 9 */
#define RCC_CFGR2_PLL3MUL10_Pos (15U)
#define RCC_CFGR2_PLL3MUL10_Msk (0x1UL << RCC_CFGR2_PLL3MUL10_Pos) /*!< 0x00008000 */
#define RCC_CFGR2_PLL3MUL10 RCC_CFGR2_PLL3MUL10_Msk                /*!< PLL3 input clock * 10 */
#define RCC_CFGR2_PLL3MUL11_Pos (12U)
#define RCC_CFGR2_PLL3MUL11_Msk (0x9UL << RCC_CFGR2_PLL3MUL11_Pos) /*!< 0x00009000 */
#define RCC_CFGR2_PLL3MUL11 RCC_CFGR2_PLL3MUL11_Msk                /*!< PLL3 input clock * 11 */
#define RCC_CFGR2_PLL3MUL12_Pos (13U)
#define RCC_CFGR2_PLL3MUL12_Msk (0x5UL << RCC_CFGR2_PLL3MUL12_Pos) /*!< 0x0000A000 */
#define RCC_CFGR2_PLL3MUL12 RCC_CFGR2_PLL3MUL12_Msk                /*!< PLL3 input clock * 12 */
#define RCC_CFGR2_PLL3MUL13_Pos (12U)
#define RCC_CFGR2_PLL3MUL13_Msk (0xBUL << RCC_CFGR2_PLL3MUL13_Pos) /*!< 0x0000B000 */
#define RCC_CFGR2_PLL3MUL13 RCC_CFGR2_PLL3MUL13_Msk                /*!< PLL3 input clock * 13 */
#define RCC_CFGR2_PLL3MUL14_Pos (14U)
#define RCC_CFGR2_PLL3MUL14_Msk (0x3UL << RCC_CFGR2_PLL3MUL14_Pos) /*!< 0x0000C000 */
#define RCC_CFGR2_PLL3MUL14 RCC_CFGR2_PLL3MUL14_Msk                /*!< PLL3 input clock * 14 */
#define RCC_CFGR2_PLL3MUL16_Pos (13U)
#define RCC_CFGR2_PLL3MUL16_Msk (0x7UL << RCC_CFGR2_PLL3MUL16_Pos) /*!< 0x0000E000 */
#define RCC_CFGR2_PLL3MUL16 RCC_CFGR2_PLL3MUL16_Msk                /*!< PLL3 input clock * 16 */
#define RCC_CFGR2_PLL3MUL20_Pos (12U)
#define RCC_CFGR2_PLL3MUL20_Msk (0xFUL << RCC_CFGR2_PLL3MUL20_Pos) /*!< 0x0000F000 */
#define RCC_CFGR2_PLL3MUL20 RCC_CFGR2_PLL3MUL20_Msk                /*!< PLL3 input clock * 20 */

#define RCC_CFGR2_PREDIV1SRC_Pos (16U)
#define RCC_CFGR2_PREDIV1SRC_Msk (0x1UL << RCC_CFGR2_PREDIV1SRC_Pos) /*!< 0x00010000 */
#define RCC_CFGR2_PREDIV1SRC RCC_CFGR2_PREDIV1SRC_Msk                /*!< PREDIV1 entry clock source */
#define RCC_CFGR2_PREDIV1SRC_PLL2_Pos (16U)
#define RCC_CFGR2_PREDIV1SRC_PLL2_Msk (0x1UL << RCC_CFGR2_PREDIV1SRC_PLL2_Pos) /*!< 0x00010000 */
#define RCC_CFGR2_PREDIV1SRC_PLL2 RCC_CFGR2_PREDIV1SRC_PLL2_Msk                /*!< PLL2 selected as PREDIV1 entry clock source */
#define RCC_CFGR2_PREDIV1SRC_HSE 0x00000000U                                   /*!< HSE selected as PREDIV1 entry clock source */
#define RCC_CFGR2_I2S2SRC_Pos (17U)
#define RCC_CFGR2_I2S2SRC_Msk (0x1UL << RCC_CFGR2_I2S2SRC_Pos) /*!< 0x00020000 */
#define RCC_CFGR2_I2S2SRC RCC_CFGR2_I2S2SRC_Msk                /*!< I2S2 entry clock source */
#define RCC_CFGR2_I2S3SRC_Pos (18U)
#define RCC_CFGR2_I2S3SRC_Msk (0x1UL << RCC_CFGR2_I2S3SRC_Pos) /*!< 0x00040000 */
#define RCC_CFGR2_I2S3SRC RCC_CFGR2_I2S3SRC_Msk                /*!< I2S3 clock source */

/******************************************************************************/
/*                                                                            */
/*                General Purpose and Alternate Function I/O                  */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for GPIO_CRL register  *******************/
#define GPIO_CRL_MODE_Pos (0U)
#define GPIO_CRL_MODE_Msk (0x33333333UL << GPIO_CRL_MODE_Pos) /*!< 0x33333333 */
#define GPIO_CRL_MODE GPIO_CRL_MODE_Msk                       /*!< Port x mode bits */

#define GPIO_CRL_MODE0_Pos (0U)
#define GPIO_CRL_MODE0_Msk (0x3UL << GPIO_CRL_MODE0_Pos) /*!< 0x00000003 */
#define GPIO_CRL_MODE0 GPIO_CRL_MODE0_Msk                /*!< MODE0[1:0] bits (Port x mode bits, pin 0) */
#define GPIO_CRL_MODE0_0 (0x1UL << GPIO_CRL_MODE0_Pos)   /*!< 0x00000001 */
#define GPIO_CRL_MODE0_1 (0x2UL << GPIO_CRL_MODE0_Pos)   /*!< 0x00000002 */

#define GPIO_CRL_MODE1_Pos (4U)
#define GPIO_CRL_MODE1_Msk (0x3UL << GPIO_CRL_MODE1_Pos) /*!< 0x00000030 */
#define GPIO_CRL_MODE1 GPIO_CRL_MODE1_Msk                /*!< MODE1[1:0] bits (Port x mode bits, pin 1) */
#define GPIO_CRL_MODE1_0 (0x1UL << GPIO_CRL_MODE1_Pos)   /*!< 0x00000010 */
#define GPIO_CRL_MODE1_1 (0x2UL << GPIO_CRL_MODE1_Pos)   /*!< 0x00000020 */

#define GPIO_CRL_MODE2_Pos (8U)
#define GPIO_CRL_MODE2_Msk (0x3UL << GPIO_CRL_MODE2_Pos) /*!< 0x00000300 */
#define GPIO_CRL_MODE2 GPIO_CRL_MODE2_Msk                /*!< MODE2[1:0] bits (Port x mode bits, pin 2) */
#define GPIO_CRL_MODE2_0 (0x1UL << GPIO_CRL_MODE2_Pos)   /*!< 0x00000100 */
#define GPIO_CRL_MODE2_1 (0x2UL << GPIO_CRL_MODE2_Pos)   /*!< 0x00000200 */

#define GPIO_CRL_MODE3_Pos (12U)
#define GPIO_CRL_MODE3_Msk (0x3UL << GPIO_CRL_MODE3_Pos) /*!< 0x00003000 */
#define GPIO_CRL_MODE3 GPIO_CRL_MODE3_Msk                /*!< MODE3[1:0] bits (Port x mode bits, pin 3) */
#define GPIO_CRL_MODE3_0 (0x1UL << GPIO_CRL_MODE3_Pos)   /*!< 0x00001000 */
#define GPIO_CRL_MODE3_1 (0x2UL << GPIO_CRL_MODE3_Pos)   /*!< 0x00002000 */

#define GPIO_CRL_MODE4_Pos (16U)
#define GPIO_CRL_MODE4_Msk (0x3UL << GPIO_CRL_MODE4_Pos) /*!< 0x00030000 */
#define GPIO_CRL_MODE4 GPIO_CRL_MODE4_Msk                /*!< MODE4[1:0] bits (Port x mode bits, pin 4) */
#define GPIO_CRL_MODE4_0 (0x1UL << GPIO_CRL_MODE4_Pos)   /*!< 0x00010000 */
#define GPIO_CRL_MODE4_1 (0x2UL << GPIO_CRL_MODE4_Pos)   /*!< 0x00020000 */

#define GPIO_CRL_MODE5_Pos (20U)
#define GPIO_CRL_MODE5_Msk (0x3UL << GPIO_CRL_MODE5_Pos) /*!< 0x00300000 */
#define GPIO_CRL_MODE5 GPIO_CRL_MODE5_Msk                /*!< MODE5[1:0] bits (Port x mode bits, pin 5) */
#define GPIO_CRL_MODE5_0 (0x1UL << GPIO_CRL_MODE5_Pos)   /*!< 0x00100000 */
#define GPIO_CRL_MODE5_1 (0x2UL << GPIO_CRL_MODE5_Pos)   /*!< 0x00200000 */

#define GPIO_CRL_MODE6_Pos (24U)
#define GPIO_CRL_MODE6_Msk (0x3UL << GPIO_CRL_MODE6_Pos) /*!< 0x03000000 */
#define GPIO_CRL_MODE6 GPIO_CRL_MODE6_Msk                /*!< MODE6[1:0] bits (Port x mode bits, pin 6) */
#define GPIO_CRL_MODE6_0 (0x1UL << GPIO_CRL_MODE6_Pos)   /*!< 0x01000000 */
#define GPIO_CRL_MODE6_1 (0x2UL << GPIO_CRL_MODE6_Pos)   /*!< 0x02000000 */

#define GPIO_CRL_MODE7_Pos (28U)
#define GPIO_CRL_MODE7_Msk (0x3UL << GPIO_CRL_MODE7_Pos) /*!< 0x30000000 */
#define GPIO_CRL_MODE7 GPIO_CRL_MODE7_Msk                /*!< MODE7[1:0] bits (Port x mode bits, pin 7) */
#define GPIO_CRL_MODE7_0 (0x1UL << GPIO_CRL_MODE7_Pos)   /*!< 0x10000000 */
#define GPIO_CRL_MODE7_1 (0x2UL << GPIO_CRL_MODE7_Pos)   /*!< 0x20000000 */

#define GPIO_CRL_CNF_Pos (2U)
#define GPIO_CRL_CNF_Msk (0x33333333UL << GPIO_CRL_CNF_Pos) /*!< 0xCCCCCCCC */
#define GPIO_CRL_CNF GPIO_CRL_CNF_Msk                       /*!< Port x configuration bits */

#define GPIO_CRL_CNF0_Pos (2U)
#define GPIO_CRL_CNF0_Msk (0x3UL << GPIO_CRL_CNF0_Pos) /*!< 0x0000000C */
#define GPIO_CRL_CNF0 GPIO_CRL_CNF0_Msk                /*!< CNF0[1:0] bits (Port x configuration bits, pin 0) */
#define GPIO_CRL_CNF0_0 (0x1UL << GPIO_CRL_CNF0_Pos)   /*!< 0x00000004 */
#define GPIO_CRL_CNF0_1 (0x2UL << GPIO_CRL_CNF0_Pos)   /*!< 0x00000008 */

#define GPIO_CRL_CNF1_Pos (6U)
#define GPIO_CRL_CNF1_Msk (0x3UL << GPIO_CRL_CNF1_Pos) /*!< 0x000000C0 */
#define GPIO_CRL_CNF1 GPIO_CRL_CNF1_Msk                /*!< CNF1[1:0] bits (Port x configuration bits, pin 1) */
#define GPIO_CRL_CNF1_0 (0x1UL << GPIO_CRL_CNF1_Pos)   /*!< 0x00000040 */
#define GPIO_CRL_CNF1_1 (0x2UL << GPIO_CRL_CNF1_Pos)   /*!< 0x00000080 */

#define GPIO_CRL_CNF2_Pos (10U)
#define GPIO_CRL_CNF2_Msk (0x3UL << GPIO_CRL_CNF2_Pos) /*!< 0x00000C00 */
#define GPIO_CRL_CNF2 GPIO_CRL_CNF2_Msk                /*!< CNF2[1:0] bits (Port x configuration bits, pin 2) */
#define GPIO_CRL_CNF2_0 (0x1UL << GPIO_CRL_CNF2_Pos)   /*!< 0x00000400 */
#define GPIO_CRL_CNF2_1 (0x2UL << GPIO_CRL_CNF2_Pos)   /*!< 0x00000800 */

#define GPIO_CRL_CNF3_Pos (14U)
#define GPIO_CRL_CNF3_Msk (0x3UL << GPIO_CRL_CNF3_Pos) /*!< 0x0000C000 */
#define GPIO_CRL_CNF3 GPIO_CRL_CNF3_Msk                /*!< CNF3[1:0] bits (Port x configuration bits, pin 3) */
#define GPIO_CRL_CNF3_0 (0x1UL << GPIO_CRL_CNF3_Pos)   /*!< 0x00004000 */
#define GPIO_CRL_CNF3_1 (0x2UL << GPIO_CRL_CNF3_Pos)   /*!< 0x00008000 */

#define GPIO_CRL_CNF4_Pos (18U)
#define GPIO_CRL_CNF4_Msk (0x3UL << GPIO_CRL_CNF4_Pos) /*!< 0x000C0000 */
#define GPIO_CRL_CNF4 GPIO_CRL_CNF4_Msk                /*!< CNF4[1:0] bits (Port x configuration bits, pin 4) */
#define GPIO_CRL_CNF4_0 (0x1UL << GPIO_CRL_CNF4_Pos)   /*!< 0x00040000 */
#define GPIO_CRL_CNF4_1 (0x2UL << GPIO_CRL_CNF4_Pos)   /*!< 0x00080000 */

#define GPIO_CRL_CNF5_Pos (22U)
#define GPIO_CRL_CNF5_Msk (0x3UL << GPIO_CRL_CNF5_Pos) /*!< 0x00C00000 */
#define GPIO_CRL_CNF5 GPIO_CRL_CNF5_Msk                /*!< CNF5[1:0] bits (Port x configuration bits, pin 5) */
#define GPIO_CRL_CNF5_0 (0x1UL << GPIO_CRL_CNF5_Pos)   /*!< 0x00400000 */
#define GPIO_CRL_CNF5_1 (0x2UL << GPIO_CRL_CNF5_Pos)   /*!< 0x00800000 */

#define GPIO_CRL_CNF6_Pos (26U)
#define GPIO_CRL_CNF6_Msk (0x3UL << GPIO_CRL_CNF6_Pos) /*!< 0x0C000000 */
#define GPIO_CRL_CNF6 GPIO_CRL_CNF6_Msk                /*!< CNF6[1:0] bits (Port x configuration bits, pin 6) */
#define GPIO_CRL_CNF6_0 (0x1UL << GPIO_CRL_CNF6_Pos)   /*!< 0x04000000 */
#define GPIO_CRL_CNF6_1 (0x2UL << GPIO_CRL_CNF6_Pos)   /*!< 0x08000000 */

#define GPIO_CRL_CNF7_Pos (30U)
#define GPIO_CRL_CNF7_Msk (0x3UL << GPIO_CRL_CNF7_Pos) /*!< 0xC0000000 */
#define GPIO_CRL_CNF7 GPIO_CRL_CNF7_Msk                /*!< CNF7[1:0] bits (Port x configuration bits, pin 7) */
#define GPIO_CRL_CNF7_0 (0x1UL << GPIO_CRL_CNF7_Pos)   /*!< 0x40000000 */
#define GPIO_CRL_CNF7_1 (0x2UL << GPIO_CRL_CNF7_Pos)   /*!< 0x80000000 */

/*******************  Bit definition for GPIO_CRH register  *******************/
#define GPIO_CRH_MODE_Pos (0U)
#define GPIO_CRH_MODE_Msk (0x33333333UL << GPIO_CRH_MODE_Pos) /*!< 0x33333333 */
#define GPIO_CRH_MODE GPIO_CRH_MODE_Msk                       /*!< Port x mode bits */

#define GPIO_CRH_MODE8_Pos (0U)
#define GPIO_CRH_MODE8_Msk (0x3UL << GPIO_CRH_MODE8_Pos) /*!< 0x00000003 */
#define GPIO_CRH_MODE8 GPIO_CRH_MODE8_Msk                /*!< MODE8[1:0] bits (Port x mode bits, pin 8) */
#define GPIO_CRH_MODE8_0 (0x1UL << GPIO_CRH_MODE8_Pos)   /*!< 0x00000001 */
#define GPIO_CRH_MODE8_1 (0x2UL << GPIO_CRH_MODE8_Pos)   /*!< 0x00000002 */

#define GPIO_CRH_MODE9_Pos (4U)
#define GPIO_CRH_MODE9_Msk (0x3UL << GPIO_CRH_MODE9_Pos) /*!< 0x00000030 */
#define GPIO_CRH_MODE9 GPIO_CRH_MODE9_Msk                /*!< MODE9[1:0] bits (Port x mode bits, pin 9) */
#define GPIO_CRH_MODE9_0 (0x1UL << GPIO_CRH_MODE9_Pos)   /*!< 0x00000010 */
#define GPIO_CRH_MODE9_1 (0x2UL << GPIO_CRH_MODE9_Pos)   /*!< 0x00000020 */

#define GPIO_CRH_MODE10_Pos (8U)
#define GPIO_CRH_MODE10_Msk (0x3UL << GPIO_CRH_MODE10_Pos) /*!< 0x00000300 */
#define GPIO_CRH_MODE10 GPIO_CRH_MODE10_Msk                /*!< MODE10[1:0] bits (Port x mode bits, pin 10) */
#define GPIO_CRH_MODE10_0 (0x1UL << GPIO_CRH_MODE10_Pos)   /*!< 0x00000100 */
#define GPIO_CRH_MODE10_1 (0x2UL << GPIO_CRH_MODE10_Pos)   /*!< 0x00000200 */

#define GPIO_CRH_MODE11_Pos (12U)
#define GPIO_CRH_MODE11_Msk (0x3UL << GPIO_CRH_MODE11_Pos) /*!< 0x00003000 */
#define GPIO_CRH_MODE11 GPIO_CRH_MODE11_Msk                /*!< MODE11[1:0] bits (Port x mode bits, pin 11) */
#define GPIO_CRH_MODE11_0 (0x1UL << GPIO_CRH_MODE11_Pos)   /*!< 0x00001000 */
#define GPIO_CRH_MODE11_1 (0x2UL << GPIO_CRH_MODE11_Pos)   /*!< 0x00002000 */

#define GPIO_CRH_MODE12_Pos (16U)
#define GPIO_CRH_MODE12_Msk (0x3UL << GPIO_CRH_MODE12_Pos) /*!< 0x00030000 */
#define GPIO_CRH_MODE12 GPIO_CRH_MODE12_Msk                /*!< MODE12[1:0] bits (Port x mode bits, pin 12) */
#define GPIO_CRH_MODE12_0 (0x1UL << GPIO_CRH_MODE12_Pos)   /*!< 0x00010000 */
#define GPIO_CRH_MODE12_1 (0x2UL << GPIO_CRH_MODE12_Pos)   /*!< 0x00020000 */

#define GPIO_CRH_MODE13_Pos (20U)
#define GPIO_CRH_MODE13_Msk (0x3UL << GPIO_CRH_MODE13_Pos) /*!< 0x00300000 */
#define GPIO_CRH_MODE13 GPIO_CRH_MODE13_Msk                /*!< MODE13[1:0] bits (Port x mode bits, pin 13) */
#define GPIO_CRH_MODE13_0 (0x1UL << GPIO_CRH_MODE13_Pos)   /*!< 0x00100000 */
#define GPIO_CRH_MODE13_1 (0x2UL << GPIO_CRH_MODE13_Pos)   /*!< 0x00200000 */

#define GPIO_CRH_MODE14_Pos (24U)
#define GPIO_CRH_MODE14_Msk (0x3UL << GPIO_CRH_MODE14_Pos) /*!< 0x03000000 */
#define GPIO_CRH_MODE14 GPIO_CRH_MODE14_Msk                /*!< MODE14[1:0] bits (Port x mode bits, pin 14) */
#define GPIO_CRH_MODE14_0 (0x1UL << GPIO_CRH_MODE14_Pos)   /*!< 0x01000000 */
#define GPIO_CRH_MODE14_1 (0x2UL << GPIO_CRH_MODE14_Pos)   /*!< 0x02000000 */

#define GPIO_CRH_MODE15_Pos (28U)
#define GPIO_CRH_MODE15_Msk (0x3UL << GPIO_CRH_MODE15_Pos) /*!< 0x30000000 */
#define GPIO_CRH_MODE15 GPIO_CRH_MODE15_Msk                /*!< MODE15[1:0] bits (Port x mode bits, pin 15) */
#define GPIO_CRH_MODE15_0 (0x1UL << GPIO_CRH_MODE15_Pos)   /*!< 0x10000000 */
#define GPIO_CRH_MODE15_1 (0x2UL << GPIO_CRH_MODE15_Pos)   /*!< 0x20000000 */

#define GPIO_CRH_CNF_Pos (2U)
#define GPIO_CRH_CNF_Msk (0x33333333UL << GPIO_CRH_CNF_Pos) /*!< 0xCCCCCCCC */
#define GPIO_CRH_CNF GPIO_CRH_CNF_Msk                       /*!< Port x configuration bits */

#define GPIO_CRH_CNF8_Pos (2U)
#define GPIO_CRH_CNF8_Msk (0x3UL << GPIO_CRH_CNF8_Pos) /*!< 0x0000000C */
#define GPIO_CRH_CNF8 GPIO_CRH_CNF8_Msk                /*!< CNF8[1:0] bits (Port x configuration bits, pin 8) */
#define GPIO_CRH_CNF8_0 (0x1UL << GPIO_CRH_CNF8_Pos)   /*!< 0x00000004 */
#define GPIO_CRH_CNF8_1 (0x2UL << GPIO_CRH_CNF8_Pos)   /*!< 0x00000008 */

#define GPIO_CRH_CNF9_Pos (6U)
#define GPIO_CRH_CNF9_Msk (0x3UL << GPIO_CRH_CNF9_Pos) /*!< 0x000000C0 */
#define GPIO_CRH_CNF9 GPIO_CRH_CNF9_Msk                /*!< CNF9[1:0] bits (Port x configuration bits, pin 9) */
#define GPIO_CRH_CNF9_0 (0x1UL << GPIO_CRH_CNF9_Pos)   /*!< 0x00000040 */
#define GPIO_CRH_CNF9_1 (0x2UL << GPIO_CRH_CNF9_Pos)   /*!< 0x00000080 */

#define GPIO_CRH_CNF10_Pos (10U)
#define GPIO_CRH_CNF10_Msk (0x3UL << GPIO_CRH_CNF10_Pos) /*!< 0x00000C00 */
#define GPIO_CRH_CNF10 GPIO_CRH_CNF10_Msk                /*!< CNF10[1:0] bits (Port x configuration bits, pin 10) */
#define GPIO_CRH_CNF10_0 (0x1UL << GPIO_CRH_CNF10_Pos)   /*!< 0x00000400 */
#define GPIO_CRH_CNF10_1 (0x2UL << GPIO_CRH_CNF10_Pos)   /*!< 0x00000800 */

#define GPIO_CRH_CNF11_Pos (14U)
#define GPIO_CRH_CNF11_Msk (0x3UL << GPIO_CRH_CNF11_Pos) /*!< 0x0000C000 */
#define GPIO_CRH_CNF11 GPIO_CRH_CNF11_Msk                /*!< CNF11[1:0] bits (Port x configuration bits, pin 11) */
#define GPIO_CRH_CNF11_0 (0x1UL << GPIO_CRH_CNF11_Pos)   /*!< 0x00004000 */
#define GPIO_CRH_CNF11_1 (0x2UL << GPIO_CRH_CNF11_Pos)   /*!< 0x00008000 */

#define GPIO_CRH_CNF12_Pos (18U)
#define GPIO_CRH_CNF12_Msk (0x3UL << GPIO_CRH_CNF12_Pos) /*!< 0x000C0000 */
#define GPIO_CRH_CNF12 GPIO_CRH_CNF12_Msk                /*!< CNF12[1:0] bits (Port x configuration bits, pin 12) */
#define GPIO_CRH_CNF12_0 (0x1UL << GPIO_CRH_CNF12_Pos)   /*!< 0x00040000 */
#define GPIO_CRH_CNF12_1 (0x2UL << GPIO_CRH_CNF12_Pos)   /*!< 0x00080000 */

#define GPIO_CRH_CNF13_Pos (22U)
#define GPIO_CRH_CNF13_Msk (0x3UL << GPIO_CRH_CNF13_Pos) /*!< 0x00C00000 */
#define GPIO_CRH_CNF13 GPIO_CRH_CNF13_Msk                /*!< CNF13[1:0] bits (Port x configuration bits, pin 13) */
#define GPIO_CRH_CNF13_0 (0x1UL << GPIO_CRH_CNF13_Pos)   /*!< 0x00400000 */
#define GPIO_CRH_CNF13_1 (0x2UL << GPIO_CRH_CNF13_Pos)   /*!< 0x00800000 */

#define GPIO_CRH_CNF14_Pos (26U)
#define GPIO_CRH_CNF14_Msk (0x3UL << GPIO_CRH_CNF14_Pos) /*!< 0x0C000000 */
#define GPIO_CRH_CNF14 GPIO_CRH_CNF14_Msk                /*!< CNF14[1:0] bits (Port x configuration bits, pin 14) */
#define GPIO_CRH_CNF14_0 (0x1UL << GPIO_CRH_CNF14_Pos)   /*!< 0x04000000 */
#define GPIO_CRH_CNF14_1 (0x2UL << GPIO_CRH_CNF14_Pos)   /*!< 0x08000000 */

#define GPIO_CRH_CNF15_Pos (30U)
#define GPIO_CRH_CNF15_Msk (0x3UL << GPIO_CRH_CNF15_Pos) /*!< 0xC0000000 */
#define GPIO_CRH_CNF15 GPIO_CRH_CNF15_Msk                /*!< CNF15[1:0] bits (Port x configuration bits, pin 15) */
#define GPIO_CRH_CNF15_0 (0x1UL << GPIO_CRH_CNF15_Pos)   /*!< 0x40000000 */
#define GPIO_CRH_CNF15_1 (0x2UL << GPIO_CRH_CNF15_Pos)   /*!< 0x80000000 */

/*!<******************  Bit definition for GPIO_IDR register  *******************/
#define GPIO_IDR_IDR0_Pos (0U)
#define GPIO_IDR_IDR0_Msk (0x1UL << GPIO_IDR_IDR0_Pos) /*!< 0x00000001 */
#define GPIO_IDR_IDR0 GPIO_IDR_IDR0_Msk                /*!< Port input data, bit 0 */
#define GPIO_IDR_IDR1_Pos (1U)
#define GPIO_IDR_IDR1_Msk (0x1UL << GPIO_IDR_IDR1_Pos) /*!< 0x00000002 */
#define GPIO_IDR_IDR1 GPIO_IDR_IDR1_Msk                /*!< Port input data, bit 1 */
#define GPIO_IDR_IDR2_Pos (2U)
#define GPIO_IDR_IDR2_Msk (0x1UL << GPIO_IDR_IDR2_Pos) /*!< 0x00000004 */
#define GPIO_IDR_IDR2 GPIO_IDR_IDR2_Msk                /*!< Port input data, bit 2 */
#define GPIO_IDR_IDR3_Pos (3U)
#define GPIO_IDR_IDR3_Msk (0x1UL << GPIO_IDR_IDR3_Pos) /*!< 0x00000008 */
#define GPIO_IDR_IDR3 GPIO_IDR_IDR3_Msk                /*!< Port input data, bit 3 */
#define GPIO_IDR_IDR4_Pos (4U)
#define GPIO_IDR_IDR4_Msk (0x1UL << GPIO_IDR_IDR4_Pos) /*!< 0x00000010 */
#define GPIO_IDR_IDR4 GPIO_IDR_IDR4_Msk                /*!< Port input data, bit 4 */
#define GPIO_IDR_IDR5_Pos (5U)
#define GPIO_IDR_IDR5_Msk (0x1UL << GPIO_IDR_IDR5_Pos) /*!< 0x00000020 */
#define GPIO_IDR_IDR5 GPIO_IDR_IDR5_Msk                /*!< Port input data, bit 5 */
#define GPIO_IDR_IDR6_Pos (6U)
#define GPIO_IDR_IDR6_Msk (0x1UL << GPIO_IDR_IDR6_Pos) /*!< 0x00000040 */
#define GPIO_IDR_IDR6 GPIO_IDR_IDR6_Msk                /*!< Port input data, bit 6 */
#define GPIO_IDR_IDR7_Pos (7U)
#define GPIO_IDR_IDR7_Msk (0x1UL << GPIO_IDR_IDR7_Pos) /*!< 0x00000080 */
#define GPIO_IDR_IDR7 GPIO_IDR_IDR7_Msk                /*!< Port input data, bit 7 */
#define GPIO_IDR_IDR8_Pos (8U)
#define GPIO_IDR_IDR8_Msk (0x1UL << GPIO_IDR_IDR8_Pos) /*!< 0x00000100 */
#define GPIO_IDR_IDR8 GPIO_IDR_IDR8_Msk                /*!< Port input data, bit 8 */
#define GPIO_IDR_IDR9_Pos (9U)
#define GPIO_IDR_IDR9_Msk (0x1UL << GPIO_IDR_IDR9_Pos) /*!< 0x00000200 */
#define GPIO_IDR_IDR9 GPIO_IDR_IDR9_Msk                /*!< Port input data, bit 9 */
#define GPIO_IDR_IDR10_Pos (10U)
#define GPIO_IDR_IDR10_Msk (0x1UL << GPIO_IDR_IDR10_Pos) /*!< 0x00000400 */
#define GPIO_IDR_IDR10 GPIO_IDR_IDR10_Msk                /*!< Port input data, bit 10 */
#define GPIO_IDR_IDR11_Pos (11U)
#define GPIO_IDR_IDR11_Msk (0x1UL << GPIO_IDR_IDR11_Pos) /*!< 0x00000800 */
#define GPIO_IDR_IDR11 GPIO_IDR_IDR11_Msk                /*!< Port input data, bit 11 */
#define GPIO_IDR_IDR12_Pos (12U)
#define GPIO_IDR_IDR12_Msk (0x1UL << GPIO_IDR_IDR12_Pos) /*!< 0x00001000 */
#define GPIO_IDR_IDR12 GPIO_IDR_IDR12_Msk                /*!< Port input data, bit 12 */
#define GPIO_IDR_IDR13_Pos (13U)
#define GPIO_IDR_IDR13_Msk (0x1UL << GPIO_IDR_IDR13_Pos) /*!< 0x00002000 */
#define GPIO_IDR_IDR13 GPIO_IDR_IDR13_Msk                /*!< Port input data, bit 13 */
#define GPIO_IDR_IDR14_Pos (14U)
#define GPIO_IDR_IDR14_Msk (0x1UL << GPIO_IDR_IDR14_Pos) /*!< 0x00004000 */
#define GPIO_IDR_IDR14 GPIO_IDR_IDR14_Msk                /*!< Port input data, bit 14 */
#define GPIO_IDR_IDR15_Pos (15U)
#define GPIO_IDR_IDR15_Msk (0x1UL << GPIO_IDR_IDR15_Pos) /*!< 0x00008000 */
#define GPIO_IDR_IDR15 GPIO_IDR_IDR15_Msk                /*!< Port input data, bit 15 */

/*******************  Bit definition for GPIO_ODR register  *******************/
#define GPIO_ODR_ODR0_Pos (0U)
#define GPIO_ODR_ODR0_Msk (0x1UL << GPIO_ODR_ODR0_Pos) /*!< 0x00000001 */
#define GPIO_ODR_ODR0 GPIO_ODR_ODR0_Msk                /*!< Port output data, bit 0 */
#define GPIO_ODR_ODR1_Pos (1U)
#define GPIO_ODR_ODR1_Msk (0x1UL << GPIO_ODR_ODR1_Pos) /*!< 0x00000002 */
#define GPIO_ODR_ODR1 GPIO_ODR_ODR1_Msk                /*!< Port output data, bit 1 */
#define GPIO_ODR_ODR2_Pos (2U)
#define GPIO_ODR_ODR2_Msk (0x1UL << GPIO_ODR_ODR2_Pos) /*!< 0x00000004 */
#define GPIO_ODR_ODR2 GPIO_ODR_ODR2_Msk                /*!< Port output data, bit 2 */
#define GPIO_ODR_ODR3_Pos (3U)
#define GPIO_ODR_ODR3_Msk (0x1UL << GPIO_ODR_ODR3_Pos) /*!< 0x00000008 */
#define GPIO_ODR_ODR3 GPIO_ODR_ODR3_Msk                /*!< Port output data, bit 3 */
#define GPIO_ODR_ODR4_Pos (4U)
#define GPIO_ODR_ODR4_Msk (0x1UL << GPIO_ODR_ODR4_Pos) /*!< 0x00000010 */
#define GPIO_ODR_ODR4 GPIO_ODR_ODR4_Msk                /*!< Port output data, bit 4 */
#define GPIO_ODR_ODR5_Pos (5U)
#define GPIO_ODR_ODR5_Msk (0x1UL << GPIO_ODR_ODR5_Pos) /*!< 0x00000020 */
#define GPIO_ODR_ODR5 GPIO_ODR_ODR5_Msk                /*!< Port output data, bit 5 */
#define GPIO_ODR_ODR6_Pos (6U)
#define GPIO_ODR_ODR6_Msk (0x1UL << GPIO_ODR_ODR6_Pos) /*!< 0x00000040 */
#define GPIO_ODR_ODR6 GPIO_ODR_ODR6_Msk                /*!< Port output data, bit 6 */
#define GPIO_ODR_ODR7_Pos (7U)
#define GPIO_ODR_ODR7_Msk (0x1UL << GPIO_ODR_ODR7_Pos) /*!< 0x00000080 */
#define GPIO_ODR_ODR7 GPIO_ODR_ODR7_Msk                /*!< Port output data, bit 7 */
#define GPIO_ODR_ODR8_Pos (8U)
#define GPIO_ODR_ODR8_Msk (0x1UL << GPIO_ODR_ODR8_Pos) /*!< 0x00000100 */
#define GPIO_ODR_ODR8 GPIO_ODR_ODR8_Msk                /*!< Port output data, bit 8 */
#define GPIO_ODR_ODR9_Pos (9U)
#define GPIO_ODR_ODR9_Msk (0x1UL << GPIO_ODR_ODR9_Pos) /*!< 0x00000200 */
#define GPIO_ODR_ODR9 GPIO_ODR_ODR9_Msk                /*!< Port output data, bit 9 */
#define GPIO_ODR_ODR10_Pos (10U)
#define GPIO_ODR_ODR10_Msk (0x1UL << GPIO_ODR_ODR10_Pos) /*!< 0x00000400 */
#define GPIO_ODR_ODR10 GPIO_ODR_ODR10_Msk                /*!< Port output data, bit 10 */
#define GPIO_ODR_ODR11_Pos (11U)
#define GPIO_ODR_ODR11_Msk (0x1UL << GPIO_ODR_ODR11_Pos) /*!< 0x00000800 */
#define GPIO_ODR_ODR11 GPIO_ODR_ODR11_Msk                /*!< Port output data, bit 11 */
#define GPIO_ODR_ODR12_Pos (12U)
#define GPIO_ODR_ODR12_Msk (0x1UL << GPIO_ODR_ODR12_Pos) /*!< 0x00001000 */
#define GPIO_ODR_ODR12 GPIO_ODR_ODR12_Msk                /*!< Port output data, bit 12 */
#define GPIO_ODR_ODR13_Pos (13U)
#define GPIO_ODR_ODR13_Msk (0x1UL << GPIO_ODR_ODR13_Pos) /*!< 0x00002000 */
#define GPIO_ODR_ODR13 GPIO_ODR_ODR13_Msk                /*!< Port output data, bit 13 */
#define GPIO_ODR_ODR14_Pos (14U)
#define GPIO_ODR_ODR14_Msk (0x1UL << GPIO_ODR_ODR14_Pos) /*!< 0x00004000 */
#define GPIO_ODR_ODR14 GPIO_ODR_ODR14_Msk                /*!< Port output data, bit 14 */
#define GPIO_ODR_ODR15_Pos (15U)
#define GPIO_ODR_ODR15_Msk (0x1UL << GPIO_ODR_ODR15_Pos) /*!< 0x00008000 */
#define GPIO_ODR_ODR15 GPIO_ODR_ODR15_Msk                /*!< Port output data, bit 15 */

/******************  Bit definition for GPIO_BSRR register  *******************/
#define GPIO_BSRR_BS0_Pos (0U)
#define GPIO_BSRR_BS0_Msk (0x1UL << GPIO_BSRR_BS0_Pos) /*!< 0x00000001 */
#define GPIO_BSRR_BS0 GPIO_BSRR_BS0_Msk                /*!< Port x Set bit 0 */
#define GPIO_BSRR_BS1_Pos (1U)
#define GPIO_BSRR_BS1_Msk (0x1UL << GPIO_BSRR_BS1_Pos) /*!< 0x00000002 */
#define GPIO_BSRR_BS1 GPIO_BSRR_BS1_Msk                /*!< Port x Set bit 1 */
#define GPIO_BSRR_BS2_Pos (2U)
#define GPIO_BSRR_BS2_Msk (0x1UL << GPIO_BSRR_BS2_Pos) /*!< 0x00000004 */
#define GPIO_BSRR_BS2 GPIO_BSRR_BS2_Msk                /*!< Port x Set bit 2 */
#define GPIO_BSRR_BS3_Pos (3U)
#define GPIO_BSRR_BS3_Msk (0x1UL << GPIO_BSRR_BS3_Pos) /*!< 0x00000008 */
#define GPIO_BSRR_BS3 GPIO_BSRR_BS3_Msk                /*!< Port x Set bit 3 */
#define GPIO_BSRR_BS4_Pos (4U)
#define GPIO_BSRR_BS4_Msk (0x1UL << GPIO_BSRR_BS4_Pos) /*!< 0x00000010 */
#define GPIO_BSRR_BS4 GPIO_BSRR_BS4_Msk                /*!< Port x Set bit 4 */
#define GPIO_BSRR_BS5_Pos (5U)
#define GPIO_BSRR_BS5_Msk (0x1UL << GPIO_BSRR_BS5_Pos) /*!< 0x00000020 */
#define GPIO_BSRR_BS5 GPIO_BSRR_BS5_Msk                /*!< Port x Set bit 5 */
#define GPIO_BSRR_BS6_Pos (6U)
#define GPIO_BSRR_BS6_Msk (0x1UL << GPIO_BSRR_BS6_Pos) /*!< 0x00000040 */
#define GPIO_BSRR_BS6 GPIO_BSRR_BS6_Msk                /*!< Port x Set bit 6 */
#define GPIO_BSRR_BS7_Pos (7U)
#define GPIO_BSRR_BS7_Msk (0x1UL << GPIO_BSRR_BS7_Pos) /*!< 0x00000080 */
#define GPIO_BSRR_BS7 GPIO_BSRR_BS7_Msk                /*!< Port x Set bit 7 */
#define GPIO_BSRR_BS8_Pos (8U)
#define GPIO_BSRR_BS8_Msk (0x1UL << GPIO_BSRR_BS8_Pos) /*!< 0x00000100 */
#define GPIO_BSRR_BS8 GPIO_BSRR_BS8_Msk                /*!< Port x Set bit 8 */
#define GPIO_BSRR_BS9_Pos (9U)
#define GPIO_BSRR_BS9_Msk (0x1UL << GPIO_BSRR_BS9_Pos) /*!< 0x00000200 */
#define GPIO_BSRR_BS9 GPIO_BSRR_BS9_Msk                /*!< Port x Set bit 9 */
#define GPIO_BSRR_BS10_Pos (10U)
#define GPIO_BSRR_BS10_Msk (0x1UL << GPIO_BSRR_BS10_Pos) /*!< 0x00000400 */
#define GPIO_BSRR_BS10 GPIO_BSRR_BS10_Msk                /*!< Port x Set bit 10 */
#define GPIO_BSRR_BS11_Pos (11U)
#define GPIO_BSRR_BS11_Msk (0x1UL << GPIO_BSRR_BS11_Pos) /*!< 0x00000800 */
#define GPIO_BSRR_BS11 GPIO_BSRR_BS11_Msk                /*!< Port x Set bit 11 */
#define GPIO_BSRR_BS12_Pos (12U)
#define GPIO_BSRR_BS12_Msk (0x1UL << GPIO_BSRR_BS12_Pos) /*!< 0x00001000 */
#define GPIO_BSRR_BS12 GPIO_BSRR_BS12_Msk                /*!< Port x Set bit 12 */
#define GPIO_BSRR_BS13_Pos (13U)
#define GPIO_BSRR_BS13_Msk (0x1UL << GPIO_BSRR_BS13_Pos) /*!< 0x00002000 */
#define GPIO_BSRR_BS13 GPIO_BSRR_BS13_Msk                /*!< Port x Set bit 13 */
#define GPIO_BSRR_BS14_Pos (14U)
#define GPIO_BSRR_BS14_Msk (0x1UL << GPIO_BSRR_BS14_Pos) /*!< 0x00004000 */
#define GPIO_BSRR_BS14 GPIO_BSRR_BS14_Msk                /*!< Port x Set bit 14 */
#define GPIO_BSRR_BS15_Pos (15U)
#define GPIO_BSRR_BS15_Msk (0x1UL << GPIO_BSRR_BS15_Pos) /*!< 0x00008000 */
#define GPIO_BSRR_BS15 GPIO_BSRR_BS15_Msk                /*!< Port x Set bit 15 */

#define GPIO_BSRR_BR0_Pos (16U)
#define GPIO_BSRR_BR0_Msk (0x1UL << GPIO_BSRR_BR0_Pos) /*!< 0x00010000 */
#define GPIO_BSRR_BR0 GPIO_BSRR_BR0_Msk                /*!< Port x Reset bit 0 */
#define GPIO_BSRR_BR1_Pos (17U)
#define GPIO_BSRR_BR1_Msk (0x1UL << GPIO_BSRR_BR1_Pos) /*!< 0x00020000 */
#define GPIO_BSRR_BR1 GPIO_BSRR_BR1_Msk                /*!< Port x Reset bit 1 */
#define GPIO_BSRR_BR2_Pos (18U)
#define GPIO_BSRR_BR2_Msk (0x1UL << GPIO_BSRR_BR2_Pos) /*!< 0x00040000 */
#define GPIO_BSRR_BR2 GPIO_BSRR_BR2_Msk                /*!< Port x Reset bit 2 */
#define GPIO_BSRR_BR3_Pos (19U)
#define GPIO_BSRR_BR3_Msk (0x1UL << GPIO_BSRR_BR3_Pos) /*!< 0x00080000 */
#define GPIO_BSRR_BR3 GPIO_BSRR_BR3_Msk                /*!< Port x Reset bit 3 */
#define GPIO_BSRR_BR4_Pos (20U)
#define GPIO_BSRR_BR4_Msk (0x1UL << GPIO_BSRR_BR4_Pos) /*!< 0x00100000 */
#define GPIO_BSRR_BR4 GPIO_BSRR_BR4_Msk                /*!< Port x Reset bit 4 */
#define GPIO_BSRR_BR5_Pos (21U)
#define GPIO_BSRR_BR5_Msk (0x1UL << GPIO_BSRR_BR5_Pos) /*!< 0x00200000 */
#define GPIO_BSRR_BR5 GPIO_BSRR_BR5_Msk                /*!< Port x Reset bit 5 */
#define GPIO_BSRR_BR6_Pos (22U)
#define GPIO_BSRR_BR6_Msk (0x1UL << GPIO_BSRR_BR6_Pos) /*!< 0x00400000 */
#define GPIO_BSRR_BR6 GPIO_BSRR_BR6_Msk                /*!< Port x Reset bit 6 */
#define GPIO_BSRR_BR7_Pos (23U)
#define GPIO_BSRR_BR7_Msk (0x1UL << GPIO_BSRR_BR7_Pos) /*!< 0x00800000 */
#define GPIO_BSRR_BR7 GPIO_BSRR_BR7_Msk                /*!< Port x Reset bit 7 */
#define GPIO_BSRR_BR8_Pos (24U)
#define GPIO_BSRR_BR8_Msk (0x1UL << GPIO_BSRR_BR8_Pos) /*!< 0x01000000 */
#define GPIO_BSRR_BR8 GPIO_BSRR_BR8_Msk                /*!< Port x Reset bit 8 */
#define GPIO_BSRR_BR9_Pos (25U)
#define GPIO_BSRR_BR9_Msk (0x1UL << GPIO_BSRR_BR9_Pos) /*!< 0x02000000 */
#define GPIO_BSRR_BR9 GPIO_BSRR_BR9_Msk                /*!< Port x Reset bit 9 */
#define GPIO_BSRR_BR10_Pos (26U)
#define GPIO_BSRR_BR10_Msk (0x1UL << GPIO_BSRR_BR10_Pos) /*!< 0x04000000 */
#define GPIO_BSRR_BR10 GPIO_BSRR_BR10_Msk                /*!< Port x Reset bit 10 */
#define GPIO_BSRR_BR11_Pos (27U)
#define GPIO_BSRR_BR11_Msk (0x1UL << GPIO_BSRR_BR11_Pos) /*!< 0x08000000 */
#define GPIO_BSRR_BR11 GPIO_BSRR_BR11_Msk                /*!< Port x Reset bit 11 */
#define GPIO_BSRR_BR12_Pos (28U)
#define GPIO_BSRR_BR12_Msk (0x1UL << GPIO_BSRR_BR12_Pos) /*!< 0x10000000 */
#define GPIO_BSRR_BR12 GPIO_BSRR_BR12_Msk                /*!< Port x Reset bit 12 */
#define GPIO_BSRR_BR13_Pos (29U)
#define GPIO_BSRR_BR13_Msk (0x1UL << GPIO_BSRR_BR13_Pos) /*!< 0x20000000 */
#define GPIO_BSRR_BR13 GPIO_BSRR_BR13_Msk                /*!< Port x Reset bit 13 */
#define GPIO_BSRR_BR14_Pos (30U)
#define GPIO_BSRR_BR14_Msk (0x1UL << GPIO_BSRR_BR14_Pos) /*!< 0x40000000 */
#define GPIO_BSRR_BR14 GPIO_BSRR_BR14_Msk                /*!< Port x Reset bit 14 */
#define GPIO_BSRR_BR15_Pos (31U)
#define GPIO_BSRR_BR15_Msk (0x1UL << GPIO_BSRR_BR15_Pos) /*!< 0x80000000 */
#define GPIO_BSRR_BR15 GPIO_BSRR_BR15_Msk                /*!< Port x Reset bit 15 */

/*******************  Bit definition for GPIO_BRR register  *******************/
#define GPIO_BRR_BR0_Pos (0U)
#define GPIO_BRR_BR0_Msk (0x1UL << GPIO_BRR_BR0_Pos) /*!< 0x00000001 */
#define GPIO_BRR_BR0 GPIO_BRR_BR0_Msk                /*!< Port x Reset bit 0 */
#define GPIO_BRR_BR1_Pos (1U)
#define GPIO_BRR_BR1_Msk (0x1UL << GPIO_BRR_BR1_Pos) /*!< 0x00000002 */
#define GPIO_BRR_BR1 GPIO_BRR_BR1_Msk                /*!< Port x Reset bit 1 */
#define GPIO_BRR_BR2_Pos (2U)
#define GPIO_BRR_BR2_Msk (0x1UL << GPIO_BRR_BR2_Pos) /*!< 0x00000004 */
#define GPIO_BRR_BR2 GPIO_BRR_BR2_Msk                /*!< Port x Reset bit 2 */
#define GPIO_BRR_BR3_Pos (3U)
#define GPIO_BRR_BR3_Msk (0x1UL << GPIO_BRR_BR3_Pos) /*!< 0x00000008 */
#define GPIO_BRR_BR3 GPIO_BRR_BR3_Msk                /*!< Port x Reset bit 3 */
#define GPIO_BRR_BR4_Pos (4U)
#define GPIO_BRR_BR4_Msk (0x1UL << GPIO_BRR_BR4_Pos) /*!< 0x00000010 */
#define GPIO_BRR_BR4 GPIO_BRR_BR4_Msk                /*!< Port x Reset bit 4 */
#define GPIO_BRR_BR5_Pos (5U)
#define GPIO_BRR_BR5_Msk (0x1UL << GPIO_BRR_BR5_Pos) /*!< 0x00000020 */
#define GPIO_BRR_BR5 GPIO_BRR_BR5_Msk                /*!< Port x Reset bit 5 */
#define GPIO_BRR_BR6_Pos (6U)
#define GPIO_BRR_BR6_Msk (0x1UL << GPIO_BRR_BR6_Pos) /*!< 0x00000040 */
#define GPIO_BRR_BR6 GPIO_BRR_BR6_Msk                /*!< Port x Reset bit 6 */
#define GPIO_BRR_BR7_Pos (7U)
#define GPIO_BRR_BR7_Msk (0x1UL << GPIO_BRR_BR7_Pos) /*!< 0x00000080 */
#define GPIO_BRR_BR7 GPIO_BRR_BR7_Msk                /*!< Port x Reset bit 7 */
#define GPIO_BRR_BR8_Pos (8U)
#define GPIO_BRR_BR8_Msk (0x1UL << GPIO_BRR_BR8_Pos) /*!< 0x00000100 */
#define GPIO_BRR_BR8 GPIO_BRR_BR8_Msk                /*!< Port x Reset bit 8 */
#define GPIO_BRR_BR9_Pos (9U)
#define GPIO_BRR_BR9_Msk (0x1UL << GPIO_BRR_BR9_Pos) /*!< 0x00000200 */
#define GPIO_BRR_BR9 GPIO_BRR_BR9_Msk                /*!< Port x Reset bit 9 */
#define GPIO_BRR_BR10_Pos (10U)
#define GPIO_BRR_BR10_Msk (0x1UL << GPIO_BRR_BR10_Pos) /*!< 0x00000400 */
#define GPIO_BRR_BR10 GPIO_BRR_BR10_Msk                /*!< Port x Reset bit 10 */
#define GPIO_BRR_BR11_Pos (11U)
#define GPIO_BRR_BR11_Msk (0x1UL << GPIO_BRR_BR11_Pos) /*!< 0x00000800 */
#define GPIO_BRR_BR11 GPIO_BRR_BR11_Msk                /*!< Port x Reset bit 11 */
#define GPIO_BRR_BR12_Pos (12U)
#define GPIO_BRR_BR12_Msk (0x1UL << GPIO_BRR_BR12_Pos) /*!< 0x00001000 */
#define GPIO_BRR_BR12 GPIO_BRR_BR12_Msk                /*!< Port x Reset bit 12 */
#define GPIO_BRR_BR13_Pos (13U)
#define GPIO_BRR_BR13_Msk (0x1UL << GPIO_BRR_BR13_Pos) /*!< 0x00002000 */
#define GPIO_BRR_BR13 GPIO_BRR_BR13_Msk                /*!< Port x Reset bit 13 */
#define GPIO_BRR_BR14_Pos (14U)
#define GPIO_BRR_BR14_Msk (0x1UL << GPIO_BRR_BR14_Pos) /*!< 0x00004000 */
#define GPIO_BRR_BR14 GPIO_BRR_BR14_Msk                /*!< Port x Reset bit 14 */
#define GPIO_BRR_BR15_Pos (15U)
#define GPIO_BRR_BR15_Msk (0x1UL << GPIO_BRR_BR15_Pos) /*!< 0x00008000 */
#define GPIO_BRR_BR15 GPIO_BRR_BR15_Msk                /*!< Port x Reset bit 15 */

/******************  Bit definition for GPIO_LCKR register  *******************/
#define GPIO_LCKR_LCK0_Pos (0U)
#define GPIO_LCKR_LCK0_Msk (0x1UL << GPIO_LCKR_LCK0_Pos) /*!< 0x00000001 */
#define GPIO_LCKR_LCK0 GPIO_LCKR_LCK0_Msk                /*!< Port x Lock bit 0 */
#define GPIO_LCKR_LCK1_Pos (1U)
#define GPIO_LCKR_LCK1_Msk (0x1UL << GPIO_LCKR_LCK1_Pos) /*!< 0x00000002 */
#define GPIO_LCKR_LCK1 GPIO_LCKR_LCK1_Msk                /*!< Port x Lock bit 1 */
#define GPIO_LCKR_LCK2_Pos (2U)
#define GPIO_LCKR_LCK2_Msk (0x1UL << GPIO_LCKR_LCK2_Pos) /*!< 0x00000004 */
#define GPIO_LCKR_LCK2 GPIO_LCKR_LCK2_Msk                /*!< Port x Lock bit 2 */
#define GPIO_LCKR_LCK3_Pos (3U)
#define GPIO_LCKR_LCK3_Msk (0x1UL << GPIO_LCKR_LCK3_Pos) /*!< 0x00000008 */
#define GPIO_LCKR_LCK3 GPIO_LCKR_LCK3_Msk                /*!< Port x Lock bit 3 */
#define GPIO_LCKR_LCK4_Pos (4U)
#define GPIO_LCKR_LCK4_Msk (0x1UL << GPIO_LCKR_LCK4_Pos) /*!< 0x00000010 */
#define GPIO_LCKR_LCK4 GPIO_LCKR_LCK4_Msk                /*!< Port x Lock bit 4 */
#define GPIO_LCKR_LCK5_Pos (5U)
#define GPIO_LCKR_LCK5_Msk (0x1UL << GPIO_LCKR_LCK5_Pos) /*!< 0x00000020 */
#define GPIO_LCKR_LCK5 GPIO_LCKR_LCK5_Msk                /*!< Port x Lock bit 5 */
#define GPIO_LCKR_LCK6_Pos (6U)
#define GPIO_LCKR_LCK6_Msk (0x1UL << GPIO_LCKR_LCK6_Pos) /*!< 0x00000040 */
#define GPIO_LCKR_LCK6 GPIO_LCKR_LCK6_Msk                /*!< Port x Lock bit 6 */
#define GPIO_LCKR_LCK7_Pos (7U)
#define GPIO_LCKR_LCK7_Msk (0x1UL << GPIO_LCKR_LCK7_Pos) /*!< 0x00000080 */
#define GPIO_LCKR_LCK7 GPIO_LCKR_LCK7_Msk                /*!< Port x Lock bit 7 */
#define GPIO_LCKR_LCK8_Pos (8U)
#define GPIO_LCKR_LCK8_Msk (0x1UL << GPIO_LCKR_LCK8_Pos) /*!< 0x00000100 */
#define GPIO_LCKR_LCK8 GPIO_LCKR_LCK8_Msk                /*!< Port x Lock bit 8 */
#define GPIO_LCKR_LCK9_Pos (9U)
#define GPIO_LCKR_LCK9_Msk (0x1UL << GPIO_LCKR_LCK9_Pos) /*!< 0x00000200 */
#define GPIO_LCKR_LCK9 GPIO_LCKR_LCK9_Msk                /*!< Port x Lock bit 9 */
#define GPIO_LCKR_LCK10_Pos (10U)
#define GPIO_LCKR_LCK10_Msk (0x1UL << GPIO_LCKR_LCK10_Pos) /*!< 0x00000400 */
#define GPIO_LCKR_LCK10 GPIO_LCKR_LCK10_Msk                /*!< Port x Lock bit 10 */
#define GPIO_LCKR_LCK11_Pos (11U)
#define GPIO_LCKR_LCK11_Msk (0x1UL << GPIO_LCKR_LCK11_Pos) /*!< 0x00000800 */
#define GPIO_LCKR_LCK11 GPIO_LCKR_LCK11_Msk                /*!< Port x Lock bit 11 */
#define GPIO_LCKR_LCK12_Pos (12U)
#define GPIO_LCKR_LCK12_Msk (0x1UL << GPIO_LCKR_LCK12_Pos) /*!< 0x00001000 */
#define GPIO_LCKR_LCK12 GPIO_LCKR_LCK12_Msk                /*!< Port x Lock bit 12 */
#define GPIO_LCKR_LCK13_Pos (13U)
#define GPIO_LCKR_LCK13_Msk (0x1UL << GPIO_LCKR_LCK13_Pos) /*!< 0x00002000 */
#define GPIO_LCKR_LCK13 GPIO_LCKR_LCK13_Msk                /*!< Port x Lock bit 13 */
#define GPIO_LCKR_LCK14_Pos (14U)
#define GPIO_LCKR_LCK14_Msk (0x1UL << GPIO_LCKR_LCK14_Pos) /*!< 0x00004000 */
#define GPIO_LCKR_LCK14 GPIO_LCKR_LCK14_Msk                /*!< Port x Lock bit 14 */
#define GPIO_LCKR_LCK15_Pos (15U)
#define GPIO_LCKR_LCK15_Msk (0x1UL << GPIO_LCKR_LCK15_Pos) /*!< 0x00008000 */
#define GPIO_LCKR_LCK15 GPIO_LCKR_LCK15_Msk                /*!< Port x Lock bit 15 */
#define GPIO_LCKR_LCKK_Pos (16U)
#define GPIO_LCKR_LCKK_Msk (0x1UL << GPIO_LCKR_LCKK_Pos) /*!< 0x00010000 */
#define GPIO_LCKR_LCKK GPIO_LCKR_LCKK_Msk                /*!< Lock key */

/*----------------------------------------------------------------------------*/

/******************  Bit definition for AFIO_EVCR register  *******************/
#define AFIO_EVCR_PIN_Pos (0U)
#define AFIO_EVCR_PIN_Msk (0xFUL << AFIO_EVCR_PIN_Pos) /*!< 0x0000000F */
#define AFIO_EVCR_PIN AFIO_EVCR_PIN_Msk                /*!< PIN[3:0] bits (Pin selection) */
#define AFIO_EVCR_PIN_0 (0x1UL << AFIO_EVCR_PIN_Pos)   /*!< 0x00000001 */
#define AFIO_EVCR_PIN_1 (0x2UL << AFIO_EVCR_PIN_Pos)   /*!< 0x00000002 */
#define AFIO_EVCR_PIN_2 (0x4UL << AFIO_EVCR_PIN_Pos)   /*!< 0x00000004 */
#define AFIO_EVCR_PIN_3 (0x8UL << AFIO_EVCR_PIN_Pos)   /*!< 0x00000008 */

/*!< PIN configuration */
#define AFIO_EVCR_PIN_PX0 0x00000000U /*!< Pin 0 selected */
#define AFIO_EVCR_PIN_PX1_Pos (0U)
#define AFIO_EVCR_PIN_PX1_Msk (0x1UL << AFIO_EVCR_PIN_PX1_Pos) /*!< 0x00000001 */
#define AFIO_EVCR_PIN_PX1 AFIO_EVCR_PIN_PX1_Msk                /*!< Pin 1 selected */
#define AFIO_EVCR_PIN_PX2_Pos (1U)
#define AFIO_EVCR_PIN_PX2_Msk (0x1UL << AFIO_EVCR_PIN_PX2_Pos) /*!< 0x00000002 */
#define AFIO_EVCR_PIN_PX2 AFIO_EVCR_PIN_PX2_Msk                /*!< Pin 2 selected */
#define AFIO_EVCR_PIN_PX3_Pos (0U)
#define AFIO_EVCR_PIN_PX3_Msk (0x3UL << AFIO_EVCR_PIN_PX3_Pos) /*!< 0x00000003 */
#define AFIO_EVCR_PIN_PX3 AFIO_EVCR_PIN_PX3_Msk                /*!< Pin 3 selected */
#define AFIO_EVCR_PIN_PX4_Pos (2U)
#define AFIO_EVCR_PIN_PX4_Msk (0x1UL << AFIO_EVCR_PIN_PX4_Pos) /*!< 0x00000004 */
#define AFIO_EVCR_PIN_PX4 AFIO_EVCR_PIN_PX4_Msk                /*!< Pin 4 selected */
#define AFIO_EVCR_PIN_PX5_Pos (0U)
#define AFIO_EVCR_PIN_PX5_Msk (0x5UL << AFIO_EVCR_PIN_PX5_Pos) /*!< 0x00000005 */
#define AFIO_EVCR_PIN_PX5 AFIO_EVCR_PIN_PX5_Msk                /*!< Pin 5 selected */
#define AFIO_EVCR_PIN_PX6_Pos (1U)
#define AFIO_EVCR_PIN_PX6_Msk (0x3UL << AFIO_EVCR_PIN_PX6_Pos) /*!< 0x00000006 */
#define AFIO_EVCR_PIN_PX6 AFIO_EVCR_PIN_PX6_Msk                /*!< Pin 6 selected */
#define AFIO_EVCR_PIN_PX7_Pos (0U)
#define AFIO_EVCR_PIN_PX7_Msk (0x7UL << AFIO_EVCR_PIN_PX7_Pos) /*!< 0x00000007 */
#define AFIO_EVCR_PIN_PX7 AFIO_EVCR_PIN_PX7_Msk                /*!< Pin 7 selected */
#define AFIO_EVCR_PIN_PX8_Pos (3U)
#define AFIO_EVCR_PIN_PX8_Msk (0x1UL << AFIO_EVCR_PIN_PX8_Pos) /*!< 0x00000008 */
#define AFIO_EVCR_PIN_PX8 AFIO_EVCR_PIN_PX8_Msk                /*!< Pin 8 selected */
#define AFIO_EVCR_PIN_PX9_Pos (0U)
#define AFIO_EVCR_PIN_PX9_Msk (0x9UL << AFIO_EVCR_PIN_PX9_Pos) /*!< 0x00000009 */
#define AFIO_EVCR_PIN_PX9 AFIO_EVCR_PIN_PX9_Msk                /*!< Pin 9 selected */
#define AFIO_EVCR_PIN_PX10_Pos (1U)
#define AFIO_EVCR_PIN_PX10_Msk (0x5UL << AFIO_EVCR_PIN_PX10_Pos) /*!< 0x0000000A */
#define AFIO_EVCR_PIN_PX10 AFIO_EVCR_PIN_PX10_Msk                /*!< Pin 10 selected */
#define AFIO_EVCR_PIN_PX11_Pos (0U)
#define AFIO_EVCR_PIN_PX11_Msk (0xBUL << AFIO_EVCR_PIN_PX11_Pos) /*!< 0x0000000B */
#define AFIO_EVCR_PIN_PX11 AFIO_EVCR_PIN_PX11_Msk                /*!< Pin 11 selected */
#define AFIO_EVCR_PIN_PX12_Pos (2U)
#define AFIO_EVCR_PIN_PX12_Msk (0x3UL << AFIO_EVCR_PIN_PX12_Pos) /*!< 0x0000000C */
#define AFIO_EVCR_PIN_PX12 AFIO_EVCR_PIN_PX12_Msk                /*!< Pin 12 selected */
#define AFIO_EVCR_PIN_PX13_Pos (0U)
#define AFIO_EVCR_PIN_PX13_Msk (0xDUL << AFIO_EVCR_PIN_PX13_Pos) /*!< 0x0000000D */
#define AFIO_EVCR_PIN_PX13 AFIO_EVCR_PIN_PX13_Msk                /*!< Pin 13 selected */
#define AFIO_EVCR_PIN_PX14_Pos (1U)
#define AFIO_EVCR_PIN_PX14_Msk (0x7UL << AFIO_EVCR_PIN_PX14_Pos) /*!< 0x0000000E */
#define AFIO_EVCR_PIN_PX14 AFIO_EVCR_PIN_PX14_Msk                /*!< Pin 14 selected */
#define AFIO_EVCR_PIN_PX15_Pos (0U)
#define AFIO_EVCR_PIN_PX15_Msk (0xFUL << AFIO_EVCR_PIN_PX15_Pos) /*!< 0x0000000F */
#define AFIO_EVCR_PIN_PX15 AFIO_EVCR_PIN_PX15_Msk                /*!< Pin 15 selected */

#define AFIO_EVCR_PORT_Pos (4U)
#define AFIO_EVCR_PORT_Msk (0x7UL << AFIO_EVCR_PORT_Pos) /*!< 0x00000070 */
#define AFIO_EVCR_PORT AFIO_EVCR_PORT_Msk                /*!< PORT[2:0] bits (Port selection) */
#define AFIO_EVCR_PORT_0 (0x1UL << AFIO_EVCR_PORT_Pos)   /*!< 0x00000010 */
#define AFIO_EVCR_PORT_1 (0x2UL << AFIO_EVCR_PORT_Pos)   /*!< 0x00000020 */
#define AFIO_EVCR_PORT_2 (0x4UL << AFIO_EVCR_PORT_Pos)   /*!< 0x00000040 */

/*!< PORT configuration */
#define AFIO_EVCR_PORT_PA 0x00000000 /*!< Port A selected */
#define AFIO_EVCR_PORT_PB_Pos (4U)
#define AFIO_EVCR_PORT_PB_Msk (0x1UL << AFIO_EVCR_PORT_PB_Pos) /*!< 0x00000010 */
#define AFIO_EVCR_PORT_PB AFIO_EVCR_PORT_PB_Msk                /*!< Port B selected */
#define AFIO_EVCR_PORT_PC_Pos (5U)
#define AFIO_EVCR_PORT_PC_Msk (0x1UL << AFIO_EVCR_PORT_PC_Pos) /*!< 0x00000020 */
#define AFIO_EVCR_PORT_PC AFIO_EVCR_PORT_PC_Msk                /*!< Port C selected */
#define AFIO_EVCR_PORT_PD_Pos (4U)
#define AFIO_EVCR_PORT_PD_Msk (0x3UL << AFIO_EVCR_PORT_PD_Pos) /*!< 0x00000030 */
#define AFIO_EVCR_PORT_PD AFIO_EVCR_PORT_PD_Msk                /*!< Port D selected */
#define AFIO_EVCR_PORT_PE_Pos (6U)
#define AFIO_EVCR_PORT_PE_Msk (0x1UL << AFIO_EVCR_PORT_PE_Pos) /*!< 0x00000040 */
#define AFIO_EVCR_PORT_PE AFIO_EVCR_PORT_PE_Msk                /*!< Port E selected */

#define AFIO_EVCR_EVOE_Pos (7U)
#define AFIO_EVCR_EVOE_Msk (0x1UL << AFIO_EVCR_EVOE_Pos) /*!< 0x00000080 */
#define AFIO_EVCR_EVOE AFIO_EVCR_EVOE_Msk                /*!< Event Output Enable */

/******************  Bit definition for AFIO_MAPR register  *******************/
#define AFIO_MAPR_SPI1_REMAP_Pos (0U)
#define AFIO_MAPR_SPI1_REMAP_Msk (0x1UL << AFIO_MAPR_SPI1_REMAP_Pos) /*!< 0x00000001 */
#define AFIO_MAPR_SPI1_REMAP AFIO_MAPR_SPI1_REMAP_Msk                /*!< SPI1 remapping */
#define AFIO_MAPR_I2C1_REMAP_Pos (1U)
#define AFIO_MAPR_I2C1_REMAP_Msk (0x1UL << AFIO_MAPR_I2C1_REMAP_Pos) /*!< 0x00000002 */
#define AFIO_MAPR_I2C1_REMAP AFIO_MAPR_I2C1_REMAP_Msk                /*!< I2C1 remapping */
#define AFIO_MAPR_USART1_REMAP_Pos (2U)
#define AFIO_MAPR_USART1_REMAP_Msk (0x1UL << AFIO_MAPR_USART1_REMAP_Pos) /*!< 0x00000004 */
#define AFIO_MAPR_USART1_REMAP AFIO_MAPR_USART1_REMAP_Msk                /*!< USART1 remapping */
#define AFIO_MAPR_USART2_REMAP_Pos (3U)
#define AFIO_MAPR_USART2_REMAP_Msk (0x1UL << AFIO_MAPR_USART2_REMAP_Pos) /*!< 0x00000008 */
#define AFIO_MAPR_USART2_REMAP AFIO_MAPR_USART2_REMAP_Msk                /*!< USART2 remapping */

#define AFIO_MAPR_USART3_REMAP_Pos (4U)
#define AFIO_MAPR_USART3_REMAP_Msk (0x3UL << AFIO_MAPR_USART3_REMAP_Pos) /*!< 0x00000030 */
#define AFIO_MAPR_USART3_REMAP AFIO_MAPR_USART3_REMAP_Msk                /*!< USART3_REMAP[1:0] bits (USART3 remapping) */
#define AFIO_MAPR_USART3_REMAP_0 (0x1UL << AFIO_MAPR_USART3_REMAP_Pos)   /*!< 0x00000010 */
#define AFIO_MAPR_USART3_REMAP_1 (0x2UL << AFIO_MAPR_USART3_REMAP_Pos)   /*!< 0x00000020 */

/* USART3_REMAP configuration */
#define AFIO_MAPR_USART3_REMAP_NOREMAP 0x00000000U /*!< No remap (TX/PB10, RX/PB11, CK/PB12, CTS/PB13, RTS/PB14) */
#define AFIO_MAPR_USART3_REMAP_PARTIALREMAP_Pos (4U)
#define AFIO_MAPR_USART3_REMAP_PARTIALREMAP_Msk (0x1UL << AFIO_MAPR_USART3_REMAP_PARTIALREMAP_Pos) /*!< 0x00000010 */
#define AFIO_MAPR_USART3_REMAP_PARTIALREMAP \
    AFIO_MAPR_USART3_REMAP_PARTIALREMAP_Msk /*!< Partial remap (TX/PC10, RX/PC11, CK/PC12, CTS/PB13, RTS/PB14) */
#define AFIO_MAPR_USART3_REMAP_FULLREMAP_Pos (4U)
#define AFIO_MAPR_USART3_REMAP_FULLREMAP_Msk (0x3UL << AFIO_MAPR_USART3_REMAP_FULLREMAP_Pos) /*!< 0x00000030 */
#define AFIO_MAPR_USART3_REMAP_FULLREMAP AFIO_MAPR_USART3_REMAP_FULLREMAP_Msk /*!< Full remap (TX/PD8, RX/PD9, CK/PD10, CTS/PD11, RTS/PD12) */

#define AFIO_MAPR_TIM1_REMAP_Pos (6U)
#define AFIO_MAPR_TIM1_REMAP_Msk (0x3UL << AFIO_MAPR_TIM1_REMAP_Pos) /*!< 0x000000C0 */
#define AFIO_MAPR_TIM1_REMAP AFIO_MAPR_TIM1_REMAP_Msk                /*!< TIM1_REMAP[1:0] bits (TIM1 remapping) */
#define AFIO_MAPR_TIM1_REMAP_0 (0x1UL << AFIO_MAPR_TIM1_REMAP_Pos)   /*!< 0x00000040 */
#define AFIO_MAPR_TIM1_REMAP_1 (0x2UL << AFIO_MAPR_TIM1_REMAP_Pos)   /*!< 0x00000080 */

/*!< TIM1_REMAP configuration */
#define AFIO_MAPR_TIM1_REMAP_NOREMAP                                                                            \
    0x00000000U /*!< No remap (ETR/PA12, CH1/PA8, CH2/PA9, CH3/PA10, CH4/PA11, BKIN/PB12, CH1N/PB13, CH2N/PB14, \
                   CH3N/PB15) */
#define AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_Pos (6U)
#define AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_Msk (0x1UL << AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_Pos) /*!< 0x00000040 */
#define AFIO_MAPR_TIM1_REMAP_PARTIALREMAP                                                                     \
    AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_Msk /*!< Partial remap (ETR/PA12, CH1/PA8, CH2/PA9, CH3/PA10, CH4/PA11, \
                                             BKIN/PA6, CH1N/PA7, CH2N/PB0, CH3N/PB1) */
#define AFIO_MAPR_TIM1_REMAP_FULLREMAP_Pos (6U)
#define AFIO_MAPR_TIM1_REMAP_FULLREMAP_Msk (0x3UL << AFIO_MAPR_TIM1_REMAP_FULLREMAP_Pos) /*!< 0x000000C0 */
#define AFIO_MAPR_TIM1_REMAP_FULLREMAP                                                                             \
    AFIO_MAPR_TIM1_REMAP_FULLREMAP_Msk /*!< Full remap (ETR/PE7, CH1/PE9, CH2/PE11, CH3/PE13, CH4/PE14, BKIN/PE15, \
                                          CH1N/PE8, CH2N/PE10, CH3N/PE12) */

#define AFIO_MAPR_TIM2_REMAP_Pos (8U)
#define AFIO_MAPR_TIM2_REMAP_Msk (0x3UL << AFIO_MAPR_TIM2_REMAP_Pos) /*!< 0x00000300 */
#define AFIO_MAPR_TIM2_REMAP AFIO_MAPR_TIM2_REMAP_Msk                /*!< TIM2_REMAP[1:0] bits (TIM2 remapping) */
#define AFIO_MAPR_TIM2_REMAP_0 (0x1UL << AFIO_MAPR_TIM2_REMAP_Pos)   /*!< 0x00000100 */
#define AFIO_MAPR_TIM2_REMAP_1 (0x2UL << AFIO_MAPR_TIM2_REMAP_Pos)   /*!< 0x00000200 */

/*!< TIM2_REMAP configuration */
#define AFIO_MAPR_TIM2_REMAP_NOREMAP 0x00000000U /*!< No remap (CH1/ETR/PA0, CH2/PA1, CH3/PA2, CH4/PA3) */
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_Pos (8U)
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_Msk (0x1UL << AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_Pos) /*!< 0x00000100 */
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1 AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_Msk /*!< Partial remap (CH1/ETR/PA15, CH2/PB3, CH3/PA2, CH4/PA3) */
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_Pos (9U)
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_Msk (0x1UL << AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_Pos) /*!< 0x00000200 */
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2 AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_Msk /*!< Partial remap (CH1/ETR/PA0, CH2/PA1, CH3/PB10, CH4/PB11) */
#define AFIO_MAPR_TIM2_REMAP_FULLREMAP_Pos (8U)
#define AFIO_MAPR_TIM2_REMAP_FULLREMAP_Msk (0x3UL << AFIO_MAPR_TIM2_REMAP_FULLREMAP_Pos) /*!< 0x00000300 */
#define AFIO_MAPR_TIM2_REMAP_FULLREMAP AFIO_MAPR_TIM2_REMAP_FULLREMAP_Msk /*!< Full remap (CH1/ETR/PA15, CH2/PB3, CH3/PB10, CH4/PB11) */

#define AFIO_MAPR_TIM3_REMAP_Pos (10U)
#define AFIO_MAPR_TIM3_REMAP_Msk (0x3UL << AFIO_MAPR_TIM3_REMAP_Pos) /*!< 0x00000C00 */
#define AFIO_MAPR_TIM3_REMAP AFIO_MAPR_TIM3_REMAP_Msk                /*!< TIM3_REMAP[1:0] bits (TIM3 remapping) */
#define AFIO_MAPR_TIM3_REMAP_0 (0x1UL << AFIO_MAPR_TIM3_REMAP_Pos)   /*!< 0x00000400 */
#define AFIO_MAPR_TIM3_REMAP_1 (0x2UL << AFIO_MAPR_TIM3_REMAP_Pos)   /*!< 0x00000800 */

/*!< TIM3_REMAP configuration */
#define AFIO_MAPR_TIM3_REMAP_NOREMAP 0x00000000U /*!< No remap (CH1/PA6, CH2/PA7, CH3/PB0, CH4/PB1) */
#define AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_Pos (11U)
#define AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_Msk (0x1UL << AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_Pos) /*!< 0x00000800 */
#define AFIO_MAPR_TIM3_REMAP_PARTIALREMAP AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_Msk /*!< Partial remap (CH1/PB4, CH2/PB5, CH3/PB0, CH4/PB1) */
#define AFIO_MAPR_TIM3_REMAP_FULLREMAP_Pos (10U)
#define AFIO_MAPR_TIM3_REMAP_FULLREMAP_Msk (0x3UL << AFIO_MAPR_TIM3_REMAP_FULLREMAP_Pos) /*!< 0x00000C00 */
#define AFIO_MAPR_TIM3_REMAP_FULLREMAP AFIO_MAPR_TIM3_REMAP_FULLREMAP_Msk                /*!< Full remap (CH1/PC6, CH2/PC7, CH3/PC8, CH4/PC9) */

#define AFIO_MAPR_TIM4_REMAP_Pos (12U)
#define AFIO_MAPR_TIM4_REMAP_Msk (0x1UL << AFIO_MAPR_TIM4_REMAP_Pos) /*!< 0x00001000 */
#define AFIO_MAPR_TIM4_REMAP AFIO_MAPR_TIM4_REMAP_Msk                /*!< TIM4_REMAP bit (TIM4 remapping) */

#define AFIO_MAPR_CAN_REMAP_Pos (13U)
#define AFIO_MAPR_CAN_REMAP_Msk (0x3UL << AFIO_MAPR_CAN_REMAP_Pos) /*!< 0x00006000 */
#define AFIO_MAPR_CAN_REMAP AFIO_MAPR_CAN_REMAP_Msk                /*!< CAN_REMAP[1:0] bits (CAN Alternate function remapping) */
#define AFIO_MAPR_CAN_REMAP_0 (0x1UL << AFIO_MAPR_CAN_REMAP_Pos)   /*!< 0x00002000 */
#define AFIO_MAPR_CAN_REMAP_1 (0x2UL << AFIO_MAPR_CAN_REMAP_Pos)   /*!< 0x00004000 */

/*!< CAN_REMAP configuration */
#define AFIO_MAPR_CAN_REMAP_REMAP1 0x00000000U /*!< CANRX mapped to PA11, CANTX mapped to PA12 */
#define AFIO_MAPR_CAN_REMAP_REMAP2_Pos (14U)
#define AFIO_MAPR_CAN_REMAP_REMAP2_Msk (0x1UL << AFIO_MAPR_CAN_REMAP_REMAP2_Pos) /*!< 0x00004000 */
#define AFIO_MAPR_CAN_REMAP_REMAP2 AFIO_MAPR_CAN_REMAP_REMAP2_Msk                /*!< CANRX mapped to PB8, CANTX mapped to PB9 */
#define AFIO_MAPR_CAN_REMAP_REMAP3_Pos (13U)
#define AFIO_MAPR_CAN_REMAP_REMAP3_Msk (0x3UL << AFIO_MAPR_CAN_REMAP_REMAP3_Pos) /*!< 0x00006000 */
#define AFIO_MAPR_CAN_REMAP_REMAP3 AFIO_MAPR_CAN_REMAP_REMAP3_Msk                /*!< CANRX mapped to PD0, CANTX mapped to PD1 */

#define AFIO_MAPR_PD01_REMAP_Pos (15U)
#define AFIO_MAPR_PD01_REMAP_Msk (0x1UL << AFIO_MAPR_PD01_REMAP_Pos) /*!< 0x00008000 */
#define AFIO_MAPR_PD01_REMAP AFIO_MAPR_PD01_REMAP_Msk                /*!< Port D0/Port D1 mapping on OSC_IN/OSC_OUT */
#define AFIO_MAPR_TIM5CH4_IREMAP_Pos (16U)
#define AFIO_MAPR_TIM5CH4_IREMAP_Msk (0x1UL << AFIO_MAPR_TIM5CH4_IREMAP_Pos) /*!< 0x00010000 */
#define AFIO_MAPR_TIM5CH4_IREMAP AFIO_MAPR_TIM5CH4_IREMAP_Msk                /*!< TIM5 Channel4 Internal Remap */

/*!< SWJ_CFG configuration */
#define AFIO_MAPR_SWJ_CFG_Pos (24U)
#define AFIO_MAPR_SWJ_CFG_Msk (0x7UL << AFIO_MAPR_SWJ_CFG_Pos) /*!< 0x07000000 */
#define AFIO_MAPR_SWJ_CFG AFIO_MAPR_SWJ_CFG_Msk                /*!< SWJ_CFG[2:0] bits (Serial Wire JTAG configuration) */
#define AFIO_MAPR_SWJ_CFG_0 (0x1UL << AFIO_MAPR_SWJ_CFG_Pos)   /*!< 0x01000000 */
#define AFIO_MAPR_SWJ_CFG_1 (0x2UL << AFIO_MAPR_SWJ_CFG_Pos)   /*!< 0x02000000 */
#define AFIO_MAPR_SWJ_CFG_2 (0x4UL << AFIO_MAPR_SWJ_CFG_Pos)   /*!< 0x04000000 */

#define AFIO_MAPR_SWJ_CFG_RESET 0x00000000U /*!< Full SWJ (JTAG-DP + SW-DP) : Reset State */
#define AFIO_MAPR_SWJ_CFG_NOJNTRST_Pos (24U)
#define AFIO_MAPR_SWJ_CFG_NOJNTRST_Msk (0x1UL << AFIO_MAPR_SWJ_CFG_NOJNTRST_Pos) /*!< 0x01000000 */
#define AFIO_MAPR_SWJ_CFG_NOJNTRST                                                    \
    AFIO_MAPR_SWJ_CFG_NOJNTRST_Msk /*!< Full SWJ (JTAG-DP + SW-DP) but without JNTRST \
                                    */
#define AFIO_MAPR_SWJ_CFG_JTAGDISABLE_Pos (25U)
#define AFIO_MAPR_SWJ_CFG_JTAGDISABLE_Msk (0x1UL << AFIO_MAPR_SWJ_CFG_JTAGDISABLE_Pos) /*!< 0x02000000 */
#define AFIO_MAPR_SWJ_CFG_JTAGDISABLE AFIO_MAPR_SWJ_CFG_JTAGDISABLE_Msk                /*!< JTAG-DP Disabled and SW-DP Enabled */
#define AFIO_MAPR_SWJ_CFG_DISABLE_Pos (26U)
#define AFIO_MAPR_SWJ_CFG_DISABLE_Msk (0x1UL << AFIO_MAPR_SWJ_CFG_DISABLE_Pos) /*!< 0x04000000 */
#define AFIO_MAPR_SWJ_CFG_DISABLE AFIO_MAPR_SWJ_CFG_DISABLE_Msk                /*!< JTAG-DP Disabled and SW-DP Disabled */

/*!< ETH_REMAP configuration */
#define AFIO_MAPR_ETH_REMAP_Pos (21U)
#define AFIO_MAPR_ETH_REMAP_Msk (0x1UL << AFIO_MAPR_ETH_REMAP_Pos) /*!< 0x00200000 */
#define AFIO_MAPR_ETH_REMAP AFIO_MAPR_ETH_REMAP_Msk                /*!< SPI3_REMAP bit (Ethernet MAC I/O remapping) */

/*!< CAN2_REMAP configuration */
#define AFIO_MAPR_CAN2_REMAP_Pos (22U)
#define AFIO_MAPR_CAN2_REMAP_Msk (0x1UL << AFIO_MAPR_CAN2_REMAP_Pos) /*!< 0x00400000 */
#define AFIO_MAPR_CAN2_REMAP AFIO_MAPR_CAN2_REMAP_Msk                /*!< CAN2_REMAP bit (CAN2 I/O remapping) */

/*!< MII_RMII_SEL configuration */
#define AFIO_MAPR_MII_RMII_SEL_Pos (23U)
#define AFIO_MAPR_MII_RMII_SEL_Msk (0x1UL << AFIO_MAPR_MII_RMII_SEL_Pos) /*!< 0x00800000 */
#define AFIO_MAPR_MII_RMII_SEL AFIO_MAPR_MII_RMII_SEL_Msk                /*!< MII_RMII_SEL bit (Ethernet MII or RMII selection) */

/*!< SPI3_REMAP configuration */
#define AFIO_MAPR_SPI3_REMAP_Pos (28U)
#define AFIO_MAPR_SPI3_REMAP_Msk (0x1UL << AFIO_MAPR_SPI3_REMAP_Pos) /*!< 0x10000000 */
#define AFIO_MAPR_SPI3_REMAP AFIO_MAPR_SPI3_REMAP_Msk                /*!< SPI3_REMAP bit (SPI3 remapping) */

/*!< TIM2ITR1_IREMAP configuration */
#define AFIO_MAPR_TIM2ITR1_IREMAP_Pos (29U)
#define AFIO_MAPR_TIM2ITR1_IREMAP_Msk (0x1UL << AFIO_MAPR_TIM2ITR1_IREMAP_Pos) /*!< 0x20000000 */
#define AFIO_MAPR_TIM2ITR1_IREMAP AFIO_MAPR_TIM2ITR1_IREMAP_Msk                /*!< TIM2ITR1_IREMAP bit (TIM2 internal trigger 1 remapping) */

/*!< PTP_PPS_REMAP configuration */
#define AFIO_MAPR_PTP_PPS_REMAP_Pos (30U)
#define AFIO_MAPR_PTP_PPS_REMAP_Msk (0x1UL << AFIO_MAPR_PTP_PPS_REMAP_Pos) /*!< 0x40000000 */
#define AFIO_MAPR_PTP_PPS_REMAP AFIO_MAPR_PTP_PPS_REMAP_Msk                /*!< PTP_PPS_REMAP bit (Ethernet PTP PPS remapping) */

/*****************  Bit definition for AFIO_EXTICR1 register  *****************/
#define AFIO_EXTICR1_EXTI0_Pos (0U)
#define AFIO_EXTICR1_EXTI0_Msk (0xFUL << AFIO_EXTICR1_EXTI0_Pos) /*!< 0x0000000F */
#define AFIO_EXTICR1_EXTI0 AFIO_EXTICR1_EXTI0_Msk                /*!< EXTI 0 configuration */
#define AFIO_EXTICR1_EXTI1_Pos (4U)
#define AFIO_EXTICR1_EXTI1_Msk (0xFUL << AFIO_EXTICR1_EXTI1_Pos) /*!< 0x000000F0 */
#define AFIO_EXTICR1_EXTI1 AFIO_EXTICR1_EXTI1_Msk                /*!< EXTI 1 configuration */
#define AFIO_EXTICR1_EXTI2_Pos (8U)
#define AFIO_EXTICR1_EXTI2_Msk (0xFUL << AFIO_EXTICR1_EXTI2_Pos) /*!< 0x00000F00 */
#define AFIO_EXTICR1_EXTI2 AFIO_EXTICR1_EXTI2_Msk                /*!< EXTI 2 configuration */
#define AFIO_EXTICR1_EXTI3_Pos (12U)
#define AFIO_EXTICR1_EXTI3_Msk (0xFUL << AFIO_EXTICR1_EXTI3_Pos) /*!< 0x0000F000 */
#define AFIO_EXTICR1_EXTI3 AFIO_EXTICR1_EXTI3_Msk                /*!< EXTI 3 configuration */

/*!< EXTI0 configuration */
#define AFIO_EXTICR1_EXTI0_PA 0x00000000U /*!< PA[0] pin */
#define AFIO_EXTICR1_EXTI0_PB_Pos (0U)
#define AFIO_EXTICR1_EXTI0_PB_Msk (0x1UL << AFIO_EXTICR1_EXTI0_PB_Pos) /*!< 0x00000001 */
#define AFIO_EXTICR1_EXTI0_PB AFIO_EXTICR1_EXTI0_PB_Msk                /*!< PB[0] pin */
#define AFIO_EXTICR1_EXTI0_PC_Pos (1U)
#define AFIO_EXTICR1_EXTI0_PC_Msk (0x1UL << AFIO_EXTICR1_EXTI0_PC_Pos) /*!< 0x00000002 */
#define AFIO_EXTICR1_EXTI0_PC AFIO_EXTICR1_EXTI0_PC_Msk                /*!< PC[0] pin */
#define AFIO_EXTICR1_EXTI0_PD_Pos (0U)
#define AFIO_EXTICR1_EXTI0_PD_Msk (0x3UL << AFIO_EXTICR1_EXTI0_PD_Pos) /*!< 0x00000003 */
#define AFIO_EXTICR1_EXTI0_PD AFIO_EXTICR1_EXTI0_PD_Msk                /*!< PD[0] pin */
#define AFIO_EXTICR1_EXTI0_PE_Pos (2U)
#define AFIO_EXTICR1_EXTI0_PE_Msk (0x1UL << AFIO_EXTICR1_EXTI0_PE_Pos) /*!< 0x00000004 */
#define AFIO_EXTICR1_EXTI0_PE AFIO_EXTICR1_EXTI0_PE_Msk                /*!< PE[0] pin */
#define AFIO_EXTICR1_EXTI0_PF_Pos (0U)
#define AFIO_EXTICR1_EXTI0_PF_Msk (0x5UL << AFIO_EXTICR1_EXTI0_PF_Pos) /*!< 0x00000005 */
#define AFIO_EXTICR1_EXTI0_PF AFIO_EXTICR1_EXTI0_PF_Msk                /*!< PF[0] pin */
#define AFIO_EXTICR1_EXTI0_PG_Pos (1U)
#define AFIO_EXTICR1_EXTI0_PG_Msk (0x3UL << AFIO_EXTICR1_EXTI0_PG_Pos) /*!< 0x00000006 */
#define AFIO_EXTICR1_EXTI0_PG AFIO_EXTICR1_EXTI0_PG_Msk                /*!< PG[0] pin */

/*!< EXTI1 configuration */
#define AFIO_EXTICR1_EXTI1_PA 0x00000000U /*!< PA[1] pin */
#define AFIO_EXTICR1_EXTI1_PB_Pos (4U)
#define AFIO_EXTICR1_EXTI1_PB_Msk (0x1UL << AFIO_EXTICR1_EXTI1_PB_Pos) /*!< 0x00000010 */
#define AFIO_EXTICR1_EXTI1_PB AFIO_EXTICR1_EXTI1_PB_Msk                /*!< PB[1] pin */
#define AFIO_EXTICR1_EXTI1_PC_Pos (5U)
#define AFIO_EXTICR1_EXTI1_PC_Msk (0x1UL << AFIO_EXTICR1_EXTI1_PC_Pos) /*!< 0x00000020 */
#define AFIO_EXTICR1_EXTI1_PC AFIO_EXTICR1_EXTI1_PC_Msk                /*!< PC[1] pin */
#define AFIO_EXTICR1_EXTI1_PD_Pos (4U)
#define AFIO_EXTICR1_EXTI1_PD_Msk (0x3UL << AFIO_EXTICR1_EXTI1_PD_Pos) /*!< 0x00000030 */
#define AFIO_EXTICR1_EXTI1_PD AFIO_EXTICR1_EXTI1_PD_Msk                /*!< PD[1] pin */
#define AFIO_EXTICR1_EXTI1_PE_Pos (6U)
#define AFIO_EXTICR1_EXTI1_PE_Msk (0x1UL << AFIO_EXTICR1_EXTI1_PE_Pos) /*!< 0x00000040 */
#define AFIO_EXTICR1_EXTI1_PE AFIO_EXTICR1_EXTI1_PE_Msk                /*!< PE[1] pin */
#define AFIO_EXTICR1_EXTI1_PF_Pos (4U)
#define AFIO_EXTICR1_EXTI1_PF_Msk (0x5UL << AFIO_EXTICR1_EXTI1_PF_Pos) /*!< 0x00000050 */
#define AFIO_EXTICR1_EXTI1_PF AFIO_EXTICR1_EXTI1_PF_Msk                /*!< PF[1] pin */
#define AFIO_EXTICR1_EXTI1_PG_Pos (5U)
#define AFIO_EXTICR1_EXTI1_PG_Msk (0x3UL << AFIO_EXTICR1_EXTI1_PG_Pos) /*!< 0x00000060 */
#define AFIO_EXTICR1_EXTI1_PG AFIO_EXTICR1_EXTI1_PG_Msk                /*!< PG[1] pin */

/*!< EXTI2 configuration */
#define AFIO_EXTICR1_EXTI2_PA 0x00000000U /*!< PA[2] pin */
#define AFIO_EXTICR1_EXTI2_PB_Pos (8U)
#define AFIO_EXTICR1_EXTI2_PB_Msk (0x1UL << AFIO_EXTICR1_EXTI2_PB_Pos) /*!< 0x00000100 */
#define AFIO_EXTICR1_EXTI2_PB AFIO_EXTICR1_EXTI2_PB_Msk                /*!< PB[2] pin */
#define AFIO_EXTICR1_EXTI2_PC_Pos (9U)
#define AFIO_EXTICR1_EXTI2_PC_Msk (0x1UL << AFIO_EXTICR1_EXTI2_PC_Pos) /*!< 0x00000200 */
#define AFIO_EXTICR1_EXTI2_PC AFIO_EXTICR1_EXTI2_PC_Msk                /*!< PC[2] pin */
#define AFIO_EXTICR1_EXTI2_PD_Pos (8U)
#define AFIO_EXTICR1_EXTI2_PD_Msk (0x3UL << AFIO_EXTICR1_EXTI2_PD_Pos) /*!< 0x00000300 */
#define AFIO_EXTICR1_EXTI2_PD AFIO_EXTICR1_EXTI2_PD_Msk                /*!< PD[2] pin */
#define AFIO_EXTICR1_EXTI2_PE_Pos (10U)
#define AFIO_EXTICR1_EXTI2_PE_Msk (0x1UL << AFIO_EXTICR1_EXTI2_PE_Pos) /*!< 0x00000400 */
#define AFIO_EXTICR1_EXTI2_PE AFIO_EXTICR1_EXTI2_PE_Msk                /*!< PE[2] pin */
#define AFIO_EXTICR1_EXTI2_PF_Pos (8U)
#define AFIO_EXTICR1_EXTI2_PF_Msk (0x5UL << AFIO_EXTICR1_EXTI2_PF_Pos) /*!< 0x00000500 */
#define AFIO_EXTICR1_EXTI2_PF AFIO_EXTICR1_EXTI2_PF_Msk                /*!< PF[2] pin */
#define AFIO_EXTICR1_EXTI2_PG_Pos (9U)
#define AFIO_EXTICR1_EXTI2_PG_Msk (0x3UL << AFIO_EXTICR1_EXTI2_PG_Pos) /*!< 0x00000600 */
#define AFIO_EXTICR1_EXTI2_PG AFIO_EXTICR1_EXTI2_PG_Msk                /*!< PG[2] pin */

/*!< EXTI3 configuration */
#define AFIO_EXTICR1_EXTI3_PA 0x00000000U /*!< PA[3] pin */
#define AFIO_EXTICR1_EXTI3_PB_Pos (12U)
#define AFIO_EXTICR1_EXTI3_PB_Msk (0x1UL << AFIO_EXTICR1_EXTI3_PB_Pos) /*!< 0x00001000 */
#define AFIO_EXTICR1_EXTI3_PB AFIO_EXTICR1_EXTI3_PB_Msk                /*!< PB[3] pin */
#define AFIO_EXTICR1_EXTI3_PC_Pos (13U)
#define AFIO_EXTICR1_EXTI3_PC_Msk (0x1UL << AFIO_EXTICR1_EXTI3_PC_Pos) /*!< 0x00002000 */
#define AFIO_EXTICR1_EXTI3_PC AFIO_EXTICR1_EXTI3_PC_Msk                /*!< PC[3] pin */
#define AFIO_EXTICR1_EXTI3_PD_Pos (12U)
#define AFIO_EXTICR1_EXTI3_PD_Msk (0x3UL << AFIO_EXTICR1_EXTI3_PD_Pos) /*!< 0x00003000 */
#define AFIO_EXTICR1_EXTI3_PD AFIO_EXTICR1_EXTI3_PD_Msk                /*!< PD[3] pin */
#define AFIO_EXTICR1_EXTI3_PE_Pos (14U)
#define AFIO_EXTICR1_EXTI3_PE_Msk (0x1UL << AFIO_EXTICR1_EXTI3_PE_Pos) /*!< 0x00004000 */
#define AFIO_EXTICR1_EXTI3_PE AFIO_EXTICR1_EXTI3_PE_Msk                /*!< PE[3] pin */
#define AFIO_EXTICR1_EXTI3_PF_Pos (12U)
#define AFIO_EXTICR1_EXTI3_PF_Msk (0x5UL << AFIO_EXTICR1_EXTI3_PF_Pos) /*!< 0x00005000 */
#define AFIO_EXTICR1_EXTI3_PF AFIO_EXTICR1_EXTI3_PF_Msk                /*!< PF[3] pin */
#define AFIO_EXTICR1_EXTI3_PG_Pos (13U)
#define AFIO_EXTICR1_EXTI3_PG_Msk (0x3UL << AFIO_EXTICR1_EXTI3_PG_Pos) /*!< 0x00006000 */
#define AFIO_EXTICR1_EXTI3_PG AFIO_EXTICR1_EXTI3_PG_Msk                /*!< PG[3] pin */

/*****************  Bit definition for AFIO_EXTICR2 register  *****************/
#define AFIO_EXTICR2_EXTI4_Pos (0U)
#define AFIO_EXTICR2_EXTI4_Msk (0xFUL << AFIO_EXTICR2_EXTI4_Pos) /*!< 0x0000000F */
#define AFIO_EXTICR2_EXTI4 AFIO_EXTICR2_EXTI4_Msk                /*!< EXTI 4 configuration */
#define AFIO_EXTICR2_EXTI5_Pos (4U)
#define AFIO_EXTICR2_EXTI5_Msk (0xFUL << AFIO_EXTICR2_EXTI5_Pos) /*!< 0x000000F0 */
#define AFIO_EXTICR2_EXTI5 AFIO_EXTICR2_EXTI5_Msk                /*!< EXTI 5 configuration */
#define AFIO_EXTICR2_EXTI6_Pos (8U)
#define AFIO_EXTICR2_EXTI6_Msk (0xFUL << AFIO_EXTICR2_EXTI6_Pos) /*!< 0x00000F00 */
#define AFIO_EXTICR2_EXTI6 AFIO_EXTICR2_EXTI6_Msk                /*!< EXTI 6 configuration */
#define AFIO_EXTICR2_EXTI7_Pos (12U)
#define AFIO_EXTICR2_EXTI7_Msk (0xFUL << AFIO_EXTICR2_EXTI7_Pos) /*!< 0x0000F000 */
#define AFIO_EXTICR2_EXTI7 AFIO_EXTICR2_EXTI7_Msk                /*!< EXTI 7 configuration */

/*!< EXTI4 configuration */
#define AFIO_EXTICR2_EXTI4_PA 0x00000000U /*!< PA[4] pin */
#define AFIO_EXTICR2_EXTI4_PB_Pos (0U)
#define AFIO_EXTICR2_EXTI4_PB_Msk (0x1UL << AFIO_EXTICR2_EXTI4_PB_Pos) /*!< 0x00000001 */
#define AFIO_EXTICR2_EXTI4_PB AFIO_EXTICR2_EXTI4_PB_Msk                /*!< PB[4] pin */
#define AFIO_EXTICR2_EXTI4_PC_Pos (1U)
#define AFIO_EXTICR2_EXTI4_PC_Msk (0x1UL << AFIO_EXTICR2_EXTI4_PC_Pos) /*!< 0x00000002 */
#define AFIO_EXTICR2_EXTI4_PC AFIO_EXTICR2_EXTI4_PC_Msk                /*!< PC[4] pin */
#define AFIO_EXTICR2_EXTI4_PD_Pos (0U)
#define AFIO_EXTICR2_EXTI4_PD_Msk (0x3UL << AFIO_EXTICR2_EXTI4_PD_Pos) /*!< 0x00000003 */
#define AFIO_EXTICR2_EXTI4_PD AFIO_EXTICR2_EXTI4_PD_Msk                /*!< PD[4] pin */
#define AFIO_EXTICR2_EXTI4_PE_Pos (2U)
#define AFIO_EXTICR2_EXTI4_PE_Msk (0x1UL << AFIO_EXTICR2_EXTI4_PE_Pos) /*!< 0x00000004 */
#define AFIO_EXTICR2_EXTI4_PE AFIO_EXTICR2_EXTI4_PE_Msk                /*!< PE[4] pin */
#define AFIO_EXTICR2_EXTI4_PF_Pos (0U)
#define AFIO_EXTICR2_EXTI4_PF_Msk (0x5UL << AFIO_EXTICR2_EXTI4_PF_Pos) /*!< 0x00000005 */
#define AFIO_EXTICR2_EXTI4_PF AFIO_EXTICR2_EXTI4_PF_Msk                /*!< PF[4] pin */
#define AFIO_EXTICR2_EXTI4_PG_Pos (1U)
#define AFIO_EXTICR2_EXTI4_PG_Msk (0x3UL << AFIO_EXTICR2_EXTI4_PG_Pos) /*!< 0x00000006 */
#define AFIO_EXTICR2_EXTI4_PG AFIO_EXTICR2_EXTI4_PG_Msk                /*!< PG[4] pin */

/* EXTI5 configuration */
#define AFIO_EXTICR2_EXTI5_PA 0x00000000U /*!< PA[5] pin */
#define AFIO_EXTICR2_EXTI5_PB_Pos (4U)
#define AFIO_EXTICR2_EXTI5_PB_Msk (0x1UL << AFIO_EXTICR2_EXTI5_PB_Pos) /*!< 0x00000010 */
#define AFIO_EXTICR2_EXTI5_PB AFIO_EXTICR2_EXTI5_PB_Msk                /*!< PB[5] pin */
#define AFIO_EXTICR2_EXTI5_PC_Pos (5U)
#define AFIO_EXTICR2_EXTI5_PC_Msk (0x1UL << AFIO_EXTICR2_EXTI5_PC_Pos) /*!< 0x00000020 */
#define AFIO_EXTICR2_EXTI5_PC AFIO_EXTICR2_EXTI5_PC_Msk                /*!< PC[5] pin */
#define AFIO_EXTICR2_EXTI5_PD_Pos (4U)
#define AFIO_EXTICR2_EXTI5_PD_Msk (0x3UL << AFIO_EXTICR2_EXTI5_PD_Pos) /*!< 0x00000030 */
#define AFIO_EXTICR2_EXTI5_PD AFIO_EXTICR2_EXTI5_PD_Msk                /*!< PD[5] pin */
#define AFIO_EXTICR2_EXTI5_PE_Pos (6U)
#define AFIO_EXTICR2_EXTI5_PE_Msk (0x1UL << AFIO_EXTICR2_EXTI5_PE_Pos) /*!< 0x00000040 */
#define AFIO_EXTICR2_EXTI5_PE AFIO_EXTICR2_EXTI5_PE_Msk                /*!< PE[5] pin */
#define AFIO_EXTICR2_EXTI5_PF_Pos (4U)
#define AFIO_EXTICR2_EXTI5_PF_Msk (0x5UL << AFIO_EXTICR2_EXTI5_PF_Pos) /*!< 0x00000050 */
#define AFIO_EXTICR2_EXTI5_PF AFIO_EXTICR2_EXTI5_PF_Msk                /*!< PF[5] pin */
#define AFIO_EXTICR2_EXTI5_PG_Pos (5U)
#define AFIO_EXTICR2_EXTI5_PG_Msk (0x3UL << AFIO_EXTICR2_EXTI5_PG_Pos) /*!< 0x00000060 */
#define AFIO_EXTICR2_EXTI5_PG AFIO_EXTICR2_EXTI5_PG_Msk                /*!< PG[5] pin */

/*!< EXTI6 configuration */
#define AFIO_EXTICR2_EXTI6_PA 0x00000000U /*!< PA[6] pin */
#define AFIO_EXTICR2_EXTI6_PB_Pos (8U)
#define AFIO_EXTICR2_EXTI6_PB_Msk (0x1UL << AFIO_EXTICR2_EXTI6_PB_Pos) /*!< 0x00000100 */
#define AFIO_EXTICR2_EXTI6_PB AFIO_EXTICR2_EXTI6_PB_Msk                /*!< PB[6] pin */
#define AFIO_EXTICR2_EXTI6_PC_Pos (9U)
#define AFIO_EXTICR2_EXTI6_PC_Msk (0x1UL << AFIO_EXTICR2_EXTI6_PC_Pos) /*!< 0x00000200 */
#define AFIO_EXTICR2_EXTI6_PC AFIO_EXTICR2_EXTI6_PC_Msk                /*!< PC[6] pin */
#define AFIO_EXTICR2_EXTI6_PD_Pos (8U)
#define AFIO_EXTICR2_EXTI6_PD_Msk (0x3UL << AFIO_EXTICR2_EXTI6_PD_Pos) /*!< 0x00000300 */
#define AFIO_EXTICR2_EXTI6_PD AFIO_EXTICR2_EXTI6_PD_Msk                /*!< PD[6] pin */
#define AFIO_EXTICR2_EXTI6_PE_Pos (10U)
#define AFIO_EXTICR2_EXTI6_PE_Msk (0x1UL << AFIO_EXTICR2_EXTI6_PE_Pos) /*!< 0x00000400 */
#define AFIO_EXTICR2_EXTI6_PE AFIO_EXTICR2_EXTI6_PE_Msk                /*!< PE[6] pin */
#define AFIO_EXTICR2_EXTI6_PF_Pos (8U)
#define AFIO_EXTICR2_EXTI6_PF_Msk (0x5UL << AFIO_EXTICR2_EXTI6_PF_Pos) /*!< 0x00000500 */
#define AFIO_EXTICR2_EXTI6_PF AFIO_EXTICR2_EXTI6_PF_Msk                /*!< PF[6] pin */
#define AFIO_EXTICR2_EXTI6_PG_Pos (9U)
#define AFIO_EXTICR2_EXTI6_PG_Msk (0x3UL << AFIO_EXTICR2_EXTI6_PG_Pos) /*!< 0x00000600 */
#define AFIO_EXTICR2_EXTI6_PG AFIO_EXTICR2_EXTI6_PG_Msk                /*!< PG[6] pin */

/*!< EXTI7 configuration */
#define AFIO_EXTICR2_EXTI7_PA 0x00000000U /*!< PA[7] pin */
#define AFIO_EXTICR2_EXTI7_PB_Pos (12U)
#define AFIO_EXTICR2_EXTI7_PB_Msk (0x1UL << AFIO_EXTICR2_EXTI7_PB_Pos) /*!< 0x00001000 */
#define AFIO_EXTICR2_EXTI7_PB AFIO_EXTICR2_EXTI7_PB_Msk                /*!< PB[7] pin */
#define AFIO_EXTICR2_EXTI7_PC_Pos (13U)
#define AFIO_EXTICR2_EXTI7_PC_Msk (0x1UL << AFIO_EXTICR2_EXTI7_PC_Pos) /*!< 0x00002000 */
#define AFIO_EXTICR2_EXTI7_PC AFIO_EXTICR2_EXTI7_PC_Msk                /*!< PC[7] pin */
#define AFIO_EXTICR2_EXTI7_PD_Pos (12U)
#define AFIO_EXTICR2_EXTI7_PD_Msk (0x3UL << AFIO_EXTICR2_EXTI7_PD_Pos) /*!< 0x00003000 */
#define AFIO_EXTICR2_EXTI7_PD AFIO_EXTICR2_EXTI7_PD_Msk                /*!< PD[7] pin */
#define AFIO_EXTICR2_EXTI7_PE_Pos (14U)
#define AFIO_EXTICR2_EXTI7_PE_Msk (0x1UL << AFIO_EXTICR2_EXTI7_PE_Pos) /*!< 0x00004000 */
#define AFIO_EXTICR2_EXTI7_PE AFIO_EXTICR2_EXTI7_PE_Msk                /*!< PE[7] pin */
#define AFIO_EXTICR2_EXTI7_PF_Pos (12U)
#define AFIO_EXTICR2_EXTI7_PF_Msk (0x5UL << AFIO_EXTICR2_EXTI7_PF_Pos) /*!< 0x00005000 */
#define AFIO_EXTICR2_EXTI7_PF AFIO_EXTICR2_EXTI7_PF_Msk                /*!< PF[7] pin */
#define AFIO_EXTICR2_EXTI7_PG_Pos (13U)
#define AFIO_EXTICR2_EXTI7_PG_Msk (0x3UL << AFIO_EXTICR2_EXTI7_PG_Pos) /*!< 0x00006000 */
#define AFIO_EXTICR2_EXTI7_PG AFIO_EXTICR2_EXTI7_PG_Msk                /*!< PG[7] pin */

/*****************  Bit definition for AFIO_EXTICR3 register  *****************/
#define AFIO_EXTICR3_EXTI8_Pos (0U)
#define AFIO_EXTICR3_EXTI8_Msk (0xFUL << AFIO_EXTICR3_EXTI8_Pos) /*!< 0x0000000F */
#define AFIO_EXTICR3_EXTI8 AFIO_EXTICR3_EXTI8_Msk                /*!< EXTI 8 configuration */
#define AFIO_EXTICR3_EXTI9_Pos (4U)
#define AFIO_EXTICR3_EXTI9_Msk (0xFUL << AFIO_EXTICR3_EXTI9_Pos) /*!< 0x000000F0 */
#define AFIO_EXTICR3_EXTI9 AFIO_EXTICR3_EXTI9_Msk                /*!< EXTI 9 configuration */
#define AFIO_EXTICR3_EXTI10_Pos (8U)
#define AFIO_EXTICR3_EXTI10_Msk (0xFUL << AFIO_EXTICR3_EXTI10_Pos) /*!< 0x00000F00 */
#define AFIO_EXTICR3_EXTI10 AFIO_EXTICR3_EXTI10_Msk                /*!< EXTI 10 configuration */
#define AFIO_EXTICR3_EXTI11_Pos (12U)
#define AFIO_EXTICR3_EXTI11_Msk (0xFUL << AFIO_EXTICR3_EXTI11_Pos) /*!< 0x0000F000 */
#define AFIO_EXTICR3_EXTI11 AFIO_EXTICR3_EXTI11_Msk                /*!< EXTI 11 configuration */

/*!< EXTI8 configuration */
#define AFIO_EXTICR3_EXTI8_PA 0x00000000U /*!< PA[8] pin */
#define AFIO_EXTICR3_EXTI8_PB_Pos (0U)
#define AFIO_EXTICR3_EXTI8_PB_Msk (0x1UL << AFIO_EXTICR3_EXTI8_PB_Pos) /*!< 0x00000001 */
#define AFIO_EXTICR3_EXTI8_PB AFIO_EXTICR3_EXTI8_PB_Msk                /*!< PB[8] pin */
#define AFIO_EXTICR3_EXTI8_PC_Pos (1U)
#define AFIO_EXTICR3_EXTI8_PC_Msk (0x1UL << AFIO_EXTICR3_EXTI8_PC_Pos) /*!< 0x00000002 */
#define AFIO_EXTICR3_EXTI8_PC AFIO_EXTICR3_EXTI8_PC_Msk                /*!< PC[8] pin */
#define AFIO_EXTICR3_EXTI8_PD_Pos (0U)
#define AFIO_EXTICR3_EXTI8_PD_Msk (0x3UL << AFIO_EXTICR3_EXTI8_PD_Pos) /*!< 0x00000003 */
#define AFIO_EXTICR3_EXTI8_PD AFIO_EXTICR3_EXTI8_PD_Msk                /*!< PD[8] pin */
#define AFIO_EXTICR3_EXTI8_PE_Pos (2U)
#define AFIO_EXTICR3_EXTI8_PE_Msk (0x1UL << AFIO_EXTICR3_EXTI8_PE_Pos) /*!< 0x00000004 */
#define AFIO_EXTICR3_EXTI8_PE AFIO_EXTICR3_EXTI8_PE_Msk                /*!< PE[8] pin */
#define AFIO_EXTICR3_EXTI8_PF_Pos (0U)
#define AFIO_EXTICR3_EXTI8_PF_Msk (0x5UL << AFIO_EXTICR3_EXTI8_PF_Pos) /*!< 0x00000005 */
#define AFIO_EXTICR3_EXTI8_PF AFIO_EXTICR3_EXTI8_PF_Msk                /*!< PF[8] pin */
#define AFIO_EXTICR3_EXTI8_PG_Pos (1U)
#define AFIO_EXTICR3_EXTI8_PG_Msk (0x3UL << AFIO_EXTICR3_EXTI8_PG_Pos) /*!< 0x00000006 */
#define AFIO_EXTICR3_EXTI8_PG AFIO_EXTICR3_EXTI8_PG_Msk                /*!< PG[8] pin */

/*!< EXTI9 configuration */
#define AFIO_EXTICR3_EXTI9_PA 0x00000000U /*!< PA[9] pin */
#define AFIO_EXTICR3_EXTI9_PB_Pos (4U)
#define AFIO_EXTICR3_EXTI9_PB_Msk (0x1UL << AFIO_EXTICR3_EXTI9_PB_Pos) /*!< 0x00000010 */
#define AFIO_EXTICR3_EXTI9_PB AFIO_EXTICR3_EXTI9_PB_Msk                /*!< PB[9] pin */
#define AFIO_EXTICR3_EXTI9_PC_Pos (5U)
#define AFIO_EXTICR3_EXTI9_PC_Msk (0x1UL << AFIO_EXTICR3_EXTI9_PC_Pos) /*!< 0x00000020 */
#define AFIO_EXTICR3_EXTI9_PC AFIO_EXTICR3_EXTI9_PC_Msk                /*!< PC[9] pin */
#define AFIO_EXTICR3_EXTI9_PD_Pos (4U)
#define AFIO_EXTICR3_EXTI9_PD_Msk (0x3UL << AFIO_EXTICR3_EXTI9_PD_Pos) /*!< 0x00000030 */
#define AFIO_EXTICR3_EXTI9_PD AFIO_EXTICR3_EXTI9_PD_Msk                /*!< PD[9] pin */
#define AFIO_EXTICR3_EXTI9_PE_Pos (6U)
#define AFIO_EXTICR3_EXTI9_PE_Msk (0x1UL << AFIO_EXTICR3_EXTI9_PE_Pos) /*!< 0x00000040 */
#define AFIO_EXTICR3_EXTI9_PE AFIO_EXTICR3_EXTI9_PE_Msk                /*!< PE[9] pin */
#define AFIO_EXTICR3_EXTI9_PF_Pos (4U)
#define AFIO_EXTICR3_EXTI9_PF_Msk (0x5UL << AFIO_EXTICR3_EXTI9_PF_Pos) /*!< 0x00000050 */
#define AFIO_EXTICR3_EXTI9_PF AFIO_EXTICR3_EXTI9_PF_Msk                /*!< PF[9] pin */
#define AFIO_EXTICR3_EXTI9_PG_Pos (5U)
#define AFIO_EXTICR3_EXTI9_PG_Msk (0x3UL << AFIO_EXTICR3_EXTI9_PG_Pos) /*!< 0x00000060 */
#define AFIO_EXTICR3_EXTI9_PG AFIO_EXTICR3_EXTI9_PG_Msk                /*!< PG[9] pin */

/*!< EXTI10 configuration */
#define AFIO_EXTICR3_EXTI10_PA 0x00000000U /*!< PA[10] pin */
#define AFIO_EXTICR3_EXTI10_PB_Pos (8U)
#define AFIO_EXTICR3_EXTI10_PB_Msk (0x1UL << AFIO_EXTICR3_EXTI10_PB_Pos) /*!< 0x00000100 */
#define AFIO_EXTICR3_EXTI10_PB AFIO_EXTICR3_EXTI10_PB_Msk                /*!< PB[10] pin */
#define AFIO_EXTICR3_EXTI10_PC_Pos (9U)
#define AFIO_EXTICR3_EXTI10_PC_Msk (0x1UL << AFIO_EXTICR3_EXTI10_PC_Pos) /*!< 0x00000200 */
#define AFIO_EXTICR3_EXTI10_PC AFIO_EXTICR3_EXTI10_PC_Msk                /*!< PC[10] pin */
#define AFIO_EXTICR3_EXTI10_PD_Pos (8U)
#define AFIO_EXTICR3_EXTI10_PD_Msk (0x3UL << AFIO_EXTICR3_EXTI10_PD_Pos) /*!< 0x00000300 */
#define AFIO_EXTICR3_EXTI10_PD AFIO_EXTICR3_EXTI10_PD_Msk                /*!< PD[10] pin */
#define AFIO_EXTICR3_EXTI10_PE_Pos (10U)
#define AFIO_EXTICR3_EXTI10_PE_Msk (0x1UL << AFIO_EXTICR3_EXTI10_PE_Pos) /*!< 0x00000400 */
#define AFIO_EXTICR3_EXTI10_PE AFIO_EXTICR3_EXTI10_PE_Msk                /*!< PE[10] pin */
#define AFIO_EXTICR3_EXTI10_PF_Pos (8U)
#define AFIO_EXTICR3_EXTI10_PF_Msk (0x5UL << AFIO_EXTICR3_EXTI10_PF_Pos) /*!< 0x00000500 */
#define AFIO_EXTICR3_EXTI10_PF AFIO_EXTICR3_EXTI10_PF_Msk                /*!< PF[10] pin */
#define AFIO_EXTICR3_EXTI10_PG_Pos (9U)
#define AFIO_EXTICR3_EXTI10_PG_Msk (0x3UL << AFIO_EXTICR3_EXTI10_PG_Pos) /*!< 0x00000600 */
#define AFIO_EXTICR3_EXTI10_PG AFIO_EXTICR3_EXTI10_PG_Msk                /*!< PG[10] pin */

/*!< EXTI11 configuration */
#define AFIO_EXTICR3_EXTI11_PA 0x00000000U /*!< PA[11] pin */
#define AFIO_EXTICR3_EXTI11_PB_Pos (12U)
#define AFIO_EXTICR3_EXTI11_PB_Msk (0x1UL << AFIO_EXTICR3_EXTI11_PB_Pos) /*!< 0x00001000 */
#define AFIO_EXTICR3_EXTI11_PB AFIO_EXTICR3_EXTI11_PB_Msk                /*!< PB[11] pin */
#define AFIO_EXTICR3_EXTI11_PC_Pos (13U)
#define AFIO_EXTICR3_EXTI11_PC_Msk (0x1UL << AFIO_EXTICR3_EXTI11_PC_Pos) /*!< 0x00002000 */
#define AFIO_EXTICR3_EXTI11_PC AFIO_EXTICR3_EXTI11_PC_Msk                /*!< PC[11] pin */
#define AFIO_EXTICR3_EXTI11_PD_Pos (12U)
#define AFIO_EXTICR3_EXTI11_PD_Msk (0x3UL << AFIO_EXTICR3_EXTI11_PD_Pos) /*!< 0x00003000 */
#define AFIO_EXTICR3_EXTI11_PD AFIO_EXTICR3_EXTI11_PD_Msk                /*!< PD[11] pin */
#define AFIO_EXTICR3_EXTI11_PE_Pos (14U)
#define AFIO_EXTICR3_EXTI11_PE_Msk (0x1UL << AFIO_EXTICR3_EXTI11_PE_Pos) /*!< 0x00004000 */
#define AFIO_EXTICR3_EXTI11_PE AFIO_EXTICR3_EXTI11_PE_Msk                /*!< PE[11] pin */
#define AFIO_EXTICR3_EXTI11_PF_Pos (12U)
#define AFIO_EXTICR3_EXTI11_PF_Msk (0x5UL << AFIO_EXTICR3_EXTI11_PF_Pos) /*!< 0x00005000 */
#define AFIO_EXTICR3_EXTI11_PF AFIO_EXTICR3_EXTI11_PF_Msk                /*!< PF[11] pin */
#define AFIO_EXTICR3_EXTI11_PG_Pos (13U)
#define AFIO_EXTICR3_EXTI11_PG_Msk (0x3UL << AFIO_EXTICR3_EXTI11_PG_Pos) /*!< 0x00006000 */
#define AFIO_EXTICR3_EXTI11_PG AFIO_EXTICR3_EXTI11_PG_Msk                /*!< PG[11] pin */

/*****************  Bit definition for AFIO_EXTICR4 register  *****************/
#define AFIO_EXTICR4_EXTI12_Pos (0U)
#define AFIO_EXTICR4_EXTI12_Msk (0xFUL << AFIO_EXTICR4_EXTI12_Pos) /*!< 0x0000000F */
#define AFIO_EXTICR4_EXTI12 AFIO_EXTICR4_EXTI12_Msk                /*!< EXTI 12 configuration */
#define AFIO_EXTICR4_EXTI13_Pos (4U)
#define AFIO_EXTICR4_EXTI13_Msk (0xFUL << AFIO_EXTICR4_EXTI13_Pos) /*!< 0x000000F0 */
#define AFIO_EXTICR4_EXTI13 AFIO_EXTICR4_EXTI13_Msk                /*!< EXTI 13 configuration */
#define AFIO_EXTICR4_EXTI14_Pos (8U)
#define AFIO_EXTICR4_EXTI14_Msk (0xFUL << AFIO_EXTICR4_EXTI14_Pos) /*!< 0x00000F00 */
#define AFIO_EXTICR4_EXTI14 AFIO_EXTICR4_EXTI14_Msk                /*!< EXTI 14 configuration */
#define AFIO_EXTICR4_EXTI15_Pos (12U)
#define AFIO_EXTICR4_EXTI15_Msk (0xFUL << AFIO_EXTICR4_EXTI15_Pos) /*!< 0x0000F000 */
#define AFIO_EXTICR4_EXTI15 AFIO_EXTICR4_EXTI15_Msk                /*!< EXTI 15 configuration */

/* EXTI12 configuration */
#define AFIO_EXTICR4_EXTI12_PA 0x00000000U /*!< PA[12] pin */
#define AFIO_EXTICR4_EXTI12_PB_Pos (0U)
#define AFIO_EXTICR4_EXTI12_PB_Msk (0x1UL << AFIO_EXTICR4_EXTI12_PB_Pos) /*!< 0x00000001 */
#define AFIO_EXTICR4_EXTI12_PB AFIO_EXTICR4_EXTI12_PB_Msk                /*!< PB[12] pin */
#define AFIO_EXTICR4_EXTI12_PC_Pos (1U)
#define AFIO_EXTICR4_EXTI12_PC_Msk (0x1UL << AFIO_EXTICR4_EXTI12_PC_Pos) /*!< 0x00000002 */
#define AFIO_EXTICR4_EXTI12_PC AFIO_EXTICR4_EXTI12_PC_Msk                /*!< PC[12] pin */
#define AFIO_EXTICR4_EXTI12_PD_Pos (0U)
#define AFIO_EXTICR4_EXTI12_PD_Msk (0x3UL << AFIO_EXTICR4_EXTI12_PD_Pos) /*!< 0x00000003 */
#define AFIO_EXTICR4_EXTI12_PD AFIO_EXTICR4_EXTI12_PD_Msk                /*!< PD[12] pin */
#define AFIO_EXTICR4_EXTI12_PE_Pos (2U)
#define AFIO_EXTICR4_EXTI12_PE_Msk (0x1UL << AFIO_EXTICR4_EXTI12_PE_Pos) /*!< 0x00000004 */
#define AFIO_EXTICR4_EXTI12_PE AFIO_EXTICR4_EXTI12_PE_Msk                /*!< PE[12] pin */
#define AFIO_EXTICR4_EXTI12_PF_Pos (0U)
#define AFIO_EXTICR4_EXTI12_PF_Msk (0x5UL << AFIO_EXTICR4_EXTI12_PF_Pos) /*!< 0x00000005 */
#define AFIO_EXTICR4_EXTI12_PF AFIO_EXTICR4_EXTI12_PF_Msk                /*!< PF[12] pin */
#define AFIO_EXTICR4_EXTI12_PG_Pos (1U)
#define AFIO_EXTICR4_EXTI12_PG_Msk (0x3UL << AFIO_EXTICR4_EXTI12_PG_Pos) /*!< 0x00000006 */
#define AFIO_EXTICR4_EXTI12_PG AFIO_EXTICR4_EXTI12_PG_Msk                /*!< PG[12] pin */

/* EXTI13 configuration */
#define AFIO_EXTICR4_EXTI13_PA 0x00000000U /*!< PA[13] pin */
#define AFIO_EXTICR4_EXTI13_PB_Pos (4U)
#define AFIO_EXTICR4_EXTI13_PB_Msk (0x1UL << AFIO_EXTICR4_EXTI13_PB_Pos) /*!< 0x00000010 */
#define AFIO_EXTICR4_EXTI13_PB AFIO_EXTICR4_EXTI13_PB_Msk                /*!< PB[13] pin */
#define AFIO_EXTICR4_EXTI13_PC_Pos (5U)
#define AFIO_EXTICR4_EXTI13_PC_Msk (0x1UL << AFIO_EXTICR4_EXTI13_PC_Pos) /*!< 0x00000020 */
#define AFIO_EXTICR4_EXTI13_PC AFIO_EXTICR4_EXTI13_PC_Msk                /*!< PC[13] pin */
#define AFIO_EXTICR4_EXTI13_PD_Pos (4U)
#define AFIO_EXTICR4_EXTI13_PD_Msk (0x3UL << AFIO_EXTICR4_EXTI13_PD_Pos) /*!< 0x00000030 */
#define AFIO_EXTICR4_EXTI13_PD AFIO_EXTICR4_EXTI13_PD_Msk                /*!< PD[13] pin */
#define AFIO_EXTICR4_EXTI13_PE_Pos (6U)
#define AFIO_EXTICR4_EXTI13_PE_Msk (0x1UL << AFIO_EXTICR4_EXTI13_PE_Pos) /*!< 0x00000040 */
#define AFIO_EXTICR4_EXTI13_PE AFIO_EXTICR4_EXTI13_PE_Msk                /*!< PE[13] pin */
#define AFIO_EXTICR4_EXTI13_PF_Pos (4U)
#define AFIO_EXTICR4_EXTI13_PF_Msk (0x5UL << AFIO_EXTICR4_EXTI13_PF_Pos) /*!< 0x00000050 */
#define AFIO_EXTICR4_EXTI13_PF AFIO_EXTICR4_EXTI13_PF_Msk                /*!< PF[13] pin */
#define AFIO_EXTICR4_EXTI13_PG_Pos (5U)
#define AFIO_EXTICR4_EXTI13_PG_Msk (0x3UL << AFIO_EXTICR4_EXTI13_PG_Pos) /*!< 0x00000060 */
#define AFIO_EXTICR4_EXTI13_PG AFIO_EXTICR4_EXTI13_PG_Msk                /*!< PG[13] pin */

/*!< EXTI14 configuration */
#define AFIO_EXTICR4_EXTI14_PA 0x00000000U /*!< PA[14] pin */
#define AFIO_EXTICR4_EXTI14_PB_Pos (8U)
#define AFIO_EXTICR4_EXTI14_PB_Msk (0x1UL << AFIO_EXTICR4_EXTI14_PB_Pos) /*!< 0x00000100 */
#define AFIO_EXTICR4_EXTI14_PB AFIO_EXTICR4_EXTI14_PB_Msk                /*!< PB[14] pin */
#define AFIO_EXTICR4_EXTI14_PC_Pos (9U)
#define AFIO_EXTICR4_EXTI14_PC_Msk (0x1UL << AFIO_EXTICR4_EXTI14_PC_Pos) /*!< 0x00000200 */
#define AFIO_EXTICR4_EXTI14_PC AFIO_EXTICR4_EXTI14_PC_Msk                /*!< PC[14] pin */
#define AFIO_EXTICR4_EXTI14_PD_Pos (8U)
#define AFIO_EXTICR4_EXTI14_PD_Msk (0x3UL << AFIO_EXTICR4_EXTI14_PD_Pos) /*!< 0x00000300 */
#define AFIO_EXTICR4_EXTI14_PD AFIO_EXTICR4_EXTI14_PD_Msk                /*!< PD[14] pin */
#define AFIO_EXTICR4_EXTI14_PE_Pos (10U)
#define AFIO_EXTICR4_EXTI14_PE_Msk (0x1UL << AFIO_EXTICR4_EXTI14_PE_Pos) /*!< 0x00000400 */
#define AFIO_EXTICR4_EXTI14_PE AFIO_EXTICR4_EXTI14_PE_Msk                /*!< PE[14] pin */
#define AFIO_EXTICR4_EXTI14_PF_Pos (8U)
#define AFIO_EXTICR4_EXTI14_PF_Msk (0x5UL << AFIO_EXTICR4_EXTI14_PF_Pos) /*!< 0x00000500 */
#define AFIO_EXTICR4_EXTI14_PF AFIO_EXTICR4_EXTI14_PF_Msk                /*!< PF[14] pin */
#define AFIO_EXTICR4_EXTI14_PG_Pos (9U)
#define AFIO_EXTICR4_EXTI14_PG_Msk (0x3UL << AFIO_EXTICR4_EXTI14_PG_Pos) /*!< 0x00000600 */
#define AFIO_EXTICR4_EXTI14_PG AFIO_EXTICR4_EXTI14_PG_Msk                /*!< PG[14] pin */

/*!< EXTI15 configuration */
#define AFIO_EXTICR4_EXTI15_PA 0x00000000U /*!< PA[15] pin */
#define AFIO_EXTICR4_EXTI15_PB_Pos (12U)
#define AFIO_EXTICR4_EXTI15_PB_Msk (0x1UL << AFIO_EXTICR4_EXTI15_PB_Pos) /*!< 0x00001000 */
#define AFIO_EXTICR4_EXTI15_PB AFIO_EXTICR4_EXTI15_PB_Msk                /*!< PB[15] pin */
#define AFIO_EXTICR4_EXTI15_PC_Pos (13U)
#define AFIO_EXTICR4_EXTI15_PC_Msk (0x1UL << AFIO_EXTICR4_EXTI15_PC_Pos) /*!< 0x00002000 */
#define AFIO_EXTICR4_EXTI15_PC AFIO_EXTICR4_EXTI15_PC_Msk                /*!< PC[15] pin */
#define AFIO_EXTICR4_EXTI15_PD_Pos (12U)
#define AFIO_EXTICR4_EXTI15_PD_Msk (0x3UL << AFIO_EXTICR4_EXTI15_PD_Pos) /*!< 0x00003000 */
#define AFIO_EXTICR4_EXTI15_PD AFIO_EXTICR4_EXTI15_PD_Msk                /*!< PD[15] pin */
#define AFIO_EXTICR4_EXTI15_PE_Pos (14U)
#define AFIO_EXTICR4_EXTI15_PE_Msk (0x1UL << AFIO_EXTICR4_EXTI15_PE_Pos) /*!< 0x00004000 */
#define AFIO_EXTICR4_EXTI15_PE AFIO_EXTICR4_EXTI15_PE_Msk                /*!< PE[15] pin */
#define AFIO_EXTICR4_EXTI15_PF_Pos (12U)
#define AFIO_EXTICR4_EXTI15_PF_Msk (0x5UL << AFIO_EXTICR4_EXTI15_PF_Pos) /*!< 0x00005000 */
#define AFIO_EXTICR4_EXTI15_PF AFIO_EXTICR4_EXTI15_PF_Msk                /*!< PF[15] pin */
#define AFIO_EXTICR4_EXTI15_PG_Pos (13U)
#define AFIO_EXTICR4_EXTI15_PG_Msk (0x3UL << AFIO_EXTICR4_EXTI15_PG_Pos) /*!< 0x00006000 */
#define AFIO_EXTICR4_EXTI15_PG AFIO_EXTICR4_EXTI15_PG_Msk                /*!< PG[15] pin */

/******************  Bit definition for AFIO_MAPR2 register  ******************/

/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for EXTI_IMR register  *******************/
#define EXTI_IMR_MR0_Pos (0U)
#define EXTI_IMR_MR0_Msk (0x1UL << EXTI_IMR_MR0_Pos) /*!< 0x00000001 */
#define EXTI_IMR_MR0 EXTI_IMR_MR0_Msk                /*!< Interrupt Mask on line 0 */
#define EXTI_IMR_MR1_Pos (1U)
#define EXTI_IMR_MR1_Msk (0x1UL << EXTI_IMR_MR1_Pos) /*!< 0x00000002 */
#define EXTI_IMR_MR1 EXTI_IMR_MR1_Msk                /*!< Interrupt Mask on line 1 */
#define EXTI_IMR_MR2_Pos (2U)
#define EXTI_IMR_MR2_Msk (0x1UL << EXTI_IMR_MR2_Pos) /*!< 0x00000004 */
#define EXTI_IMR_MR2 EXTI_IMR_MR2_Msk                /*!< Interrupt Mask on line 2 */
#define EXTI_IMR_MR3_Pos (3U)
#define EXTI_IMR_MR3_Msk (0x1UL << EXTI_IMR_MR3_Pos) /*!< 0x00000008 */
#define EXTI_IMR_MR3 EXTI_IMR_MR3_Msk                /*!< Interrupt Mask on line 3 */
#define EXTI_IMR_MR4_Pos (4U)
#define EXTI_IMR_MR4_Msk (0x1UL << EXTI_IMR_MR4_Pos) /*!< 0x00000010 */
#define EXTI_IMR_MR4 EXTI_IMR_MR4_Msk                /*!< Interrupt Mask on line 4 */
#define EXTI_IMR_MR5_Pos (5U)
#define EXTI_IMR_MR5_Msk (0x1UL << EXTI_IMR_MR5_Pos) /*!< 0x00000020 */
#define EXTI_IMR_MR5 EXTI_IMR_MR5_Msk                /*!< Interrupt Mask on line 5 */
#define EXTI_IMR_MR6_Pos (6U)
#define EXTI_IMR_MR6_Msk (0x1UL << EXTI_IMR_MR6_Pos) /*!< 0x00000040 */
#define EXTI_IMR_MR6 EXTI_IMR_MR6_Msk                /*!< Interrupt Mask on line 6 */
#define EXTI_IMR_MR7_Pos (7U)
#define EXTI_IMR_MR7_Msk (0x1UL << EXTI_IMR_MR7_Pos) /*!< 0x00000080 */
#define EXTI_IMR_MR7 EXTI_IMR_MR7_Msk                /*!< Interrupt Mask on line 7 */
#define EXTI_IMR_MR8_Pos (8U)
#define EXTI_IMR_MR8_Msk (0x1UL << EXTI_IMR_MR8_Pos) /*!< 0x00000100 */
#define EXTI_IMR_MR8 EXTI_IMR_MR8_Msk                /*!< Interrupt Mask on line 8 */
#define EXTI_IMR_MR9_Pos (9U)
#define EXTI_IMR_MR9_Msk (0x1UL << EXTI_IMR_MR9_Pos) /*!< 0x00000200 */
#define EXTI_IMR_MR9 EXTI_IMR_MR9_Msk                /*!< Interrupt Mask on line 9 */
#define EXTI_IMR_MR10_Pos (10U)
#define EXTI_IMR_MR10_Msk (0x1UL << EXTI_IMR_MR10_Pos) /*!< 0x00000400 */
#define EXTI_IMR_MR10 EXTI_IMR_MR10_Msk                /*!< Interrupt Mask on line 10 */
#define EXTI_IMR_MR11_Pos (11U)
#define EXTI_IMR_MR11_Msk (0x1UL << EXTI_IMR_MR11_Pos) /*!< 0x00000800 */
#define EXTI_IMR_MR11 EXTI_IMR_MR11_Msk                /*!< Interrupt Mask on line 11 */
#define EXTI_IMR_MR12_Pos (12U)
#define EXTI_IMR_MR12_Msk (0x1UL << EXTI_IMR_MR12_Pos) /*!< 0x00001000 */
#define EXTI_IMR_MR12 EXTI_IMR_MR12_Msk                /*!< Interrupt Mask on line 12 */
#define EXTI_IMR_MR13_Pos (13U)
#define EXTI_IMR_MR13_Msk (0x1UL << EXTI_IMR_MR13_Pos) /*!< 0x00002000 */
#define EXTI_IMR_MR13 EXTI_IMR_MR13_Msk                /*!< Interrupt Mask on line 13 */
#define EXTI_IMR_MR14_Pos (14U)
#define EXTI_IMR_MR14_Msk (0x1UL << EXTI_IMR_MR14_Pos) /*!< 0x00004000 */
#define EXTI_IMR_MR14 EXTI_IMR_MR14_Msk                /*!< Interrupt Mask on line 14 */
#define EXTI_IMR_MR15_Pos (15U)
#define EXTI_IMR_MR15_Msk (0x1UL << EXTI_IMR_MR15_Pos) /*!< 0x00008000 */
#define EXTI_IMR_MR15 EXTI_IMR_MR15_Msk                /*!< Interrupt Mask on line 15 */
#define EXTI_IMR_MR16_Pos (16U)
#define EXTI_IMR_MR16_Msk (0x1UL << EXTI_IMR_MR16_Pos) /*!< 0x00010000 */
#define EXTI_IMR_MR16 EXTI_IMR_MR16_Msk                /*!< Interrupt Mask on line 16 */
#define EXTI_IMR_MR17_Pos (17U)
#define EXTI_IMR_MR17_Msk (0x1UL << EXTI_IMR_MR17_Pos) /*!< 0x00020000 */
#define EXTI_IMR_MR17 EXTI_IMR_MR17_Msk                /*!< Interrupt Mask on line 17 */
#define EXTI_IMR_MR18_Pos (18U)
#define EXTI_IMR_MR18_Msk (0x1UL << EXTI_IMR_MR18_Pos) /*!< 0x00040000 */
#define EXTI_IMR_MR18 EXTI_IMR_MR18_Msk                /*!< Interrupt Mask on line 18 */
#define EXTI_IMR_MR19_Pos (19U)
#define EXTI_IMR_MR19_Msk (0x1UL << EXTI_IMR_MR19_Pos) /*!< 0x00080000 */
#define EXTI_IMR_MR19 EXTI_IMR_MR19_Msk                /*!< Interrupt Mask on line 19 */

/* References Defines */
#define EXTI_IMR_IM0 EXTI_IMR_MR0
#define EXTI_IMR_IM1 EXTI_IMR_MR1
#define EXTI_IMR_IM2 EXTI_IMR_MR2
#define EXTI_IMR_IM3 EXTI_IMR_MR3
#define EXTI_IMR_IM4 EXTI_IMR_MR4
#define EXTI_IMR_IM5 EXTI_IMR_MR5
#define EXTI_IMR_IM6 EXTI_IMR_MR6
#define EXTI_IMR_IM7 EXTI_IMR_MR7
#define EXTI_IMR_IM8 EXTI_IMR_MR8
#define EXTI_IMR_IM9 EXTI_IMR_MR9
#define EXTI_IMR_IM10 EXTI_IMR_MR10
#define EXTI_IMR_IM11 EXTI_IMR_MR11
#define EXTI_IMR_IM12 EXTI_IMR_MR12
#define EXTI_IMR_IM13 EXTI_IMR_MR13
#define EXTI_IMR_IM14 EXTI_IMR_MR14
#define EXTI_IMR_IM15 EXTI_IMR_MR15
#define EXTI_IMR_IM16 EXTI_IMR_MR16
#define EXTI_IMR_IM17 EXTI_IMR_MR17
#define EXTI_IMR_IM18 EXTI_IMR_MR18
#define EXTI_IMR_IM19 EXTI_IMR_MR19
#define EXTI_IMR_IM 0x000FFFFFU /*!< Interrupt Mask All */

/*******************  Bit definition for EXTI_EMR register  *******************/
#define EXTI_EMR_MR0_Pos (0U)
#define EXTI_EMR_MR0_Msk (0x1UL << EXTI_EMR_MR0_Pos) /*!< 0x00000001 */
#define EXTI_EMR_MR0 EXTI_EMR_MR0_Msk                /*!< Event Mask on line 0 */
#define EXTI_EMR_MR1_Pos (1U)
#define EXTI_EMR_MR1_Msk (0x1UL << EXTI_EMR_MR1_Pos) /*!< 0x00000002 */
#define EXTI_EMR_MR1 EXTI_EMR_MR1_Msk                /*!< Event Mask on line 1 */
#define EXTI_EMR_MR2_Pos (2U)
#define EXTI_EMR_MR2_Msk (0x1UL << EXTI_EMR_MR2_Pos) /*!< 0x00000004 */
#define EXTI_EMR_MR2 EXTI_EMR_MR2_Msk                /*!< Event Mask on line 2 */
#define EXTI_EMR_MR3_Pos (3U)
#define EXTI_EMR_MR3_Msk (0x1UL << EXTI_EMR_MR3_Pos) /*!< 0x00000008 */
#define EXTI_EMR_MR3 EXTI_EMR_MR3_Msk                /*!< Event Mask on line 3 */
#define EXTI_EMR_MR4_Pos (4U)
#define EXTI_EMR_MR4_Msk (0x1UL << EXTI_EMR_MR4_Pos) /*!< 0x00000010 */
#define EXTI_EMR_MR4 EXTI_EMR_MR4_Msk                /*!< Event Mask on line 4 */
#define EXTI_EMR_MR5_Pos (5U)
#define EXTI_EMR_MR5_Msk (0x1UL << EXTI_EMR_MR5_Pos) /*!< 0x00000020 */
#define EXTI_EMR_MR5 EXTI_EMR_MR5_Msk                /*!< Event Mask on line 5 */
#define EXTI_EMR_MR6_Pos (6U)
#define EXTI_EMR_MR6_Msk (0x1UL << EXTI_EMR_MR6_Pos) /*!< 0x00000040 */
#define EXTI_EMR_MR6 EXTI_EMR_MR6_Msk                /*!< Event Mask on line 6 */
#define EXTI_EMR_MR7_Pos (7U)
#define EXTI_EMR_MR7_Msk (0x1UL << EXTI_EMR_MR7_Pos) /*!< 0x00000080 */
#define EXTI_EMR_MR7 EXTI_EMR_MR7_Msk                /*!< Event Mask on line 7 */
#define EXTI_EMR_MR8_Pos (8U)
#define EXTI_EMR_MR8_Msk (0x1UL << EXTI_EMR_MR8_Pos) /*!< 0x00000100 */
#define EXTI_EMR_MR8 EXTI_EMR_MR8_Msk                /*!< Event Mask on line 8 */
#define EXTI_EMR_MR9_Pos (9U)
#define EXTI_EMR_MR9_Msk (0x1UL << EXTI_EMR_MR9_Pos) /*!< 0x00000200 */
#define EXTI_EMR_MR9 EXTI_EMR_MR9_Msk                /*!< Event Mask on line 9 */
#define EXTI_EMR_MR10_Pos (10U)
#define EXTI_EMR_MR10_Msk (0x1UL << EXTI_EMR_MR10_Pos) /*!< 0x00000400 */
#define EXTI_EMR_MR10 EXTI_EMR_MR10_Msk                /*!< Event Mask on line 10 */
#define EXTI_EMR_MR11_Pos (11U)
#define EXTI_EMR_MR11_Msk (0x1UL << EXTI_EMR_MR11_Pos) /*!< 0x00000800 */
#define EXTI_EMR_MR11 EXTI_EMR_MR11_Msk                /*!< Event Mask on line 11 */
#define EXTI_EMR_MR12_Pos (12U)
#define EXTI_EMR_MR12_Msk (0x1UL << EXTI_EMR_MR12_Pos) /*!< 0x00001000 */
#define EXTI_EMR_MR12 EXTI_EMR_MR12_Msk                /*!< Event Mask on line 12 */
#define EXTI_EMR_MR13_Pos (13U)
#define EXTI_EMR_MR13_Msk (0x1UL << EXTI_EMR_MR13_Pos) /*!< 0x00002000 */
#define EXTI_EMR_MR13 EXTI_EMR_MR13_Msk                /*!< Event Mask on line 13 */
#define EXTI_EMR_MR14_Pos (14U)
#define EXTI_EMR_MR14_Msk (0x1UL << EXTI_EMR_MR14_Pos) /*!< 0x00004000 */
#define EXTI_EMR_MR14 EXTI_EMR_MR14_Msk                /*!< Event Mask on line 14 */
#define EXTI_EMR_MR15_Pos (15U)
#define EXTI_EMR_MR15_Msk (0x1UL << EXTI_EMR_MR15_Pos) /*!< 0x00008000 */
#define EXTI_EMR_MR15 EXTI_EMR_MR15_Msk                /*!< Event Mask on line 15 */
#define EXTI_EMR_MR16_Pos (16U)
#define EXTI_EMR_MR16_Msk (0x1UL << EXTI_EMR_MR16_Pos) /*!< 0x00010000 */
#define EXTI_EMR_MR16 EXTI_EMR_MR16_Msk                /*!< Event Mask on line 16 */
#define EXTI_EMR_MR17_Pos (17U)
#define EXTI_EMR_MR17_Msk (0x1UL << EXTI_EMR_MR17_Pos) /*!< 0x00020000 */
#define EXTI_EMR_MR17 EXTI_EMR_MR17_Msk                /*!< Event Mask on line 17 */
#define EXTI_EMR_MR18_Pos (18U)
#define EXTI_EMR_MR18_Msk (0x1UL << EXTI_EMR_MR18_Pos) /*!< 0x00040000 */
#define EXTI_EMR_MR18 EXTI_EMR_MR18_Msk                /*!< Event Mask on line 18 */
#define EXTI_EMR_MR19_Pos (19U)
#define EXTI_EMR_MR19_Msk (0x1UL << EXTI_EMR_MR19_Pos) /*!< 0x00080000 */
#define EXTI_EMR_MR19 EXTI_EMR_MR19_Msk                /*!< Event Mask on line 19 */

/* References Defines */
#define EXTI_EMR_EM0 EXTI_EMR_MR0
#define EXTI_EMR_EM1 EXTI_EMR_MR1
#define EXTI_EMR_EM2 EXTI_EMR_MR2
#define EXTI_EMR_EM3 EXTI_EMR_MR3
#define EXTI_EMR_EM4 EXTI_EMR_MR4
#define EXTI_EMR_EM5 EXTI_EMR_MR5
#define EXTI_EMR_EM6 EXTI_EMR_MR6
#define EXTI_EMR_EM7 EXTI_EMR_MR7
#define EXTI_EMR_EM8 EXTI_EMR_MR8
#define EXTI_EMR_EM9 EXTI_EMR_MR9
#define EXTI_EMR_EM10 EXTI_EMR_MR10
#define EXTI_EMR_EM11 EXTI_EMR_MR11
#define EXTI_EMR_EM12 EXTI_EMR_MR12
#define EXTI_EMR_EM13 EXTI_EMR_MR13
#define EXTI_EMR_EM14 EXTI_EMR_MR14
#define EXTI_EMR_EM15 EXTI_EMR_MR15
#define EXTI_EMR_EM16 EXTI_EMR_MR16
#define EXTI_EMR_EM17 EXTI_EMR_MR17
#define EXTI_EMR_EM18 EXTI_EMR_MR18
#define EXTI_EMR_EM19 EXTI_EMR_MR19

/******************  Bit definition for EXTI_RTSR register  *******************/
#define EXTI_RTSR_TR0_Pos (0U)
#define EXTI_RTSR_TR0_Msk (0x1UL << EXTI_RTSR_TR0_Pos) /*!< 0x00000001 */
#define EXTI_RTSR_TR0 EXTI_RTSR_TR0_Msk                /*!< Rising trigger event configuration bit of line 0 */
#define EXTI_RTSR_TR1_Pos (1U)
#define EXTI_RTSR_TR1_Msk (0x1UL << EXTI_RTSR_TR1_Pos) /*!< 0x00000002 */
#define EXTI_RTSR_TR1 EXTI_RTSR_TR1_Msk                /*!< Rising trigger event configuration bit of line 1 */
#define EXTI_RTSR_TR2_Pos (2U)
#define EXTI_RTSR_TR2_Msk (0x1UL << EXTI_RTSR_TR2_Pos) /*!< 0x00000004 */
#define EXTI_RTSR_TR2 EXTI_RTSR_TR2_Msk                /*!< Rising trigger event configuration bit of line 2 */
#define EXTI_RTSR_TR3_Pos (3U)
#define EXTI_RTSR_TR3_Msk (0x1UL << EXTI_RTSR_TR3_Pos) /*!< 0x00000008 */
#define EXTI_RTSR_TR3 EXTI_RTSR_TR3_Msk                /*!< Rising trigger event configuration bit of line 3 */
#define EXTI_RTSR_TR4_Pos (4U)
#define EXTI_RTSR_TR4_Msk (0x1UL << EXTI_RTSR_TR4_Pos) /*!< 0x00000010 */
#define EXTI_RTSR_TR4 EXTI_RTSR_TR4_Msk                /*!< Rising trigger event configuration bit of line 4 */
#define EXTI_RTSR_TR5_Pos (5U)
#define EXTI_RTSR_TR5_Msk (0x1UL << EXTI_RTSR_TR5_Pos) /*!< 0x00000020 */
#define EXTI_RTSR_TR5 EXTI_RTSR_TR5_Msk                /*!< Rising trigger event configuration bit of line 5 */
#define EXTI_RTSR_TR6_Pos (6U)
#define EXTI_RTSR_TR6_Msk (0x1UL << EXTI_RTSR_TR6_Pos) /*!< 0x00000040 */
#define EXTI_RTSR_TR6 EXTI_RTSR_TR6_Msk                /*!< Rising trigger event configuration bit of line 6 */
#define EXTI_RTSR_TR7_Pos (7U)
#define EXTI_RTSR_TR7_Msk (0x1UL << EXTI_RTSR_TR7_Pos) /*!< 0x00000080 */
#define EXTI_RTSR_TR7 EXTI_RTSR_TR7_Msk                /*!< Rising trigger event configuration bit of line 7 */
#define EXTI_RTSR_TR8_Pos (8U)
#define EXTI_RTSR_TR8_Msk (0x1UL << EXTI_RTSR_TR8_Pos) /*!< 0x00000100 */
#define EXTI_RTSR_TR8 EXTI_RTSR_TR8_Msk                /*!< Rising trigger event configuration bit of line 8 */
#define EXTI_RTSR_TR9_Pos (9U)
#define EXTI_RTSR_TR9_Msk (0x1UL << EXTI_RTSR_TR9_Pos) /*!< 0x00000200 */
#define EXTI_RTSR_TR9 EXTI_RTSR_TR9_Msk                /*!< Rising trigger event configuration bit of line 9 */
#define EXTI_RTSR_TR10_Pos (10U)
#define EXTI_RTSR_TR10_Msk (0x1UL << EXTI_RTSR_TR10_Pos) /*!< 0x00000400 */
#define EXTI_RTSR_TR10 EXTI_RTSR_TR10_Msk                /*!< Rising trigger event configuration bit of line 10 */
#define EXTI_RTSR_TR11_Pos (11U)
#define EXTI_RTSR_TR11_Msk (0x1UL << EXTI_RTSR_TR11_Pos) /*!< 0x00000800 */
#define EXTI_RTSR_TR11 EXTI_RTSR_TR11_Msk                /*!< Rising trigger event configuration bit of line 11 */
#define EXTI_RTSR_TR12_Pos (12U)
#define EXTI_RTSR_TR12_Msk (0x1UL << EXTI_RTSR_TR12_Pos) /*!< 0x00001000 */
#define EXTI_RTSR_TR12 EXTI_RTSR_TR12_Msk                /*!< Rising trigger event configuration bit of line 12 */
#define EXTI_RTSR_TR13_Pos (13U)
#define EXTI_RTSR_TR13_Msk (0x1UL << EXTI_RTSR_TR13_Pos) /*!< 0x00002000 */
#define EXTI_RTSR_TR13 EXTI_RTSR_TR13_Msk                /*!< Rising trigger event configuration bit of line 13 */
#define EXTI_RTSR_TR14_Pos (14U)
#define EXTI_RTSR_TR14_Msk (0x1UL << EXTI_RTSR_TR14_Pos) /*!< 0x00004000 */
#define EXTI_RTSR_TR14 EXTI_RTSR_TR14_Msk                /*!< Rising trigger event configuration bit of line 14 */
#define EXTI_RTSR_TR15_Pos (15U)
#define EXTI_RTSR_TR15_Msk (0x1UL << EXTI_RTSR_TR15_Pos) /*!< 0x00008000 */
#define EXTI_RTSR_TR15 EXTI_RTSR_TR15_Msk                /*!< Rising trigger event configuration bit of line 15 */
#define EXTI_RTSR_TR16_Pos (16U)
#define EXTI_RTSR_TR16_Msk (0x1UL << EXTI_RTSR_TR16_Pos) /*!< 0x00010000 */
#define EXTI_RTSR_TR16 EXTI_RTSR_TR16_Msk                /*!< Rising trigger event configuration bit of line 16 */
#define EXTI_RTSR_TR17_Pos (17U)
#define EXTI_RTSR_TR17_Msk (0x1UL << EXTI_RTSR_TR17_Pos) /*!< 0x00020000 */
#define EXTI_RTSR_TR17 EXTI_RTSR_TR17_Msk                /*!< Rising trigger event configuration bit of line 17 */
#define EXTI_RTSR_TR18_Pos (18U)
#define EXTI_RTSR_TR18_Msk (0x1UL << EXTI_RTSR_TR18_Pos) /*!< 0x00040000 */
#define EXTI_RTSR_TR18 EXTI_RTSR_TR18_Msk                /*!< Rising trigger event configuration bit of line 18 */
#define EXTI_RTSR_TR19_Pos (19U)
#define EXTI_RTSR_TR19_Msk (0x1UL << EXTI_RTSR_TR19_Pos) /*!< 0x00080000 */
#define EXTI_RTSR_TR19 EXTI_RTSR_TR19_Msk                /*!< Rising trigger event configuration bit of line 19 */

/* References Defines */
#define EXTI_RTSR_RT0 EXTI_RTSR_TR0
#define EXTI_RTSR_RT1 EXTI_RTSR_TR1
#define EXTI_RTSR_RT2 EXTI_RTSR_TR2
#define EXTI_RTSR_RT3 EXTI_RTSR_TR3
#define EXTI_RTSR_RT4 EXTI_RTSR_TR4
#define EXTI_RTSR_RT5 EXTI_RTSR_TR5
#define EXTI_RTSR_RT6 EXTI_RTSR_TR6
#define EXTI_RTSR_RT7 EXTI_RTSR_TR7
#define EXTI_RTSR_RT8 EXTI_RTSR_TR8
#define EXTI_RTSR_RT9 EXTI_RTSR_TR9
#define EXTI_RTSR_RT10 EXTI_RTSR_TR10
#define EXTI_RTSR_RT11 EXTI_RTSR_TR11
#define EXTI_RTSR_RT12 EXTI_RTSR_TR12
#define EXTI_RTSR_RT13 EXTI_RTSR_TR13
#define EXTI_RTSR_RT14 EXTI_RTSR_TR14
#define EXTI_RTSR_RT15 EXTI_RTSR_TR15
#define EXTI_RTSR_RT16 EXTI_RTSR_TR16
#define EXTI_RTSR_RT17 EXTI_RTSR_TR17
#define EXTI_RTSR_RT18 EXTI_RTSR_TR18
#define EXTI_RTSR_RT19 EXTI_RTSR_TR19

/******************  Bit definition for EXTI_FTSR register  *******************/
#define EXTI_FTSR_TR0_Pos (0U)
#define EXTI_FTSR_TR0_Msk (0x1UL << EXTI_FTSR_TR0_Pos) /*!< 0x00000001 */
#define EXTI_FTSR_TR0 EXTI_FTSR_TR0_Msk                /*!< Falling trigger event configuration bit of line 0 */
#define EXTI_FTSR_TR1_Pos (1U)
#define EXTI_FTSR_TR1_Msk (0x1UL << EXTI_FTSR_TR1_Pos) /*!< 0x00000002 */
#define EXTI_FTSR_TR1 EXTI_FTSR_TR1_Msk                /*!< Falling trigger event configuration bit of line 1 */
#define EXTI_FTSR_TR2_Pos (2U)
#define EXTI_FTSR_TR2_Msk (0x1UL << EXTI_FTSR_TR2_Pos) /*!< 0x00000004 */
#define EXTI_FTSR_TR2 EXTI_FTSR_TR2_Msk                /*!< Falling trigger event configuration bit of line 2 */
#define EXTI_FTSR_TR3_Pos (3U)
#define EXTI_FTSR_TR3_Msk (0x1UL << EXTI_FTSR_TR3_Pos) /*!< 0x00000008 */
#define EXTI_FTSR_TR3 EXTI_FTSR_TR3_Msk                /*!< Falling trigger event configuration bit of line 3 */
#define EXTI_FTSR_TR4_Pos (4U)
#define EXTI_FTSR_TR4_Msk (0x1UL << EXTI_FTSR_TR4_Pos) /*!< 0x00000010 */
#define EXTI_FTSR_TR4 EXTI_FTSR_TR4_Msk                /*!< Falling trigger event configuration bit of line 4 */
#define EXTI_FTSR_TR5_Pos (5U)
#define EXTI_FTSR_TR5_Msk (0x1UL << EXTI_FTSR_TR5_Pos) /*!< 0x00000020 */
#define EXTI_FTSR_TR5 EXTI_FTSR_TR5_Msk                /*!< Falling trigger event configuration bit of line 5 */
#define EXTI_FTSR_TR6_Pos (6U)
#define EXTI_FTSR_TR6_Msk (0x1UL << EXTI_FTSR_TR6_Pos) /*!< 0x00000040 */
#define EXTI_FTSR_TR6 EXTI_FTSR_TR6_Msk                /*!< Falling trigger event configuration bit of line 6 */
#define EXTI_FTSR_TR7_Pos (7U)
#define EXTI_FTSR_TR7_Msk (0x1UL << EXTI_FTSR_TR7_Pos) /*!< 0x00000080 */
#define EXTI_FTSR_TR7 EXTI_FTSR_TR7_Msk                /*!< Falling trigger event configuration bit of line 7 */
#define EXTI_FTSR_TR8_Pos (8U)
#define EXTI_FTSR_TR8_Msk (0x1UL << EXTI_FTSR_TR8_Pos) /*!< 0x00000100 */
#define EXTI_FTSR_TR8 EXTI_FTSR_TR8_Msk                /*!< Falling trigger event configuration bit of line 8 */
#define EXTI_FTSR_TR9_Pos (9U)
#define EXTI_FTSR_TR9_Msk (0x1UL << EXTI_FTSR_TR9_Pos) /*!< 0x00000200 */
#define EXTI_FTSR_TR9 EXTI_FTSR_TR9_Msk                /*!< Falling trigger event configuration bit of line 9 */
#define EXTI_FTSR_TR10_Pos (10U)
#define EXTI_FTSR_TR10_Msk (0x1UL << EXTI_FTSR_TR10_Pos) /*!< 0x00000400 */
#define EXTI_FTSR_TR10 EXTI_FTSR_TR10_Msk                /*!< Falling trigger event configuration bit of line 10 */
#define EXTI_FTSR_TR11_Pos (11U)
#define EXTI_FTSR_TR11_Msk (0x1UL << EXTI_FTSR_TR11_Pos) /*!< 0x00000800 */
#define EXTI_FTSR_TR11 EXTI_FTSR_TR11_Msk                /*!< Falling trigger event configuration bit of line 11 */
#define EXTI_FTSR_TR12_Pos (12U)
#define EXTI_FTSR_TR12_Msk (0x1UL << EXTI_FTSR_TR12_Pos) /*!< 0x00001000 */
#define EXTI_FTSR_TR12 EXTI_FTSR_TR12_Msk                /*!< Falling trigger event configuration bit of line 12 */
#define EXTI_FTSR_TR13_Pos (13U)
#define EXTI_FTSR_TR13_Msk (0x1UL << EXTI_FTSR_TR13_Pos) /*!< 0x00002000 */
#define EXTI_FTSR_TR13 EXTI_FTSR_TR13_Msk                /*!< Falling trigger event configuration bit of line 13 */
#define EXTI_FTSR_TR14_Pos (14U)
#define EXTI_FTSR_TR14_Msk (0x1UL << EXTI_FTSR_TR14_Pos) /*!< 0x00004000 */
#define EXTI_FTSR_TR14 EXTI_FTSR_TR14_Msk                /*!< Falling trigger event configuration bit of line 14 */
#define EXTI_FTSR_TR15_Pos (15U)
#define EXTI_FTSR_TR15_Msk (0x1UL << EXTI_FTSR_TR15_Pos) /*!< 0x00008000 */
#define EXTI_FTSR_TR15 EXTI_FTSR_TR15_Msk                /*!< Falling trigger event configuration bit of line 15 */
#define EXTI_FTSR_TR16_Pos (16U)
#define EXTI_FTSR_TR16_Msk (0x1UL << EXTI_FTSR_TR16_Pos) /*!< 0x00010000 */
#define EXTI_FTSR_TR16 EXTI_FTSR_TR16_Msk                /*!< Falling trigger event configuration bit of line 16 */
#define EXTI_FTSR_TR17_Pos (17U)
#define EXTI_FTSR_TR17_Msk (0x1UL << EXTI_FTSR_TR17_Pos) /*!< 0x00020000 */
#define EXTI_FTSR_TR17 EXTI_FTSR_TR17_Msk                /*!< Falling trigger event configuration bit of line 17 */
#define EXTI_FTSR_TR18_Pos (18U)
#define EXTI_FTSR_TR18_Msk (0x1UL << EXTI_FTSR_TR18_Pos) /*!< 0x00040000 */
#define EXTI_FTSR_TR18 EXTI_FTSR_TR18_Msk                /*!< Falling trigger event configuration bit of line 18 */
#define EXTI_FTSR_TR19_Pos (19U)
#define EXTI_FTSR_TR19_Msk (0x1UL << EXTI_FTSR_TR19_Pos) /*!< 0x00080000 */
#define EXTI_FTSR_TR19 EXTI_FTSR_TR19_Msk                /*!< Falling trigger event configuration bit of line 19 */

/* References Defines */
#define EXTI_FTSR_FT0 EXTI_FTSR_TR0
#define EXTI_FTSR_FT1 EXTI_FTSR_TR1
#define EXTI_FTSR_FT2 EXTI_FTSR_TR2
#define EXTI_FTSR_FT3 EXTI_FTSR_TR3
#define EXTI_FTSR_FT4 EXTI_FTSR_TR4
#define EXTI_FTSR_FT5 EXTI_FTSR_TR5
#define EXTI_FTSR_FT6 EXTI_FTSR_TR6
#define EXTI_FTSR_FT7 EXTI_FTSR_TR7
#define EXTI_FTSR_FT8 EXTI_FTSR_TR8
#define EXTI_FTSR_FT9 EXTI_FTSR_TR9
#define EXTI_FTSR_FT10 EXTI_FTSR_TR10
#define EXTI_FTSR_FT11 EXTI_FTSR_TR11
#define EXTI_FTSR_FT12 EXTI_FTSR_TR12
#define EXTI_FTSR_FT13 EXTI_FTSR_TR13
#define EXTI_FTSR_FT14 EXTI_FTSR_TR14
#define EXTI_FTSR_FT15 EXTI_FTSR_TR15
#define EXTI_FTSR_FT16 EXTI_FTSR_TR16
#define EXTI_FTSR_FT17 EXTI_FTSR_TR17
#define EXTI_FTSR_FT18 EXTI_FTSR_TR18
#define EXTI_FTSR_FT19 EXTI_FTSR_TR19

/******************  Bit definition for EXTI_SWIER register  ******************/
#define EXTI_SWIER_SWIER0_Pos (0U)
#define EXTI_SWIER_SWIER0_Msk (0x1UL << EXTI_SWIER_SWIER0_Pos) /*!< 0x00000001 */
#define EXTI_SWIER_SWIER0 EXTI_SWIER_SWIER0_Msk                /*!< Software Interrupt on line 0 */
#define EXTI_SWIER_SWIER1_Pos (1U)
#define EXTI_SWIER_SWIER1_Msk (0x1UL << EXTI_SWIER_SWIER1_Pos) /*!< 0x00000002 */
#define EXTI_SWIER_SWIER1 EXTI_SWIER_SWIER1_Msk                /*!< Software Interrupt on line 1 */
#define EXTI_SWIER_SWIER2_Pos (2U)
#define EXTI_SWIER_SWIER2_Msk (0x1UL << EXTI_SWIER_SWIER2_Pos) /*!< 0x00000004 */
#define EXTI_SWIER_SWIER2 EXTI_SWIER_SWIER2_Msk                /*!< Software Interrupt on line 2 */
#define EXTI_SWIER_SWIER3_Pos (3U)
#define EXTI_SWIER_SWIER3_Msk (0x1UL << EXTI_SWIER_SWIER3_Pos) /*!< 0x00000008 */
#define EXTI_SWIER_SWIER3 EXTI_SWIER_SWIER3_Msk                /*!< Software Interrupt on line 3 */
#define EXTI_SWIER_SWIER4_Pos (4U)
#define EXTI_SWIER_SWIER4_Msk (0x1UL << EXTI_SWIER_SWIER4_Pos) /*!< 0x00000010 */
#define EXTI_SWIER_SWIER4 EXTI_SWIER_SWIER4_Msk                /*!< Software Interrupt on line 4 */
#define EXTI_SWIER_SWIER5_Pos (5U)
#define EXTI_SWIER_SWIER5_Msk (0x1UL << EXTI_SWIER_SWIER5_Pos) /*!< 0x00000020 */
#define EXTI_SWIER_SWIER5 EXTI_SWIER_SWIER5_Msk                /*!< Software Interrupt on line 5 */
#define EXTI_SWIER_SWIER6_Pos (6U)
#define EXTI_SWIER_SWIER6_Msk (0x1UL << EXTI_SWIER_SWIER6_Pos) /*!< 0x00000040 */
#define EXTI_SWIER_SWIER6 EXTI_SWIER_SWIER6_Msk                /*!< Software Interrupt on line 6 */
#define EXTI_SWIER_SWIER7_Pos (7U)
#define EXTI_SWIER_SWIER7_Msk (0x1UL << EXTI_SWIER_SWIER7_Pos) /*!< 0x00000080 */
#define EXTI_SWIER_SWIER7 EXTI_SWIER_SWIER7_Msk                /*!< Software Interrupt on line 7 */
#define EXTI_SWIER_SWIER8_Pos (8U)
#define EXTI_SWIER_SWIER8_Msk (0x1UL << EXTI_SWIER_SWIER8_Pos) /*!< 0x00000100 */
#define EXTI_SWIER_SWIER8 EXTI_SWIER_SWIER8_Msk                /*!< Software Interrupt on line 8 */
#define EXTI_SWIER_SWIER9_Pos (9U)
#define EXTI_SWIER_SWIER9_Msk (0x1UL << EXTI_SWIER_SWIER9_Pos) /*!< 0x00000200 */
#define EXTI_SWIER_SWIER9 EXTI_SWIER_SWIER9_Msk                /*!< Software Interrupt on line 9 */
#define EXTI_SWIER_SWIER10_Pos (10U)
#define EXTI_SWIER_SWIER10_Msk (0x1UL << EXTI_SWIER_SWIER10_Pos) /*!< 0x00000400 */
#define EXTI_SWIER_SWIER10 EXTI_SWIER_SWIER10_Msk                /*!< Software Interrupt on line 10 */
#define EXTI_SWIER_SWIER11_Pos (11U)
#define EXTI_SWIER_SWIER11_Msk (0x1UL << EXTI_SWIER_SWIER11_Pos) /*!< 0x00000800 */
#define EXTI_SWIER_SWIER11 EXTI_SWIER_SWIER11_Msk                /*!< Software Interrupt on line 11 */
#define EXTI_SWIER_SWIER12_Pos (12U)
#define EXTI_SWIER_SWIER12_Msk (0x1UL << EXTI_SWIER_SWIER12_Pos) /*!< 0x00001000 */
#define EXTI_SWIER_SWIER12 EXTI_SWIER_SWIER12_Msk                /*!< Software Interrupt on line 12 */
#define EXTI_SWIER_SWIER13_Pos (13U)
#define EXTI_SWIER_SWIER13_Msk (0x1UL << EXTI_SWIER_SWIER13_Pos) /*!< 0x00002000 */
#define EXTI_SWIER_SWIER13 EXTI_SWIER_SWIER13_Msk                /*!< Software Interrupt on line 13 */
#define EXTI_SWIER_SWIER14_Pos (14U)
#define EXTI_SWIER_SWIER14_Msk (0x1UL << EXTI_SWIER_SWIER14_Pos) /*!< 0x00004000 */
#define EXTI_SWIER_SWIER14 EXTI_SWIER_SWIER14_Msk                /*!< Software Interrupt on line 14 */
#define EXTI_SWIER_SWIER15_Pos (15U)
#define EXTI_SWIER_SWIER15_Msk (0x1UL << EXTI_SWIER_SWIER15_Pos) /*!< 0x00008000 */
#define EXTI_SWIER_SWIER15 EXTI_SWIER_SWIER15_Msk                /*!< Software Interrupt on line 15 */
#define EXTI_SWIER_SWIER16_Pos (16U)
#define EXTI_SWIER_SWIER16_Msk (0x1UL << EXTI_SWIER_SWIER16_Pos) /*!< 0x00010000 */
#define EXTI_SWIER_SWIER16 EXTI_SWIER_SWIER16_Msk                /*!< Software Interrupt on line 16 */
#define EXTI_SWIER_SWIER17_Pos (17U)
#define EXTI_SWIER_SWIER17_Msk (0x1UL << EXTI_SWIER_SWIER17_Pos) /*!< 0x00020000 */
#define EXTI_SWIER_SWIER17 EXTI_SWIER_SWIER17_Msk                /*!< Software Interrupt on line 17 */
#define EXTI_SWIER_SWIER18_Pos (18U)
#define EXTI_SWIER_SWIER18_Msk (0x1UL << EXTI_SWIER_SWIER18_Pos) /*!< 0x00040000 */
#define EXTI_SWIER_SWIER18 EXTI_SWIER_SWIER18_Msk                /*!< Software Interrupt on line 18 */
#define EXTI_SWIER_SWIER19_Pos (19U)
#define EXTI_SWIER_SWIER19_Msk (0x1UL << EXTI_SWIER_SWIER19_Pos) /*!< 0x00080000 */
#define EXTI_SWIER_SWIER19 EXTI_SWIER_SWIER19_Msk                /*!< Software Interrupt on line 19 */

/* References Defines */
#define EXTI_SWIER_SWI0 EXTI_SWIER_SWIER0
#define EXTI_SWIER_SWI1 EXTI_SWIER_SWIER1
#define EXTI_SWIER_SWI2 EXTI_SWIER_SWIER2
#define EXTI_SWIER_SWI3 EXTI_SWIER_SWIER3
#define EXTI_SWIER_SWI4 EXTI_SWIER_SWIER4
#define EXTI_SWIER_SWI5 EXTI_SWIER_SWIER5
#define EXTI_SWIER_SWI6 EXTI_SWIER_SWIER6
#define EXTI_SWIER_SWI7 EXTI_SWIER_SWIER7
#define EXTI_SWIER_SWI8 EXTI_SWIER_SWIER8
#define EXTI_SWIER_SWI9 EXTI_SWIER_SWIER9
#define EXTI_SWIER_SWI10 EXTI_SWIER_SWIER10
#define EXTI_SWIER_SWI11 EXTI_SWIER_SWIER11
#define EXTI_SWIER_SWI12 EXTI_SWIER_SWIER12
#define EXTI_SWIER_SWI13 EXTI_SWIER_SWIER13
#define EXTI_SWIER_SWI14 EXTI_SWIER_SWIER14
#define EXTI_SWIER_SWI15 EXTI_SWIER_SWIER15
#define EXTI_SWIER_SWI16 EXTI_SWIER_SWIER16
#define EXTI_SWIER_SWI17 EXTI_SWIER_SWIER17
#define EXTI_SWIER_SWI18 EXTI_SWIER_SWIER18
#define EXTI_SWIER_SWI19 EXTI_SWIER_SWIER19

/*******************  Bit definition for EXTI_PR register  ********************/
#define EXTI_PR_PR0_Pos (0U)
#define EXTI_PR_PR0_Msk (0x1UL << EXTI_PR_PR0_Pos) /*!< 0x00000001 */
#define EXTI_PR_PR0 EXTI_PR_PR0_Msk                /*!< Pending bit for line 0 */
#define EXTI_PR_PR1_Pos (1U)
#define EXTI_PR_PR1_Msk (0x1UL << EXTI_PR_PR1_Pos) /*!< 0x00000002 */
#define EXTI_PR_PR1 EXTI_PR_PR1_Msk                /*!< Pending bit for line 1 */
#define EXTI_PR_PR2_Pos (2U)
#define EXTI_PR_PR2_Msk (0x1UL << EXTI_PR_PR2_Pos) /*!< 0x00000004 */
#define EXTI_PR_PR2 EXTI_PR_PR2_Msk                /*!< Pending bit for line 2 */
#define EXTI_PR_PR3_Pos (3U)
#define EXTI_PR_PR3_Msk (0x1UL << EXTI_PR_PR3_Pos) /*!< 0x00000008 */
#define EXTI_PR_PR3 EXTI_PR_PR3_Msk                /*!< Pending bit for line 3 */
#define EXTI_PR_PR4_Pos (4U)
#define EXTI_PR_PR4_Msk (0x1UL << EXTI_PR_PR4_Pos) /*!< 0x00000010 */
#define EXTI_PR_PR4 EXTI_PR_PR4_Msk                /*!< Pending bit for line 4 */
#define EXTI_PR_PR5_Pos (5U)
#define EXTI_PR_PR5_Msk (0x1UL << EXTI_PR_PR5_Pos) /*!< 0x00000020 */
#define EXTI_PR_PR5 EXTI_PR_PR5_Msk                /*!< Pending bit for line 5 */
#define EXTI_PR_PR6_Pos (6U)
#define EXTI_PR_PR6_Msk (0x1UL << EXTI_PR_PR6_Pos) /*!< 0x00000040 */
#define EXTI_PR_PR6 EXTI_PR_PR6_Msk                /*!< Pending bit for line 6 */
#define EXTI_PR_PR7_Pos (7U)
#define EXTI_PR_PR7_Msk (0x1UL << EXTI_PR_PR7_Pos) /*!< 0x00000080 */
#define EXTI_PR_PR7 EXTI_PR_PR7_Msk                /*!< Pending bit for line 7 */
#define EXTI_PR_PR8_Pos (8U)
#define EXTI_PR_PR8_Msk (0x1UL << EXTI_PR_PR8_Pos) /*!< 0x00000100 */
#define EXTI_PR_PR8 EXTI_PR_PR8_Msk                /*!< Pending bit for line 8 */
#define EXTI_PR_PR9_Pos (9U)
#define EXTI_PR_PR9_Msk (0x1UL << EXTI_PR_PR9_Pos) /*!< 0x00000200 */
#define EXTI_PR_PR9 EXTI_PR_PR9_Msk                /*!< Pending bit for line 9 */
#define EXTI_PR_PR10_Pos (10U)
#define EXTI_PR_PR10_Msk (0x1UL << EXTI_PR_PR10_Pos) /*!< 0x00000400 */
#define EXTI_PR_PR10 EXTI_PR_PR10_Msk                /*!< Pending bit for line 10 */
#define EXTI_PR_PR11_Pos (11U)
#define EXTI_PR_PR11_Msk (0x1UL << EXTI_PR_PR11_Pos) /*!< 0x00000800 */
#define EXTI_PR_PR11 EXTI_PR_PR11_Msk                /*!< Pending bit for line 11 */
#define EXTI_PR_PR12_Pos (12U)
#define EXTI_PR_PR12_Msk (0x1UL << EXTI_PR_PR12_Pos) /*!< 0x00001000 */
#define EXTI_PR_PR12 EXTI_PR_PR12_Msk                /*!< Pending bit for line 12 */
#define EXTI_PR_PR13_Pos (13U)
#define EXTI_PR_PR13_Msk (0x1UL << EXTI_PR_PR13_Pos) /*!< 0x00002000 */
#define EXTI_PR_PR13 EXTI_PR_PR13_Msk                /*!< Pending bit for line 13 */
#define EXTI_PR_PR14_Pos (14U)
#define EXTI_PR_PR14_Msk (0x1UL << EXTI_PR_PR14_Pos) /*!< 0x00004000 */
#define EXTI_PR_PR14 EXTI_PR_PR14_Msk                /*!< Pending bit for line 14 */
#define EXTI_PR_PR15_Pos (15U)
#define EXTI_PR_PR15_Msk (0x1UL << EXTI_PR_PR15_Pos) /*!< 0x00008000 */
#define EXTI_PR_PR15 EXTI_PR_PR15_Msk                /*!< Pending bit for line 15 */
#define EXTI_PR_PR16_Pos (16U)
#define EXTI_PR_PR16_Msk (0x1UL << EXTI_PR_PR16_Pos) /*!< 0x00010000 */
#define EXTI_PR_PR16 EXTI_PR_PR16_Msk                /*!< Pending bit for line 16 */
#define EXTI_PR_PR17_Pos (17U)
#define EXTI_PR_PR17_Msk (0x1UL << EXTI_PR_PR17_Pos) /*!< 0x00020000 */
#define EXTI_PR_PR17 EXTI_PR_PR17_Msk                /*!< Pending bit for line 17 */
#define EXTI_PR_PR18_Pos (18U)
#define EXTI_PR_PR18_Msk (0x1UL << EXTI_PR_PR18_Pos) /*!< 0x00040000 */
#define EXTI_PR_PR18 EXTI_PR_PR18_Msk                /*!< Pending bit for line 18 */
#define EXTI_PR_PR19_Pos (19U)
#define EXTI_PR_PR19_Msk (0x1UL << EXTI_PR_PR19_Pos) /*!< 0x00080000 */
#define EXTI_PR_PR19 EXTI_PR_PR19_Msk                /*!< Pending bit for line 19 */

/* References Defines */
#define EXTI_PR_PIF0 EXTI_PR_PR0
#define EXTI_PR_PIF1 EXTI_PR_PR1
#define EXTI_PR_PIF2 EXTI_PR_PR2
#define EXTI_PR_PIF3 EXTI_PR_PR3
#define EXTI_PR_PIF4 EXTI_PR_PR4
#define EXTI_PR_PIF5 EXTI_PR_PR5
#define EXTI_PR_PIF6 EXTI_PR_PR6
#define EXTI_PR_PIF7 EXTI_PR_PR7
#define EXTI_PR_PIF8 EXTI_PR_PR8
#define EXTI_PR_PIF9 EXTI_PR_PR9
#define EXTI_PR_PIF10 EXTI_PR_PR10
#define EXTI_PR_PIF11 EXTI_PR_PR11
#define EXTI_PR_PIF12 EXTI_PR_PR12
#define EXTI_PR_PIF13 EXTI_PR_PR13
#define EXTI_PR_PIF14 EXTI_PR_PR14
#define EXTI_PR_PIF15 EXTI_PR_PR15
#define EXTI_PR_PIF16 EXTI_PR_PR16
#define EXTI_PR_PIF17 EXTI_PR_PR17
#define EXTI_PR_PIF18 EXTI_PR_PR18
#define EXTI_PR_PIF19 EXTI_PR_PR19

/******************************************************************************/
/*                                                                            */
/*                             DMA Controller                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for DMA_ISR register  ********************/
#define DMA_ISR_GIF1_Pos (0U)
#define DMA_ISR_GIF1_Msk (0x1UL << DMA_ISR_GIF1_Pos) /*!< 0x00000001 */
#define DMA_ISR_GIF1 DMA_ISR_GIF1_Msk                /*!< Channel 1 Global interrupt flag */
#define DMA_ISR_TCIF1_Pos (1U)
#define DMA_ISR_TCIF1_Msk (0x1UL << DMA_ISR_TCIF1_Pos) /*!< 0x00000002 */
#define DMA_ISR_TCIF1 DMA_ISR_TCIF1_Msk                /*!< Channel 1 Transfer Complete flag */
#define DMA_ISR_HTIF1_Pos (2U)
#define DMA_ISR_HTIF1_Msk (0x1UL << DMA_ISR_HTIF1_Pos) /*!< 0x00000004 */
#define DMA_ISR_HTIF1 DMA_ISR_HTIF1_Msk                /*!< Channel 1 Half Transfer flag */
#define DMA_ISR_TEIF1_Pos (3U)
#define DMA_ISR_TEIF1_Msk (0x1UL << DMA_ISR_TEIF1_Pos) /*!< 0x00000008 */
#define DMA_ISR_TEIF1 DMA_ISR_TEIF1_Msk                /*!< Channel 1 Transfer Error flag */
#define DMA_ISR_GIF2_Pos (4U)
#define DMA_ISR_GIF2_Msk (0x1UL << DMA_ISR_GIF2_Pos) /*!< 0x00000010 */
#define DMA_ISR_GIF2 DMA_ISR_GIF2_Msk                /*!< Channel 2 Global interrupt flag */
#define DMA_ISR_TCIF2_Pos (5U)
#define DMA_ISR_TCIF2_Msk (0x1UL << DMA_ISR_TCIF2_Pos) /*!< 0x00000020 */
#define DMA_ISR_TCIF2 DMA_ISR_TCIF2_Msk                /*!< Channel 2 Transfer Complete flag */
#define DMA_ISR_HTIF2_Pos (6U)
#define DMA_ISR_HTIF2_Msk (0x1UL << DMA_ISR_HTIF2_Pos) /*!< 0x00000040 */
#define DMA_ISR_HTIF2 DMA_ISR_HTIF2_Msk                /*!< Channel 2 Half Transfer flag */
#define DMA_ISR_TEIF2_Pos (7U)
#define DMA_ISR_TEIF2_Msk (0x1UL << DMA_ISR_TEIF2_Pos) /*!< 0x00000080 */
#define DMA_ISR_TEIF2 DMA_ISR_TEIF2_Msk                /*!< Channel 2 Transfer Error flag */
#define DMA_ISR_GIF3_Pos (8U)
#define DMA_ISR_GIF3_Msk (0x1UL << DMA_ISR_GIF3_Pos) /*!< 0x00000100 */
#define DMA_ISR_GIF3 DMA_ISR_GIF3_Msk                /*!< Channel 3 Global interrupt flag */
#define DMA_ISR_TCIF3_Pos (9U)
#define DMA_ISR_TCIF3_Msk (0x1UL << DMA_ISR_TCIF3_Pos) /*!< 0x00000200 */
#define DMA_ISR_TCIF3 DMA_ISR_TCIF3_Msk                /*!< Channel 3 Transfer Complete flag */
#define DMA_ISR_HTIF3_Pos (10U)
#define DMA_ISR_HTIF3_Msk (0x1UL << DMA_ISR_HTIF3_Pos) /*!< 0x00000400 */
#define DMA_ISR_HTIF3 DMA_ISR_HTIF3_Msk                /*!< Channel 3 Half Transfer flag */
#define DMA_ISR_TEIF3_Pos (11U)
#define DMA_ISR_TEIF3_Msk (0x1UL << DMA_ISR_TEIF3_Pos) /*!< 0x00000800 */
#define DMA_ISR_TEIF3 DMA_ISR_TEIF3_Msk                /*!< Channel 3 Transfer Error flag */
#define DMA_ISR_GIF4_Pos (12U)
#define DMA_ISR_GIF4_Msk (0x1UL << DMA_ISR_GIF4_Pos) /*!< 0x00001000 */
#define DMA_ISR_GIF4 DMA_ISR_GIF4_Msk                /*!< Channel 4 Global interrupt flag */
#define DMA_ISR_TCIF4_Pos (13U)
#define DMA_ISR_TCIF4_Msk (0x1UL << DMA_ISR_TCIF4_Pos) /*!< 0x00002000 */
#define DMA_ISR_TCIF4 DMA_ISR_TCIF4_Msk                /*!< Channel 4 Transfer Complete flag */
#define DMA_ISR_HTIF4_Pos (14U)
#define DMA_ISR_HTIF4_Msk (0x1UL << DMA_ISR_HTIF4_Pos) /*!< 0x00004000 */
#define DMA_ISR_HTIF4 DMA_ISR_HTIF4_Msk                /*!< Channel 4 Half Transfer flag */
#define DMA_ISR_TEIF4_Pos (15U)
#define DMA_ISR_TEIF4_Msk (0x1UL << DMA_ISR_TEIF4_Pos) /*!< 0x00008000 */
#define DMA_ISR_TEIF4 DMA_ISR_TEIF4_Msk                /*!< Channel 4 Transfer Error flag */
#define DMA_ISR_GIF5_Pos (16U)
#define DMA_ISR_GIF5_Msk (0x1UL << DMA_ISR_GIF5_Pos) /*!< 0x00010000 */
#define DMA_ISR_GIF5 DMA_ISR_GIF5_Msk                /*!< Channel 5 Global interrupt flag */
#define DMA_ISR_TCIF5_Pos (17U)
#define DMA_ISR_TCIF5_Msk (0x1UL << DMA_ISR_TCIF5_Pos) /*!< 0x00020000 */
#define DMA_ISR_TCIF5 DMA_ISR_TCIF5_Msk                /*!< Channel 5 Transfer Complete flag */
#define DMA_ISR_HTIF5_Pos (18U)
#define DMA_ISR_HTIF5_Msk (0x1UL << DMA_ISR_HTIF5_Pos) /*!< 0x00040000 */
#define DMA_ISR_HTIF5 DMA_ISR_HTIF5_Msk                /*!< Channel 5 Half Transfer flag */
#define DMA_ISR_TEIF5_Pos (19U)
#define DMA_ISR_TEIF5_Msk (0x1UL << DMA_ISR_TEIF5_Pos) /*!< 0x00080000 */
#define DMA_ISR_TEIF5 DMA_ISR_TEIF5_Msk                /*!< Channel 5 Transfer Error flag */
#define DMA_ISR_GIF6_Pos (20U)
#define DMA_ISR_GIF6_Msk (0x1UL << DMA_ISR_GIF6_Pos) /*!< 0x00100000 */
#define DMA_ISR_GIF6 DMA_ISR_GIF6_Msk                /*!< Channel 6 Global interrupt flag */
#define DMA_ISR_TCIF6_Pos (21U)
#define DMA_ISR_TCIF6_Msk (0x1UL << DMA_ISR_TCIF6_Pos) /*!< 0x00200000 */
#define DMA_ISR_TCIF6 DMA_ISR_TCIF6_Msk                /*!< Channel 6 Transfer Complete flag */
#define DMA_ISR_HTIF6_Pos (22U)
#define DMA_ISR_HTIF6_Msk (0x1UL << DMA_ISR_HTIF6_Pos) /*!< 0x00400000 */
#define DMA_ISR_HTIF6 DMA_ISR_HTIF6_Msk                /*!< Channel 6 Half Transfer flag */
#define DMA_ISR_TEIF6_Pos (23U)
#define DMA_ISR_TEIF6_Msk (0x1UL << DMA_ISR_TEIF6_Pos) /*!< 0x00800000 */
#define DMA_ISR_TEIF6 DMA_ISR_TEIF6_Msk                /*!< Channel 6 Transfer Error flag */
#define DMA_ISR_GIF7_Pos (24U)
#define DMA_ISR_GIF7_Msk (0x1UL << DMA_ISR_GIF7_Pos) /*!< 0x01000000 */
#define DMA_ISR_GIF7 DMA_ISR_GIF7_Msk                /*!< Channel 7 Global interrupt flag */
#define DMA_ISR_TCIF7_Pos (25U)
#define DMA_ISR_TCIF7_Msk (0x1UL << DMA_ISR_TCIF7_Pos) /*!< 0x02000000 */
#define DMA_ISR_TCIF7 DMA_ISR_TCIF7_Msk                /*!< Channel 7 Transfer Complete flag */
#define DMA_ISR_HTIF7_Pos (26U)
#define DMA_ISR_HTIF7_Msk (0x1UL << DMA_ISR_HTIF7_Pos) /*!< 0x04000000 */
#define DMA_ISR_HTIF7 DMA_ISR_HTIF7_Msk                /*!< Channel 7 Half Transfer flag */
#define DMA_ISR_TEIF7_Pos (27U)
#define DMA_ISR_TEIF7_Msk (0x1UL << DMA_ISR_TEIF7_Pos) /*!< 0x08000000 */
#define DMA_ISR_TEIF7 DMA_ISR_TEIF7_Msk                /*!< Channel 7 Transfer Error flag */

/*******************  Bit definition for DMA_IFCR register  *******************/
#define DMA_IFCR_CGIF1_Pos (0U)
#define DMA_IFCR_CGIF1_Msk (0x1UL << DMA_IFCR_CGIF1_Pos) /*!< 0x00000001 */
#define DMA_IFCR_CGIF1 DMA_IFCR_CGIF1_Msk                /*!< Channel 1 Global interrupt clear */
#define DMA_IFCR_CTCIF1_Pos (1U)
#define DMA_IFCR_CTCIF1_Msk (0x1UL << DMA_IFCR_CTCIF1_Pos) /*!< 0x00000002 */
#define DMA_IFCR_CTCIF1 DMA_IFCR_CTCIF1_Msk                /*!< Channel 1 Transfer Complete clear */
#define DMA_IFCR_CHTIF1_Pos (2U)
#define DMA_IFCR_CHTIF1_Msk (0x1UL << DMA_IFCR_CHTIF1_Pos) /*!< 0x00000004 */
#define DMA_IFCR_CHTIF1 DMA_IFCR_CHTIF1_Msk                /*!< Channel 1 Half Transfer clear */
#define DMA_IFCR_CTEIF1_Pos (3U)
#define DMA_IFCR_CTEIF1_Msk (0x1UL << DMA_IFCR_CTEIF1_Pos) /*!< 0x00000008 */
#define DMA_IFCR_CTEIF1 DMA_IFCR_CTEIF1_Msk                /*!< Channel 1 Transfer Error clear */
#define DMA_IFCR_CGIF2_Pos (4U)
#define DMA_IFCR_CGIF2_Msk (0x1UL << DMA_IFCR_CGIF2_Pos) /*!< 0x00000010 */
#define DMA_IFCR_CGIF2 DMA_IFCR_CGIF2_Msk                /*!< Channel 2 Global interrupt clear */
#define DMA_IFCR_CTCIF2_Pos (5U)
#define DMA_IFCR_CTCIF2_Msk (0x1UL << DMA_IFCR_CTCIF2_Pos) /*!< 0x00000020 */
#define DMA_IFCR_CTCIF2 DMA_IFCR_CTCIF2_Msk                /*!< Channel 2 Transfer Complete clear */
#define DMA_IFCR_CHTIF2_Pos (6U)
#define DMA_IFCR_CHTIF2_Msk (0x1UL << DMA_IFCR_CHTIF2_Pos) /*!< 0x00000040 */
#define DMA_IFCR_CHTIF2 DMA_IFCR_CHTIF2_Msk                /*!< Channel 2 Half Transfer clear */
#define DMA_IFCR_CTEIF2_Pos (7U)
#define DMA_IFCR_CTEIF2_Msk (0x1UL << DMA_IFCR_CTEIF2_Pos) /*!< 0x00000080 */
#define DMA_IFCR_CTEIF2 DMA_IFCR_CTEIF2_Msk                /*!< Channel 2 Transfer Error clear */
#define DMA_IFCR_CGIF3_Pos (8U)
#define DMA_IFCR_CGIF3_Msk (0x1UL << DMA_IFCR_CGIF3_Pos) /*!< 0x00000100 */
#define DMA_IFCR_CGIF3 DMA_IFCR_CGIF3_Msk                /*!< Channel 3 Global interrupt clear */
#define DMA_IFCR_CTCIF3_Pos (9U)
#define DMA_IFCR_CTCIF3_Msk (0x1UL << DMA_IFCR_CTCIF3_Pos) /*!< 0x00000200 */
#define DMA_IFCR_CTCIF3 DMA_IFCR_CTCIF3_Msk                /*!< Channel 3 Transfer Complete clear */
#define DMA_IFCR_CHTIF3_Pos (10U)
#define DMA_IFCR_CHTIF3_Msk (0x1UL << DMA_IFCR_CHTIF3_Pos) /*!< 0x00000400 */
#define DMA_IFCR_CHTIF3 DMA_IFCR_CHTIF3_Msk                /*!< Channel 3 Half Transfer clear */
#define DMA_IFCR_CTEIF3_Pos (11U)
#define DMA_IFCR_CTEIF3_Msk (0x1UL << DMA_IFCR_CTEIF3_Pos) /*!< 0x00000800 */
#define DMA_IFCR_CTEIF3 DMA_IFCR_CTEIF3_Msk                /*!< Channel 3 Transfer Error clear */
#define DMA_IFCR_CGIF4_Pos (12U)
#define DMA_IFCR_CGIF4_Msk (0x1UL << DMA_IFCR_CGIF4_Pos) /*!< 0x00001000 */
#define DMA_IFCR_CGIF4 DMA_IFCR_CGIF4_Msk                /*!< Channel 4 Global interrupt clear */
#define DMA_IFCR_CTCIF4_Pos (13U)
#define DMA_IFCR_CTCIF4_Msk (0x1UL << DMA_IFCR_CTCIF4_Pos) /*!< 0x00002000 */
#define DMA_IFCR_CTCIF4 DMA_IFCR_CTCIF4_Msk                /*!< Channel 4 Transfer Complete clear */
#define DMA_IFCR_CHTIF4_Pos (14U)
#define DMA_IFCR_CHTIF4_Msk (0x1UL << DMA_IFCR_CHTIF4_Pos) /*!< 0x00004000 */
#define DMA_IFCR_CHTIF4 DMA_IFCR_CHTIF4_Msk                /*!< Channel 4 Half Transfer clear */
#define DMA_IFCR_CTEIF4_Pos (15U)
#define DMA_IFCR_CTEIF4_Msk (0x1UL << DMA_IFCR_CTEIF4_Pos) /*!< 0x00008000 */
#define DMA_IFCR_CTEIF4 DMA_IFCR_CTEIF4_Msk                /*!< Channel 4 Transfer Error clear */
#define DMA_IFCR_CGIF5_Pos (16U)
#define DMA_IFCR_CGIF5_Msk (0x1UL << DMA_IFCR_CGIF5_Pos) /*!< 0x00010000 */
#define DMA_IFCR_CGIF5 DMA_IFCR_CGIF5_Msk                /*!< Channel 5 Global interrupt clear */
#define DMA_IFCR_CTCIF5_Pos (17U)
#define DMA_IFCR_CTCIF5_Msk (0x1UL << DMA_IFCR_CTCIF5_Pos) /*!< 0x00020000 */
#define DMA_IFCR_CTCIF5 DMA_IFCR_CTCIF5_Msk                /*!< Channel 5 Transfer Complete clear */
#define DMA_IFCR_CHTIF5_Pos (18U)
#define DMA_IFCR_CHTIF5_Msk (0x1UL << DMA_IFCR_CHTIF5_Pos) /*!< 0x00040000 */
#define DMA_IFCR_CHTIF5 DMA_IFCR_CHTIF5_Msk                /*!< Channel 5 Half Transfer clear */
#define DMA_IFCR_CTEIF5_Pos (19U)
#define DMA_IFCR_CTEIF5_Msk (0x1UL << DMA_IFCR_CTEIF5_Pos) /*!< 0x00080000 */
#define DMA_IFCR_CTEIF5 DMA_IFCR_CTEIF5_Msk                /*!< Channel 5 Transfer Error clear */
#define DMA_IFCR_CGIF6_Pos (20U)
#define DMA_IFCR_CGIF6_Msk (0x1UL << DMA_IFCR_CGIF6_Pos) /*!< 0x00100000 */
#define DMA_IFCR_CGIF6 DMA_IFCR_CGIF6_Msk                /*!< Channel 6 Global interrupt clear */
#define DMA_IFCR_CTCIF6_Pos (21U)
#define DMA_IFCR_CTCIF6_Msk (0x1UL << DMA_IFCR_CTCIF6_Pos) /*!< 0x00200000 */
#define DMA_IFCR_CTCIF6 DMA_IFCR_CTCIF6_Msk                /*!< Channel 6 Transfer Complete clear */
#define DMA_IFCR_CHTIF6_Pos (22U)
#define DMA_IFCR_CHTIF6_Msk (0x1UL << DMA_IFCR_CHTIF6_Pos) /*!< 0x00400000 */
#define DMA_IFCR_CHTIF6 DMA_IFCR_CHTIF6_Msk                /*!< Channel 6 Half Transfer clear */
#define DMA_IFCR_CTEIF6_Pos (23U)
#define DMA_IFCR_CTEIF6_Msk (0x1UL << DMA_IFCR_CTEIF6_Pos) /*!< 0x00800000 */
#define DMA_IFCR_CTEIF6 DMA_IFCR_CTEIF6_Msk                /*!< Channel 6 Transfer Error clear */
#define DMA_IFCR_CGIF7_Pos (24U)
#define DMA_IFCR_CGIF7_Msk (0x1UL << DMA_IFCR_CGIF7_Pos) /*!< 0x01000000 */
#define DMA_IFCR_CGIF7 DMA_IFCR_CGIF7_Msk                /*!< Channel 7 Global interrupt clear */
#define DMA_IFCR_CTCIF7_Pos (25U)
#define DMA_IFCR_CTCIF7_Msk (0x1UL << DMA_IFCR_CTCIF7_Pos) /*!< 0x02000000 */
#define DMA_IFCR_CTCIF7 DMA_IFCR_CTCIF7_Msk                /*!< Channel 7 Transfer Complete clear */
#define DMA_IFCR_CHTIF7_Pos (26U)
#define DMA_IFCR_CHTIF7_Msk (0x1UL << DMA_IFCR_CHTIF7_Pos) /*!< 0x04000000 */
#define DMA_IFCR_CHTIF7 DMA_IFCR_CHTIF7_Msk                /*!< Channel 7 Half Transfer clear */
#define DMA_IFCR_CTEIF7_Pos (27U)
#define DMA_IFCR_CTEIF7_Msk (0x1UL << DMA_IFCR_CTEIF7_Pos) /*!< 0x08000000 */
#define DMA_IFCR_CTEIF7 DMA_IFCR_CTEIF7_Msk                /*!< Channel 7 Transfer Error clear */

/*******************  Bit definition for DMA_CCR register   *******************/
#define DMA_CCR_EN_Pos (0U)
#define DMA_CCR_EN_Msk (0x1UL << DMA_CCR_EN_Pos) /*!< 0x00000001 */
#define DMA_CCR_EN DMA_CCR_EN_Msk                /*!< Channel enable */
#define DMA_CCR_TCIE_Pos (1U)
#define DMA_CCR_TCIE_Msk (0x1UL << DMA_CCR_TCIE_Pos) /*!< 0x00000002 */
#define DMA_CCR_TCIE DMA_CCR_TCIE_Msk                /*!< Transfer complete interrupt enable */
#define DMA_CCR_HTIE_Pos (2U)
#define DMA_CCR_HTIE_Msk (0x1UL << DMA_CCR_HTIE_Pos) /*!< 0x00000004 */
#define DMA_CCR_HTIE DMA_CCR_HTIE_Msk                /*!< Half Transfer interrupt enable */
#define DMA_CCR_TEIE_Pos (3U)
#define DMA_CCR_TEIE_Msk (0x1UL << DMA_CCR_TEIE_Pos) /*!< 0x00000008 */
#define DMA_CCR_TEIE DMA_CCR_TEIE_Msk                /*!< Transfer error interrupt enable */
#define DMA_CCR_DIR_Pos (4U)
#define DMA_CCR_DIR_Msk (0x1UL << DMA_CCR_DIR_Pos) /*!< 0x00000010 */
#define DMA_CCR_DIR DMA_CCR_DIR_Msk                /*!< Data transfer direction */
#define DMA_CCR_CIRC_Pos (5U)
#define DMA_CCR_CIRC_Msk (0x1UL << DMA_CCR_CIRC_Pos) /*!< 0x00000020 */
#define DMA_CCR_CIRC DMA_CCR_CIRC_Msk                /*!< Circular mode */
#define DMA_CCR_PINC_Pos (6U)
#define DMA_CCR_PINC_Msk (0x1UL << DMA_CCR_PINC_Pos) /*!< 0x00000040 */
#define DMA_CCR_PINC DMA_CCR_PINC_Msk                /*!< Peripheral increment mode */
#define DMA_CCR_MINC_Pos (7U)
#define DMA_CCR_MINC_Msk (0x1UL << DMA_CCR_MINC_Pos) /*!< 0x00000080 */
#define DMA_CCR_MINC DMA_CCR_MINC_Msk                /*!< Memory increment mode */

#define DMA_CCR_PSIZE_Pos (8U)
#define DMA_CCR_PSIZE_Msk (0x3UL << DMA_CCR_PSIZE_Pos) /*!< 0x00000300 */
#define DMA_CCR_PSIZE DMA_CCR_PSIZE_Msk                /*!< PSIZE[1:0] bits (Peripheral size) */
#define DMA_CCR_PSIZE_0 (0x1UL << DMA_CCR_PSIZE_Pos)   /*!< 0x00000100 */
#define DMA_CCR_PSIZE_1 (0x2UL << DMA_CCR_PSIZE_Pos)   /*!< 0x00000200 */

#define DMA_CCR_MSIZE_Pos (10U)
#define DMA_CCR_MSIZE_Msk (0x3UL << DMA_CCR_MSIZE_Pos) /*!< 0x00000C00 */
#define DMA_CCR_MSIZE DMA_CCR_MSIZE_Msk                /*!< MSIZE[1:0] bits (Memory size) */
#define DMA_CCR_MSIZE_0 (0x1UL << DMA_CCR_MSIZE_Pos)   /*!< 0x00000400 */
#define DMA_CCR_MSIZE_1 (0x2UL << DMA_CCR_MSIZE_Pos)   /*!< 0x00000800 */

#define DMA_CCR_PL_Pos (12U)
#define DMA_CCR_PL_Msk (0x3UL << DMA_CCR_PL_Pos) /*!< 0x00003000 */
#define DMA_CCR_PL DMA_CCR_PL_Msk                /*!< PL[1:0] bits(Channel Priority level) */
#define DMA_CCR_PL_0 (0x1UL << DMA_CCR_PL_Pos)   /*!< 0x00001000 */
#define DMA_CCR_PL_1 (0x2UL << DMA_CCR_PL_Pos)   /*!< 0x00002000 */

#define DMA_CCR_MEM2MEM_Pos (14U)
#define DMA_CCR_MEM2MEM_Msk (0x1UL << DMA_CCR_MEM2MEM_Pos) /*!< 0x00004000 */
#define DMA_CCR_MEM2MEM DMA_CCR_MEM2MEM_Msk                /*!< Memory to memory mode */

/******************  Bit definition for DMA_CNDTR  register  ******************/
#define DMA_CNDTR_NDT_Pos (0U)
#define DMA_CNDTR_NDT_Msk (0xFFFFUL << DMA_CNDTR_NDT_Pos) /*!< 0x0000FFFF */
#define DMA_CNDTR_NDT DMA_CNDTR_NDT_Msk                   /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CPAR  register  *******************/
#define DMA_CPAR_PA_Pos (0U)
#define DMA_CPAR_PA_Msk (0xFFFFFFFFUL << DMA_CPAR_PA_Pos) /*!< 0xFFFFFFFF */
#define DMA_CPAR_PA DMA_CPAR_PA_Msk                       /*!< Peripheral Address */

/******************  Bit definition for DMA_CMAR  register  *******************/
#define DMA_CMAR_MA_Pos (0U)
#define DMA_CMAR_MA_Msk (0xFFFFFFFFUL << DMA_CMAR_MA_Pos) /*!< 0xFFFFFFFF */
#define DMA_CMAR_MA DMA_CMAR_MA_Msk                       /*!< Memory Address */

/******************************************************************************/
/*                                                                            */
/*                      Analog to Digital Converter (ADC)                     */
/*                                                                            */
/******************************************************************************/

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F1 family)
 */
#define ADC_MULTIMODE_SUPPORT /*!< ADC feature available only on specific devices: multimode available on devices with \
                                 several ADC instances */

/********************  Bit definition for ADC_SR register  ********************/
#define ADC_SR_AWD_Pos (0U)
#define ADC_SR_AWD_Msk (0x1UL << ADC_SR_AWD_Pos) /*!< 0x00000001 */
#define ADC_SR_AWD ADC_SR_AWD_Msk                /*!< ADC analog watchdog 1 flag */
#define ADC_SR_EOS_Pos (1U)
#define ADC_SR_EOS_Msk (0x1UL << ADC_SR_EOS_Pos) /*!< 0x00000002 */
#define ADC_SR_EOS ADC_SR_EOS_Msk                /*!< ADC group regular end of sequence conversions flag */
#define ADC_SR_JEOS_Pos (2U)
#define ADC_SR_JEOS_Msk (0x1UL << ADC_SR_JEOS_Pos) /*!< 0x00000004 */
#define ADC_SR_JEOS ADC_SR_JEOS_Msk                /*!< ADC group injected end of sequence conversions flag */
#define ADC_SR_JSTRT_Pos (3U)
#define ADC_SR_JSTRT_Msk (0x1UL << ADC_SR_JSTRT_Pos) /*!< 0x00000008 */
#define ADC_SR_JSTRT ADC_SR_JSTRT_Msk                /*!< ADC group injected conversion start flag */
#define ADC_SR_STRT_Pos (4U)
#define ADC_SR_STRT_Msk (0x1UL << ADC_SR_STRT_Pos) /*!< 0x00000010 */
#define ADC_SR_STRT ADC_SR_STRT_Msk                /*!< ADC group regular conversion start flag */

/* Legacy defines */
#define ADC_SR_EOC (ADC_SR_EOS)
#define ADC_SR_JEOC (ADC_SR_JEOS)

/*******************  Bit definition for ADC_CR1 register  ********************/
#define ADC_CR1_AWDCH_Pos (0U)
#define ADC_CR1_AWDCH_Msk (0x1FUL << ADC_CR1_AWDCH_Pos) /*!< 0x0000001F */
#define ADC_CR1_AWDCH ADC_CR1_AWDCH_Msk                 /*!< ADC analog watchdog 1 monitored channel selection */
#define ADC_CR1_AWDCH_0 (0x01UL << ADC_CR1_AWDCH_Pos)   /*!< 0x00000001 */
#define ADC_CR1_AWDCH_1 (0x02UL << ADC_CR1_AWDCH_Pos)   /*!< 0x00000002 */
#define ADC_CR1_AWDCH_2 (0x04UL << ADC_CR1_AWDCH_Pos)   /*!< 0x00000004 */
#define ADC_CR1_AWDCH_3 (0x08UL << ADC_CR1_AWDCH_Pos)   /*!< 0x00000008 */
#define ADC_CR1_AWDCH_4 (0x10UL << ADC_CR1_AWDCH_Pos)   /*!< 0x00000010 */

#define ADC_CR1_EOSIE_Pos (5U)
#define ADC_CR1_EOSIE_Msk (0x1UL << ADC_CR1_EOSIE_Pos) /*!< 0x00000020 */
#define ADC_CR1_EOSIE ADC_CR1_EOSIE_Msk                /*!< ADC group regular end of sequence conversions interrupt */
#define ADC_CR1_AWDIE_Pos (6U)
#define ADC_CR1_AWDIE_Msk (0x1UL << ADC_CR1_AWDIE_Pos) /*!< 0x00000040 */
#define ADC_CR1_AWDIE ADC_CR1_AWDIE_Msk                /*!< ADC analog watchdog 1 interrupt */
#define ADC_CR1_JEOSIE_Pos (7U)
#define ADC_CR1_JEOSIE_Msk (0x1UL << ADC_CR1_JEOSIE_Pos) /*!< 0x00000080 */
#define ADC_CR1_JEOSIE ADC_CR1_JEOSIE_Msk                /*!< ADC group injected end of sequence conversions interrupt */
#define ADC_CR1_SCAN_Pos (8U)
#define ADC_CR1_SCAN_Msk (0x1UL << ADC_CR1_SCAN_Pos) /*!< 0x00000100 */
#define ADC_CR1_SCAN ADC_CR1_SCAN_Msk                /*!< ADC scan mode */
#define ADC_CR1_AWDSGL_Pos (9U)
#define ADC_CR1_AWDSGL_Msk (0x1UL << ADC_CR1_AWDSGL_Pos) /*!< 0x00000200 */
#define ADC_CR1_AWDSGL ADC_CR1_AWDSGL_Msk                /*!< ADC analog watchdog 1 monitoring a single channel or all channels */
#define ADC_CR1_JAUTO_Pos (10U)
#define ADC_CR1_JAUTO_Msk (0x1UL << ADC_CR1_JAUTO_Pos) /*!< 0x00000400 */
#define ADC_CR1_JAUTO ADC_CR1_JAUTO_Msk                /*!< ADC group injected automatic trigger mode */
#define ADC_CR1_DISCEN_Pos (11U)
#define ADC_CR1_DISCEN_Msk (0x1UL << ADC_CR1_DISCEN_Pos) /*!< 0x00000800 */
#define ADC_CR1_DISCEN ADC_CR1_DISCEN_Msk                /*!< ADC group regular sequencer discontinuous mode */
#define ADC_CR1_JDISCEN_Pos (12U)
#define ADC_CR1_JDISCEN_Msk (0x1UL << ADC_CR1_JDISCEN_Pos) /*!< 0x00001000 */
#define ADC_CR1_JDISCEN ADC_CR1_JDISCEN_Msk                /*!< ADC group injected sequencer discontinuous mode */

#define ADC_CR1_DISCNUM_Pos (13U)
#define ADC_CR1_DISCNUM_Msk (0x7UL << ADC_CR1_DISCNUM_Pos) /*!< 0x0000E000 */
#define ADC_CR1_DISCNUM ADC_CR1_DISCNUM_Msk                /*!< ADC group regular sequencer discontinuous number of ranks */
#define ADC_CR1_DISCNUM_0 (0x1UL << ADC_CR1_DISCNUM_Pos)   /*!< 0x00002000 */
#define ADC_CR1_DISCNUM_1 (0x2UL << ADC_CR1_DISCNUM_Pos)   /*!< 0x00004000 */
#define ADC_CR1_DISCNUM_2 (0x4UL << ADC_CR1_DISCNUM_Pos)   /*!< 0x00008000 */

#define ADC_CR1_DUALMOD_Pos (16U)
#define ADC_CR1_DUALMOD_Msk (0xFUL << ADC_CR1_DUALMOD_Pos) /*!< 0x000F0000 */
#define ADC_CR1_DUALMOD ADC_CR1_DUALMOD_Msk                /*!< ADC multimode mode selection */
#define ADC_CR1_DUALMOD_0 (0x1UL << ADC_CR1_DUALMOD_Pos)   /*!< 0x00010000 */
#define ADC_CR1_DUALMOD_1 (0x2UL << ADC_CR1_DUALMOD_Pos)   /*!< 0x00020000 */
#define ADC_CR1_DUALMOD_2 (0x4UL << ADC_CR1_DUALMOD_Pos)   /*!< 0x00040000 */
#define ADC_CR1_DUALMOD_3 (0x8UL << ADC_CR1_DUALMOD_Pos)   /*!< 0x00080000 */

#define ADC_CR1_JAWDEN_Pos (22U)
#define ADC_CR1_JAWDEN_Msk (0x1UL << ADC_CR1_JAWDEN_Pos) /*!< 0x00400000 */
#define ADC_CR1_JAWDEN ADC_CR1_JAWDEN_Msk                /*!< ADC analog watchdog 1 enable on scope ADC group injected */
#define ADC_CR1_AWDEN_Pos (23U)
#define ADC_CR1_AWDEN_Msk (0x1UL << ADC_CR1_AWDEN_Pos) /*!< 0x00800000 */
#define ADC_CR1_AWDEN ADC_CR1_AWDEN_Msk                /*!< ADC analog watchdog 1 enable on scope ADC group regular */

/* Legacy defines */
#define ADC_CR1_EOCIE (ADC_CR1_EOSIE)
#define ADC_CR1_JEOCIE (ADC_CR1_JEOSIE)

/*******************  Bit definition for ADC_CR2 register  ********************/
#define ADC_CR2_ADON_Pos (0U)
#define ADC_CR2_ADON_Msk (0x1UL << ADC_CR2_ADON_Pos) /*!< 0x00000001 */
#define ADC_CR2_ADON ADC_CR2_ADON_Msk                /*!< ADC enable */
#define ADC_CR2_CONT_Pos (1U)
#define ADC_CR2_CONT_Msk (0x1UL << ADC_CR2_CONT_Pos) /*!< 0x00000002 */
#define ADC_CR2_CONT ADC_CR2_CONT_Msk                /*!< ADC group regular continuous conversion mode */
#define ADC_CR2_CAL_Pos (2U)
#define ADC_CR2_CAL_Msk (0x1UL << ADC_CR2_CAL_Pos) /*!< 0x00000004 */
#define ADC_CR2_CAL ADC_CR2_CAL_Msk                /*!< ADC calibration start */
#define ADC_CR2_RSTCAL_Pos (3U)
#define ADC_CR2_RSTCAL_Msk (0x1UL << ADC_CR2_RSTCAL_Pos) /*!< 0x00000008 */
#define ADC_CR2_RSTCAL ADC_CR2_RSTCAL_Msk                /*!< ADC calibration reset */
#define ADC_CR2_DMA_Pos (8U)
#define ADC_CR2_DMA_Msk (0x1UL << ADC_CR2_DMA_Pos) /*!< 0x00000100 */
#define ADC_CR2_DMA ADC_CR2_DMA_Msk                /*!< ADC DMA transfer enable */
#define ADC_CR2_ALIGN_Pos (11U)
#define ADC_CR2_ALIGN_Msk (0x1UL << ADC_CR2_ALIGN_Pos) /*!< 0x00000800 */
#define ADC_CR2_ALIGN ADC_CR2_ALIGN_Msk                /*!< ADC data alignement */

#define ADC_CR2_JEXTSEL_Pos (12U)
#define ADC_CR2_JEXTSEL_Msk (0x7UL << ADC_CR2_JEXTSEL_Pos) /*!< 0x00007000 */
#define ADC_CR2_JEXTSEL ADC_CR2_JEXTSEL_Msk                /*!< ADC group injected external trigger source */
#define ADC_CR2_JEXTSEL_0 (0x1UL << ADC_CR2_JEXTSEL_Pos)   /*!< 0x00001000 */
#define ADC_CR2_JEXTSEL_1 (0x2UL << ADC_CR2_JEXTSEL_Pos)   /*!< 0x00002000 */
#define ADC_CR2_JEXTSEL_2 (0x4UL << ADC_CR2_JEXTSEL_Pos)   /*!< 0x00004000 */

#define ADC_CR2_JEXTTRIG_Pos (15U)
#define ADC_CR2_JEXTTRIG_Msk (0x1UL << ADC_CR2_JEXTTRIG_Pos) /*!< 0x00008000 */
#define ADC_CR2_JEXTTRIG ADC_CR2_JEXTTRIG_Msk                /*!< ADC group injected external trigger enable */

#define ADC_CR2_EXTSEL_Pos (17U)
#define ADC_CR2_EXTSEL_Msk (0x7UL << ADC_CR2_EXTSEL_Pos) /*!< 0x000E0000 */
#define ADC_CR2_EXTSEL ADC_CR2_EXTSEL_Msk                /*!< ADC group regular external trigger source */
#define ADC_CR2_EXTSEL_0 (0x1UL << ADC_CR2_EXTSEL_Pos)   /*!< 0x00020000 */
#define ADC_CR2_EXTSEL_1 (0x2UL << ADC_CR2_EXTSEL_Pos)   /*!< 0x00040000 */
#define ADC_CR2_EXTSEL_2 (0x4UL << ADC_CR2_EXTSEL_Pos)   /*!< 0x00080000 */

#define ADC_CR2_EXTTRIG_Pos (20U)
#define ADC_CR2_EXTTRIG_Msk (0x1UL << ADC_CR2_EXTTRIG_Pos) /*!< 0x00100000 */
#define ADC_CR2_EXTTRIG ADC_CR2_EXTTRIG_Msk                /*!< ADC group regular external trigger enable */
#define ADC_CR2_JSWSTART_Pos (21U)
#define ADC_CR2_JSWSTART_Msk (0x1UL << ADC_CR2_JSWSTART_Pos) /*!< 0x00200000 */
#define ADC_CR2_JSWSTART ADC_CR2_JSWSTART_Msk                /*!< ADC group injected conversion start */
#define ADC_CR2_SWSTART_Pos (22U)
#define ADC_CR2_SWSTART_Msk (0x1UL << ADC_CR2_SWSTART_Pos) /*!< 0x00400000 */
#define ADC_CR2_SWSTART ADC_CR2_SWSTART_Msk                /*!< ADC group regular conversion start */
#define ADC_CR2_TSVREFE_Pos (23U)
#define ADC_CR2_TSVREFE_Msk (0x1UL << ADC_CR2_TSVREFE_Pos) /*!< 0x00800000 */
#define ADC_CR2_TSVREFE ADC_CR2_TSVREFE_Msk                /*!< ADC internal path to VrefInt and temperature sensor enable */

/******************  Bit definition for ADC_SMPR1 register  *******************/
#define ADC_SMPR1_SMP10_Pos (0U)
#define ADC_SMPR1_SMP10_Msk (0x7UL << ADC_SMPR1_SMP10_Pos) /*!< 0x00000007 */
#define ADC_SMPR1_SMP10 ADC_SMPR1_SMP10_Msk                /*!< ADC channel 10 sampling time selection  */
#define ADC_SMPR1_SMP10_0 (0x1UL << ADC_SMPR1_SMP10_Pos)   /*!< 0x00000001 */
#define ADC_SMPR1_SMP10_1 (0x2UL << ADC_SMPR1_SMP10_Pos)   /*!< 0x00000002 */
#define ADC_SMPR1_SMP10_2 (0x4UL << ADC_SMPR1_SMP10_Pos)   /*!< 0x00000004 */

#define ADC_SMPR1_SMP11_Pos (3U)
#define ADC_SMPR1_SMP11_Msk (0x7UL << ADC_SMPR1_SMP11_Pos) /*!< 0x00000038 */
#define ADC_SMPR1_SMP11 ADC_SMPR1_SMP11_Msk                /*!< ADC channel 11 sampling time selection  */
#define ADC_SMPR1_SMP11_0 (0x1UL << ADC_SMPR1_SMP11_Pos)   /*!< 0x00000008 */
#define ADC_SMPR1_SMP11_1 (0x2UL << ADC_SMPR1_SMP11_Pos)   /*!< 0x00000010 */
#define ADC_SMPR1_SMP11_2 (0x4UL << ADC_SMPR1_SMP11_Pos)   /*!< 0x00000020 */

#define ADC_SMPR1_SMP12_Pos (6U)
#define ADC_SMPR1_SMP12_Msk (0x7UL << ADC_SMPR1_SMP12_Pos) /*!< 0x000001C0 */
#define ADC_SMPR1_SMP12 ADC_SMPR1_SMP12_Msk                /*!< ADC channel 12 sampling time selection  */
#define ADC_SMPR1_SMP12_0 (0x1UL << ADC_SMPR1_SMP12_Pos)   /*!< 0x00000040 */
#define ADC_SMPR1_SMP12_1 (0x2UL << ADC_SMPR1_SMP12_Pos)   /*!< 0x00000080 */
#define ADC_SMPR1_SMP12_2 (0x4UL << ADC_SMPR1_SMP12_Pos)   /*!< 0x00000100 */

#define ADC_SMPR1_SMP13_Pos (9U)
#define ADC_SMPR1_SMP13_Msk (0x7UL << ADC_SMPR1_SMP13_Pos) /*!< 0x00000E00 */
#define ADC_SMPR1_SMP13 ADC_SMPR1_SMP13_Msk                /*!< ADC channel 13 sampling time selection  */
#define ADC_SMPR1_SMP13_0 (0x1UL << ADC_SMPR1_SMP13_Pos)   /*!< 0x00000200 */
#define ADC_SMPR1_SMP13_1 (0x2UL << ADC_SMPR1_SMP13_Pos)   /*!< 0x00000400 */
#define ADC_SMPR1_SMP13_2 (0x4UL << ADC_SMPR1_SMP13_Pos)   /*!< 0x00000800 */

#define ADC_SMPR1_SMP14_Pos (12U)
#define ADC_SMPR1_SMP14_Msk (0x7UL << ADC_SMPR1_SMP14_Pos) /*!< 0x00007000 */
#define ADC_SMPR1_SMP14 ADC_SMPR1_SMP14_Msk                /*!< ADC channel 14 sampling time selection  */
#define ADC_SMPR1_SMP14_0 (0x1UL << ADC_SMPR1_SMP14_Pos)   /*!< 0x00001000 */
#define ADC_SMPR1_SMP14_1 (0x2UL << ADC_SMPR1_SMP14_Pos)   /*!< 0x00002000 */
#define ADC_SMPR1_SMP14_2 (0x4UL << ADC_SMPR1_SMP14_Pos)   /*!< 0x00004000 */

#define ADC_SMPR1_SMP15_Pos (15U)
#define ADC_SMPR1_SMP15_Msk (0x7UL << ADC_SMPR1_SMP15_Pos) /*!< 0x00038000 */
#define ADC_SMPR1_SMP15 ADC_SMPR1_SMP15_Msk                /*!< ADC channel 15 sampling time selection  */
#define ADC_SMPR1_SMP15_0 (0x1UL << ADC_SMPR1_SMP15_Pos)   /*!< 0x00008000 */
#define ADC_SMPR1_SMP15_1 (0x2UL << ADC_SMPR1_SMP15_Pos)   /*!< 0x00010000 */
#define ADC_SMPR1_SMP15_2 (0x4UL << ADC_SMPR1_SMP15_Pos)   /*!< 0x00020000 */

#define ADC_SMPR1_SMP16_Pos (18U)
#define ADC_SMPR1_SMP16_Msk (0x7UL << ADC_SMPR1_SMP16_Pos) /*!< 0x001C0000 */
#define ADC_SMPR1_SMP16 ADC_SMPR1_SMP16_Msk                /*!< ADC channel 16 sampling time selection  */
#define ADC_SMPR1_SMP16_0 (0x1UL << ADC_SMPR1_SMP16_Pos)   /*!< 0x00040000 */
#define ADC_SMPR1_SMP16_1 (0x2UL << ADC_SMPR1_SMP16_Pos)   /*!< 0x00080000 */
#define ADC_SMPR1_SMP16_2 (0x4UL << ADC_SMPR1_SMP16_Pos)   /*!< 0x00100000 */

#define ADC_SMPR1_SMP17_Pos (21U)
#define ADC_SMPR1_SMP17_Msk (0x7UL << ADC_SMPR1_SMP17_Pos) /*!< 0x00E00000 */
#define ADC_SMPR1_SMP17 ADC_SMPR1_SMP17_Msk                /*!< ADC channel 17 sampling time selection  */
#define ADC_SMPR1_SMP17_0 (0x1UL << ADC_SMPR1_SMP17_Pos)   /*!< 0x00200000 */
#define ADC_SMPR1_SMP17_1 (0x2UL << ADC_SMPR1_SMP17_Pos)   /*!< 0x00400000 */
#define ADC_SMPR1_SMP17_2 (0x4UL << ADC_SMPR1_SMP17_Pos)   /*!< 0x00800000 */

/******************  Bit definition for ADC_SMPR2 register  *******************/
#define ADC_SMPR2_SMP0_Pos (0U)
#define ADC_SMPR2_SMP0_Msk (0x7UL << ADC_SMPR2_SMP0_Pos) /*!< 0x00000007 */
#define ADC_SMPR2_SMP0 ADC_SMPR2_SMP0_Msk                /*!< ADC channel 0 sampling time selection  */
#define ADC_SMPR2_SMP0_0 (0x1UL << ADC_SMPR2_SMP0_Pos)   /*!< 0x00000001 */
#define ADC_SMPR2_SMP0_1 (0x2UL << ADC_SMPR2_SMP0_Pos)   /*!< 0x00000002 */
#define ADC_SMPR2_SMP0_2 (0x4UL << ADC_SMPR2_SMP0_Pos)   /*!< 0x00000004 */

#define ADC_SMPR2_SMP1_Pos (3U)
#define ADC_SMPR2_SMP1_Msk (0x7UL << ADC_SMPR2_SMP1_Pos) /*!< 0x00000038 */
#define ADC_SMPR2_SMP1 ADC_SMPR2_SMP1_Msk                /*!< ADC channel 1 sampling time selection  */
#define ADC_SMPR2_SMP1_0 (0x1UL << ADC_SMPR2_SMP1_Pos)   /*!< 0x00000008 */
#define ADC_SMPR2_SMP1_1 (0x2UL << ADC_SMPR2_SMP1_Pos)   /*!< 0x00000010 */
#define ADC_SMPR2_SMP1_2 (0x4UL << ADC_SMPR2_SMP1_Pos)   /*!< 0x00000020 */

#define ADC_SMPR2_SMP2_Pos (6U)
#define ADC_SMPR2_SMP2_Msk (0x7UL << ADC_SMPR2_SMP2_Pos) /*!< 0x000001C0 */
#define ADC_SMPR2_SMP2 ADC_SMPR2_SMP2_Msk                /*!< ADC channel 2 sampling time selection  */
#define ADC_SMPR2_SMP2_0 (0x1UL << ADC_SMPR2_SMP2_Pos)   /*!< 0x00000040 */
#define ADC_SMPR2_SMP2_1 (0x2UL << ADC_SMPR2_SMP2_Pos)   /*!< 0x00000080 */
#define ADC_SMPR2_SMP2_2 (0x4UL << ADC_SMPR2_SMP2_Pos)   /*!< 0x00000100 */

#define ADC_SMPR2_SMP3_Pos (9U)
#define ADC_SMPR2_SMP3_Msk (0x7UL << ADC_SMPR2_SMP3_Pos) /*!< 0x00000E00 */
#define ADC_SMPR2_SMP3 ADC_SMPR2_SMP3_Msk                /*!< ADC channel 3 sampling time selection  */
#define ADC_SMPR2_SMP3_0 (0x1UL << ADC_SMPR2_SMP3_Pos)   /*!< 0x00000200 */
#define ADC_SMPR2_SMP3_1 (0x2UL << ADC_SMPR2_SMP3_Pos)   /*!< 0x00000400 */
#define ADC_SMPR2_SMP3_2 (0x4UL << ADC_SMPR2_SMP3_Pos)   /*!< 0x00000800 */

#define ADC_SMPR2_SMP4_Pos (12U)
#define ADC_SMPR2_SMP4_Msk (0x7UL << ADC_SMPR2_SMP4_Pos) /*!< 0x00007000 */
#define ADC_SMPR2_SMP4 ADC_SMPR2_SMP4_Msk                /*!< ADC channel 4 sampling time selection  */
#define ADC_SMPR2_SMP4_0 (0x1UL << ADC_SMPR2_SMP4_Pos)   /*!< 0x00001000 */
#define ADC_SMPR2_SMP4_1 (0x2UL << ADC_SMPR2_SMP4_Pos)   /*!< 0x00002000 */
#define ADC_SMPR2_SMP4_2 (0x4UL << ADC_SMPR2_SMP4_Pos)   /*!< 0x00004000 */

#define ADC_SMPR2_SMP5_Pos (15U)
#define ADC_SMPR2_SMP5_Msk (0x7UL << ADC_SMPR2_SMP5_Pos) /*!< 0x00038000 */
#define ADC_SMPR2_SMP5 ADC_SMPR2_SMP5_Msk                /*!< ADC channel 5 sampling time selection  */
#define ADC_SMPR2_SMP5_0 (0x1UL << ADC_SMPR2_SMP5_Pos)   /*!< 0x00008000 */
#define ADC_SMPR2_SMP5_1 (0x2UL << ADC_SMPR2_SMP5_Pos)   /*!< 0x00010000 */
#define ADC_SMPR2_SMP5_2 (0x4UL << ADC_SMPR2_SMP5_Pos)   /*!< 0x00020000 */

#define ADC_SMPR2_SMP6_Pos (18U)
#define ADC_SMPR2_SMP6_Msk (0x7UL << ADC_SMPR2_SMP6_Pos) /*!< 0x001C0000 */
#define ADC_SMPR2_SMP6 ADC_SMPR2_SMP6_Msk                /*!< ADC channel 6 sampling time selection  */
#define ADC_SMPR2_SMP6_0 (0x1UL << ADC_SMPR2_SMP6_Pos)   /*!< 0x00040000 */
#define ADC_SMPR2_SMP6_1 (0x2UL << ADC_SMPR2_SMP6_Pos)   /*!< 0x00080000 */
#define ADC_SMPR2_SMP6_2 (0x4UL << ADC_SMPR2_SMP6_Pos)   /*!< 0x00100000 */

#define ADC_SMPR2_SMP7_Pos (21U)
#define ADC_SMPR2_SMP7_Msk (0x7UL << ADC_SMPR2_SMP7_Pos) /*!< 0x00E00000 */
#define ADC_SMPR2_SMP7 ADC_SMPR2_SMP7_Msk                /*!< ADC channel 7 sampling time selection  */
#define ADC_SMPR2_SMP7_0 (0x1UL << ADC_SMPR2_SMP7_Pos)   /*!< 0x00200000 */
#define ADC_SMPR2_SMP7_1 (0x2UL << ADC_SMPR2_SMP7_Pos)   /*!< 0x00400000 */
#define ADC_SMPR2_SMP7_2 (0x4UL << ADC_SMPR2_SMP7_Pos)   /*!< 0x00800000 */

#define ADC_SMPR2_SMP8_Pos (24U)
#define ADC_SMPR2_SMP8_Msk (0x7UL << ADC_SMPR2_SMP8_Pos) /*!< 0x07000000 */
#define ADC_SMPR2_SMP8 ADC_SMPR2_SMP8_Msk                /*!< ADC channel 8 sampling time selection  */
#define ADC_SMPR2_SMP8_0 (0x1UL << ADC_SMPR2_SMP8_Pos)   /*!< 0x01000000 */
#define ADC_SMPR2_SMP8_1 (0x2UL << ADC_SMPR2_SMP8_Pos)   /*!< 0x02000000 */
#define ADC_SMPR2_SMP8_2 (0x4UL << ADC_SMPR2_SMP8_Pos)   /*!< 0x04000000 */

#define ADC_SMPR2_SMP9_Pos (27U)
#define ADC_SMPR2_SMP9_Msk (0x7UL << ADC_SMPR2_SMP9_Pos) /*!< 0x38000000 */
#define ADC_SMPR2_SMP9 ADC_SMPR2_SMP9_Msk                /*!< ADC channel 9 sampling time selection  */
#define ADC_SMPR2_SMP9_0 (0x1UL << ADC_SMPR2_SMP9_Pos)   /*!< 0x08000000 */
#define ADC_SMPR2_SMP9_1 (0x2UL << ADC_SMPR2_SMP9_Pos)   /*!< 0x10000000 */
#define ADC_SMPR2_SMP9_2 (0x4UL << ADC_SMPR2_SMP9_Pos)   /*!< 0x20000000 */

/******************  Bit definition for ADC_JOFR1 register  *******************/
#define ADC_JOFR1_JOFFSET1_Pos (0U)
#define ADC_JOFR1_JOFFSET1_Msk (0xFFFUL << ADC_JOFR1_JOFFSET1_Pos) /*!< 0x00000FFF */
#define ADC_JOFR1_JOFFSET1 ADC_JOFR1_JOFFSET1_Msk                  /*!< ADC group injected sequencer rank 1 offset value */

/******************  Bit definition for ADC_JOFR2 register  *******************/
#define ADC_JOFR2_JOFFSET2_Pos (0U)
#define ADC_JOFR2_JOFFSET2_Msk (0xFFFUL << ADC_JOFR2_JOFFSET2_Pos) /*!< 0x00000FFF */
#define ADC_JOFR2_JOFFSET2 ADC_JOFR2_JOFFSET2_Msk                  /*!< ADC group injected sequencer rank 2 offset value */

/******************  Bit definition for ADC_JOFR3 register  *******************/
#define ADC_JOFR3_JOFFSET3_Pos (0U)
#define ADC_JOFR3_JOFFSET3_Msk (0xFFFUL << ADC_JOFR3_JOFFSET3_Pos) /*!< 0x00000FFF */
#define ADC_JOFR3_JOFFSET3 ADC_JOFR3_JOFFSET3_Msk                  /*!< ADC group injected sequencer rank 3 offset value */

/******************  Bit definition for ADC_JOFR4 register  *******************/
#define ADC_JOFR4_JOFFSET4_Pos (0U)
#define ADC_JOFR4_JOFFSET4_Msk (0xFFFUL << ADC_JOFR4_JOFFSET4_Pos) /*!< 0x00000FFF */
#define ADC_JOFR4_JOFFSET4 ADC_JOFR4_JOFFSET4_Msk                  /*!< ADC group injected sequencer rank 4 offset value */

/*******************  Bit definition for ADC_HTR register  ********************/
#define ADC_HTR_HT_Pos (0U)
#define ADC_HTR_HT_Msk (0xFFFUL << ADC_HTR_HT_Pos) /*!< 0x00000FFF */
#define ADC_HTR_HT ADC_HTR_HT_Msk                  /*!< ADC analog watchdog 1 threshold high */

/*******************  Bit definition for ADC_LTR register  ********************/
#define ADC_LTR_LT_Pos (0U)
#define ADC_LTR_LT_Msk (0xFFFUL << ADC_LTR_LT_Pos) /*!< 0x00000FFF */
#define ADC_LTR_LT ADC_LTR_LT_Msk                  /*!< ADC analog watchdog 1 threshold low */

/*******************  Bit definition for ADC_SQR1 register  *******************/
#define ADC_SQR1_SQ13_Pos (0U)
#define ADC_SQR1_SQ13_Msk (0x1FUL << ADC_SQR1_SQ13_Pos) /*!< 0x0000001F */
#define ADC_SQR1_SQ13 ADC_SQR1_SQ13_Msk                 /*!< ADC group regular sequencer rank 13 */
#define ADC_SQR1_SQ13_0 (0x01UL << ADC_SQR1_SQ13_Pos)   /*!< 0x00000001 */
#define ADC_SQR1_SQ13_1 (0x02UL << ADC_SQR1_SQ13_Pos)   /*!< 0x00000002 */
#define ADC_SQR1_SQ13_2 (0x04UL << ADC_SQR1_SQ13_Pos)   /*!< 0x00000004 */
#define ADC_SQR1_SQ13_3 (0x08UL << ADC_SQR1_SQ13_Pos)   /*!< 0x00000008 */
#define ADC_SQR1_SQ13_4 (0x10UL << ADC_SQR1_SQ13_Pos)   /*!< 0x00000010 */

#define ADC_SQR1_SQ14_Pos (5U)
#define ADC_SQR1_SQ14_Msk (0x1FUL << ADC_SQR1_SQ14_Pos) /*!< 0x000003E0 */
#define ADC_SQR1_SQ14 ADC_SQR1_SQ14_Msk                 /*!< ADC group regular sequencer rank 14 */
#define ADC_SQR1_SQ14_0 (0x01UL << ADC_SQR1_SQ14_Pos)   /*!< 0x00000020 */
#define ADC_SQR1_SQ14_1 (0x02UL << ADC_SQR1_SQ14_Pos)   /*!< 0x00000040 */
#define ADC_SQR1_SQ14_2 (0x04UL << ADC_SQR1_SQ14_Pos)   /*!< 0x00000080 */
#define ADC_SQR1_SQ14_3 (0x08UL << ADC_SQR1_SQ14_Pos)   /*!< 0x00000100 */
#define ADC_SQR1_SQ14_4 (0x10UL << ADC_SQR1_SQ14_Pos)   /*!< 0x00000200 */

#define ADC_SQR1_SQ15_Pos (10U)
#define ADC_SQR1_SQ15_Msk (0x1FUL << ADC_SQR1_SQ15_Pos) /*!< 0x00007C00 */
#define ADC_SQR1_SQ15 ADC_SQR1_SQ15_Msk                 /*!< ADC group regular sequencer rank 15 */
#define ADC_SQR1_SQ15_0 (0x01UL << ADC_SQR1_SQ15_Pos)   /*!< 0x00000400 */
#define ADC_SQR1_SQ15_1 (0x02UL << ADC_SQR1_SQ15_Pos)   /*!< 0x00000800 */
#define ADC_SQR1_SQ15_2 (0x04UL << ADC_SQR1_SQ15_Pos)   /*!< 0x00001000 */
#define ADC_SQR1_SQ15_3 (0x08UL << ADC_SQR1_SQ15_Pos)   /*!< 0x00002000 */
#define ADC_SQR1_SQ15_4 (0x10UL << ADC_SQR1_SQ15_Pos)   /*!< 0x00004000 */

#define ADC_SQR1_SQ16_Pos (15U)
#define ADC_SQR1_SQ16_Msk (0x1FUL << ADC_SQR1_SQ16_Pos) /*!< 0x000F8000 */
#define ADC_SQR1_SQ16 ADC_SQR1_SQ16_Msk                 /*!< ADC group regular sequencer rank 16 */
#define ADC_SQR1_SQ16_0 (0x01UL << ADC_SQR1_SQ16_Pos)   /*!< 0x00008000 */
#define ADC_SQR1_SQ16_1 (0x02UL << ADC_SQR1_SQ16_Pos)   /*!< 0x00010000 */
#define ADC_SQR1_SQ16_2 (0x04UL << ADC_SQR1_SQ16_Pos)   /*!< 0x00020000 */
#define ADC_SQR1_SQ16_3 (0x08UL << ADC_SQR1_SQ16_Pos)   /*!< 0x00040000 */
#define ADC_SQR1_SQ16_4 (0x10UL << ADC_SQR1_SQ16_Pos)   /*!< 0x00080000 */

#define ADC_SQR1_L_Pos (20U)
#define ADC_SQR1_L_Msk (0xFUL << ADC_SQR1_L_Pos) /*!< 0x00F00000 */
#define ADC_SQR1_L ADC_SQR1_L_Msk                /*!< ADC group regular sequencer scan length */
#define ADC_SQR1_L_0 (0x1UL << ADC_SQR1_L_Pos)   /*!< 0x00100000 */
#define ADC_SQR1_L_1 (0x2UL << ADC_SQR1_L_Pos)   /*!< 0x00200000 */
#define ADC_SQR1_L_2 (0x4UL << ADC_SQR1_L_Pos)   /*!< 0x00400000 */
#define ADC_SQR1_L_3 (0x8UL << ADC_SQR1_L_Pos)   /*!< 0x00800000 */

/*******************  Bit definition for ADC_SQR2 register  *******************/
#define ADC_SQR2_SQ7_Pos (0U)
#define ADC_SQR2_SQ7_Msk (0x1FUL << ADC_SQR2_SQ7_Pos) /*!< 0x0000001F */
#define ADC_SQR2_SQ7 ADC_SQR2_SQ7_Msk                 /*!< ADC group regular sequencer rank 7 */
#define ADC_SQR2_SQ7_0 (0x01UL << ADC_SQR2_SQ7_Pos)   /*!< 0x00000001 */
#define ADC_SQR2_SQ7_1 (0x02UL << ADC_SQR2_SQ7_Pos)   /*!< 0x00000002 */
#define ADC_SQR2_SQ7_2 (0x04UL << ADC_SQR2_SQ7_Pos)   /*!< 0x00000004 */
#define ADC_SQR2_SQ7_3 (0x08UL << ADC_SQR2_SQ7_Pos)   /*!< 0x00000008 */
#define ADC_SQR2_SQ7_4 (0x10UL << ADC_SQR2_SQ7_Pos)   /*!< 0x00000010 */

#define ADC_SQR2_SQ8_Pos (5U)
#define ADC_SQR2_SQ8_Msk (0x1FUL << ADC_SQR2_SQ8_Pos) /*!< 0x000003E0 */
#define ADC_SQR2_SQ8 ADC_SQR2_SQ8_Msk                 /*!< ADC group regular sequencer rank 8 */
#define ADC_SQR2_SQ8_0 (0x01UL << ADC_SQR2_SQ8_Pos)   /*!< 0x00000020 */
#define ADC_SQR2_SQ8_1 (0x02UL << ADC_SQR2_SQ8_Pos)   /*!< 0x00000040 */
#define ADC_SQR2_SQ8_2 (0x04UL << ADC_SQR2_SQ8_Pos)   /*!< 0x00000080 */
#define ADC_SQR2_SQ8_3 (0x08UL << ADC_SQR2_SQ8_Pos)   /*!< 0x00000100 */
#define ADC_SQR2_SQ8_4 (0x10UL << ADC_SQR2_SQ8_Pos)   /*!< 0x00000200 */

#define ADC_SQR2_SQ9_Pos (10U)
#define ADC_SQR2_SQ9_Msk (0x1FUL << ADC_SQR2_SQ9_Pos) /*!< 0x00007C00 */
#define ADC_SQR2_SQ9 ADC_SQR2_SQ9_Msk                 /*!< ADC group regular sequencer rank 9 */
#define ADC_SQR2_SQ9_0 (0x01UL << ADC_SQR2_SQ9_Pos)   /*!< 0x00000400 */
#define ADC_SQR2_SQ9_1 (0x02UL << ADC_SQR2_SQ9_Pos)   /*!< 0x00000800 */
#define ADC_SQR2_SQ9_2 (0x04UL << ADC_SQR2_SQ9_Pos)   /*!< 0x00001000 */
#define ADC_SQR2_SQ9_3 (0x08UL << ADC_SQR2_SQ9_Pos)   /*!< 0x00002000 */
#define ADC_SQR2_SQ9_4 (0x10UL << ADC_SQR2_SQ9_Pos)   /*!< 0x00004000 */

#define ADC_SQR2_SQ10_Pos (15U)
#define ADC_SQR2_SQ10_Msk (0x1FUL << ADC_SQR2_SQ10_Pos) /*!< 0x000F8000 */
#define ADC_SQR2_SQ10 ADC_SQR2_SQ10_Msk                 /*!< ADC group regular sequencer rank 10 */
#define ADC_SQR2_SQ10_0 (0x01UL << ADC_SQR2_SQ10_Pos)   /*!< 0x00008000 */
#define ADC_SQR2_SQ10_1 (0x02UL << ADC_SQR2_SQ10_Pos)   /*!< 0x00010000 */
#define ADC_SQR2_SQ10_2 (0x04UL << ADC_SQR2_SQ10_Pos)   /*!< 0x00020000 */
#define ADC_SQR2_SQ10_3 (0x08UL << ADC_SQR2_SQ10_Pos)   /*!< 0x00040000 */
#define ADC_SQR2_SQ10_4 (0x10UL << ADC_SQR2_SQ10_Pos)   /*!< 0x00080000 */

#define ADC_SQR2_SQ11_Pos (20U)
#define ADC_SQR2_SQ11_Msk (0x1FUL << ADC_SQR2_SQ11_Pos) /*!< 0x01F00000 */
#define ADC_SQR2_SQ11 ADC_SQR2_SQ11_Msk                 /*!< ADC group regular sequencer rank 1 */
#define ADC_SQR2_SQ11_0 (0x01UL << ADC_SQR2_SQ11_Pos)   /*!< 0x00100000 */
#define ADC_SQR2_SQ11_1 (0x02UL << ADC_SQR2_SQ11_Pos)   /*!< 0x00200000 */
#define ADC_SQR2_SQ11_2 (0x04UL << ADC_SQR2_SQ11_Pos)   /*!< 0x00400000 */
#define ADC_SQR2_SQ11_3 (0x08UL << ADC_SQR2_SQ11_Pos)   /*!< 0x00800000 */
#define ADC_SQR2_SQ11_4 (0x10UL << ADC_SQR2_SQ11_Pos)   /*!< 0x01000000 */

#define ADC_SQR2_SQ12_Pos (25U)
#define ADC_SQR2_SQ12_Msk (0x1FUL << ADC_SQR2_SQ12_Pos) /*!< 0x3E000000 */
#define ADC_SQR2_SQ12 ADC_SQR2_SQ12_Msk                 /*!< ADC group regular sequencer rank 12 */
#define ADC_SQR2_SQ12_0 (0x01UL << ADC_SQR2_SQ12_Pos)   /*!< 0x02000000 */
#define ADC_SQR2_SQ12_1 (0x02UL << ADC_SQR2_SQ12_Pos)   /*!< 0x04000000 */
#define ADC_SQR2_SQ12_2 (0x04UL << ADC_SQR2_SQ12_Pos)   /*!< 0x08000000 */
#define ADC_SQR2_SQ12_3 (0x08UL << ADC_SQR2_SQ12_Pos)   /*!< 0x10000000 */
#define ADC_SQR2_SQ12_4 (0x10UL << ADC_SQR2_SQ12_Pos)   /*!< 0x20000000 */

/*******************  Bit definition for ADC_SQR3 register  *******************/
#define ADC_SQR3_SQ1_Pos (0U)
#define ADC_SQR3_SQ1_Msk (0x1FUL << ADC_SQR3_SQ1_Pos) /*!< 0x0000001F */
#define ADC_SQR3_SQ1 ADC_SQR3_SQ1_Msk                 /*!< ADC group regular sequencer rank 1 */
#define ADC_SQR3_SQ1_0 (0x01UL << ADC_SQR3_SQ1_Pos)   /*!< 0x00000001 */
#define ADC_SQR3_SQ1_1 (0x02UL << ADC_SQR3_SQ1_Pos)   /*!< 0x00000002 */
#define ADC_SQR3_SQ1_2 (0x04UL << ADC_SQR3_SQ1_Pos)   /*!< 0x00000004 */
#define ADC_SQR3_SQ1_3 (0x08UL << ADC_SQR3_SQ1_Pos)   /*!< 0x00000008 */
#define ADC_SQR3_SQ1_4 (0x10UL << ADC_SQR3_SQ1_Pos)   /*!< 0x00000010 */

#define ADC_SQR3_SQ2_Pos (5U)
#define ADC_SQR3_SQ2_Msk (0x1FUL << ADC_SQR3_SQ2_Pos) /*!< 0x000003E0 */
#define ADC_SQR3_SQ2 ADC_SQR3_SQ2_Msk                 /*!< ADC group regular sequencer rank 2 */
#define ADC_SQR3_SQ2_0 (0x01UL << ADC_SQR3_SQ2_Pos)   /*!< 0x00000020 */
#define ADC_SQR3_SQ2_1 (0x02UL << ADC_SQR3_SQ2_Pos)   /*!< 0x00000040 */
#define ADC_SQR3_SQ2_2 (0x04UL << ADC_SQR3_SQ2_Pos)   /*!< 0x00000080 */
#define ADC_SQR3_SQ2_3 (0x08UL << ADC_SQR3_SQ2_Pos)   /*!< 0x00000100 */
#define ADC_SQR3_SQ2_4 (0x10UL << ADC_SQR3_SQ2_Pos)   /*!< 0x00000200 */

#define ADC_SQR3_SQ3_Pos (10U)
#define ADC_SQR3_SQ3_Msk (0x1FUL << ADC_SQR3_SQ3_Pos) /*!< 0x00007C00 */
#define ADC_SQR3_SQ3 ADC_SQR3_SQ3_Msk                 /*!< ADC group regular sequencer rank 3 */
#define ADC_SQR3_SQ3_0 (0x01UL << ADC_SQR3_SQ3_Pos)   /*!< 0x00000400 */
#define ADC_SQR3_SQ3_1 (0x02UL << ADC_SQR3_SQ3_Pos)   /*!< 0x00000800 */
#define ADC_SQR3_SQ3_2 (0x04UL << ADC_SQR3_SQ3_Pos)   /*!< 0x00001000 */
#define ADC_SQR3_SQ3_3 (0x08UL << ADC_SQR3_SQ3_Pos)   /*!< 0x00002000 */
#define ADC_SQR3_SQ3_4 (0x10UL << ADC_SQR3_SQ3_Pos)   /*!< 0x00004000 */

#define ADC_SQR3_SQ4_Pos (15U)
#define ADC_SQR3_SQ4_Msk (0x1FUL << ADC_SQR3_SQ4_Pos) /*!< 0x000F8000 */
#define ADC_SQR3_SQ4 ADC_SQR3_SQ4_Msk                 /*!< ADC group regular sequencer rank 4 */
#define ADC_SQR3_SQ4_0 (0x01UL << ADC_SQR3_SQ4_Pos)   /*!< 0x00008000 */
#define ADC_SQR3_SQ4_1 (0x02UL << ADC_SQR3_SQ4_Pos)   /*!< 0x00010000 */
#define ADC_SQR3_SQ4_2 (0x04UL << ADC_SQR3_SQ4_Pos)   /*!< 0x00020000 */
#define ADC_SQR3_SQ4_3 (0x08UL << ADC_SQR3_SQ4_Pos)   /*!< 0x00040000 */
#define ADC_SQR3_SQ4_4 (0x10UL << ADC_SQR3_SQ4_Pos)   /*!< 0x00080000 */

#define ADC_SQR3_SQ5_Pos (20U)
#define ADC_SQR3_SQ5_Msk (0x1FUL << ADC_SQR3_SQ5_Pos) /*!< 0x01F00000 */
#define ADC_SQR3_SQ5 ADC_SQR3_SQ5_Msk                 /*!< ADC group regular sequencer rank 5 */
#define ADC_SQR3_SQ5_0 (0x01UL << ADC_SQR3_SQ5_Pos)   /*!< 0x00100000 */
#define ADC_SQR3_SQ5_1 (0x02UL << ADC_SQR3_SQ5_Pos)   /*!< 0x00200000 */
#define ADC_SQR3_SQ5_2 (0x04UL << ADC_SQR3_SQ5_Pos)   /*!< 0x00400000 */
#define ADC_SQR3_SQ5_3 (0x08UL << ADC_SQR3_SQ5_Pos)   /*!< 0x00800000 */
#define ADC_SQR3_SQ5_4 (0x10UL << ADC_SQR3_SQ5_Pos)   /*!< 0x01000000 */

#define ADC_SQR3_SQ6_Pos (25U)
#define ADC_SQR3_SQ6_Msk (0x1FUL << ADC_SQR3_SQ6_Pos) /*!< 0x3E000000 */
#define ADC_SQR3_SQ6 ADC_SQR3_SQ6_Msk                 /*!< ADC group regular sequencer rank 6 */
#define ADC_SQR3_SQ6_0 (0x01UL << ADC_SQR3_SQ6_Pos)   /*!< 0x02000000 */
#define ADC_SQR3_SQ6_1 (0x02UL << ADC_SQR3_SQ6_Pos)   /*!< 0x04000000 */
#define ADC_SQR3_SQ6_2 (0x04UL << ADC_SQR3_SQ6_Pos)   /*!< 0x08000000 */
#define ADC_SQR3_SQ6_3 (0x08UL << ADC_SQR3_SQ6_Pos)   /*!< 0x10000000 */
#define ADC_SQR3_SQ6_4 (0x10UL << ADC_SQR3_SQ6_Pos)   /*!< 0x20000000 */

/*******************  Bit definition for ADC_JSQR register  *******************/
#define ADC_JSQR_JSQ1_Pos (0U)
#define ADC_JSQR_JSQ1_Msk (0x1FUL << ADC_JSQR_JSQ1_Pos) /*!< 0x0000001F */
#define ADC_JSQR_JSQ1 ADC_JSQR_JSQ1_Msk                 /*!< ADC group injected sequencer rank 1 */
#define ADC_JSQR_JSQ1_0 (0x01UL << ADC_JSQR_JSQ1_Pos)   /*!< 0x00000001 */
#define ADC_JSQR_JSQ1_1 (0x02UL << ADC_JSQR_JSQ1_Pos)   /*!< 0x00000002 */
#define ADC_JSQR_JSQ1_2 (0x04UL << ADC_JSQR_JSQ1_Pos)   /*!< 0x00000004 */
#define ADC_JSQR_JSQ1_3 (0x08UL << ADC_JSQR_JSQ1_Pos)   /*!< 0x00000008 */
#define ADC_JSQR_JSQ1_4 (0x10UL << ADC_JSQR_JSQ1_Pos)   /*!< 0x00000010 */

#define ADC_JSQR_JSQ2_Pos (5U)
#define ADC_JSQR_JSQ2_Msk (0x1FUL << ADC_JSQR_JSQ2_Pos) /*!< 0x000003E0 */
#define ADC_JSQR_JSQ2 ADC_JSQR_JSQ2_Msk                 /*!< ADC group injected sequencer rank 2 */
#define ADC_JSQR_JSQ2_0 (0x01UL << ADC_JSQR_JSQ2_Pos)   /*!< 0x00000020 */
#define ADC_JSQR_JSQ2_1 (0x02UL << ADC_JSQR_JSQ2_Pos)   /*!< 0x00000040 */
#define ADC_JSQR_JSQ2_2 (0x04UL << ADC_JSQR_JSQ2_Pos)   /*!< 0x00000080 */
#define ADC_JSQR_JSQ2_3 (0x08UL << ADC_JSQR_JSQ2_Pos)   /*!< 0x00000100 */
#define ADC_JSQR_JSQ2_4 (0x10UL << ADC_JSQR_JSQ2_Pos)   /*!< 0x00000200 */

#define ADC_JSQR_JSQ3_Pos (10U)
#define ADC_JSQR_JSQ3_Msk (0x1FUL << ADC_JSQR_JSQ3_Pos) /*!< 0x00007C00 */
#define ADC_JSQR_JSQ3 ADC_JSQR_JSQ3_Msk                 /*!< ADC group injected sequencer rank 3 */
#define ADC_JSQR_JSQ3_0 (0x01UL << ADC_JSQR_JSQ3_Pos)   /*!< 0x00000400 */
#define ADC_JSQR_JSQ3_1 (0x02UL << ADC_JSQR_JSQ3_Pos)   /*!< 0x00000800 */
#define ADC_JSQR_JSQ3_2 (0x04UL << ADC_JSQR_JSQ3_Pos)   /*!< 0x00001000 */
#define ADC_JSQR_JSQ3_3 (0x08UL << ADC_JSQR_JSQ3_Pos)   /*!< 0x00002000 */
#define ADC_JSQR_JSQ3_4 (0x10UL << ADC_JSQR_JSQ3_Pos)   /*!< 0x00004000 */

#define ADC_JSQR_JSQ4_Pos (15U)
#define ADC_JSQR_JSQ4_Msk (0x1FUL << ADC_JSQR_JSQ4_Pos) /*!< 0x000F8000 */
#define ADC_JSQR_JSQ4 ADC_JSQR_JSQ4_Msk                 /*!< ADC group injected sequencer rank 4 */
#define ADC_JSQR_JSQ4_0 (0x01UL << ADC_JSQR_JSQ4_Pos)   /*!< 0x00008000 */
#define ADC_JSQR_JSQ4_1 (0x02UL << ADC_JSQR_JSQ4_Pos)   /*!< 0x00010000 */
#define ADC_JSQR_JSQ4_2 (0x04UL << ADC_JSQR_JSQ4_Pos)   /*!< 0x00020000 */
#define ADC_JSQR_JSQ4_3 (0x08UL << ADC_JSQR_JSQ4_Pos)   /*!< 0x00040000 */
#define ADC_JSQR_JSQ4_4 (0x10UL << ADC_JSQR_JSQ4_Pos)   /*!< 0x00080000 */

#define ADC_JSQR_JL_Pos (20U)
#define ADC_JSQR_JL_Msk (0x3UL << ADC_JSQR_JL_Pos) /*!< 0x00300000 */
#define ADC_JSQR_JL ADC_JSQR_JL_Msk                /*!< ADC group injected sequencer scan length */
#define ADC_JSQR_JL_0 (0x1UL << ADC_JSQR_JL_Pos)   /*!< 0x00100000 */
#define ADC_JSQR_JL_1 (0x2UL << ADC_JSQR_JL_Pos)   /*!< 0x00200000 */

/*******************  Bit definition for ADC_JDR1 register  *******************/
#define ADC_JDR1_JDATA_Pos (0U)
#define ADC_JDR1_JDATA_Msk (0xFFFFUL << ADC_JDR1_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR1_JDATA ADC_JDR1_JDATA_Msk                   /*!< ADC group injected sequencer rank 1 conversion data */

/*******************  Bit definition for ADC_JDR2 register  *******************/
#define ADC_JDR2_JDATA_Pos (0U)
#define ADC_JDR2_JDATA_Msk (0xFFFFUL << ADC_JDR2_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR2_JDATA ADC_JDR2_JDATA_Msk                   /*!< ADC group injected sequencer rank 2 conversion data */

/*******************  Bit definition for ADC_JDR3 register  *******************/
#define ADC_JDR3_JDATA_Pos (0U)
#define ADC_JDR3_JDATA_Msk (0xFFFFUL << ADC_JDR3_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR3_JDATA ADC_JDR3_JDATA_Msk                   /*!< ADC group injected sequencer rank 3 conversion data */

/*******************  Bit definition for ADC_JDR4 register  *******************/
#define ADC_JDR4_JDATA_Pos (0U)
#define ADC_JDR4_JDATA_Msk (0xFFFFUL << ADC_JDR4_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR4_JDATA ADC_JDR4_JDATA_Msk                   /*!< ADC group injected sequencer rank 4 conversion data */

/********************  Bit definition for ADC_DR register  ********************/
#define ADC_DR_DATA_Pos (0U)
#define ADC_DR_DATA_Msk (0xFFFFUL << ADC_DR_DATA_Pos) /*!< 0x0000FFFF */
#define ADC_DR_DATA ADC_DR_DATA_Msk                   /*!< ADC group regular conversion data */
#define ADC_DR_ADC2DATA_Pos (16U)
#define ADC_DR_ADC2DATA_Msk (0xFFFFUL << ADC_DR_ADC2DATA_Pos) /*!< 0xFFFF0000 */
#define ADC_DR_ADC2DATA ADC_DR_ADC2DATA_Msk                   /*!< ADC group regular conversion data for ADC slave, in multimode */
/******************************************************************************/
/*                                                                            */
/*                      Digital to Analog Converter                           */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for DAC_CR register  ********************/
#define DAC_CR_EN1_Pos (0U)
#define DAC_CR_EN1_Msk (0x1UL << DAC_CR_EN1_Pos) /*!< 0x00000001 */
#define DAC_CR_EN1 DAC_CR_EN1_Msk                /*!< DAC channel1 enable */
#define DAC_CR_BOFF1_Pos (1U)
#define DAC_CR_BOFF1_Msk (0x1UL << DAC_CR_BOFF1_Pos) /*!< 0x00000002 */
#define DAC_CR_BOFF1 DAC_CR_BOFF1_Msk                /*!< DAC channel1 output buffer disable */
#define DAC_CR_TEN1_Pos (2U)
#define DAC_CR_TEN1_Msk (0x1UL << DAC_CR_TEN1_Pos) /*!< 0x00000004 */
#define DAC_CR_TEN1 DAC_CR_TEN1_Msk                /*!< DAC channel1 Trigger enable */

#define DAC_CR_TSEL1_Pos (3U)
#define DAC_CR_TSEL1_Msk (0x7UL << DAC_CR_TSEL1_Pos) /*!< 0x00000038 */
#define DAC_CR_TSEL1 DAC_CR_TSEL1_Msk                /*!< TSEL1[2:0] (DAC channel1 Trigger selection) */
#define DAC_CR_TSEL1_0 (0x1UL << DAC_CR_TSEL1_Pos)   /*!< 0x00000008 */
#define DAC_CR_TSEL1_1 (0x2UL << DAC_CR_TSEL1_Pos)   /*!< 0x00000010 */
#define DAC_CR_TSEL1_2 (0x4UL << DAC_CR_TSEL1_Pos)   /*!< 0x00000020 */

#define DAC_CR_WAVE1_Pos (6U)
#define DAC_CR_WAVE1_Msk (0x3UL << DAC_CR_WAVE1_Pos) /*!< 0x000000C0 */
#define DAC_CR_WAVE1 DAC_CR_WAVE1_Msk                /*!< WAVE1[1:0] (DAC channel1 noise/triangle wave generation enable) */
#define DAC_CR_WAVE1_0 (0x1UL << DAC_CR_WAVE1_Pos)   /*!< 0x00000040 */
#define DAC_CR_WAVE1_1 (0x2UL << DAC_CR_WAVE1_Pos)   /*!< 0x00000080 */

#define DAC_CR_MAMP1_Pos (8U)
#define DAC_CR_MAMP1_Msk (0xFUL << DAC_CR_MAMP1_Pos) /*!< 0x00000F00 */
#define DAC_CR_MAMP1 DAC_CR_MAMP1_Msk                /*!< MAMP1[3:0] (DAC channel1 Mask/Amplitude selector) */
#define DAC_CR_MAMP1_0 (0x1UL << DAC_CR_MAMP1_Pos)   /*!< 0x00000100 */
#define DAC_CR_MAMP1_1 (0x2UL << DAC_CR_MAMP1_Pos)   /*!< 0x00000200 */
#define DAC_CR_MAMP1_2 (0x4UL << DAC_CR_MAMP1_Pos)   /*!< 0x00000400 */
#define DAC_CR_MAMP1_3 (0x8UL << DAC_CR_MAMP1_Pos)   /*!< 0x00000800 */

#define DAC_CR_DMAEN1_Pos (12U)
#define DAC_CR_DMAEN1_Msk (0x1UL << DAC_CR_DMAEN1_Pos) /*!< 0x00001000 */
#define DAC_CR_DMAEN1 DAC_CR_DMAEN1_Msk                /*!< DAC channel1 DMA enable */
#define DAC_CR_EN2_Pos (16U)
#define DAC_CR_EN2_Msk (0x1UL << DAC_CR_EN2_Pos) /*!< 0x00010000 */
#define DAC_CR_EN2 DAC_CR_EN2_Msk                /*!< DAC channel2 enable */
#define DAC_CR_BOFF2_Pos (17U)
#define DAC_CR_BOFF2_Msk (0x1UL << DAC_CR_BOFF2_Pos) /*!< 0x00020000 */
#define DAC_CR_BOFF2 DAC_CR_BOFF2_Msk                /*!< DAC channel2 output buffer disable */
#define DAC_CR_TEN2_Pos (18U)
#define DAC_CR_TEN2_Msk (0x1UL << DAC_CR_TEN2_Pos) /*!< 0x00040000 */
#define DAC_CR_TEN2 DAC_CR_TEN2_Msk                /*!< DAC channel2 Trigger enable */

#define DAC_CR_TSEL2_Pos (19U)
#define DAC_CR_TSEL2_Msk (0x7UL << DAC_CR_TSEL2_Pos) /*!< 0x00380000 */
#define DAC_CR_TSEL2 DAC_CR_TSEL2_Msk                /*!< TSEL2[2:0] (DAC channel2 Trigger selection) */
#define DAC_CR_TSEL2_0 (0x1UL << DAC_CR_TSEL2_Pos)   /*!< 0x00080000 */
#define DAC_CR_TSEL2_1 (0x2UL << DAC_CR_TSEL2_Pos)   /*!< 0x00100000 */
#define DAC_CR_TSEL2_2 (0x4UL << DAC_CR_TSEL2_Pos)   /*!< 0x00200000 */

#define DAC_CR_WAVE2_Pos (22U)
#define DAC_CR_WAVE2_Msk (0x3UL << DAC_CR_WAVE2_Pos) /*!< 0x00C00000 */
#define DAC_CR_WAVE2 DAC_CR_WAVE2_Msk                /*!< WAVE2[1:0] (DAC channel2 noise/triangle wave generation enable) */
#define DAC_CR_WAVE2_0 (0x1UL << DAC_CR_WAVE2_Pos)   /*!< 0x00400000 */
#define DAC_CR_WAVE2_1 (0x2UL << DAC_CR_WAVE2_Pos)   /*!< 0x00800000 */

#define DAC_CR_MAMP2_Pos (24U)
#define DAC_CR_MAMP2_Msk (0xFUL << DAC_CR_MAMP2_Pos) /*!< 0x0F000000 */
#define DAC_CR_MAMP2 DAC_CR_MAMP2_Msk                /*!< MAMP2[3:0] (DAC channel2 Mask/Amplitude selector) */
#define DAC_CR_MAMP2_0 (0x1UL << DAC_CR_MAMP2_Pos)   /*!< 0x01000000 */
#define DAC_CR_MAMP2_1 (0x2UL << DAC_CR_MAMP2_Pos)   /*!< 0x02000000 */
#define DAC_CR_MAMP2_2 (0x4UL << DAC_CR_MAMP2_Pos)   /*!< 0x04000000 */
#define DAC_CR_MAMP2_3 (0x8UL << DAC_CR_MAMP2_Pos)   /*!< 0x08000000 */

#define DAC_CR_DMAEN2_Pos (28U)
#define DAC_CR_DMAEN2_Msk (0x1UL << DAC_CR_DMAEN2_Pos) /*!< 0x10000000 */
#define DAC_CR_DMAEN2 DAC_CR_DMAEN2_Msk                /*!< DAC channel2 DMA enabled */

/*****************  Bit definition for DAC_SWTRIGR register  ******************/
#define DAC_SWTRIGR_SWTRIG1_Pos (0U)
#define DAC_SWTRIGR_SWTRIG1_Msk (0x1UL << DAC_SWTRIGR_SWTRIG1_Pos) /*!< 0x00000001 */
#define DAC_SWTRIGR_SWTRIG1 DAC_SWTRIGR_SWTRIG1_Msk                /*!< DAC channel1 software trigger */
#define DAC_SWTRIGR_SWTRIG2_Pos (1U)
#define DAC_SWTRIGR_SWTRIG2_Msk (0x1UL << DAC_SWTRIGR_SWTRIG2_Pos) /*!< 0x00000002 */
#define DAC_SWTRIGR_SWTRIG2 DAC_SWTRIGR_SWTRIG2_Msk                /*!< DAC channel2 software trigger */

/*****************  Bit definition for DAC_DHR12R1 register  ******************/
#define DAC_DHR12R1_DACC1DHR_Pos (0U)
#define DAC_DHR12R1_DACC1DHR_Msk (0xFFFUL << DAC_DHR12R1_DACC1DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12R1_DACC1DHR DAC_DHR12R1_DACC1DHR_Msk                  /*!< DAC channel1 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12L1 register  ******************/
#define DAC_DHR12L1_DACC1DHR_Pos (4U)
#define DAC_DHR12L1_DACC1DHR_Msk (0xFFFUL << DAC_DHR12L1_DACC1DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12L1_DACC1DHR DAC_DHR12L1_DACC1DHR_Msk                  /*!< DAC channel1 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8R1 register  ******************/
#define DAC_DHR8R1_DACC1DHR_Pos (0U)
#define DAC_DHR8R1_DACC1DHR_Msk (0xFFUL << DAC_DHR8R1_DACC1DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8R1_DACC1DHR DAC_DHR8R1_DACC1DHR_Msk                 /*!< DAC channel1 8-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12R2 register  ******************/
#define DAC_DHR12R2_DACC2DHR_Pos (0U)
#define DAC_DHR12R2_DACC2DHR_Msk (0xFFFUL << DAC_DHR12R2_DACC2DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12R2_DACC2DHR DAC_DHR12R2_DACC2DHR_Msk                  /*!< DAC channel2 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12L2 register  ******************/
#define DAC_DHR12L2_DACC2DHR_Pos (4U)
#define DAC_DHR12L2_DACC2DHR_Msk (0xFFFUL << DAC_DHR12L2_DACC2DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12L2_DACC2DHR DAC_DHR12L2_DACC2DHR_Msk                  /*!< DAC channel2 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8R2 register  ******************/
#define DAC_DHR8R2_DACC2DHR_Pos (0U)
#define DAC_DHR8R2_DACC2DHR_Msk (0xFFUL << DAC_DHR8R2_DACC2DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8R2_DACC2DHR DAC_DHR8R2_DACC2DHR_Msk                 /*!< DAC channel2 8-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12RD register  ******************/
#define DAC_DHR12RD_DACC1DHR_Pos (0U)
#define DAC_DHR12RD_DACC1DHR_Msk (0xFFFUL << DAC_DHR12RD_DACC1DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12RD_DACC1DHR DAC_DHR12RD_DACC1DHR_Msk                  /*!< DAC channel1 12-bit Right aligned data */
#define DAC_DHR12RD_DACC2DHR_Pos (16U)
#define DAC_DHR12RD_DACC2DHR_Msk (0xFFFUL << DAC_DHR12RD_DACC2DHR_Pos) /*!< 0x0FFF0000 */
#define DAC_DHR12RD_DACC2DHR DAC_DHR12RD_DACC2DHR_Msk                  /*!< DAC channel2 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12LD register  ******************/
#define DAC_DHR12LD_DACC1DHR_Pos (4U)
#define DAC_DHR12LD_DACC1DHR_Msk (0xFFFUL << DAC_DHR12LD_DACC1DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12LD_DACC1DHR DAC_DHR12LD_DACC1DHR_Msk                  /*!< DAC channel1 12-bit Left aligned data */
#define DAC_DHR12LD_DACC2DHR_Pos (20U)
#define DAC_DHR12LD_DACC2DHR_Msk (0xFFFUL << DAC_DHR12LD_DACC2DHR_Pos) /*!< 0xFFF00000 */
#define DAC_DHR12LD_DACC2DHR DAC_DHR12LD_DACC2DHR_Msk                  /*!< DAC channel2 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8RD register  ******************/
#define DAC_DHR8RD_DACC1DHR_Pos (0U)
#define DAC_DHR8RD_DACC1DHR_Msk (0xFFUL << DAC_DHR8RD_DACC1DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8RD_DACC1DHR DAC_DHR8RD_DACC1DHR_Msk                 /*!< DAC channel1 8-bit Right aligned data */
#define DAC_DHR8RD_DACC2DHR_Pos (8U)
#define DAC_DHR8RD_DACC2DHR_Msk (0xFFUL << DAC_DHR8RD_DACC2DHR_Pos) /*!< 0x0000FF00 */
#define DAC_DHR8RD_DACC2DHR DAC_DHR8RD_DACC2DHR_Msk                 /*!< DAC channel2 8-bit Right aligned data */

/*******************  Bit definition for DAC_DOR1 register  *******************/
#define DAC_DOR1_DACC1DOR_Pos (0U)
#define DAC_DOR1_DACC1DOR_Msk (0xFFFUL << DAC_DOR1_DACC1DOR_Pos) /*!< 0x00000FFF */
#define DAC_DOR1_DACC1DOR DAC_DOR1_DACC1DOR_Msk                  /*!< DAC channel1 data output */

/*******************  Bit definition for DAC_DOR2 register  *******************/
#define DAC_DOR2_DACC2DOR_Pos (0U)
#define DAC_DOR2_DACC2DOR_Msk (0xFFFUL << DAC_DOR2_DACC2DOR_Pos) /*!< 0x00000FFF */
#define DAC_DOR2_DACC2DOR DAC_DOR2_DACC2DOR_Msk                  /*!< DAC channel2 data output */

/*****************************************************************************/
/*                                                                           */
/*                               Timers (TIM)                                */
/*                                                                           */
/*****************************************************************************/
/*******************  Bit definition for TIM_CR1 register  *******************/
#define TIM_CR1_CEN_Pos (0U)
#define TIM_CR1_CEN_Msk (0x1UL << TIM_CR1_CEN_Pos) /*!< 0x00000001 */
#define TIM_CR1_CEN TIM_CR1_CEN_Msk                /*!<Counter enable */
#define TIM_CR1_UDIS_Pos (1U)
#define TIM_CR1_UDIS_Msk (0x1UL << TIM_CR1_UDIS_Pos) /*!< 0x00000002 */
#define TIM_CR1_UDIS TIM_CR1_UDIS_Msk                /*!<Update disable */
#define TIM_CR1_URS_Pos (2U)
#define TIM_CR1_URS_Msk (0x1UL << TIM_CR1_URS_Pos) /*!< 0x00000004 */
#define TIM_CR1_URS TIM_CR1_URS_Msk                /*!<Update request source */
#define TIM_CR1_OPM_Pos (3U)
#define TIM_CR1_OPM_Msk (0x1UL << TIM_CR1_OPM_Pos) /*!< 0x00000008 */
#define TIM_CR1_OPM TIM_CR1_OPM_Msk                /*!<One pulse mode */
#define TIM_CR1_DIR_Pos (4U)
#define TIM_CR1_DIR_Msk (0x1UL << TIM_CR1_DIR_Pos) /*!< 0x00000010 */
#define TIM_CR1_DIR TIM_CR1_DIR_Msk                /*!<Direction */

#define TIM_CR1_CMS_Pos (5U)
#define TIM_CR1_CMS_Msk (0x3UL << TIM_CR1_CMS_Pos) /*!< 0x00000060 */
#define TIM_CR1_CMS TIM_CR1_CMS_Msk                /*!<CMS[1:0] bits (Center-aligned mode selection) */
#define TIM_CR1_CMS_0 (0x1UL << TIM_CR1_CMS_Pos)   /*!< 0x00000020 */
#define TIM_CR1_CMS_1 (0x2UL << TIM_CR1_CMS_Pos)   /*!< 0x00000040 */

#define TIM_CR1_ARPE_Pos (7U)
#define TIM_CR1_ARPE_Msk (0x1UL << TIM_CR1_ARPE_Pos) /*!< 0x00000080 */
#define TIM_CR1_ARPE TIM_CR1_ARPE_Msk                /*!<Auto-reload preload enable */

#define TIM_CR1_CKD_Pos (8U)
#define TIM_CR1_CKD_Msk (0x3UL << TIM_CR1_CKD_Pos) /*!< 0x00000300 */
#define TIM_CR1_CKD TIM_CR1_CKD_Msk                /*!<CKD[1:0] bits (clock division) */
#define TIM_CR1_CKD_0 (0x1UL << TIM_CR1_CKD_Pos)   /*!< 0x00000100 */
#define TIM_CR1_CKD_1 (0x2UL << TIM_CR1_CKD_Pos)   /*!< 0x00000200 */

/*******************  Bit definition for TIM_CR2 register  *******************/
#define TIM_CR2_CCPC_Pos (0U)
#define TIM_CR2_CCPC_Msk (0x1UL << TIM_CR2_CCPC_Pos) /*!< 0x00000001 */
#define TIM_CR2_CCPC TIM_CR2_CCPC_Msk                /*!<Capture/Compare Preloaded Control */
#define TIM_CR2_CCUS_Pos (2U)
#define TIM_CR2_CCUS_Msk (0x1UL << TIM_CR2_CCUS_Pos) /*!< 0x00000004 */
#define TIM_CR2_CCUS TIM_CR2_CCUS_Msk                /*!<Capture/Compare Control Update Selection */
#define TIM_CR2_CCDS_Pos (3U)
#define TIM_CR2_CCDS_Msk (0x1UL << TIM_CR2_CCDS_Pos) /*!< 0x00000008 */
#define TIM_CR2_CCDS TIM_CR2_CCDS_Msk                /*!<Capture/Compare DMA Selection */

#define TIM_CR2_MMS_Pos (4U)
#define TIM_CR2_MMS_Msk (0x7UL << TIM_CR2_MMS_Pos) /*!< 0x00000070 */
#define TIM_CR2_MMS TIM_CR2_MMS_Msk                /*!<MMS[2:0] bits (Master Mode Selection) */
#define TIM_CR2_MMS_0 (0x1UL << TIM_CR2_MMS_Pos)   /*!< 0x00000010 */
#define TIM_CR2_MMS_1 (0x2UL << TIM_CR2_MMS_Pos)   /*!< 0x00000020 */
#define TIM_CR2_MMS_2 (0x4UL << TIM_CR2_MMS_Pos)   /*!< 0x00000040 */

#define TIM_CR2_TI1S_Pos (7U)
#define TIM_CR2_TI1S_Msk (0x1UL << TIM_CR2_TI1S_Pos) /*!< 0x00000080 */
#define TIM_CR2_TI1S TIM_CR2_TI1S_Msk                /*!<TI1 Selection */
#define TIM_CR2_OIS1_Pos (8U)
#define TIM_CR2_OIS1_Msk (0x1UL << TIM_CR2_OIS1_Pos) /*!< 0x00000100 */
#define TIM_CR2_OIS1 TIM_CR2_OIS1_Msk                /*!<Output Idle state 1 (OC1 output) */
#define TIM_CR2_OIS1N_Pos (9U)
#define TIM_CR2_OIS1N_Msk (0x1UL << TIM_CR2_OIS1N_Pos) /*!< 0x00000200 */
#define TIM_CR2_OIS1N TIM_CR2_OIS1N_Msk                /*!<Output Idle state 1 (OC1N output) */
#define TIM_CR2_OIS2_Pos (10U)
#define TIM_CR2_OIS2_Msk (0x1UL << TIM_CR2_OIS2_Pos) /*!< 0x00000400 */
#define TIM_CR2_OIS2 TIM_CR2_OIS2_Msk                /*!<Output Idle state 2 (OC2 output) */
#define TIM_CR2_OIS2N_Pos (11U)
#define TIM_CR2_OIS2N_Msk (0x1UL << TIM_CR2_OIS2N_Pos) /*!< 0x00000800 */
#define TIM_CR2_OIS2N TIM_CR2_OIS2N_Msk                /*!<Output Idle state 2 (OC2N output) */
#define TIM_CR2_OIS3_Pos (12U)
#define TIM_CR2_OIS3_Msk (0x1UL << TIM_CR2_OIS3_Pos) /*!< 0x00001000 */
#define TIM_CR2_OIS3 TIM_CR2_OIS3_Msk                /*!<Output Idle state 3 (OC3 output) */
#define TIM_CR2_OIS3N_Pos (13U)
#define TIM_CR2_OIS3N_Msk (0x1UL << TIM_CR2_OIS3N_Pos) /*!< 0x00002000 */
#define TIM_CR2_OIS3N TIM_CR2_OIS3N_Msk                /*!<Output Idle state 3 (OC3N output) */
#define TIM_CR2_OIS4_Pos (14U)
#define TIM_CR2_OIS4_Msk (0x1UL << TIM_CR2_OIS4_Pos) /*!< 0x00004000 */
#define TIM_CR2_OIS4 TIM_CR2_OIS4_Msk                /*!<Output Idle state 4 (OC4 output) */

/*******************  Bit definition for TIM_SMCR register  ******************/
#define TIM_SMCR_SMS_Pos (0U)
#define TIM_SMCR_SMS_Msk (0x7UL << TIM_SMCR_SMS_Pos) /*!< 0x00000007 */
#define TIM_SMCR_SMS TIM_SMCR_SMS_Msk                /*!<SMS[2:0] bits (Slave mode selection) */
#define TIM_SMCR_SMS_0 (0x1UL << TIM_SMCR_SMS_Pos)   /*!< 0x00000001 */
#define TIM_SMCR_SMS_1 (0x2UL << TIM_SMCR_SMS_Pos)   /*!< 0x00000002 */
#define TIM_SMCR_SMS_2 (0x4UL << TIM_SMCR_SMS_Pos)   /*!< 0x00000004 */

#define TIM_SMCR_TS_Pos (4U)
#define TIM_SMCR_TS_Msk (0x7UL << TIM_SMCR_TS_Pos) /*!< 0x00000070 */
#define TIM_SMCR_TS TIM_SMCR_TS_Msk                /*!<TS[2:0] bits (Trigger selection) */
#define TIM_SMCR_TS_0 (0x1UL << TIM_SMCR_TS_Pos)   /*!< 0x00000010 */
#define TIM_SMCR_TS_1 (0x2UL << TIM_SMCR_TS_Pos)   /*!< 0x00000020 */
#define TIM_SMCR_TS_2 (0x4UL << TIM_SMCR_TS_Pos)   /*!< 0x00000040 */

#define TIM_SMCR_MSM_Pos (7U)
#define TIM_SMCR_MSM_Msk (0x1UL << TIM_SMCR_MSM_Pos) /*!< 0x00000080 */
#define TIM_SMCR_MSM TIM_SMCR_MSM_Msk                /*!<Master/slave mode */

#define TIM_SMCR_ETF_Pos (8U)
#define TIM_SMCR_ETF_Msk (0xFUL << TIM_SMCR_ETF_Pos) /*!< 0x00000F00 */
#define TIM_SMCR_ETF TIM_SMCR_ETF_Msk                /*!<ETF[3:0] bits (External trigger filter) */
#define TIM_SMCR_ETF_0 (0x1UL << TIM_SMCR_ETF_Pos)   /*!< 0x00000100 */
#define TIM_SMCR_ETF_1 (0x2UL << TIM_SMCR_ETF_Pos)   /*!< 0x00000200 */
#define TIM_SMCR_ETF_2 (0x4UL << TIM_SMCR_ETF_Pos)   /*!< 0x00000400 */
#define TIM_SMCR_ETF_3 (0x8UL << TIM_SMCR_ETF_Pos)   /*!< 0x00000800 */

#define TIM_SMCR_ETPS_Pos (12U)
#define TIM_SMCR_ETPS_Msk (0x3UL << TIM_SMCR_ETPS_Pos) /*!< 0x00003000 */
#define TIM_SMCR_ETPS TIM_SMCR_ETPS_Msk                /*!<ETPS[1:0] bits (External trigger prescaler) */
#define TIM_SMCR_ETPS_0 (0x1UL << TIM_SMCR_ETPS_Pos)   /*!< 0x00001000 */
#define TIM_SMCR_ETPS_1 (0x2UL << TIM_SMCR_ETPS_Pos)   /*!< 0x00002000 */

#define TIM_SMCR_ECE_Pos (14U)
#define TIM_SMCR_ECE_Msk (0x1UL << TIM_SMCR_ECE_Pos) /*!< 0x00004000 */
#define TIM_SMCR_ECE TIM_SMCR_ECE_Msk                /*!<External clock enable */
#define TIM_SMCR_ETP_Pos (15U)
#define TIM_SMCR_ETP_Msk (0x1UL << TIM_SMCR_ETP_Pos) /*!< 0x00008000 */
#define TIM_SMCR_ETP TIM_SMCR_ETP_Msk                /*!<External trigger polarity */

/*******************  Bit definition for TIM_DIER register  ******************/
#define TIM_DIER_UIE_Pos (0U)
#define TIM_DIER_UIE_Msk (0x1UL << TIM_DIER_UIE_Pos) /*!< 0x00000001 */
#define TIM_DIER_UIE TIM_DIER_UIE_Msk                /*!<Update interrupt enable */
#define TIM_DIER_CC1IE_Pos (1U)
#define TIM_DIER_CC1IE_Msk (0x1UL << TIM_DIER_CC1IE_Pos) /*!< 0x00000002 */
#define TIM_DIER_CC1IE TIM_DIER_CC1IE_Msk                /*!<Capture/Compare 1 interrupt enable */
#define TIM_DIER_CC2IE_Pos (2U)
#define TIM_DIER_CC2IE_Msk (0x1UL << TIM_DIER_CC2IE_Pos) /*!< 0x00000004 */
#define TIM_DIER_CC2IE TIM_DIER_CC2IE_Msk                /*!<Capture/Compare 2 interrupt enable */
#define TIM_DIER_CC3IE_Pos (3U)
#define TIM_DIER_CC3IE_Msk (0x1UL << TIM_DIER_CC3IE_Pos) /*!< 0x00000008 */
#define TIM_DIER_CC3IE TIM_DIER_CC3IE_Msk                /*!<Capture/Compare 3 interrupt enable */
#define TIM_DIER_CC4IE_Pos (4U)
#define TIM_DIER_CC4IE_Msk (0x1UL << TIM_DIER_CC4IE_Pos) /*!< 0x00000010 */
#define TIM_DIER_CC4IE TIM_DIER_CC4IE_Msk                /*!<Capture/Compare 4 interrupt enable */
#define TIM_DIER_COMIE_Pos (5U)
#define TIM_DIER_COMIE_Msk (0x1UL << TIM_DIER_COMIE_Pos) /*!< 0x00000020 */
#define TIM_DIER_COMIE TIM_DIER_COMIE_Msk                /*!<COM interrupt enable */
#define TIM_DIER_TIE_Pos (6U)
#define TIM_DIER_TIE_Msk (0x1UL << TIM_DIER_TIE_Pos) /*!< 0x00000040 */
#define TIM_DIER_TIE TIM_DIER_TIE_Msk                /*!<Trigger interrupt enable */
#define TIM_DIER_BIE_Pos (7U)
#define TIM_DIER_BIE_Msk (0x1UL << TIM_DIER_BIE_Pos) /*!< 0x00000080 */
#define TIM_DIER_BIE TIM_DIER_BIE_Msk                /*!<Break interrupt enable */
#define TIM_DIER_UDE_Pos (8U)
#define TIM_DIER_UDE_Msk (0x1UL << TIM_DIER_UDE_Pos) /*!< 0x00000100 */
#define TIM_DIER_UDE TIM_DIER_UDE_Msk                /*!<Update DMA request enable */
#define TIM_DIER_CC1DE_Pos (9U)
#define TIM_DIER_CC1DE_Msk (0x1UL << TIM_DIER_CC1DE_Pos) /*!< 0x00000200 */
#define TIM_DIER_CC1DE TIM_DIER_CC1DE_Msk                /*!<Capture/Compare 1 DMA request enable */
#define TIM_DIER_CC2DE_Pos (10U)
#define TIM_DIER_CC2DE_Msk (0x1UL << TIM_DIER_CC2DE_Pos) /*!< 0x00000400 */
#define TIM_DIER_CC2DE TIM_DIER_CC2DE_Msk                /*!<Capture/Compare 2 DMA request enable */
#define TIM_DIER_CC3DE_Pos (11U)
#define TIM_DIER_CC3DE_Msk (0x1UL << TIM_DIER_CC3DE_Pos) /*!< 0x00000800 */
#define TIM_DIER_CC3DE TIM_DIER_CC3DE_Msk                /*!<Capture/Compare 3 DMA request enable */
#define TIM_DIER_CC4DE_Pos (12U)
#define TIM_DIER_CC4DE_Msk (0x1UL << TIM_DIER_CC4DE_Pos) /*!< 0x00001000 */
#define TIM_DIER_CC4DE TIM_DIER_CC4DE_Msk                /*!<Capture/Compare 4 DMA request enable */
#define TIM_DIER_COMDE_Pos (13U)
#define TIM_DIER_COMDE_Msk (0x1UL << TIM_DIER_COMDE_Pos) /*!< 0x00002000 */
#define TIM_DIER_COMDE TIM_DIER_COMDE_Msk                /*!<COM DMA request enable */
#define TIM_DIER_TDE_Pos (14U)
#define TIM_DIER_TDE_Msk (0x1UL << TIM_DIER_TDE_Pos) /*!< 0x00004000 */
#define TIM_DIER_TDE TIM_DIER_TDE_Msk                /*!<Trigger DMA request enable */

/********************  Bit definition for TIM_SR register  *******************/
#define TIM_SR_UIF_Pos (0U)
#define TIM_SR_UIF_Msk (0x1UL << TIM_SR_UIF_Pos) /*!< 0x00000001 */
#define TIM_SR_UIF TIM_SR_UIF_Msk                /*!<Update interrupt Flag */
#define TIM_SR_CC1IF_Pos (1U)
#define TIM_SR_CC1IF_Msk (0x1UL << TIM_SR_CC1IF_Pos) /*!< 0x00000002 */
#define TIM_SR_CC1IF TIM_SR_CC1IF_Msk                /*!<Capture/Compare 1 interrupt Flag */
#define TIM_SR_CC2IF_Pos (2U)
#define TIM_SR_CC2IF_Msk (0x1UL << TIM_SR_CC2IF_Pos) /*!< 0x00000004 */
#define TIM_SR_CC2IF TIM_SR_CC2IF_Msk                /*!<Capture/Compare 2 interrupt Flag */
#define TIM_SR_CC3IF_Pos (3U)
#define TIM_SR_CC3IF_Msk (0x1UL << TIM_SR_CC3IF_Pos) /*!< 0x00000008 */
#define TIM_SR_CC3IF TIM_SR_CC3IF_Msk                /*!<Capture/Compare 3 interrupt Flag */
#define TIM_SR_CC4IF_Pos (4U)
#define TIM_SR_CC4IF_Msk (0x1UL << TIM_SR_CC4IF_Pos) /*!< 0x00000010 */
#define TIM_SR_CC4IF TIM_SR_CC4IF_Msk                /*!<Capture/Compare 4 interrupt Flag */
#define TIM_SR_COMIF_Pos (5U)
#define TIM_SR_COMIF_Msk (0x1UL << TIM_SR_COMIF_Pos) /*!< 0x00000020 */
#define TIM_SR_COMIF TIM_SR_COMIF_Msk                /*!<COM interrupt Flag */
#define TIM_SR_TIF_Pos (6U)
#define TIM_SR_TIF_Msk (0x1UL << TIM_SR_TIF_Pos) /*!< 0x00000040 */
#define TIM_SR_TIF TIM_SR_TIF_Msk                /*!<Trigger interrupt Flag */
#define TIM_SR_BIF_Pos (7U)
#define TIM_SR_BIF_Msk (0x1UL << TIM_SR_BIF_Pos) /*!< 0x00000080 */
#define TIM_SR_BIF TIM_SR_BIF_Msk                /*!<Break interrupt Flag */
#define TIM_SR_CC1OF_Pos (9U)
#define TIM_SR_CC1OF_Msk (0x1UL << TIM_SR_CC1OF_Pos) /*!< 0x00000200 */
#define TIM_SR_CC1OF TIM_SR_CC1OF_Msk                /*!<Capture/Compare 1 Overcapture Flag */
#define TIM_SR_CC2OF_Pos (10U)
#define TIM_SR_CC2OF_Msk (0x1UL << TIM_SR_CC2OF_Pos) /*!< 0x00000400 */
#define TIM_SR_CC2OF TIM_SR_CC2OF_Msk                /*!<Capture/Compare 2 Overcapture Flag */
#define TIM_SR_CC3OF_Pos (11U)
#define TIM_SR_CC3OF_Msk (0x1UL << TIM_SR_CC3OF_Pos) /*!< 0x00000800 */
#define TIM_SR_CC3OF TIM_SR_CC3OF_Msk                /*!<Capture/Compare 3 Overcapture Flag */
#define TIM_SR_CC4OF_Pos (12U)
#define TIM_SR_CC4OF_Msk (0x1UL << TIM_SR_CC4OF_Pos) /*!< 0x00001000 */
#define TIM_SR_CC4OF TIM_SR_CC4OF_Msk                /*!<Capture/Compare 4 Overcapture Flag */

/*******************  Bit definition for TIM_EGR register  *******************/
#define TIM_EGR_UG_Pos (0U)
#define TIM_EGR_UG_Msk (0x1UL << TIM_EGR_UG_Pos) /*!< 0x00000001 */
#define TIM_EGR_UG TIM_EGR_UG_Msk                /*!<Update Generation */
#define TIM_EGR_CC1G_Pos (1U)
#define TIM_EGR_CC1G_Msk (0x1UL << TIM_EGR_CC1G_Pos) /*!< 0x00000002 */
#define TIM_EGR_CC1G TIM_EGR_CC1G_Msk                /*!<Capture/Compare 1 Generation */
#define TIM_EGR_CC2G_Pos (2U)
#define TIM_EGR_CC2G_Msk (0x1UL << TIM_EGR_CC2G_Pos) /*!< 0x00000004 */
#define TIM_EGR_CC2G TIM_EGR_CC2G_Msk                /*!<Capture/Compare 2 Generation */
#define TIM_EGR_CC3G_Pos (3U)
#define TIM_EGR_CC3G_Msk (0x1UL << TIM_EGR_CC3G_Pos) /*!< 0x00000008 */
#define TIM_EGR_CC3G TIM_EGR_CC3G_Msk                /*!<Capture/Compare 3 Generation */
#define TIM_EGR_CC4G_Pos (4U)
#define TIM_EGR_CC4G_Msk (0x1UL << TIM_EGR_CC4G_Pos) /*!< 0x00000010 */
#define TIM_EGR_CC4G TIM_EGR_CC4G_Msk                /*!<Capture/Compare 4 Generation */
#define TIM_EGR_COMG_Pos (5U)
#define TIM_EGR_COMG_Msk (0x1UL << TIM_EGR_COMG_Pos) /*!< 0x00000020 */
#define TIM_EGR_COMG TIM_EGR_COMG_Msk                /*!<Capture/Compare Control Update Generation */
#define TIM_EGR_TG_Pos (6U)
#define TIM_EGR_TG_Msk (0x1UL << TIM_EGR_TG_Pos) /*!< 0x00000040 */
#define TIM_EGR_TG TIM_EGR_TG_Msk                /*!<Trigger Generation */
#define TIM_EGR_BG_Pos (7U)
#define TIM_EGR_BG_Msk (0x1UL << TIM_EGR_BG_Pos) /*!< 0x00000080 */
#define TIM_EGR_BG TIM_EGR_BG_Msk                /*!<Break Generation */

/******************  Bit definition for TIM_CCMR1 register  ******************/
#define TIM_CCMR1_CC1S_Pos (0U)
#define TIM_CCMR1_CC1S_Msk (0x3UL << TIM_CCMR1_CC1S_Pos) /*!< 0x00000003 */
#define TIM_CCMR1_CC1S TIM_CCMR1_CC1S_Msk                /*!<CC1S[1:0] bits (Capture/Compare 1 Selection) */
#define TIM_CCMR1_CC1S_0 (0x1UL << TIM_CCMR1_CC1S_Pos)   /*!< 0x00000001 */
#define TIM_CCMR1_CC1S_1 (0x2UL << TIM_CCMR1_CC1S_Pos)   /*!< 0x00000002 */

#define TIM_CCMR1_OC1FE_Pos (2U)
#define TIM_CCMR1_OC1FE_Msk (0x1UL << TIM_CCMR1_OC1FE_Pos) /*!< 0x00000004 */
#define TIM_CCMR1_OC1FE TIM_CCMR1_OC1FE_Msk                /*!<Output Compare 1 Fast enable */
#define TIM_CCMR1_OC1PE_Pos (3U)
#define TIM_CCMR1_OC1PE_Msk (0x1UL << TIM_CCMR1_OC1PE_Pos) /*!< 0x00000008 */
#define TIM_CCMR1_OC1PE TIM_CCMR1_OC1PE_Msk                /*!<Output Compare 1 Preload enable */

#define TIM_CCMR1_OC1M_Pos (4U)
#define TIM_CCMR1_OC1M_Msk (0x7UL << TIM_CCMR1_OC1M_Pos) /*!< 0x00000070 */
#define TIM_CCMR1_OC1M TIM_CCMR1_OC1M_Msk                /*!<OC1M[2:0] bits (Output Compare 1 Mode) */
#define TIM_CCMR1_OC1M_0 (0x1UL << TIM_CCMR1_OC1M_Pos)   /*!< 0x00000010 */
#define TIM_CCMR1_OC1M_1 (0x2UL << TIM_CCMR1_OC1M_Pos)   /*!< 0x00000020 */
#define TIM_CCMR1_OC1M_2 (0x4UL << TIM_CCMR1_OC1M_Pos)   /*!< 0x00000040 */

#define TIM_CCMR1_OC1CE_Pos (7U)
#define TIM_CCMR1_OC1CE_Msk (0x1UL << TIM_CCMR1_OC1CE_Pos) /*!< 0x00000080 */
#define TIM_CCMR1_OC1CE TIM_CCMR1_OC1CE_Msk                /*!<Output Compare 1Clear Enable */

#define TIM_CCMR1_CC2S_Pos (8U)
#define TIM_CCMR1_CC2S_Msk (0x3UL << TIM_CCMR1_CC2S_Pos) /*!< 0x00000300 */
#define TIM_CCMR1_CC2S TIM_CCMR1_CC2S_Msk                /*!<CC2S[1:0] bits (Capture/Compare 2 Selection) */
#define TIM_CCMR1_CC2S_0 (0x1UL << TIM_CCMR1_CC2S_Pos)   /*!< 0x00000100 */
#define TIM_CCMR1_CC2S_1 (0x2UL << TIM_CCMR1_CC2S_Pos)   /*!< 0x00000200 */

#define TIM_CCMR1_OC2FE_Pos (10U)
#define TIM_CCMR1_OC2FE_Msk (0x1UL << TIM_CCMR1_OC2FE_Pos) /*!< 0x00000400 */
#define TIM_CCMR1_OC2FE TIM_CCMR1_OC2FE_Msk                /*!<Output Compare 2 Fast enable */
#define TIM_CCMR1_OC2PE_Pos (11U)
#define TIM_CCMR1_OC2PE_Msk (0x1UL << TIM_CCMR1_OC2PE_Pos) /*!< 0x00000800 */
#define TIM_CCMR1_OC2PE TIM_CCMR1_OC2PE_Msk                /*!<Output Compare 2 Preload enable */

#define TIM_CCMR1_OC2M_Pos (12U)
#define TIM_CCMR1_OC2M_Msk (0x7UL << TIM_CCMR1_OC2M_Pos) /*!< 0x00007000 */
#define TIM_CCMR1_OC2M TIM_CCMR1_OC2M_Msk                /*!<OC2M[2:0] bits (Output Compare 2 Mode) */
#define TIM_CCMR1_OC2M_0 (0x1UL << TIM_CCMR1_OC2M_Pos)   /*!< 0x00001000 */
#define TIM_CCMR1_OC2M_1 (0x2UL << TIM_CCMR1_OC2M_Pos)   /*!< 0x00002000 */
#define TIM_CCMR1_OC2M_2 (0x4UL << TIM_CCMR1_OC2M_Pos)   /*!< 0x00004000 */

#define TIM_CCMR1_OC2CE_Pos (15U)
#define TIM_CCMR1_OC2CE_Msk (0x1UL << TIM_CCMR1_OC2CE_Pos) /*!< 0x00008000 */
#define TIM_CCMR1_OC2CE TIM_CCMR1_OC2CE_Msk                /*!<Output Compare 2 Clear Enable */

/*---------------------------------------------------------------------------*/

#define TIM_CCMR1_IC1PSC_Pos (2U)
#define TIM_CCMR1_IC1PSC_Msk (0x3UL << TIM_CCMR1_IC1PSC_Pos) /*!< 0x0000000C */
#define TIM_CCMR1_IC1PSC TIM_CCMR1_IC1PSC_Msk                /*!<IC1PSC[1:0] bits (Input Capture 1 Prescaler) */
#define TIM_CCMR1_IC1PSC_0 (0x1UL << TIM_CCMR1_IC1PSC_Pos)   /*!< 0x00000004 */
#define TIM_CCMR1_IC1PSC_1 (0x2UL << TIM_CCMR1_IC1PSC_Pos)   /*!< 0x00000008 */

#define TIM_CCMR1_IC1F_Pos (4U)
#define TIM_CCMR1_IC1F_Msk (0xFUL << TIM_CCMR1_IC1F_Pos) /*!< 0x000000F0 */
#define TIM_CCMR1_IC1F TIM_CCMR1_IC1F_Msk                /*!<IC1F[3:0] bits (Input Capture 1 Filter) */
#define TIM_CCMR1_IC1F_0 (0x1UL << TIM_CCMR1_IC1F_Pos)   /*!< 0x00000010 */
#define TIM_CCMR1_IC1F_1 (0x2UL << TIM_CCMR1_IC1F_Pos)   /*!< 0x00000020 */
#define TIM_CCMR1_IC1F_2 (0x4UL << TIM_CCMR1_IC1F_Pos)   /*!< 0x00000040 */
#define TIM_CCMR1_IC1F_3 (0x8UL << TIM_CCMR1_IC1F_Pos)   /*!< 0x00000080 */

#define TIM_CCMR1_IC2PSC_Pos (10U)
#define TIM_CCMR1_IC2PSC_Msk (0x3UL << TIM_CCMR1_IC2PSC_Pos) /*!< 0x00000C00 */
#define TIM_CCMR1_IC2PSC TIM_CCMR1_IC2PSC_Msk                /*!<IC2PSC[1:0] bits (Input Capture 2 Prescaler) */
#define TIM_CCMR1_IC2PSC_0 (0x1UL << TIM_CCMR1_IC2PSC_Pos)   /*!< 0x00000400 */
#define TIM_CCMR1_IC2PSC_1 (0x2UL << TIM_CCMR1_IC2PSC_Pos)   /*!< 0x00000800 */

#define TIM_CCMR1_IC2F_Pos (12U)
#define TIM_CCMR1_IC2F_Msk (0xFUL << TIM_CCMR1_IC2F_Pos) /*!< 0x0000F000 */
#define TIM_CCMR1_IC2F TIM_CCMR1_IC2F_Msk                /*!<IC2F[3:0] bits (Input Capture 2 Filter) */
#define TIM_CCMR1_IC2F_0 (0x1UL << TIM_CCMR1_IC2F_Pos)   /*!< 0x00001000 */
#define TIM_CCMR1_IC2F_1 (0x2UL << TIM_CCMR1_IC2F_Pos)   /*!< 0x00002000 */
#define TIM_CCMR1_IC2F_2 (0x4UL << TIM_CCMR1_IC2F_Pos)   /*!< 0x00004000 */
#define TIM_CCMR1_IC2F_3 (0x8UL << TIM_CCMR1_IC2F_Pos)   /*!< 0x00008000 */

/******************  Bit definition for TIM_CCMR2 register  ******************/
#define TIM_CCMR2_CC3S_Pos (0U)
#define TIM_CCMR2_CC3S_Msk (0x3UL << TIM_CCMR2_CC3S_Pos) /*!< 0x00000003 */
#define TIM_CCMR2_CC3S TIM_CCMR2_CC3S_Msk                /*!<CC3S[1:0] bits (Capture/Compare 3 Selection) */
#define TIM_CCMR2_CC3S_0 (0x1UL << TIM_CCMR2_CC3S_Pos)   /*!< 0x00000001 */
#define TIM_CCMR2_CC3S_1 (0x2UL << TIM_CCMR2_CC3S_Pos)   /*!< 0x00000002 */

#define TIM_CCMR2_OC3FE_Pos (2U)
#define TIM_CCMR2_OC3FE_Msk (0x1UL << TIM_CCMR2_OC3FE_Pos) /*!< 0x00000004 */
#define TIM_CCMR2_OC3FE TIM_CCMR2_OC3FE_Msk                /*!<Output Compare 3 Fast enable */
#define TIM_CCMR2_OC3PE_Pos (3U)
#define TIM_CCMR2_OC3PE_Msk (0x1UL << TIM_CCMR2_OC3PE_Pos) /*!< 0x00000008 */
#define TIM_CCMR2_OC3PE TIM_CCMR2_OC3PE_Msk                /*!<Output Compare 3 Preload enable */

#define TIM_CCMR2_OC3M_Pos (4U)
#define TIM_CCMR2_OC3M_Msk (0x7UL << TIM_CCMR2_OC3M_Pos) /*!< 0x00000070 */
#define TIM_CCMR2_OC3M TIM_CCMR2_OC3M_Msk                /*!<OC3M[2:0] bits (Output Compare 3 Mode) */
#define TIM_CCMR2_OC3M_0 (0x1UL << TIM_CCMR2_OC3M_Pos)   /*!< 0x00000010 */
#define TIM_CCMR2_OC3M_1 (0x2UL << TIM_CCMR2_OC3M_Pos)   /*!< 0x00000020 */
#define TIM_CCMR2_OC3M_2 (0x4UL << TIM_CCMR2_OC3M_Pos)   /*!< 0x00000040 */

#define TIM_CCMR2_OC3CE_Pos (7U)
#define TIM_CCMR2_OC3CE_Msk (0x1UL << TIM_CCMR2_OC3CE_Pos) /*!< 0x00000080 */
#define TIM_CCMR2_OC3CE TIM_CCMR2_OC3CE_Msk                /*!<Output Compare 3 Clear Enable */

#define TIM_CCMR2_CC4S_Pos (8U)
#define TIM_CCMR2_CC4S_Msk (0x3UL << TIM_CCMR2_CC4S_Pos) /*!< 0x00000300 */
#define TIM_CCMR2_CC4S TIM_CCMR2_CC4S_Msk                /*!<CC4S[1:0] bits (Capture/Compare 4 Selection) */
#define TIM_CCMR2_CC4S_0 (0x1UL << TIM_CCMR2_CC4S_Pos)   /*!< 0x00000100 */
#define TIM_CCMR2_CC4S_1 (0x2UL << TIM_CCMR2_CC4S_Pos)   /*!< 0x00000200 */

#define TIM_CCMR2_OC4FE_Pos (10U)
#define TIM_CCMR2_OC4FE_Msk (0x1UL << TIM_CCMR2_OC4FE_Pos) /*!< 0x00000400 */
#define TIM_CCMR2_OC4FE TIM_CCMR2_OC4FE_Msk                /*!<Output Compare 4 Fast enable */
#define TIM_CCMR2_OC4PE_Pos (11U)
#define TIM_CCMR2_OC4PE_Msk (0x1UL << TIM_CCMR2_OC4PE_Pos) /*!< 0x00000800 */
#define TIM_CCMR2_OC4PE TIM_CCMR2_OC4PE_Msk                /*!<Output Compare 4 Preload enable */

#define TIM_CCMR2_OC4M_Pos (12U)
#define TIM_CCMR2_OC4M_Msk (0x7UL << TIM_CCMR2_OC4M_Pos) /*!< 0x00007000 */
#define TIM_CCMR2_OC4M TIM_CCMR2_OC4M_Msk                /*!<OC4M[2:0] bits (Output Compare 4 Mode) */
#define TIM_CCMR2_OC4M_0 (0x1UL << TIM_CCMR2_OC4M_Pos)   /*!< 0x00001000 */
#define TIM_CCMR2_OC4M_1 (0x2UL << TIM_CCMR2_OC4M_Pos)   /*!< 0x00002000 */
#define TIM_CCMR2_OC4M_2 (0x4UL << TIM_CCMR2_OC4M_Pos)   /*!< 0x00004000 */

#define TIM_CCMR2_OC4CE_Pos (15U)
#define TIM_CCMR2_OC4CE_Msk (0x1UL << TIM_CCMR2_OC4CE_Pos) /*!< 0x00008000 */
#define TIM_CCMR2_OC4CE TIM_CCMR2_OC4CE_Msk                /*!<Output Compare 4 Clear Enable */

/*---------------------------------------------------------------------------*/

#define TIM_CCMR2_IC3PSC_Pos (2U)
#define TIM_CCMR2_IC3PSC_Msk (0x3UL << TIM_CCMR2_IC3PSC_Pos) /*!< 0x0000000C */
#define TIM_CCMR2_IC3PSC TIM_CCMR2_IC3PSC_Msk                /*!<IC3PSC[1:0] bits (Input Capture 3 Prescaler) */
#define TIM_CCMR2_IC3PSC_0 (0x1UL << TIM_CCMR2_IC3PSC_Pos)   /*!< 0x00000004 */
#define TIM_CCMR2_IC3PSC_1 (0x2UL << TIM_CCMR2_IC3PSC_Pos)   /*!< 0x00000008 */

#define TIM_CCMR2_IC3F_Pos (4U)
#define TIM_CCMR2_IC3F_Msk (0xFUL << TIM_CCMR2_IC3F_Pos) /*!< 0x000000F0 */
#define TIM_CCMR2_IC3F TIM_CCMR2_IC3F_Msk                /*!<IC3F[3:0] bits (Input Capture 3 Filter) */
#define TIM_CCMR2_IC3F_0 (0x1UL << TIM_CCMR2_IC3F_Pos)   /*!< 0x00000010 */
#define TIM_CCMR2_IC3F_1 (0x2UL << TIM_CCMR2_IC3F_Pos)   /*!< 0x00000020 */
#define TIM_CCMR2_IC3F_2 (0x4UL << TIM_CCMR2_IC3F_Pos)   /*!< 0x00000040 */
#define TIM_CCMR2_IC3F_3 (0x8UL << TIM_CCMR2_IC3F_Pos)   /*!< 0x00000080 */

#define TIM_CCMR2_IC4PSC_Pos (10U)
#define TIM_CCMR2_IC4PSC_Msk (0x3UL << TIM_CCMR2_IC4PSC_Pos) /*!< 0x00000C00 */
#define TIM_CCMR2_IC4PSC TIM_CCMR2_IC4PSC_Msk                /*!<IC4PSC[1:0] bits (Input Capture 4 Prescaler) */
#define TIM_CCMR2_IC4PSC_0 (0x1UL << TIM_CCMR2_IC4PSC_Pos)   /*!< 0x00000400 */
#define TIM_CCMR2_IC4PSC_1 (0x2UL << TIM_CCMR2_IC4PSC_Pos)   /*!< 0x00000800 */

#define TIM_CCMR2_IC4F_Pos (12U)
#define TIM_CCMR2_IC4F_Msk (0xFUL << TIM_CCMR2_IC4F_Pos) /*!< 0x0000F000 */
#define TIM_CCMR2_IC4F TIM_CCMR2_IC4F_Msk                /*!<IC4F[3:0] bits (Input Capture 4 Filter) */
#define TIM_CCMR2_IC4F_0 (0x1UL << TIM_CCMR2_IC4F_Pos)   /*!< 0x00001000 */
#define TIM_CCMR2_IC4F_1 (0x2UL << TIM_CCMR2_IC4F_Pos)   /*!< 0x00002000 */
#define TIM_CCMR2_IC4F_2 (0x4UL << TIM_CCMR2_IC4F_Pos)   /*!< 0x00004000 */
#define TIM_CCMR2_IC4F_3 (0x8UL << TIM_CCMR2_IC4F_Pos)   /*!< 0x00008000 */

/*******************  Bit definition for TIM_CCER register  ******************/
#define TIM_CCER_CC1E_Pos (0U)
#define TIM_CCER_CC1E_Msk (0x1UL << TIM_CCER_CC1E_Pos) /*!< 0x00000001 */
#define TIM_CCER_CC1E TIM_CCER_CC1E_Msk                /*!<Capture/Compare 1 output enable */
#define TIM_CCER_CC1P_Pos (1U)
#define TIM_CCER_CC1P_Msk (0x1UL << TIM_CCER_CC1P_Pos) /*!< 0x00000002 */
#define TIM_CCER_CC1P TIM_CCER_CC1P_Msk                /*!<Capture/Compare 1 output Polarity */
#define TIM_CCER_CC1NE_Pos (2U)
#define TIM_CCER_CC1NE_Msk (0x1UL << TIM_CCER_CC1NE_Pos) /*!< 0x00000004 */
#define TIM_CCER_CC1NE TIM_CCER_CC1NE_Msk                /*!<Capture/Compare 1 Complementary output enable */
#define TIM_CCER_CC1NP_Pos (3U)
#define TIM_CCER_CC1NP_Msk (0x1UL << TIM_CCER_CC1NP_Pos) /*!< 0x00000008 */
#define TIM_CCER_CC1NP TIM_CCER_CC1NP_Msk                /*!<Capture/Compare 1 Complementary output Polarity */
#define TIM_CCER_CC2E_Pos (4U)
#define TIM_CCER_CC2E_Msk (0x1UL << TIM_CCER_CC2E_Pos) /*!< 0x00000010 */
#define TIM_CCER_CC2E TIM_CCER_CC2E_Msk                /*!<Capture/Compare 2 output enable */
#define TIM_CCER_CC2P_Pos (5U)
#define TIM_CCER_CC2P_Msk (0x1UL << TIM_CCER_CC2P_Pos) /*!< 0x00000020 */
#define TIM_CCER_CC2P TIM_CCER_CC2P_Msk                /*!<Capture/Compare 2 output Polarity */
#define TIM_CCER_CC2NE_Pos (6U)
#define TIM_CCER_CC2NE_Msk (0x1UL << TIM_CCER_CC2NE_Pos) /*!< 0x00000040 */
#define TIM_CCER_CC2NE TIM_CCER_CC2NE_Msk                /*!<Capture/Compare 2 Complementary output enable */
#define TIM_CCER_CC2NP_Pos (7U)
#define TIM_CCER_CC2NP_Msk (0x1UL << TIM_CCER_CC2NP_Pos) /*!< 0x00000080 */
#define TIM_CCER_CC2NP TIM_CCER_CC2NP_Msk                /*!<Capture/Compare 2 Complementary output Polarity */
#define TIM_CCER_CC3E_Pos (8U)
#define TIM_CCER_CC3E_Msk (0x1UL << TIM_CCER_CC3E_Pos) /*!< 0x00000100 */
#define TIM_CCER_CC3E TIM_CCER_CC3E_Msk                /*!<Capture/Compare 3 output enable */
#define TIM_CCER_CC3P_Pos (9U)
#define TIM_CCER_CC3P_Msk (0x1UL << TIM_CCER_CC3P_Pos) /*!< 0x00000200 */
#define TIM_CCER_CC3P TIM_CCER_CC3P_Msk                /*!<Capture/Compare 3 output Polarity */
#define TIM_CCER_CC3NE_Pos (10U)
#define TIM_CCER_CC3NE_Msk (0x1UL << TIM_CCER_CC3NE_Pos) /*!< 0x00000400 */
#define TIM_CCER_CC3NE TIM_CCER_CC3NE_Msk                /*!<Capture/Compare 3 Complementary output enable */
#define TIM_CCER_CC3NP_Pos (11U)
#define TIM_CCER_CC3NP_Msk (0x1UL << TIM_CCER_CC3NP_Pos) /*!< 0x00000800 */
#define TIM_CCER_CC3NP TIM_CCER_CC3NP_Msk                /*!<Capture/Compare 3 Complementary output Polarity */
#define TIM_CCER_CC4E_Pos (12U)
#define TIM_CCER_CC4E_Msk (0x1UL << TIM_CCER_CC4E_Pos) /*!< 0x00001000 */
#define TIM_CCER_CC4E TIM_CCER_CC4E_Msk                /*!<Capture/Compare 4 output enable */
#define TIM_CCER_CC4P_Pos (13U)
#define TIM_CCER_CC4P_Msk (0x1UL << TIM_CCER_CC4P_Pos) /*!< 0x00002000 */
#define TIM_CCER_CC4P TIM_CCER_CC4P_Msk                /*!<Capture/Compare 4 output Polarity */

/*******************  Bit definition for TIM_CNT register  *******************/
#define TIM_CNT_CNT_Pos (0U)
#define TIM_CNT_CNT_Msk (0xFFFFFFFFUL << TIM_CNT_CNT_Pos) /*!< 0xFFFFFFFF */
#define TIM_CNT_CNT TIM_CNT_CNT_Msk                       /*!<Counter Value */

/*******************  Bit definition for TIM_PSC register  *******************/
#define TIM_PSC_PSC_Pos (0U)
#define TIM_PSC_PSC_Msk (0xFFFFUL << TIM_PSC_PSC_Pos) /*!< 0x0000FFFF */
#define TIM_PSC_PSC TIM_PSC_PSC_Msk                   /*!<Prescaler Value */

/*******************  Bit definition for TIM_ARR register  *******************/
#define TIM_ARR_ARR_Pos (0U)
#define TIM_ARR_ARR_Msk (0xFFFFFFFFUL << TIM_ARR_ARR_Pos) /*!< 0xFFFFFFFF */
#define TIM_ARR_ARR TIM_ARR_ARR_Msk                       /*!<actual auto-reload Value */

/*******************  Bit definition for TIM_RCR register  *******************/
#define TIM_RCR_REP_Pos (0U)
#define TIM_RCR_REP_Msk (0xFFUL << TIM_RCR_REP_Pos) /*!< 0x000000FF */
#define TIM_RCR_REP TIM_RCR_REP_Msk                 /*!<Repetition Counter Value */

/*******************  Bit definition for TIM_CCR1 register  ******************/
#define TIM_CCR1_CCR1_Pos (0U)
#define TIM_CCR1_CCR1_Msk (0xFFFFUL << TIM_CCR1_CCR1_Pos) /*!< 0x0000FFFF */
#define TIM_CCR1_CCR1 TIM_CCR1_CCR1_Msk                   /*!<Capture/Compare 1 Value */

/*******************  Bit definition for TIM_CCR2 register  ******************/
#define TIM_CCR2_CCR2_Pos (0U)
#define TIM_CCR2_CCR2_Msk (0xFFFFUL << TIM_CCR2_CCR2_Pos) /*!< 0x0000FFFF */
#define TIM_CCR2_CCR2 TIM_CCR2_CCR2_Msk                   /*!<Capture/Compare 2 Value */

/*******************  Bit definition for TIM_CCR3 register  ******************/
#define TIM_CCR3_CCR3_Pos (0U)
#define TIM_CCR3_CCR3_Msk (0xFFFFUL << TIM_CCR3_CCR3_Pos) /*!< 0x0000FFFF */
#define TIM_CCR3_CCR3 TIM_CCR3_CCR3_Msk                   /*!<Capture/Compare 3 Value */

/*******************  Bit definition for TIM_CCR4 register  ******************/
#define TIM_CCR4_CCR4_Pos (0U)
#define TIM_CCR4_CCR4_Msk (0xFFFFUL << TIM_CCR4_CCR4_Pos) /*!< 0x0000FFFF */
#define TIM_CCR4_CCR4 TIM_CCR4_CCR4_Msk                   /*!<Capture/Compare 4 Value */

/*******************  Bit definition for TIM_BDTR register  ******************/
#define TIM_BDTR_DTG_Pos (0U)
#define TIM_BDTR_DTG_Msk (0xFFUL << TIM_BDTR_DTG_Pos) /*!< 0x000000FF */
#define TIM_BDTR_DTG TIM_BDTR_DTG_Msk                 /*!<DTG[0:7] bits (Dead-Time Generator set-up) */
#define TIM_BDTR_DTG_0 (0x01UL << TIM_BDTR_DTG_Pos)   /*!< 0x00000001 */
#define TIM_BDTR_DTG_1 (0x02UL << TIM_BDTR_DTG_Pos)   /*!< 0x00000002 */
#define TIM_BDTR_DTG_2 (0x04UL << TIM_BDTR_DTG_Pos)   /*!< 0x00000004 */
#define TIM_BDTR_DTG_3 (0x08UL << TIM_BDTR_DTG_Pos)   /*!< 0x00000008 */
#define TIM_BDTR_DTG_4 (0x10UL << TIM_BDTR_DTG_Pos)   /*!< 0x00000010 */
#define TIM_BDTR_DTG_5 (0x20UL << TIM_BDTR_DTG_Pos)   /*!< 0x00000020 */
#define TIM_BDTR_DTG_6 (0x40UL << TIM_BDTR_DTG_Pos)   /*!< 0x00000040 */
#define TIM_BDTR_DTG_7 (0x80UL << TIM_BDTR_DTG_Pos)   /*!< 0x00000080 */

#define TIM_BDTR_LOCK_Pos (8U)
#define TIM_BDTR_LOCK_Msk (0x3UL << TIM_BDTR_LOCK_Pos) /*!< 0x00000300 */
#define TIM_BDTR_LOCK TIM_BDTR_LOCK_Msk                /*!<LOCK[1:0] bits (Lock Configuration) */
#define TIM_BDTR_LOCK_0 (0x1UL << TIM_BDTR_LOCK_Pos)   /*!< 0x00000100 */
#define TIM_BDTR_LOCK_1 (0x2UL << TIM_BDTR_LOCK_Pos)   /*!< 0x00000200 */

#define TIM_BDTR_OSSI_Pos (10U)
#define TIM_BDTR_OSSI_Msk (0x1UL << TIM_BDTR_OSSI_Pos) /*!< 0x00000400 */
#define TIM_BDTR_OSSI TIM_BDTR_OSSI_Msk                /*!<Off-State Selection for Idle mode */
#define TIM_BDTR_OSSR_Pos (11U)
#define TIM_BDTR_OSSR_Msk (0x1UL << TIM_BDTR_OSSR_Pos) /*!< 0x00000800 */
#define TIM_BDTR_OSSR TIM_BDTR_OSSR_Msk                /*!<Off-State Selection for Run mode */
#define TIM_BDTR_BKE_Pos (12U)
#define TIM_BDTR_BKE_Msk (0x1UL << TIM_BDTR_BKE_Pos) /*!< 0x00001000 */
#define TIM_BDTR_BKE TIM_BDTR_BKE_Msk                /*!<Break enable */
#define TIM_BDTR_BKP_Pos (13U)
#define TIM_BDTR_BKP_Msk (0x1UL << TIM_BDTR_BKP_Pos) /*!< 0x00002000 */
#define TIM_BDTR_BKP TIM_BDTR_BKP_Msk                /*!<Break Polarity */
#define TIM_BDTR_AOE_Pos (14U)
#define TIM_BDTR_AOE_Msk (0x1UL << TIM_BDTR_AOE_Pos) /*!< 0x00004000 */
#define TIM_BDTR_AOE TIM_BDTR_AOE_Msk                /*!<Automatic Output enable */
#define TIM_BDTR_MOE_Pos (15U)
#define TIM_BDTR_MOE_Msk (0x1UL << TIM_BDTR_MOE_Pos) /*!< 0x00008000 */
#define TIM_BDTR_MOE TIM_BDTR_MOE_Msk                /*!<Main Output enable */

/*******************  Bit definition for TIM_DCR register  *******************/
#define TIM_DCR_DBA_Pos (0U)
#define TIM_DCR_DBA_Msk (0x1FUL << TIM_DCR_DBA_Pos) /*!< 0x0000001F */
#define TIM_DCR_DBA TIM_DCR_DBA_Msk                 /*!<DBA[4:0] bits (DMA Base Address) */
#define TIM_DCR_DBA_0 (0x01UL << TIM_DCR_DBA_Pos)   /*!< 0x00000001 */
#define TIM_DCR_DBA_1 (0x02UL << TIM_DCR_DBA_Pos)   /*!< 0x00000002 */
#define TIM_DCR_DBA_2 (0x04UL << TIM_DCR_DBA_Pos)   /*!< 0x00000004 */
#define TIM_DCR_DBA_3 (0x08UL << TIM_DCR_DBA_Pos)   /*!< 0x00000008 */
#define TIM_DCR_DBA_4 (0x10UL << TIM_DCR_DBA_Pos)   /*!< 0x00000010 */

#define TIM_DCR_DBL_Pos (8U)
#define TIM_DCR_DBL_Msk (0x1FUL << TIM_DCR_DBL_Pos) /*!< 0x00001F00 */
#define TIM_DCR_DBL TIM_DCR_DBL_Msk                 /*!<DBL[4:0] bits (DMA Burst Length) */
#define TIM_DCR_DBL_0 (0x01UL << TIM_DCR_DBL_Pos)   /*!< 0x00000100 */
#define TIM_DCR_DBL_1 (0x02UL << TIM_DCR_DBL_Pos)   /*!< 0x00000200 */
#define TIM_DCR_DBL_2 (0x04UL << TIM_DCR_DBL_Pos)   /*!< 0x00000400 */
#define TIM_DCR_DBL_3 (0x08UL << TIM_DCR_DBL_Pos)   /*!< 0x00000800 */
#define TIM_DCR_DBL_4 (0x10UL << TIM_DCR_DBL_Pos)   /*!< 0x00001000 */

/*******************  Bit definition for TIM_DMAR register  ******************/
#define TIM_DMAR_DMAB_Pos (0U)
#define TIM_DMAR_DMAB_Msk (0xFFFFUL << TIM_DMAR_DMAB_Pos) /*!< 0x0000FFFF */
#define TIM_DMAR_DMAB TIM_DMAR_DMAB_Msk                   /*!<DMA register for burst accesses */

/******************************************************************************/
/*                                                                            */
/*                             Real-Time Clock                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for RTC_CRH register  ********************/
#define RTC_CRH_SECIE_Pos (0U)
#define RTC_CRH_SECIE_Msk (0x1UL << RTC_CRH_SECIE_Pos) /*!< 0x00000001 */
#define RTC_CRH_SECIE RTC_CRH_SECIE_Msk                /*!< Second Interrupt Enable */
#define RTC_CRH_ALRIE_Pos (1U)
#define RTC_CRH_ALRIE_Msk (0x1UL << RTC_CRH_ALRIE_Pos) /*!< 0x00000002 */
#define RTC_CRH_ALRIE RTC_CRH_ALRIE_Msk                /*!< Alarm Interrupt Enable */
#define RTC_CRH_OWIE_Pos (2U)
#define RTC_CRH_OWIE_Msk (0x1UL << RTC_CRH_OWIE_Pos) /*!< 0x00000004 */
#define RTC_CRH_OWIE RTC_CRH_OWIE_Msk                /*!< OverfloW Interrupt Enable */

/*******************  Bit definition for RTC_CRL register  ********************/
#define RTC_CRL_SECF_Pos (0U)
#define RTC_CRL_SECF_Msk (0x1UL << RTC_CRL_SECF_Pos) /*!< 0x00000001 */
#define RTC_CRL_SECF RTC_CRL_SECF_Msk                /*!< Second Flag */
#define RTC_CRL_ALRF_Pos (1U)
#define RTC_CRL_ALRF_Msk (0x1UL << RTC_CRL_ALRF_Pos) /*!< 0x00000002 */
#define RTC_CRL_ALRF RTC_CRL_ALRF_Msk                /*!< Alarm Flag */
#define RTC_CRL_OWF_Pos (2U)
#define RTC_CRL_OWF_Msk (0x1UL << RTC_CRL_OWF_Pos) /*!< 0x00000004 */
#define RTC_CRL_OWF RTC_CRL_OWF_Msk                /*!< OverfloW Flag */
#define RTC_CRL_RSF_Pos (3U)
#define RTC_CRL_RSF_Msk (0x1UL << RTC_CRL_RSF_Pos) /*!< 0x00000008 */
#define RTC_CRL_RSF RTC_CRL_RSF_Msk                /*!< Registers Synchronized Flag */
#define RTC_CRL_CNF_Pos (4U)
#define RTC_CRL_CNF_Msk (0x1UL << RTC_CRL_CNF_Pos) /*!< 0x00000010 */
#define RTC_CRL_CNF RTC_CRL_CNF_Msk                /*!< Configuration Flag */
#define RTC_CRL_RTOFF_Pos (5U)
#define RTC_CRL_RTOFF_Msk (0x1UL << RTC_CRL_RTOFF_Pos) /*!< 0x00000020 */
#define RTC_CRL_RTOFF RTC_CRL_RTOFF_Msk                /*!< RTC operation OFF */

/*******************  Bit definition for RTC_PRLH register  *******************/
#define RTC_PRLH_PRL_Pos (0U)
#define RTC_PRLH_PRL_Msk (0xFUL << RTC_PRLH_PRL_Pos) /*!< 0x0000000F */
#define RTC_PRLH_PRL RTC_PRLH_PRL_Msk                /*!< RTC Prescaler Reload Value High */

/*******************  Bit definition for RTC_PRLL register  *******************/
#define RTC_PRLL_PRL_Pos (0U)
#define RTC_PRLL_PRL_Msk (0xFFFFUL << RTC_PRLL_PRL_Pos) /*!< 0x0000FFFF */
#define RTC_PRLL_PRL RTC_PRLL_PRL_Msk                   /*!< RTC Prescaler Reload Value Low */

/*******************  Bit definition for RTC_DIVH register  *******************/
#define RTC_DIVH_RTC_DIV_Pos (0U)
#define RTC_DIVH_RTC_DIV_Msk (0xFUL << RTC_DIVH_RTC_DIV_Pos) /*!< 0x0000000F */
#define RTC_DIVH_RTC_DIV RTC_DIVH_RTC_DIV_Msk                /*!< RTC Clock Divider High */

/*******************  Bit definition for RTC_DIVL register  *******************/
#define RTC_DIVL_RTC_DIV_Pos (0U)
#define RTC_DIVL_RTC_DIV_Msk (0xFFFFUL << RTC_DIVL_RTC_DIV_Pos) /*!< 0x0000FFFF */
#define RTC_DIVL_RTC_DIV RTC_DIVL_RTC_DIV_Msk                   /*!< RTC Clock Divider Low */

/*******************  Bit definition for RTC_CNTH register  *******************/
#define RTC_CNTH_RTC_CNT_Pos (0U)
#define RTC_CNTH_RTC_CNT_Msk (0xFFFFUL << RTC_CNTH_RTC_CNT_Pos) /*!< 0x0000FFFF */
#define RTC_CNTH_RTC_CNT RTC_CNTH_RTC_CNT_Msk                   /*!< RTC Counter High */

/*******************  Bit definition for RTC_CNTL register  *******************/
#define RTC_CNTL_RTC_CNT_Pos (0U)
#define RTC_CNTL_RTC_CNT_Msk (0xFFFFUL << RTC_CNTL_RTC_CNT_Pos) /*!< 0x0000FFFF */
#define RTC_CNTL_RTC_CNT RTC_CNTL_RTC_CNT_Msk                   /*!< RTC Counter Low */

/*******************  Bit definition for RTC_ALRH register  *******************/
#define RTC_ALRH_RTC_ALR_Pos (0U)
#define RTC_ALRH_RTC_ALR_Msk (0xFFFFUL << RTC_ALRH_RTC_ALR_Pos) /*!< 0x0000FFFF */
#define RTC_ALRH_RTC_ALR RTC_ALRH_RTC_ALR_Msk                   /*!< RTC Alarm High */

/*******************  Bit definition for RTC_ALRL register  *******************/
#define RTC_ALRL_RTC_ALR_Pos (0U)
#define RTC_ALRL_RTC_ALR_Msk (0xFFFFUL << RTC_ALRL_RTC_ALR_Pos) /*!< 0x0000FFFF */
#define RTC_ALRL_RTC_ALR RTC_ALRL_RTC_ALR_Msk                   /*!< RTC Alarm Low */

/******************************************************************************/
/*                                                                            */
/*                        Independent WATCHDOG (IWDG)                         */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for IWDG_KR register  ********************/
#define IWDG_KR_KEY_Pos (0U)
#define IWDG_KR_KEY_Msk (0xFFFFUL << IWDG_KR_KEY_Pos) /*!< 0x0000FFFF */
#define IWDG_KR_KEY IWDG_KR_KEY_Msk                   /*!< Key value (write only, read 0000h) */

/*******************  Bit definition for IWDG_PR register  ********************/
#define IWDG_PR_PR_Pos (0U)
#define IWDG_PR_PR_Msk (0x7UL << IWDG_PR_PR_Pos) /*!< 0x00000007 */
#define IWDG_PR_PR IWDG_PR_PR_Msk                /*!< PR[2:0] (Prescaler divider) */
#define IWDG_PR_PR_0 (0x1UL << IWDG_PR_PR_Pos)   /*!< 0x00000001 */
#define IWDG_PR_PR_1 (0x2UL << IWDG_PR_PR_Pos)   /*!< 0x00000002 */
#define IWDG_PR_PR_2 (0x4UL << IWDG_PR_PR_Pos)   /*!< 0x00000004 */

/*******************  Bit definition for IWDG_RLR register  *******************/
#define IWDG_RLR_RL_Pos (0U)
#define IWDG_RLR_RL_Msk (0xFFFUL << IWDG_RLR_RL_Pos) /*!< 0x00000FFF */
#define IWDG_RLR_RL IWDG_RLR_RL_Msk                  /*!< Watchdog counter reload value */

/*******************  Bit definition for IWDG_SR register  ********************/
#define IWDG_SR_PVU_Pos (0U)
#define IWDG_SR_PVU_Msk (0x1UL << IWDG_SR_PVU_Pos) /*!< 0x00000001 */
#define IWDG_SR_PVU IWDG_SR_PVU_Msk                /*!< Watchdog prescaler value update */
#define IWDG_SR_RVU_Pos (1U)
#define IWDG_SR_RVU_Msk (0x1UL << IWDG_SR_RVU_Pos) /*!< 0x00000002 */
#define IWDG_SR_RVU IWDG_SR_RVU_Msk                /*!< Watchdog counter reload value update */

/******************************************************************************/
/*                                                                            */
/*                         Window WATCHDOG (WWDG)                             */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for WWDG_CR register  ********************/
#define WWDG_CR_T_Pos (0U)
#define WWDG_CR_T_Msk (0x7FUL << WWDG_CR_T_Pos) /*!< 0x0000007F */
#define WWDG_CR_T WWDG_CR_T_Msk                 /*!< T[6:0] bits (7-Bit counter (MSB to LSB)) */
#define WWDG_CR_T_0 (0x01UL << WWDG_CR_T_Pos)   /*!< 0x00000001 */
#define WWDG_CR_T_1 (0x02UL << WWDG_CR_T_Pos)   /*!< 0x00000002 */
#define WWDG_CR_T_2 (0x04UL << WWDG_CR_T_Pos)   /*!< 0x00000004 */
#define WWDG_CR_T_3 (0x08UL << WWDG_CR_T_Pos)   /*!< 0x00000008 */
#define WWDG_CR_T_4 (0x10UL << WWDG_CR_T_Pos)   /*!< 0x00000010 */
#define WWDG_CR_T_5 (0x20UL << WWDG_CR_T_Pos)   /*!< 0x00000020 */
#define WWDG_CR_T_6 (0x40UL << WWDG_CR_T_Pos)   /*!< 0x00000040 */

/* Legacy defines */
#define WWDG_CR_T0 WWDG_CR_T_0
#define WWDG_CR_T1 WWDG_CR_T_1
#define WWDG_CR_T2 WWDG_CR_T_2
#define WWDG_CR_T3 WWDG_CR_T_3
#define WWDG_CR_T4 WWDG_CR_T_4
#define WWDG_CR_T5 WWDG_CR_T_5
#define WWDG_CR_T6 WWDG_CR_T_6

#define WWDG_CR_WDGA_Pos (7U)
#define WWDG_CR_WDGA_Msk (0x1UL << WWDG_CR_WDGA_Pos) /*!< 0x00000080 */
#define WWDG_CR_WDGA WWDG_CR_WDGA_Msk                /*!< Activation bit */

/*******************  Bit definition for WWDG_CFR register  *******************/
#define WWDG_CFR_W_Pos (0U)
#define WWDG_CFR_W_Msk (0x7FUL << WWDG_CFR_W_Pos) /*!< 0x0000007F */
#define WWDG_CFR_W WWDG_CFR_W_Msk                 /*!< W[6:0] bits (7-bit window value) */
#define WWDG_CFR_W_0 (0x01UL << WWDG_CFR_W_Pos)   /*!< 0x00000001 */
#define WWDG_CFR_W_1 (0x02UL << WWDG_CFR_W_Pos)   /*!< 0x00000002 */
#define WWDG_CFR_W_2 (0x04UL << WWDG_CFR_W_Pos)   /*!< 0x00000004 */
#define WWDG_CFR_W_3 (0x08UL << WWDG_CFR_W_Pos)   /*!< 0x00000008 */
#define WWDG_CFR_W_4 (0x10UL << WWDG_CFR_W_Pos)   /*!< 0x00000010 */
#define WWDG_CFR_W_5 (0x20UL << WWDG_CFR_W_Pos)   /*!< 0x00000020 */
#define WWDG_CFR_W_6 (0x40UL << WWDG_CFR_W_Pos)   /*!< 0x00000040 */

/* Legacy defines */
#define WWDG_CFR_W0 WWDG_CFR_W_0
#define WWDG_CFR_W1 WWDG_CFR_W_1
#define WWDG_CFR_W2 WWDG_CFR_W_2
#define WWDG_CFR_W3 WWDG_CFR_W_3
#define WWDG_CFR_W4 WWDG_CFR_W_4
#define WWDG_CFR_W5 WWDG_CFR_W_5
#define WWDG_CFR_W6 WWDG_CFR_W_6

#define WWDG_CFR_WDGTB_Pos (7U)
#define WWDG_CFR_WDGTB_Msk (0x3UL << WWDG_CFR_WDGTB_Pos) /*!< 0x00000180 */
#define WWDG_CFR_WDGTB WWDG_CFR_WDGTB_Msk                /*!< WDGTB[1:0] bits (Timer Base) */
#define WWDG_CFR_WDGTB_0 (0x1UL << WWDG_CFR_WDGTB_Pos)   /*!< 0x00000080 */
#define WWDG_CFR_WDGTB_1 (0x2UL << WWDG_CFR_WDGTB_Pos)   /*!< 0x00000100 */

/* Legacy defines */
#define WWDG_CFR_WDGTB0 WWDG_CFR_WDGTB_0
#define WWDG_CFR_WDGTB1 WWDG_CFR_WDGTB_1

#define WWDG_CFR_EWI_Pos (9U)
#define WWDG_CFR_EWI_Msk (0x1UL << WWDG_CFR_EWI_Pos) /*!< 0x00000200 */
#define WWDG_CFR_EWI WWDG_CFR_EWI_Msk                /*!< Early Wakeup Interrupt */

/*******************  Bit definition for WWDG_SR register  ********************/
#define WWDG_SR_EWIF_Pos (0U)
#define WWDG_SR_EWIF_Msk (0x1UL << WWDG_SR_EWIF_Pos) /*!< 0x00000001 */
#define WWDG_SR_EWIF WWDG_SR_EWIF_Msk                /*!< Early Wakeup Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                         Controller Area Network                            */
/*                                                                            */
/******************************************************************************/

/*!< CAN control and status registers */
/*******************  Bit definition for CAN_MCR register  ********************/
#define CAN_MCR_INRQ_Pos (0U)
#define CAN_MCR_INRQ_Msk (0x1UL << CAN_MCR_INRQ_Pos) /*!< 0x00000001 */
#define CAN_MCR_INRQ CAN_MCR_INRQ_Msk                /*!< Initialization Request */
#define CAN_MCR_SLEEP_Pos (1U)
#define CAN_MCR_SLEEP_Msk (0x1UL << CAN_MCR_SLEEP_Pos) /*!< 0x00000002 */
#define CAN_MCR_SLEEP CAN_MCR_SLEEP_Msk                /*!< Sleep Mode Request */
#define CAN_MCR_TXFP_Pos (2U)
#define CAN_MCR_TXFP_Msk (0x1UL << CAN_MCR_TXFP_Pos) /*!< 0x00000004 */
#define CAN_MCR_TXFP CAN_MCR_TXFP_Msk                /*!< Transmit FIFO Priority */
#define CAN_MCR_RFLM_Pos (3U)
#define CAN_MCR_RFLM_Msk (0x1UL << CAN_MCR_RFLM_Pos) /*!< 0x00000008 */
#define CAN_MCR_RFLM CAN_MCR_RFLM_Msk                /*!< Receive FIFO Locked Mode */
#define CAN_MCR_NART_Pos (4U)
#define CAN_MCR_NART_Msk (0x1UL << CAN_MCR_NART_Pos) /*!< 0x00000010 */
#define CAN_MCR_NART CAN_MCR_NART_Msk                /*!< No Automatic Retransmission */
#define CAN_MCR_AWUM_Pos (5U)
#define CAN_MCR_AWUM_Msk (0x1UL << CAN_MCR_AWUM_Pos) /*!< 0x00000020 */
#define CAN_MCR_AWUM CAN_MCR_AWUM_Msk                /*!< Automatic Wakeup Mode */
#define CAN_MCR_ABOM_Pos (6U)
#define CAN_MCR_ABOM_Msk (0x1UL << CAN_MCR_ABOM_Pos) /*!< 0x00000040 */
#define CAN_MCR_ABOM CAN_MCR_ABOM_Msk                /*!< Automatic Bus-Off Management */
#define CAN_MCR_TTCM_Pos (7U)
#define CAN_MCR_TTCM_Msk (0x1UL << CAN_MCR_TTCM_Pos) /*!< 0x00000080 */
#define CAN_MCR_TTCM CAN_MCR_TTCM_Msk                /*!< Time Triggered Communication Mode */
#define CAN_MCR_RESET_Pos (15U)
#define CAN_MCR_RESET_Msk (0x1UL << CAN_MCR_RESET_Pos) /*!< 0x00008000 */
#define CAN_MCR_RESET CAN_MCR_RESET_Msk                /*!< CAN software master reset */
#define CAN_MCR_DBF_Pos (16U)
#define CAN_MCR_DBF_Msk (0x1UL << CAN_MCR_DBF_Pos) /*!< 0x00010000 */
#define CAN_MCR_DBF CAN_MCR_DBF_Msk                /*!< CAN Debug freeze */

/*******************  Bit definition for CAN_MSR register  ********************/
#define CAN_MSR_INAK_Pos (0U)
#define CAN_MSR_INAK_Msk (0x1UL << CAN_MSR_INAK_Pos) /*!< 0x00000001 */
#define CAN_MSR_INAK CAN_MSR_INAK_Msk                /*!< Initialization Acknowledge */
#define CAN_MSR_SLAK_Pos (1U)
#define CAN_MSR_SLAK_Msk (0x1UL << CAN_MSR_SLAK_Pos) /*!< 0x00000002 */
#define CAN_MSR_SLAK CAN_MSR_SLAK_Msk                /*!< Sleep Acknowledge */
#define CAN_MSR_ERRI_Pos (2U)
#define CAN_MSR_ERRI_Msk (0x1UL << CAN_MSR_ERRI_Pos) /*!< 0x00000004 */
#define CAN_MSR_ERRI CAN_MSR_ERRI_Msk                /*!< Error Interrupt */
#define CAN_MSR_WKUI_Pos (3U)
#define CAN_MSR_WKUI_Msk (0x1UL << CAN_MSR_WKUI_Pos) /*!< 0x00000008 */
#define CAN_MSR_WKUI CAN_MSR_WKUI_Msk                /*!< Wakeup Interrupt */
#define CAN_MSR_SLAKI_Pos (4U)
#define CAN_MSR_SLAKI_Msk (0x1UL << CAN_MSR_SLAKI_Pos) /*!< 0x00000010 */
#define CAN_MSR_SLAKI CAN_MSR_SLAKI_Msk                /*!< Sleep Acknowledge Interrupt */
#define CAN_MSR_TXM_Pos (8U)
#define CAN_MSR_TXM_Msk (0x1UL << CAN_MSR_TXM_Pos) /*!< 0x00000100 */
#define CAN_MSR_TXM CAN_MSR_TXM_Msk                /*!< Transmit Mode */
#define CAN_MSR_RXM_Pos (9U)
#define CAN_MSR_RXM_Msk (0x1UL << CAN_MSR_RXM_Pos) /*!< 0x00000200 */
#define CAN_MSR_RXM CAN_MSR_RXM_Msk                /*!< Receive Mode */
#define CAN_MSR_SAMP_Pos (10U)
#define CAN_MSR_SAMP_Msk (0x1UL << CAN_MSR_SAMP_Pos) /*!< 0x00000400 */
#define CAN_MSR_SAMP CAN_MSR_SAMP_Msk                /*!< Last Sample Point */
#define CAN_MSR_RX_Pos (11U)
#define CAN_MSR_RX_Msk (0x1UL << CAN_MSR_RX_Pos) /*!< 0x00000800 */
#define CAN_MSR_RX CAN_MSR_RX_Msk                /*!< CAN Rx Signal */

/*******************  Bit definition for CAN_TSR register  ********************/
#define CAN_TSR_RQCP0_Pos (0U)
#define CAN_TSR_RQCP0_Msk (0x1UL << CAN_TSR_RQCP0_Pos) /*!< 0x00000001 */
#define CAN_TSR_RQCP0 CAN_TSR_RQCP0_Msk                /*!< Request Completed Mailbox0 */
#define CAN_TSR_TXOK0_Pos (1U)
#define CAN_TSR_TXOK0_Msk (0x1UL << CAN_TSR_TXOK0_Pos) /*!< 0x00000002 */
#define CAN_TSR_TXOK0 CAN_TSR_TXOK0_Msk                /*!< Transmission OK of Mailbox0 */
#define CAN_TSR_ALST0_Pos (2U)
#define CAN_TSR_ALST0_Msk (0x1UL << CAN_TSR_ALST0_Pos) /*!< 0x00000004 */
#define CAN_TSR_ALST0 CAN_TSR_ALST0_Msk                /*!< Arbitration Lost for Mailbox0 */
#define CAN_TSR_TERR0_Pos (3U)
#define CAN_TSR_TERR0_Msk (0x1UL << CAN_TSR_TERR0_Pos) /*!< 0x00000008 */
#define CAN_TSR_TERR0 CAN_TSR_TERR0_Msk                /*!< Transmission Error of Mailbox0 */
#define CAN_TSR_ABRQ0_Pos (7U)
#define CAN_TSR_ABRQ0_Msk (0x1UL << CAN_TSR_ABRQ0_Pos) /*!< 0x00000080 */
#define CAN_TSR_ABRQ0 CAN_TSR_ABRQ0_Msk                /*!< Abort Request for Mailbox0 */
#define CAN_TSR_RQCP1_Pos (8U)
#define CAN_TSR_RQCP1_Msk (0x1UL << CAN_TSR_RQCP1_Pos) /*!< 0x00000100 */
#define CAN_TSR_RQCP1 CAN_TSR_RQCP1_Msk                /*!< Request Completed Mailbox1 */
#define CAN_TSR_TXOK1_Pos (9U)
#define CAN_TSR_TXOK1_Msk (0x1UL << CAN_TSR_TXOK1_Pos) /*!< 0x00000200 */
#define CAN_TSR_TXOK1 CAN_TSR_TXOK1_Msk                /*!< Transmission OK of Mailbox1 */
#define CAN_TSR_ALST1_Pos (10U)
#define CAN_TSR_ALST1_Msk (0x1UL << CAN_TSR_ALST1_Pos) /*!< 0x00000400 */
#define CAN_TSR_ALST1 CAN_TSR_ALST1_Msk                /*!< Arbitration Lost for Mailbox1 */
#define CAN_TSR_TERR1_Pos (11U)
#define CAN_TSR_TERR1_Msk (0x1UL << CAN_TSR_TERR1_Pos) /*!< 0x00000800 */
#define CAN_TSR_TERR1 CAN_TSR_TERR1_Msk                /*!< Transmission Error of Mailbox1 */
#define CAN_TSR_ABRQ1_Pos (15U)
#define CAN_TSR_ABRQ1_Msk (0x1UL << CAN_TSR_ABRQ1_Pos) /*!< 0x00008000 */
#define CAN_TSR_ABRQ1 CAN_TSR_ABRQ1_Msk                /*!< Abort Request for Mailbox 1 */
#define CAN_TSR_RQCP2_Pos (16U)
#define CAN_TSR_RQCP2_Msk (0x1UL << CAN_TSR_RQCP2_Pos) /*!< 0x00010000 */
#define CAN_TSR_RQCP2 CAN_TSR_RQCP2_Msk                /*!< Request Completed Mailbox2 */
#define CAN_TSR_TXOK2_Pos (17U)
#define CAN_TSR_TXOK2_Msk (0x1UL << CAN_TSR_TXOK2_Pos) /*!< 0x00020000 */
#define CAN_TSR_TXOK2 CAN_TSR_TXOK2_Msk                /*!< Transmission OK of Mailbox 2 */
#define CAN_TSR_ALST2_Pos (18U)
#define CAN_TSR_ALST2_Msk (0x1UL << CAN_TSR_ALST2_Pos) /*!< 0x00040000 */
#define CAN_TSR_ALST2 CAN_TSR_ALST2_Msk                /*!< Arbitration Lost for mailbox 2 */
#define CAN_TSR_TERR2_Pos (19U)
#define CAN_TSR_TERR2_Msk (0x1UL << CAN_TSR_TERR2_Pos) /*!< 0x00080000 */
#define CAN_TSR_TERR2 CAN_TSR_TERR2_Msk                /*!< Transmission Error of Mailbox 2 */
#define CAN_TSR_ABRQ2_Pos (23U)
#define CAN_TSR_ABRQ2_Msk (0x1UL << CAN_TSR_ABRQ2_Pos) /*!< 0x00800000 */
#define CAN_TSR_ABRQ2 CAN_TSR_ABRQ2_Msk                /*!< Abort Request for Mailbox 2 */
#define CAN_TSR_CODE_Pos (24U)
#define CAN_TSR_CODE_Msk (0x3UL << CAN_TSR_CODE_Pos) /*!< 0x03000000 */
#define CAN_TSR_CODE CAN_TSR_CODE_Msk                /*!< Mailbox Code */

#define CAN_TSR_TME_Pos (26U)
#define CAN_TSR_TME_Msk (0x7UL << CAN_TSR_TME_Pos) /*!< 0x1C000000 */
#define CAN_TSR_TME CAN_TSR_TME_Msk                /*!< TME[2:0] bits */
#define CAN_TSR_TME0_Pos (26U)
#define CAN_TSR_TME0_Msk (0x1UL << CAN_TSR_TME0_Pos) /*!< 0x04000000 */
#define CAN_TSR_TME0 CAN_TSR_TME0_Msk                /*!< Transmit Mailbox 0 Empty */
#define CAN_TSR_TME1_Pos (27U)
#define CAN_TSR_TME1_Msk (0x1UL << CAN_TSR_TME1_Pos) /*!< 0x08000000 */
#define CAN_TSR_TME1 CAN_TSR_TME1_Msk                /*!< Transmit Mailbox 1 Empty */
#define CAN_TSR_TME2_Pos (28U)
#define CAN_TSR_TME2_Msk (0x1UL << CAN_TSR_TME2_Pos) /*!< 0x10000000 */
#define CAN_TSR_TME2 CAN_TSR_TME2_Msk                /*!< Transmit Mailbox 2 Empty */

#define CAN_TSR_LOW_Pos (29U)
#define CAN_TSR_LOW_Msk (0x7UL << CAN_TSR_LOW_Pos) /*!< 0xE0000000 */
#define CAN_TSR_LOW CAN_TSR_LOW_Msk                /*!< LOW[2:0] bits */
#define CAN_TSR_LOW0_Pos (29U)
#define CAN_TSR_LOW0_Msk (0x1UL << CAN_TSR_LOW0_Pos) /*!< 0x20000000 */
#define CAN_TSR_LOW0 CAN_TSR_LOW0_Msk                /*!< Lowest Priority Flag for Mailbox 0 */
#define CAN_TSR_LOW1_Pos (30U)
#define CAN_TSR_LOW1_Msk (0x1UL << CAN_TSR_LOW1_Pos) /*!< 0x40000000 */
#define CAN_TSR_LOW1 CAN_TSR_LOW1_Msk                /*!< Lowest Priority Flag for Mailbox 1 */
#define CAN_TSR_LOW2_Pos (31U)
#define CAN_TSR_LOW2_Msk (0x1UL << CAN_TSR_LOW2_Pos) /*!< 0x80000000 */
#define CAN_TSR_LOW2 CAN_TSR_LOW2_Msk                /*!< Lowest Priority Flag for Mailbox 2 */

/*******************  Bit definition for CAN_RF0R register  *******************/
#define CAN_RF0R_FMP0_Pos (0U)
#define CAN_RF0R_FMP0_Msk (0x3UL << CAN_RF0R_FMP0_Pos) /*!< 0x00000003 */
#define CAN_RF0R_FMP0 CAN_RF0R_FMP0_Msk                /*!< FIFO 0 Message Pending */
#define CAN_RF0R_FULL0_Pos (3U)
#define CAN_RF0R_FULL0_Msk (0x1UL << CAN_RF0R_FULL0_Pos) /*!< 0x00000008 */
#define CAN_RF0R_FULL0 CAN_RF0R_FULL0_Msk                /*!< FIFO 0 Full */
#define CAN_RF0R_FOVR0_Pos (4U)
#define CAN_RF0R_FOVR0_Msk (0x1UL << CAN_RF0R_FOVR0_Pos) /*!< 0x00000010 */
#define CAN_RF0R_FOVR0 CAN_RF0R_FOVR0_Msk                /*!< FIFO 0 Overrun */
#define CAN_RF0R_RFOM0_Pos (5U)
#define CAN_RF0R_RFOM0_Msk (0x1UL << CAN_RF0R_RFOM0_Pos) /*!< 0x00000020 */
#define CAN_RF0R_RFOM0 CAN_RF0R_RFOM0_Msk                /*!< Release FIFO 0 Output Mailbox */

/*******************  Bit definition for CAN_RF1R register  *******************/
#define CAN_RF1R_FMP1_Pos (0U)
#define CAN_RF1R_FMP1_Msk (0x3UL << CAN_RF1R_FMP1_Pos) /*!< 0x00000003 */
#define CAN_RF1R_FMP1 CAN_RF1R_FMP1_Msk                /*!< FIFO 1 Message Pending */
#define CAN_RF1R_FULL1_Pos (3U)
#define CAN_RF1R_FULL1_Msk (0x1UL << CAN_RF1R_FULL1_Pos) /*!< 0x00000008 */
#define CAN_RF1R_FULL1 CAN_RF1R_FULL1_Msk                /*!< FIFO 1 Full */
#define CAN_RF1R_FOVR1_Pos (4U)
#define CAN_RF1R_FOVR1_Msk (0x1UL << CAN_RF1R_FOVR1_Pos) /*!< 0x00000010 */
#define CAN_RF1R_FOVR1 CAN_RF1R_FOVR1_Msk                /*!< FIFO 1 Overrun */
#define CAN_RF1R_RFOM1_Pos (5U)
#define CAN_RF1R_RFOM1_Msk (0x1UL << CAN_RF1R_RFOM1_Pos) /*!< 0x00000020 */
#define CAN_RF1R_RFOM1 CAN_RF1R_RFOM1_Msk                /*!< Release FIFO 1 Output Mailbox */

/********************  Bit definition for CAN_IER register  *******************/
#define CAN_IER_TMEIE_Pos (0U)
#define CAN_IER_TMEIE_Msk (0x1UL << CAN_IER_TMEIE_Pos) /*!< 0x00000001 */
#define CAN_IER_TMEIE CAN_IER_TMEIE_Msk                /*!< Transmit Mailbox Empty Interrupt Enable */
#define CAN_IER_FMPIE0_Pos (1U)
#define CAN_IER_FMPIE0_Msk (0x1UL << CAN_IER_FMPIE0_Pos) /*!< 0x00000002 */
#define CAN_IER_FMPIE0 CAN_IER_FMPIE0_Msk                /*!< FIFO Message Pending Interrupt Enable */
#define CAN_IER_FFIE0_Pos (2U)
#define CAN_IER_FFIE0_Msk (0x1UL << CAN_IER_FFIE0_Pos) /*!< 0x00000004 */
#define CAN_IER_FFIE0 CAN_IER_FFIE0_Msk                /*!< FIFO Full Interrupt Enable */
#define CAN_IER_FOVIE0_Pos (3U)
#define CAN_IER_FOVIE0_Msk (0x1UL << CAN_IER_FOVIE0_Pos) /*!< 0x00000008 */
#define CAN_IER_FOVIE0 CAN_IER_FOVIE0_Msk                /*!< FIFO Overrun Interrupt Enable */
#define CAN_IER_FMPIE1_Pos (4U)
#define CAN_IER_FMPIE1_Msk (0x1UL << CAN_IER_FMPIE1_Pos) /*!< 0x00000010 */
#define CAN_IER_FMPIE1 CAN_IER_FMPIE1_Msk                /*!< FIFO Message Pending Interrupt Enable */
#define CAN_IER_FFIE1_Pos (5U)
#define CAN_IER_FFIE1_Msk (0x1UL << CAN_IER_FFIE1_Pos) /*!< 0x00000020 */
#define CAN_IER_FFIE1 CAN_IER_FFIE1_Msk                /*!< FIFO Full Interrupt Enable */
#define CAN_IER_FOVIE1_Pos (6U)
#define CAN_IER_FOVIE1_Msk (0x1UL << CAN_IER_FOVIE1_Pos) /*!< 0x00000040 */
#define CAN_IER_FOVIE1 CAN_IER_FOVIE1_Msk                /*!< FIFO Overrun Interrupt Enable */
#define CAN_IER_EWGIE_Pos (8U)
#define CAN_IER_EWGIE_Msk (0x1UL << CAN_IER_EWGIE_Pos) /*!< 0x00000100 */
#define CAN_IER_EWGIE CAN_IER_EWGIE_Msk                /*!< Error Warning Interrupt Enable */
#define CAN_IER_EPVIE_Pos (9U)
#define CAN_IER_EPVIE_Msk (0x1UL << CAN_IER_EPVIE_Pos) /*!< 0x00000200 */
#define CAN_IER_EPVIE CAN_IER_EPVIE_Msk                /*!< Error Passive Interrupt Enable */
#define CAN_IER_BOFIE_Pos (10U)
#define CAN_IER_BOFIE_Msk (0x1UL << CAN_IER_BOFIE_Pos) /*!< 0x00000400 */
#define CAN_IER_BOFIE CAN_IER_BOFIE_Msk                /*!< Bus-Off Interrupt Enable */
#define CAN_IER_LECIE_Pos (11U)
#define CAN_IER_LECIE_Msk (0x1UL << CAN_IER_LECIE_Pos) /*!< 0x00000800 */
#define CAN_IER_LECIE CAN_IER_LECIE_Msk                /*!< Last Error Code Interrupt Enable */
#define CAN_IER_ERRIE_Pos (15U)
#define CAN_IER_ERRIE_Msk (0x1UL << CAN_IER_ERRIE_Pos) /*!< 0x00008000 */
#define CAN_IER_ERRIE CAN_IER_ERRIE_Msk                /*!< Error Interrupt Enable */
#define CAN_IER_WKUIE_Pos (16U)
#define CAN_IER_WKUIE_Msk (0x1UL << CAN_IER_WKUIE_Pos) /*!< 0x00010000 */
#define CAN_IER_WKUIE CAN_IER_WKUIE_Msk                /*!< Wakeup Interrupt Enable */
#define CAN_IER_SLKIE_Pos (17U)
#define CAN_IER_SLKIE_Msk (0x1UL << CAN_IER_SLKIE_Pos) /*!< 0x00020000 */
#define CAN_IER_SLKIE CAN_IER_SLKIE_Msk                /*!< Sleep Interrupt Enable */

/********************  Bit definition for CAN_ESR register  *******************/
#define CAN_ESR_EWGF_Pos (0U)
#define CAN_ESR_EWGF_Msk (0x1UL << CAN_ESR_EWGF_Pos) /*!< 0x00000001 */
#define CAN_ESR_EWGF CAN_ESR_EWGF_Msk                /*!< Error Warning Flag */
#define CAN_ESR_EPVF_Pos (1U)
#define CAN_ESR_EPVF_Msk (0x1UL << CAN_ESR_EPVF_Pos) /*!< 0x00000002 */
#define CAN_ESR_EPVF CAN_ESR_EPVF_Msk                /*!< Error Passive Flag */
#define CAN_ESR_BOFF_Pos (2U)
#define CAN_ESR_BOFF_Msk (0x1UL << CAN_ESR_BOFF_Pos) /*!< 0x00000004 */
#define CAN_ESR_BOFF CAN_ESR_BOFF_Msk                /*!< Bus-Off Flag */

#define CAN_ESR_LEC_Pos (4U)
#define CAN_ESR_LEC_Msk (0x7UL << CAN_ESR_LEC_Pos) /*!< 0x00000070 */
#define CAN_ESR_LEC CAN_ESR_LEC_Msk                /*!< LEC[2:0] bits (Last Error Code) */
#define CAN_ESR_LEC_0 (0x1UL << CAN_ESR_LEC_Pos)   /*!< 0x00000010 */
#define CAN_ESR_LEC_1 (0x2UL << CAN_ESR_LEC_Pos)   /*!< 0x00000020 */
#define CAN_ESR_LEC_2 (0x4UL << CAN_ESR_LEC_Pos)   /*!< 0x00000040 */

#define CAN_ESR_TEC_Pos (16U)
#define CAN_ESR_TEC_Msk (0xFFUL << CAN_ESR_TEC_Pos) /*!< 0x00FF0000 */
#define CAN_ESR_TEC CAN_ESR_TEC_Msk                 /*!< Least significant byte of the 9-bit Transmit Error Counter */
#define CAN_ESR_REC_Pos (24U)
#define CAN_ESR_REC_Msk (0xFFUL << CAN_ESR_REC_Pos) /*!< 0xFF000000 */
#define CAN_ESR_REC CAN_ESR_REC_Msk                 /*!< Receive Error Counter */

/*******************  Bit definition for CAN_BTR register  ********************/
#define CAN_BTR_BRP_Pos (0U)
#define CAN_BTR_BRP_Msk (0x3FFUL << CAN_BTR_BRP_Pos) /*!< 0x000003FF */
#define CAN_BTR_BRP CAN_BTR_BRP_Msk                  /*!<Baud Rate Prescaler */
#define CAN_BTR_TS1_Pos (16U)
#define CAN_BTR_TS1_Msk (0xFUL << CAN_BTR_TS1_Pos) /*!< 0x000F0000 */
#define CAN_BTR_TS1 CAN_BTR_TS1_Msk                /*!<Time Segment 1 */
#define CAN_BTR_TS1_0 (0x1UL << CAN_BTR_TS1_Pos)   /*!< 0x00010000 */
#define CAN_BTR_TS1_1 (0x2UL << CAN_BTR_TS1_Pos)   /*!< 0x00020000 */
#define CAN_BTR_TS1_2 (0x4UL << CAN_BTR_TS1_Pos)   /*!< 0x00040000 */
#define CAN_BTR_TS1_3 (0x8UL << CAN_BTR_TS1_Pos)   /*!< 0x00080000 */
#define CAN_BTR_TS2_Pos (20U)
#define CAN_BTR_TS2_Msk (0x7UL << CAN_BTR_TS2_Pos) /*!< 0x00700000 */
#define CAN_BTR_TS2 CAN_BTR_TS2_Msk                /*!<Time Segment 2 */
#define CAN_BTR_TS2_0 (0x1UL << CAN_BTR_TS2_Pos)   /*!< 0x00100000 */
#define CAN_BTR_TS2_1 (0x2UL << CAN_BTR_TS2_Pos)   /*!< 0x00200000 */
#define CAN_BTR_TS2_2 (0x4UL << CAN_BTR_TS2_Pos)   /*!< 0x00400000 */
#define CAN_BTR_SJW_Pos (24U)
#define CAN_BTR_SJW_Msk (0x3UL << CAN_BTR_SJW_Pos) /*!< 0x03000000 */
#define CAN_BTR_SJW CAN_BTR_SJW_Msk                /*!<Resynchronization Jump Width */
#define CAN_BTR_SJW_0 (0x1UL << CAN_BTR_SJW_Pos)   /*!< 0x01000000 */
#define CAN_BTR_SJW_1 (0x2UL << CAN_BTR_SJW_Pos)   /*!< 0x02000000 */
#define CAN_BTR_LBKM_Pos (30U)
#define CAN_BTR_LBKM_Msk (0x1UL << CAN_BTR_LBKM_Pos) /*!< 0x40000000 */
#define CAN_BTR_LBKM CAN_BTR_LBKM_Msk                /*!<Loop Back Mode (Debug) */
#define CAN_BTR_SILM_Pos (31U)
#define CAN_BTR_SILM_Msk (0x1UL << CAN_BTR_SILM_Pos) /*!< 0x80000000 */
#define CAN_BTR_SILM CAN_BTR_SILM_Msk                /*!<Silent Mode */

/*!< Mailbox registers */
/******************  Bit definition for CAN_TI0R register  ********************/
#define CAN_TI0R_TXRQ_Pos (0U)
#define CAN_TI0R_TXRQ_Msk (0x1UL << CAN_TI0R_TXRQ_Pos) /*!< 0x00000001 */
#define CAN_TI0R_TXRQ CAN_TI0R_TXRQ_Msk                /*!< Transmit Mailbox Request */
#define CAN_TI0R_RTR_Pos (1U)
#define CAN_TI0R_RTR_Msk (0x1UL << CAN_TI0R_RTR_Pos) /*!< 0x00000002 */
#define CAN_TI0R_RTR CAN_TI0R_RTR_Msk                /*!< Remote Transmission Request */
#define CAN_TI0R_IDE_Pos (2U)
#define CAN_TI0R_IDE_Msk (0x1UL << CAN_TI0R_IDE_Pos) /*!< 0x00000004 */
#define CAN_TI0R_IDE CAN_TI0R_IDE_Msk                /*!< Identifier Extension */
#define CAN_TI0R_EXID_Pos (3U)
#define CAN_TI0R_EXID_Msk (0x3FFFFUL << CAN_TI0R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_TI0R_EXID CAN_TI0R_EXID_Msk                    /*!< Extended Identifier */
#define CAN_TI0R_STID_Pos (21U)
#define CAN_TI0R_STID_Msk (0x7FFUL << CAN_TI0R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_TI0R_STID CAN_TI0R_STID_Msk                  /*!< Standard Identifier or Extended Identifier */

/******************  Bit definition for CAN_TDT0R register  *******************/
#define CAN_TDT0R_DLC_Pos (0U)
#define CAN_TDT0R_DLC_Msk (0xFUL << CAN_TDT0R_DLC_Pos) /*!< 0x0000000F */
#define CAN_TDT0R_DLC CAN_TDT0R_DLC_Msk                /*!< Data Length Code */
#define CAN_TDT0R_TGT_Pos (8U)
#define CAN_TDT0R_TGT_Msk (0x1UL << CAN_TDT0R_TGT_Pos) /*!< 0x00000100 */
#define CAN_TDT0R_TGT CAN_TDT0R_TGT_Msk                /*!< Transmit Global Time */
#define CAN_TDT0R_TIME_Pos (16U)
#define CAN_TDT0R_TIME_Msk (0xFFFFUL << CAN_TDT0R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_TDT0R_TIME CAN_TDT0R_TIME_Msk                   /*!< Message Time Stamp */

/******************  Bit definition for CAN_TDL0R register  *******************/
#define CAN_TDL0R_DATA0_Pos (0U)
#define CAN_TDL0R_DATA0_Msk (0xFFUL << CAN_TDL0R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_TDL0R_DATA0 CAN_TDL0R_DATA0_Msk                 /*!< Data byte 0 */
#define CAN_TDL0R_DATA1_Pos (8U)
#define CAN_TDL0R_DATA1_Msk (0xFFUL << CAN_TDL0R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_TDL0R_DATA1 CAN_TDL0R_DATA1_Msk                 /*!< Data byte 1 */
#define CAN_TDL0R_DATA2_Pos (16U)
#define CAN_TDL0R_DATA2_Msk (0xFFUL << CAN_TDL0R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_TDL0R_DATA2 CAN_TDL0R_DATA2_Msk                 /*!< Data byte 2 */
#define CAN_TDL0R_DATA3_Pos (24U)
#define CAN_TDL0R_DATA3_Msk (0xFFUL << CAN_TDL0R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_TDL0R_DATA3 CAN_TDL0R_DATA3_Msk                 /*!< Data byte 3 */

/******************  Bit definition for CAN_TDH0R register  *******************/
#define CAN_TDH0R_DATA4_Pos (0U)
#define CAN_TDH0R_DATA4_Msk (0xFFUL << CAN_TDH0R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_TDH0R_DATA4 CAN_TDH0R_DATA4_Msk                 /*!< Data byte 4 */
#define CAN_TDH0R_DATA5_Pos (8U)
#define CAN_TDH0R_DATA5_Msk (0xFFUL << CAN_TDH0R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_TDH0R_DATA5 CAN_TDH0R_DATA5_Msk                 /*!< Data byte 5 */
#define CAN_TDH0R_DATA6_Pos (16U)
#define CAN_TDH0R_DATA6_Msk (0xFFUL << CAN_TDH0R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_TDH0R_DATA6 CAN_TDH0R_DATA6_Msk                 /*!< Data byte 6 */
#define CAN_TDH0R_DATA7_Pos (24U)
#define CAN_TDH0R_DATA7_Msk (0xFFUL << CAN_TDH0R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_TDH0R_DATA7 CAN_TDH0R_DATA7_Msk                 /*!< Data byte 7 */

/*******************  Bit definition for CAN_TI1R register  *******************/
#define CAN_TI1R_TXRQ_Pos (0U)
#define CAN_TI1R_TXRQ_Msk (0x1UL << CAN_TI1R_TXRQ_Pos) /*!< 0x00000001 */
#define CAN_TI1R_TXRQ CAN_TI1R_TXRQ_Msk                /*!< Transmit Mailbox Request */
#define CAN_TI1R_RTR_Pos (1U)
#define CAN_TI1R_RTR_Msk (0x1UL << CAN_TI1R_RTR_Pos) /*!< 0x00000002 */
#define CAN_TI1R_RTR CAN_TI1R_RTR_Msk                /*!< Remote Transmission Request */
#define CAN_TI1R_IDE_Pos (2U)
#define CAN_TI1R_IDE_Msk (0x1UL << CAN_TI1R_IDE_Pos) /*!< 0x00000004 */
#define CAN_TI1R_IDE CAN_TI1R_IDE_Msk                /*!< Identifier Extension */
#define CAN_TI1R_EXID_Pos (3U)
#define CAN_TI1R_EXID_Msk (0x3FFFFUL << CAN_TI1R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_TI1R_EXID CAN_TI1R_EXID_Msk                    /*!< Extended Identifier */
#define CAN_TI1R_STID_Pos (21U)
#define CAN_TI1R_STID_Msk (0x7FFUL << CAN_TI1R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_TI1R_STID CAN_TI1R_STID_Msk                  /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_TDT1R register  ******************/
#define CAN_TDT1R_DLC_Pos (0U)
#define CAN_TDT1R_DLC_Msk (0xFUL << CAN_TDT1R_DLC_Pos) /*!< 0x0000000F */
#define CAN_TDT1R_DLC CAN_TDT1R_DLC_Msk                /*!< Data Length Code */
#define CAN_TDT1R_TGT_Pos (8U)
#define CAN_TDT1R_TGT_Msk (0x1UL << CAN_TDT1R_TGT_Pos) /*!< 0x00000100 */
#define CAN_TDT1R_TGT CAN_TDT1R_TGT_Msk                /*!< Transmit Global Time */
#define CAN_TDT1R_TIME_Pos (16U)
#define CAN_TDT1R_TIME_Msk (0xFFFFUL << CAN_TDT1R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_TDT1R_TIME CAN_TDT1R_TIME_Msk                   /*!< Message Time Stamp */

/*******************  Bit definition for CAN_TDL1R register  ******************/
#define CAN_TDL1R_DATA0_Pos (0U)
#define CAN_TDL1R_DATA0_Msk (0xFFUL << CAN_TDL1R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_TDL1R_DATA0 CAN_TDL1R_DATA0_Msk                 /*!< Data byte 0 */
#define CAN_TDL1R_DATA1_Pos (8U)
#define CAN_TDL1R_DATA1_Msk (0xFFUL << CAN_TDL1R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_TDL1R_DATA1 CAN_TDL1R_DATA1_Msk                 /*!< Data byte 1 */
#define CAN_TDL1R_DATA2_Pos (16U)
#define CAN_TDL1R_DATA2_Msk (0xFFUL << CAN_TDL1R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_TDL1R_DATA2 CAN_TDL1R_DATA2_Msk                 /*!< Data byte 2 */
#define CAN_TDL1R_DATA3_Pos (24U)
#define CAN_TDL1R_DATA3_Msk (0xFFUL << CAN_TDL1R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_TDL1R_DATA3 CAN_TDL1R_DATA3_Msk                 /*!< Data byte 3 */

/*******************  Bit definition for CAN_TDH1R register  ******************/
#define CAN_TDH1R_DATA4_Pos (0U)
#define CAN_TDH1R_DATA4_Msk (0xFFUL << CAN_TDH1R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_TDH1R_DATA4 CAN_TDH1R_DATA4_Msk                 /*!< Data byte 4 */
#define CAN_TDH1R_DATA5_Pos (8U)
#define CAN_TDH1R_DATA5_Msk (0xFFUL << CAN_TDH1R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_TDH1R_DATA5 CAN_TDH1R_DATA5_Msk                 /*!< Data byte 5 */
#define CAN_TDH1R_DATA6_Pos (16U)
#define CAN_TDH1R_DATA6_Msk (0xFFUL << CAN_TDH1R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_TDH1R_DATA6 CAN_TDH1R_DATA6_Msk                 /*!< Data byte 6 */
#define CAN_TDH1R_DATA7_Pos (24U)
#define CAN_TDH1R_DATA7_Msk (0xFFUL << CAN_TDH1R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_TDH1R_DATA7 CAN_TDH1R_DATA7_Msk                 /*!< Data byte 7 */

/*******************  Bit definition for CAN_TI2R register  *******************/
#define CAN_TI2R_TXRQ_Pos (0U)
#define CAN_TI2R_TXRQ_Msk (0x1UL << CAN_TI2R_TXRQ_Pos) /*!< 0x00000001 */
#define CAN_TI2R_TXRQ CAN_TI2R_TXRQ_Msk                /*!< Transmit Mailbox Request */
#define CAN_TI2R_RTR_Pos (1U)
#define CAN_TI2R_RTR_Msk (0x1UL << CAN_TI2R_RTR_Pos) /*!< 0x00000002 */
#define CAN_TI2R_RTR CAN_TI2R_RTR_Msk                /*!< Remote Transmission Request */
#define CAN_TI2R_IDE_Pos (2U)
#define CAN_TI2R_IDE_Msk (0x1UL << CAN_TI2R_IDE_Pos) /*!< 0x00000004 */
#define CAN_TI2R_IDE CAN_TI2R_IDE_Msk                /*!< Identifier Extension */
#define CAN_TI2R_EXID_Pos (3U)
#define CAN_TI2R_EXID_Msk (0x3FFFFUL << CAN_TI2R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_TI2R_EXID CAN_TI2R_EXID_Msk                    /*!< Extended identifier */
#define CAN_TI2R_STID_Pos (21U)
#define CAN_TI2R_STID_Msk (0x7FFUL << CAN_TI2R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_TI2R_STID CAN_TI2R_STID_Msk                  /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_TDT2R register  ******************/
#define CAN_TDT2R_DLC_Pos (0U)
#define CAN_TDT2R_DLC_Msk (0xFUL << CAN_TDT2R_DLC_Pos) /*!< 0x0000000F */
#define CAN_TDT2R_DLC CAN_TDT2R_DLC_Msk                /*!< Data Length Code */
#define CAN_TDT2R_TGT_Pos (8U)
#define CAN_TDT2R_TGT_Msk (0x1UL << CAN_TDT2R_TGT_Pos) /*!< 0x00000100 */
#define CAN_TDT2R_TGT CAN_TDT2R_TGT_Msk                /*!< Transmit Global Time */
#define CAN_TDT2R_TIME_Pos (16U)
#define CAN_TDT2R_TIME_Msk (0xFFFFUL << CAN_TDT2R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_TDT2R_TIME CAN_TDT2R_TIME_Msk                   /*!< Message Time Stamp */

/*******************  Bit definition for CAN_TDL2R register  ******************/
#define CAN_TDL2R_DATA0_Pos (0U)
#define CAN_TDL2R_DATA0_Msk (0xFFUL << CAN_TDL2R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_TDL2R_DATA0 CAN_TDL2R_DATA0_Msk                 /*!< Data byte 0 */
#define CAN_TDL2R_DATA1_Pos (8U)
#define CAN_TDL2R_DATA1_Msk (0xFFUL << CAN_TDL2R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_TDL2R_DATA1 CAN_TDL2R_DATA1_Msk                 /*!< Data byte 1 */
#define CAN_TDL2R_DATA2_Pos (16U)
#define CAN_TDL2R_DATA2_Msk (0xFFUL << CAN_TDL2R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_TDL2R_DATA2 CAN_TDL2R_DATA2_Msk                 /*!< Data byte 2 */
#define CAN_TDL2R_DATA3_Pos (24U)
#define CAN_TDL2R_DATA3_Msk (0xFFUL << CAN_TDL2R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_TDL2R_DATA3 CAN_TDL2R_DATA3_Msk                 /*!< Data byte 3 */

/*******************  Bit definition for CAN_TDH2R register  ******************/
#define CAN_TDH2R_DATA4_Pos (0U)
#define CAN_TDH2R_DATA4_Msk (0xFFUL << CAN_TDH2R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_TDH2R_DATA4 CAN_TDH2R_DATA4_Msk                 /*!< Data byte 4 */
#define CAN_TDH2R_DATA5_Pos (8U)
#define CAN_TDH2R_DATA5_Msk (0xFFUL << CAN_TDH2R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_TDH2R_DATA5 CAN_TDH2R_DATA5_Msk                 /*!< Data byte 5 */
#define CAN_TDH2R_DATA6_Pos (16U)
#define CAN_TDH2R_DATA6_Msk (0xFFUL << CAN_TDH2R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_TDH2R_DATA6 CAN_TDH2R_DATA6_Msk                 /*!< Data byte 6 */
#define CAN_TDH2R_DATA7_Pos (24U)
#define CAN_TDH2R_DATA7_Msk (0xFFUL << CAN_TDH2R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_TDH2R_DATA7 CAN_TDH2R_DATA7_Msk                 /*!< Data byte 7 */

/*******************  Bit definition for CAN_RI0R register  *******************/
#define CAN_RI0R_RTR_Pos (1U)
#define CAN_RI0R_RTR_Msk (0x1UL << CAN_RI0R_RTR_Pos) /*!< 0x00000002 */
#define CAN_RI0R_RTR CAN_RI0R_RTR_Msk                /*!< Remote Transmission Request */
#define CAN_RI0R_IDE_Pos (2U)
#define CAN_RI0R_IDE_Msk (0x1UL << CAN_RI0R_IDE_Pos) /*!< 0x00000004 */
#define CAN_RI0R_IDE CAN_RI0R_IDE_Msk                /*!< Identifier Extension */
#define CAN_RI0R_EXID_Pos (3U)
#define CAN_RI0R_EXID_Msk (0x3FFFFUL << CAN_RI0R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_RI0R_EXID CAN_RI0R_EXID_Msk                    /*!< Extended Identifier */
#define CAN_RI0R_STID_Pos (21U)
#define CAN_RI0R_STID_Msk (0x7FFUL << CAN_RI0R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_RI0R_STID CAN_RI0R_STID_Msk                  /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_RDT0R register  ******************/
#define CAN_RDT0R_DLC_Pos (0U)
#define CAN_RDT0R_DLC_Msk (0xFUL << CAN_RDT0R_DLC_Pos) /*!< 0x0000000F */
#define CAN_RDT0R_DLC CAN_RDT0R_DLC_Msk                /*!< Data Length Code */
#define CAN_RDT0R_FMI_Pos (8U)
#define CAN_RDT0R_FMI_Msk (0xFFUL << CAN_RDT0R_FMI_Pos) /*!< 0x0000FF00 */
#define CAN_RDT0R_FMI CAN_RDT0R_FMI_Msk                 /*!< Filter Match Index */
#define CAN_RDT0R_TIME_Pos (16U)
#define CAN_RDT0R_TIME_Msk (0xFFFFUL << CAN_RDT0R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_RDT0R_TIME CAN_RDT0R_TIME_Msk                   /*!< Message Time Stamp */

/*******************  Bit definition for CAN_RDL0R register  ******************/
#define CAN_RDL0R_DATA0_Pos (0U)
#define CAN_RDL0R_DATA0_Msk (0xFFUL << CAN_RDL0R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_RDL0R_DATA0 CAN_RDL0R_DATA0_Msk                 /*!< Data byte 0 */
#define CAN_RDL0R_DATA1_Pos (8U)
#define CAN_RDL0R_DATA1_Msk (0xFFUL << CAN_RDL0R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_RDL0R_DATA1 CAN_RDL0R_DATA1_Msk                 /*!< Data byte 1 */
#define CAN_RDL0R_DATA2_Pos (16U)
#define CAN_RDL0R_DATA2_Msk (0xFFUL << CAN_RDL0R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_RDL0R_DATA2 CAN_RDL0R_DATA2_Msk                 /*!< Data byte 2 */
#define CAN_RDL0R_DATA3_Pos (24U)
#define CAN_RDL0R_DATA3_Msk (0xFFUL << CAN_RDL0R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_RDL0R_DATA3 CAN_RDL0R_DATA3_Msk                 /*!< Data byte 3 */

/*******************  Bit definition for CAN_RDH0R register  ******************/
#define CAN_RDH0R_DATA4_Pos (0U)
#define CAN_RDH0R_DATA4_Msk (0xFFUL << CAN_RDH0R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_RDH0R_DATA4 CAN_RDH0R_DATA4_Msk                 /*!< Data byte 4 */
#define CAN_RDH0R_DATA5_Pos (8U)
#define CAN_RDH0R_DATA5_Msk (0xFFUL << CAN_RDH0R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_RDH0R_DATA5 CAN_RDH0R_DATA5_Msk                 /*!< Data byte 5 */
#define CAN_RDH0R_DATA6_Pos (16U)
#define CAN_RDH0R_DATA6_Msk (0xFFUL << CAN_RDH0R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_RDH0R_DATA6 CAN_RDH0R_DATA6_Msk                 /*!< Data byte 6 */
#define CAN_RDH0R_DATA7_Pos (24U)
#define CAN_RDH0R_DATA7_Msk (0xFFUL << CAN_RDH0R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_RDH0R_DATA7 CAN_RDH0R_DATA7_Msk                 /*!< Data byte 7 */

/*******************  Bit definition for CAN_RI1R register  *******************/
#define CAN_RI1R_RTR_Pos (1U)
#define CAN_RI1R_RTR_Msk (0x1UL << CAN_RI1R_RTR_Pos) /*!< 0x00000002 */
#define CAN_RI1R_RTR CAN_RI1R_RTR_Msk                /*!< Remote Transmission Request */
#define CAN_RI1R_IDE_Pos (2U)
#define CAN_RI1R_IDE_Msk (0x1UL << CAN_RI1R_IDE_Pos) /*!< 0x00000004 */
#define CAN_RI1R_IDE CAN_RI1R_IDE_Msk                /*!< Identifier Extension */
#define CAN_RI1R_EXID_Pos (3U)
#define CAN_RI1R_EXID_Msk (0x3FFFFUL << CAN_RI1R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_RI1R_EXID CAN_RI1R_EXID_Msk                    /*!< Extended identifier */
#define CAN_RI1R_STID_Pos (21U)
#define CAN_RI1R_STID_Msk (0x7FFUL << CAN_RI1R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_RI1R_STID CAN_RI1R_STID_Msk                  /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_RDT1R register  ******************/
#define CAN_RDT1R_DLC_Pos (0U)
#define CAN_RDT1R_DLC_Msk (0xFUL << CAN_RDT1R_DLC_Pos) /*!< 0x0000000F */
#define CAN_RDT1R_DLC CAN_RDT1R_DLC_Msk                /*!< Data Length Code */
#define CAN_RDT1R_FMI_Pos (8U)
#define CAN_RDT1R_FMI_Msk (0xFFUL << CAN_RDT1R_FMI_Pos) /*!< 0x0000FF00 */
#define CAN_RDT1R_FMI CAN_RDT1R_FMI_Msk                 /*!< Filter Match Index */
#define CAN_RDT1R_TIME_Pos (16U)
#define CAN_RDT1R_TIME_Msk (0xFFFFUL << CAN_RDT1R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_RDT1R_TIME CAN_RDT1R_TIME_Msk                   /*!< Message Time Stamp */

/*******************  Bit definition for CAN_RDL1R register  ******************/
#define CAN_RDL1R_DATA0_Pos (0U)
#define CAN_RDL1R_DATA0_Msk (0xFFUL << CAN_RDL1R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_RDL1R_DATA0 CAN_RDL1R_DATA0_Msk                 /*!< Data byte 0 */
#define CAN_RDL1R_DATA1_Pos (8U)
#define CAN_RDL1R_DATA1_Msk (0xFFUL << CAN_RDL1R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_RDL1R_DATA1 CAN_RDL1R_DATA1_Msk                 /*!< Data byte 1 */
#define CAN_RDL1R_DATA2_Pos (16U)
#define CAN_RDL1R_DATA2_Msk (0xFFUL << CAN_RDL1R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_RDL1R_DATA2 CAN_RDL1R_DATA2_Msk                 /*!< Data byte 2 */
#define CAN_RDL1R_DATA3_Pos (24U)
#define CAN_RDL1R_DATA3_Msk (0xFFUL << CAN_RDL1R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_RDL1R_DATA3 CAN_RDL1R_DATA3_Msk                 /*!< Data byte 3 */

/*******************  Bit definition for CAN_RDH1R register  ******************/
#define CAN_RDH1R_DATA4_Pos (0U)
#define CAN_RDH1R_DATA4_Msk (0xFFUL << CAN_RDH1R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_RDH1R_DATA4 CAN_RDH1R_DATA4_Msk                 /*!< Data byte 4 */
#define CAN_RDH1R_DATA5_Pos (8U)
#define CAN_RDH1R_DATA5_Msk (0xFFUL << CAN_RDH1R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_RDH1R_DATA5 CAN_RDH1R_DATA5_Msk                 /*!< Data byte 5 */
#define CAN_RDH1R_DATA6_Pos (16U)
#define CAN_RDH1R_DATA6_Msk (0xFFUL << CAN_RDH1R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_RDH1R_DATA6 CAN_RDH1R_DATA6_Msk                 /*!< Data byte 6 */
#define CAN_RDH1R_DATA7_Pos (24U)
#define CAN_RDH1R_DATA7_Msk (0xFFUL << CAN_RDH1R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_RDH1R_DATA7 CAN_RDH1R_DATA7_Msk                 /*!< Data byte 7 */

/*!< CAN filter registers */
/*******************  Bit definition for CAN_FMR register  ********************/
#define CAN_FMR_FINIT_Pos (0U)
#define CAN_FMR_FINIT_Msk (0x1UL << CAN_FMR_FINIT_Pos) /*!< 0x00000001 */
#define CAN_FMR_FINIT CAN_FMR_FINIT_Msk                /*!< Filter Init Mode */
#define CAN_FMR_CAN2SB_Pos (8U)
#define CAN_FMR_CAN2SB_Msk (0x3FUL << CAN_FMR_CAN2SB_Pos) /*!< 0x00003F00 */
#define CAN_FMR_CAN2SB CAN_FMR_CAN2SB_Msk                 /*!< CAN2 start bank */

/*******************  Bit definition for CAN_FM1R register  *******************/
#define CAN_FM1R_FBM_Pos (0U)
#define CAN_FM1R_FBM_Msk (0x3FFFUL << CAN_FM1R_FBM_Pos) /*!< 0x00003FFF */
#define CAN_FM1R_FBM CAN_FM1R_FBM_Msk                   /*!< Filter Mode */
#define CAN_FM1R_FBM0_Pos (0U)
#define CAN_FM1R_FBM0_Msk (0x1UL << CAN_FM1R_FBM0_Pos) /*!< 0x00000001 */
#define CAN_FM1R_FBM0 CAN_FM1R_FBM0_Msk                /*!< Filter Init Mode for filter 0 */
#define CAN_FM1R_FBM1_Pos (1U)
#define CAN_FM1R_FBM1_Msk (0x1UL << CAN_FM1R_FBM1_Pos) /*!< 0x00000002 */
#define CAN_FM1R_FBM1 CAN_FM1R_FBM1_Msk                /*!< Filter Init Mode for filter 1 */
#define CAN_FM1R_FBM2_Pos (2U)
#define CAN_FM1R_FBM2_Msk (0x1UL << CAN_FM1R_FBM2_Pos) /*!< 0x00000004 */
#define CAN_FM1R_FBM2 CAN_FM1R_FBM2_Msk                /*!< Filter Init Mode for filter 2 */
#define CAN_FM1R_FBM3_Pos (3U)
#define CAN_FM1R_FBM3_Msk (0x1UL << CAN_FM1R_FBM3_Pos) /*!< 0x00000008 */
#define CAN_FM1R_FBM3 CAN_FM1R_FBM3_Msk                /*!< Filter Init Mode for filter 3 */
#define CAN_FM1R_FBM4_Pos (4U)
#define CAN_FM1R_FBM4_Msk (0x1UL << CAN_FM1R_FBM4_Pos) /*!< 0x00000010 */
#define CAN_FM1R_FBM4 CAN_FM1R_FBM4_Msk                /*!< Filter Init Mode for filter 4 */
#define CAN_FM1R_FBM5_Pos (5U)
#define CAN_FM1R_FBM5_Msk (0x1UL << CAN_FM1R_FBM5_Pos) /*!< 0x00000020 */
#define CAN_FM1R_FBM5 CAN_FM1R_FBM5_Msk                /*!< Filter Init Mode for filter 5 */
#define CAN_FM1R_FBM6_Pos (6U)
#define CAN_FM1R_FBM6_Msk (0x1UL << CAN_FM1R_FBM6_Pos) /*!< 0x00000040 */
#define CAN_FM1R_FBM6 CAN_FM1R_FBM6_Msk                /*!< Filter Init Mode for filter 6 */
#define CAN_FM1R_FBM7_Pos (7U)
#define CAN_FM1R_FBM7_Msk (0x1UL << CAN_FM1R_FBM7_Pos) /*!< 0x00000080 */
#define CAN_FM1R_FBM7 CAN_FM1R_FBM7_Msk                /*!< Filter Init Mode for filter 7 */
#define CAN_FM1R_FBM8_Pos (8U)
#define CAN_FM1R_FBM8_Msk (0x1UL << CAN_FM1R_FBM8_Pos) /*!< 0x00000100 */
#define CAN_FM1R_FBM8 CAN_FM1R_FBM8_Msk                /*!< Filter Init Mode for filter 8 */
#define CAN_FM1R_FBM9_Pos (9U)
#define CAN_FM1R_FBM9_Msk (0x1UL << CAN_FM1R_FBM9_Pos) /*!< 0x00000200 */
#define CAN_FM1R_FBM9 CAN_FM1R_FBM9_Msk                /*!< Filter Init Mode for filter 9 */
#define CAN_FM1R_FBM10_Pos (10U)
#define CAN_FM1R_FBM10_Msk (0x1UL << CAN_FM1R_FBM10_Pos) /*!< 0x00000400 */
#define CAN_FM1R_FBM10 CAN_FM1R_FBM10_Msk                /*!< Filter Init Mode for filter 10 */
#define CAN_FM1R_FBM11_Pos (11U)
#define CAN_FM1R_FBM11_Msk (0x1UL << CAN_FM1R_FBM11_Pos) /*!< 0x00000800 */
#define CAN_FM1R_FBM11 CAN_FM1R_FBM11_Msk                /*!< Filter Init Mode for filter 11 */
#define CAN_FM1R_FBM12_Pos (12U)
#define CAN_FM1R_FBM12_Msk (0x1UL << CAN_FM1R_FBM12_Pos) /*!< 0x00001000 */
#define CAN_FM1R_FBM12 CAN_FM1R_FBM12_Msk                /*!< Filter Init Mode for filter 12 */
#define CAN_FM1R_FBM13_Pos (13U)
#define CAN_FM1R_FBM13_Msk (0x1UL << CAN_FM1R_FBM13_Pos) /*!< 0x00002000 */
#define CAN_FM1R_FBM13 CAN_FM1R_FBM13_Msk                /*!< Filter Init Mode for filter 13 */
#define CAN_FM1R_FBM14_Pos (14U)
#define CAN_FM1R_FBM14_Msk (0x1UL << CAN_FM1R_FBM14_Pos) /*!< 0x00004000 */
#define CAN_FM1R_FBM14 CAN_FM1R_FBM14_Msk                /*!< Filter Init Mode for filter 14 */
#define CAN_FM1R_FBM15_Pos (15U)
#define CAN_FM1R_FBM15_Msk (0x1UL << CAN_FM1R_FBM15_Pos) /*!< 0x00008000 */
#define CAN_FM1R_FBM15 CAN_FM1R_FBM15_Msk                /*!< Filter Init Mode for filter 15 */
#define CAN_FM1R_FBM16_Pos (16U)
#define CAN_FM1R_FBM16_Msk (0x1UL << CAN_FM1R_FBM16_Pos) /*!< 0x00010000 */
#define CAN_FM1R_FBM16 CAN_FM1R_FBM16_Msk                /*!< Filter Init Mode for filter 16 */
#define CAN_FM1R_FBM17_Pos (17U)
#define CAN_FM1R_FBM17_Msk (0x1UL << CAN_FM1R_FBM17_Pos) /*!< 0x00020000 */
#define CAN_FM1R_FBM17 CAN_FM1R_FBM17_Msk                /*!< Filter Init Mode for filter 17 */
#define CAN_FM1R_FBM18_Pos (18U)
#define CAN_FM1R_FBM18_Msk (0x1UL << CAN_FM1R_FBM18_Pos) /*!< 0x00040000 */
#define CAN_FM1R_FBM18 CAN_FM1R_FBM18_Msk                /*!< Filter Init Mode for filter 18 */
#define CAN_FM1R_FBM19_Pos (19U)
#define CAN_FM1R_FBM19_Msk (0x1UL << CAN_FM1R_FBM19_Pos) /*!< 0x00080000 */
#define CAN_FM1R_FBM19 CAN_FM1R_FBM19_Msk                /*!< Filter Init Mode for filter 19 */
#define CAN_FM1R_FBM20_Pos (20U)
#define CAN_FM1R_FBM20_Msk (0x1UL << CAN_FM1R_FBM20_Pos) /*!< 0x00100000 */
#define CAN_FM1R_FBM20 CAN_FM1R_FBM20_Msk                /*!< Filter Init Mode for filter 20 */
#define CAN_FM1R_FBM21_Pos (21U)
#define CAN_FM1R_FBM21_Msk (0x1UL << CAN_FM1R_FBM21_Pos) /*!< 0x00200000 */
#define CAN_FM1R_FBM21 CAN_FM1R_FBM21_Msk                /*!< Filter Init Mode for filter 21 */
#define CAN_FM1R_FBM22_Pos (22U)
#define CAN_FM1R_FBM22_Msk (0x1UL << CAN_FM1R_FBM22_Pos) /*!< 0x00400000 */
#define CAN_FM1R_FBM22 CAN_FM1R_FBM22_Msk                /*!< Filter Init Mode for filter 22 */
#define CAN_FM1R_FBM23_Pos (23U)
#define CAN_FM1R_FBM23_Msk (0x1UL << CAN_FM1R_FBM23_Pos) /*!< 0x00800000 */
#define CAN_FM1R_FBM23 CAN_FM1R_FBM23_Msk                /*!< Filter Init Mode for filter 23 */
#define CAN_FM1R_FBM24_Pos (24U)
#define CAN_FM1R_FBM24_Msk (0x1UL << CAN_FM1R_FBM24_Pos) /*!< 0x01000000 */
#define CAN_FM1R_FBM24 CAN_FM1R_FBM24_Msk                /*!< Filter Init Mode for filter 24 */
#define CAN_FM1R_FBM25_Pos (25U)
#define CAN_FM1R_FBM25_Msk (0x1UL << CAN_FM1R_FBM25_Pos) /*!< 0x02000000 */
#define CAN_FM1R_FBM25 CAN_FM1R_FBM25_Msk                /*!< Filter Init Mode for filter 25 */
#define CAN_FM1R_FBM26_Pos (26U)
#define CAN_FM1R_FBM26_Msk (0x1UL << CAN_FM1R_FBM26_Pos) /*!< 0x04000000 */
#define CAN_FM1R_FBM26 CAN_FM1R_FBM26_Msk                /*!< Filter Init Mode for filter 26 */
#define CAN_FM1R_FBM27_Pos (27U)
#define CAN_FM1R_FBM27_Msk (0x1UL << CAN_FM1R_FBM27_Pos) /*!< 0x08000000 */
#define CAN_FM1R_FBM27 CAN_FM1R_FBM27_Msk                /*!< Filter Init Mode for filter 27 */

/*******************  Bit definition for CAN_FS1R register  *******************/
#define CAN_FS1R_FSC_Pos (0U)
#define CAN_FS1R_FSC_Msk (0x3FFFUL << CAN_FS1R_FSC_Pos) /*!< 0x00003FFF */
#define CAN_FS1R_FSC CAN_FS1R_FSC_Msk                   /*!< Filter Scale Configuration */
#define CAN_FS1R_FSC0_Pos (0U)
#define CAN_FS1R_FSC0_Msk (0x1UL << CAN_FS1R_FSC0_Pos) /*!< 0x00000001 */
#define CAN_FS1R_FSC0 CAN_FS1R_FSC0_Msk                /*!< Filter Scale Configuration for filter 0 */
#define CAN_FS1R_FSC1_Pos (1U)
#define CAN_FS1R_FSC1_Msk (0x1UL << CAN_FS1R_FSC1_Pos) /*!< 0x00000002 */
#define CAN_FS1R_FSC1 CAN_FS1R_FSC1_Msk                /*!< Filter Scale Configuration for filter 1 */
#define CAN_FS1R_FSC2_Pos (2U)
#define CAN_FS1R_FSC2_Msk (0x1UL << CAN_FS1R_FSC2_Pos) /*!< 0x00000004 */
#define CAN_FS1R_FSC2 CAN_FS1R_FSC2_Msk                /*!< Filter Scale Configuration for filter 2 */
#define CAN_FS1R_FSC3_Pos (3U)
#define CAN_FS1R_FSC3_Msk (0x1UL << CAN_FS1R_FSC3_Pos) /*!< 0x00000008 */
#define CAN_FS1R_FSC3 CAN_FS1R_FSC3_Msk                /*!< Filter Scale Configuration for filter 3 */
#define CAN_FS1R_FSC4_Pos (4U)
#define CAN_FS1R_FSC4_Msk (0x1UL << CAN_FS1R_FSC4_Pos) /*!< 0x00000010 */
#define CAN_FS1R_FSC4 CAN_FS1R_FSC4_Msk                /*!< Filter Scale Configuration for filter 4 */
#define CAN_FS1R_FSC5_Pos (5U)
#define CAN_FS1R_FSC5_Msk (0x1UL << CAN_FS1R_FSC5_Pos) /*!< 0x00000020 */
#define CAN_FS1R_FSC5 CAN_FS1R_FSC5_Msk                /*!< Filter Scale Configuration for filter 5 */
#define CAN_FS1R_FSC6_Pos (6U)
#define CAN_FS1R_FSC6_Msk (0x1UL << CAN_FS1R_FSC6_Pos) /*!< 0x00000040 */
#define CAN_FS1R_FSC6 CAN_FS1R_FSC6_Msk                /*!< Filter Scale Configuration for filter 6 */
#define CAN_FS1R_FSC7_Pos (7U)
#define CAN_FS1R_FSC7_Msk (0x1UL << CAN_FS1R_FSC7_Pos) /*!< 0x00000080 */
#define CAN_FS1R_FSC7 CAN_FS1R_FSC7_Msk                /*!< Filter Scale Configuration for filter 7 */
#define CAN_FS1R_FSC8_Pos (8U)
#define CAN_FS1R_FSC8_Msk (0x1UL << CAN_FS1R_FSC8_Pos) /*!< 0x00000100 */
#define CAN_FS1R_FSC8 CAN_FS1R_FSC8_Msk                /*!< Filter Scale Configuration for filter 8 */
#define CAN_FS1R_FSC9_Pos (9U)
#define CAN_FS1R_FSC9_Msk (0x1UL << CAN_FS1R_FSC9_Pos) /*!< 0x00000200 */
#define CAN_FS1R_FSC9 CAN_FS1R_FSC9_Msk                /*!< Filter Scale Configuration for filter 9 */
#define CAN_FS1R_FSC10_Pos (10U)
#define CAN_FS1R_FSC10_Msk (0x1UL << CAN_FS1R_FSC10_Pos) /*!< 0x00000400 */
#define CAN_FS1R_FSC10 CAN_FS1R_FSC10_Msk                /*!< Filter Scale Configuration for filter 10 */
#define CAN_FS1R_FSC11_Pos (11U)
#define CAN_FS1R_FSC11_Msk (0x1UL << CAN_FS1R_FSC11_Pos) /*!< 0x00000800 */
#define CAN_FS1R_FSC11 CAN_FS1R_FSC11_Msk                /*!< Filter Scale Configuration for filter 11 */
#define CAN_FS1R_FSC12_Pos (12U)
#define CAN_FS1R_FSC12_Msk (0x1UL << CAN_FS1R_FSC12_Pos) /*!< 0x00001000 */
#define CAN_FS1R_FSC12 CAN_FS1R_FSC12_Msk                /*!< Filter Scale Configuration for filter 12 */
#define CAN_FS1R_FSC13_Pos (13U)
#define CAN_FS1R_FSC13_Msk (0x1UL << CAN_FS1R_FSC13_Pos) /*!< 0x00002000 */
#define CAN_FS1R_FSC13 CAN_FS1R_FSC13_Msk                /*!< Filter Scale Configuration for filter 13 */
#define CAN_FS1R_FSC14_Pos (14U)
#define CAN_FS1R_FSC14_Msk (0x1UL << CAN_FS1R_FSC14_Pos) /*!< 0x00004000 */
#define CAN_FS1R_FSC14 CAN_FS1R_FSC14_Msk                /*!< Filter Scale Configuration for filter 14 */
#define CAN_FS1R_FSC15_Pos (15U)
#define CAN_FS1R_FSC15_Msk (0x1UL << CAN_FS1R_FSC15_Pos) /*!< 0x00008000 */
#define CAN_FS1R_FSC15 CAN_FS1R_FSC15_Msk                /*!< Filter Scale Configuration for filter 15 */
#define CAN_FS1R_FSC16_Pos (16U)
#define CAN_FS1R_FSC16_Msk (0x1UL << CAN_FS1R_FSC16_Pos) /*!< 0x00010000 */
#define CAN_FS1R_FSC16 CAN_FS1R_FSC16_Msk                /*!< Filter Scale Configuration for filter 16 */
#define CAN_FS1R_FSC17_Pos (17U)
#define CAN_FS1R_FSC17_Msk (0x1UL << CAN_FS1R_FSC17_Pos) /*!< 0x00020000 */
#define CAN_FS1R_FSC17 CAN_FS1R_FSC17_Msk                /*!< Filter Scale Configuration for filter 17 */
#define CAN_FS1R_FSC18_Pos (18U)
#define CAN_FS1R_FSC18_Msk (0x1UL << CAN_FS1R_FSC18_Pos) /*!< 0x00040000 */
#define CAN_FS1R_FSC18 CAN_FS1R_FSC18_Msk                /*!< Filter Scale Configuration for filter 18 */
#define CAN_FS1R_FSC19_Pos (19U)
#define CAN_FS1R_FSC19_Msk (0x1UL << CAN_FS1R_FSC19_Pos) /*!< 0x00080000 */
#define CAN_FS1R_FSC19 CAN_FS1R_FSC19_Msk                /*!< Filter Scale Configuration for filter 19 */
#define CAN_FS1R_FSC20_Pos (20U)
#define CAN_FS1R_FSC20_Msk (0x1UL << CAN_FS1R_FSC20_Pos) /*!< 0x00100000 */
#define CAN_FS1R_FSC20 CAN_FS1R_FSC20_Msk                /*!< Filter Scale Configuration for filter 20 */
#define CAN_FS1R_FSC21_Pos (21U)
#define CAN_FS1R_FSC21_Msk (0x1UL << CAN_FS1R_FSC21_Pos) /*!< 0x00200000 */
#define CAN_FS1R_FSC21 CAN_FS1R_FSC21_Msk                /*!< Filter Scale Configuration for filter 21 */
#define CAN_FS1R_FSC22_Pos (22U)
#define CAN_FS1R_FSC22_Msk (0x1UL << CAN_FS1R_FSC22_Pos) /*!< 0x00400000 */
#define CAN_FS1R_FSC22 CAN_FS1R_FSC22_Msk                /*!< Filter Scale Configuration for filter 22 */
#define CAN_FS1R_FSC23_Pos (23U)
#define CAN_FS1R_FSC23_Msk (0x1UL << CAN_FS1R_FSC23_Pos) /*!< 0x00800000 */
#define CAN_FS1R_FSC23 CAN_FS1R_FSC23_Msk                /*!< Filter Scale Configuration for filter 23 */
#define CAN_FS1R_FSC24_Pos (24U)
#define CAN_FS1R_FSC24_Msk (0x1UL << CAN_FS1R_FSC24_Pos) /*!< 0x01000000 */
#define CAN_FS1R_FSC24 CAN_FS1R_FSC24_Msk                /*!< Filter Scale Configuration for filter 24 */
#define CAN_FS1R_FSC25_Pos (25U)
#define CAN_FS1R_FSC25_Msk (0x1UL << CAN_FS1R_FSC25_Pos) /*!< 0x02000000 */
#define CAN_FS1R_FSC25 CAN_FS1R_FSC25_Msk                /*!< Filter Scale Configuration for filter 25 */
#define CAN_FS1R_FSC26_Pos (26U)
#define CAN_FS1R_FSC26_Msk (0x1UL << CAN_FS1R_FSC26_Pos) /*!< 0x04000000 */
#define CAN_FS1R_FSC26 CAN_FS1R_FSC26_Msk                /*!< Filter Scale Configuration for filter 26 */
#define CAN_FS1R_FSC27_Pos (27U)
#define CAN_FS1R_FSC27_Msk (0x1UL << CAN_FS1R_FSC27_Pos) /*!< 0x08000000 */
#define CAN_FS1R_FSC27 CAN_FS1R_FSC27_Msk                /*!< Filter Scale Configuration for filter 27 */

/******************  Bit definition for CAN_FFA1R register  *******************/
#define CAN_FFA1R_FFA_Pos (0U)
#define CAN_FFA1R_FFA_Msk (0x3FFFUL << CAN_FFA1R_FFA_Pos) /*!< 0x00003FFF */
#define CAN_FFA1R_FFA CAN_FFA1R_FFA_Msk                   /*!< Filter FIFO Assignment */
#define CAN_FFA1R_FFA0_Pos (0U)
#define CAN_FFA1R_FFA0_Msk (0x1UL << CAN_FFA1R_FFA0_Pos) /*!< 0x00000001 */
#define CAN_FFA1R_FFA0 CAN_FFA1R_FFA0_Msk                /*!< Filter FIFO Assignment for filter 0 */
#define CAN_FFA1R_FFA1_Pos (1U)
#define CAN_FFA1R_FFA1_Msk (0x1UL << CAN_FFA1R_FFA1_Pos) /*!< 0x00000002 */
#define CAN_FFA1R_FFA1 CAN_FFA1R_FFA1_Msk                /*!< Filter FIFO Assignment for filter 1 */
#define CAN_FFA1R_FFA2_Pos (2U)
#define CAN_FFA1R_FFA2_Msk (0x1UL << CAN_FFA1R_FFA2_Pos) /*!< 0x00000004 */
#define CAN_FFA1R_FFA2 CAN_FFA1R_FFA2_Msk                /*!< Filter FIFO Assignment for filter 2 */
#define CAN_FFA1R_FFA3_Pos (3U)
#define CAN_FFA1R_FFA3_Msk (0x1UL << CAN_FFA1R_FFA3_Pos) /*!< 0x00000008 */
#define CAN_FFA1R_FFA3 CAN_FFA1R_FFA3_Msk                /*!< Filter FIFO Assignment for filter 3 */
#define CAN_FFA1R_FFA4_Pos (4U)
#define CAN_FFA1R_FFA4_Msk (0x1UL << CAN_FFA1R_FFA4_Pos) /*!< 0x00000010 */
#define CAN_FFA1R_FFA4 CAN_FFA1R_FFA4_Msk                /*!< Filter FIFO Assignment for filter 4 */
#define CAN_FFA1R_FFA5_Pos (5U)
#define CAN_FFA1R_FFA5_Msk (0x1UL << CAN_FFA1R_FFA5_Pos) /*!< 0x00000020 */
#define CAN_FFA1R_FFA5 CAN_FFA1R_FFA5_Msk                /*!< Filter FIFO Assignment for filter 5 */
#define CAN_FFA1R_FFA6_Pos (6U)
#define CAN_FFA1R_FFA6_Msk (0x1UL << CAN_FFA1R_FFA6_Pos) /*!< 0x00000040 */
#define CAN_FFA1R_FFA6 CAN_FFA1R_FFA6_Msk                /*!< Filter FIFO Assignment for filter 6 */
#define CAN_FFA1R_FFA7_Pos (7U)
#define CAN_FFA1R_FFA7_Msk (0x1UL << CAN_FFA1R_FFA7_Pos) /*!< 0x00000080 */
#define CAN_FFA1R_FFA7 CAN_FFA1R_FFA7_Msk                /*!< Filter FIFO Assignment for filter 7 */
#define CAN_FFA1R_FFA8_Pos (8U)
#define CAN_FFA1R_FFA8_Msk (0x1UL << CAN_FFA1R_FFA8_Pos) /*!< 0x00000100 */
#define CAN_FFA1R_FFA8 CAN_FFA1R_FFA8_Msk                /*!< Filter FIFO Assignment for filter 8 */
#define CAN_FFA1R_FFA9_Pos (9U)
#define CAN_FFA1R_FFA9_Msk (0x1UL << CAN_FFA1R_FFA9_Pos) /*!< 0x00000200 */
#define CAN_FFA1R_FFA9 CAN_FFA1R_FFA9_Msk                /*!< Filter FIFO Assignment for filter 9 */
#define CAN_FFA1R_FFA10_Pos (10U)
#define CAN_FFA1R_FFA10_Msk (0x1UL << CAN_FFA1R_FFA10_Pos) /*!< 0x00000400 */
#define CAN_FFA1R_FFA10 CAN_FFA1R_FFA10_Msk                /*!< Filter FIFO Assignment for filter 10 */
#define CAN_FFA1R_FFA11_Pos (11U)
#define CAN_FFA1R_FFA11_Msk (0x1UL << CAN_FFA1R_FFA11_Pos) /*!< 0x00000800 */
#define CAN_FFA1R_FFA11 CAN_FFA1R_FFA11_Msk                /*!< Filter FIFO Assignment for filter 11 */
#define CAN_FFA1R_FFA12_Pos (12U)
#define CAN_FFA1R_FFA12_Msk (0x1UL << CAN_FFA1R_FFA12_Pos) /*!< 0x00001000 */
#define CAN_FFA1R_FFA12 CAN_FFA1R_FFA12_Msk                /*!< Filter FIFO Assignment for filter 12 */
#define CAN_FFA1R_FFA13_Pos (13U)
#define CAN_FFA1R_FFA13_Msk (0x1UL << CAN_FFA1R_FFA13_Pos) /*!< 0x00002000 */
#define CAN_FFA1R_FFA13 CAN_FFA1R_FFA13_Msk                /*!< Filter FIFO Assignment for filter 13 */
#define CAN_FFA1_FFA14_Pos (14U)
#define CAN_FFA1_FFA14_Msk (0x1UL << CAN_FFA1_FFA14_Pos) /*!< 0x00004000 */
#define CAN_FFA1_FFA14 CAN_FFA1_FFA14_Msk                /*!< Filter FIFO Assignment for filter 14 */
#define CAN_FFA1_FFA15_Pos (15U)
#define CAN_FFA1_FFA15_Msk (0x1UL << CAN_FFA1_FFA15_Pos) /*!< 0x00008000 */
#define CAN_FFA1_FFA15 CAN_FFA1_FFA15_Msk                /*!< Filter FIFO Assignment for filter 15 */
#define CAN_FFA1_FFA16_Pos (16U)
#define CAN_FFA1_FFA16_Msk (0x1UL << CAN_FFA1_FFA16_Pos) /*!< 0x00010000 */
#define CAN_FFA1_FFA16 CAN_FFA1_FFA16_Msk                /*!< Filter FIFO Assignment for filter 16 */
#define CAN_FFA1_FFA17_Pos (17U)
#define CAN_FFA1_FFA17_Msk (0x1UL << CAN_FFA1_FFA17_Pos) /*!< 0x00020000 */
#define CAN_FFA1_FFA17 CAN_FFA1_FFA17_Msk                /*!< Filter FIFO Assignment for filter 17 */
#define CAN_FFA1_FFA18_Pos (18U)
#define CAN_FFA1_FFA18_Msk (0x1UL << CAN_FFA1_FFA18_Pos) /*!< 0x00040000 */
#define CAN_FFA1_FFA18 CAN_FFA1_FFA18_Msk                /*!< Filter FIFO Assignment for filter 18 */
#define CAN_FFA1_FFA19_Pos (19U)
#define CAN_FFA1_FFA19_Msk (0x1UL << CAN_FFA1_FFA19_Pos) /*!< 0x00080000 */
#define CAN_FFA1_FFA19 CAN_FFA1_FFA19_Msk                /*!< Filter FIFO Assignment for filter 19 */
#define CAN_FFA1_FFA20_Pos (20U)
#define CAN_FFA1_FFA20_Msk (0x1UL << CAN_FFA1_FFA20_Pos) /*!< 0x00100000 */
#define CAN_FFA1_FFA20 CAN_FFA1_FFA20_Msk                /*!< Filter FIFO Assignment for filter 20 */
#define CAN_FFA1_FFA21_Pos (21U)
#define CAN_FFA1_FFA21_Msk (0x1UL << CAN_FFA1_FFA21_Pos) /*!< 0x00200000 */
#define CAN_FFA1_FFA21 CAN_FFA1_FFA21_Msk                /*!< Filter FIFO Assignment for filter 21 */
#define CAN_FFA1_FFA22_Pos (22U)
#define CAN_FFA1_FFA22_Msk (0x1UL << CAN_FFA1_FFA22_Pos) /*!< 0x00400000 */
#define CAN_FFA1_FFA22 CAN_FFA1_FFA22_Msk                /*!< Filter FIFO Assignment for filter 22 */
#define CAN_FFA1_FFA23_Pos (23U)
#define CAN_FFA1_FFA23_Msk (0x1UL << CAN_FFA1_FFA23_Pos) /*!< 0x00800000 */
#define CAN_FFA1_FFA23 CAN_FFA1_FFA23_Msk                /*!< Filter FIFO Assignment for filter 23 */
#define CAN_FFA1_FFA24_Pos (24U)
#define CAN_FFA1_FFA24_Msk (0x1UL << CAN_FFA1_FFA24_Pos) /*!< 0x01000000 */
#define CAN_FFA1_FFA24 CAN_FFA1_FFA24_Msk                /*!< Filter FIFO Assignment for filter 24 */
#define CAN_FFA1_FFA25_Pos (25U)
#define CAN_FFA1_FFA25_Msk (0x1UL << CAN_FFA1_FFA25_Pos) /*!< 0x02000000 */
#define CAN_FFA1_FFA25 CAN_FFA1_FFA25_Msk                /*!< Filter FIFO Assignment for filter 25 */
#define CAN_FFA1_FFA26_Pos (26U)
#define CAN_FFA1_FFA26_Msk (0x1UL << CAN_FFA1_FFA26_Pos) /*!< 0x04000000 */
#define CAN_FFA1_FFA26 CAN_FFA1_FFA26_Msk                /*!< Filter FIFO Assignment for filter 26 */
#define CAN_FFA1_FFA27_Pos (27U)
#define CAN_FFA1_FFA27_Msk (0x1UL << CAN_FFA1_FFA27_Pos) /*!< 0x08000000 */
#define CAN_FFA1_FFA27 CAN_FFA1_FFA27_Msk                /*!< Filter FIFO Assignment for filter 27 */

/*******************  Bit definition for CAN_FA1R register  *******************/
#define CAN_FA1R_FACT_Pos (0U)
#define CAN_FA1R_FACT_Msk (0x3FFFUL << CAN_FA1R_FACT_Pos) /*!< 0x00003FFF */
#define CAN_FA1R_FACT CAN_FA1R_FACT_Msk                   /*!< Filter Active */
#define CAN_FA1R_FACT0_Pos (0U)
#define CAN_FA1R_FACT0_Msk (0x1UL << CAN_FA1R_FACT0_Pos) /*!< 0x00000001 */
#define CAN_FA1R_FACT0 CAN_FA1R_FACT0_Msk                /*!< Filter 0 Active */
#define CAN_FA1R_FACT1_Pos (1U)
#define CAN_FA1R_FACT1_Msk (0x1UL << CAN_FA1R_FACT1_Pos) /*!< 0x00000002 */
#define CAN_FA1R_FACT1 CAN_FA1R_FACT1_Msk                /*!< Filter 1 Active */
#define CAN_FA1R_FACT2_Pos (2U)
#define CAN_FA1R_FACT2_Msk (0x1UL << CAN_FA1R_FACT2_Pos) /*!< 0x00000004 */
#define CAN_FA1R_FACT2 CAN_FA1R_FACT2_Msk                /*!< Filter 2 Active */
#define CAN_FA1R_FACT3_Pos (3U)
#define CAN_FA1R_FACT3_Msk (0x1UL << CAN_FA1R_FACT3_Pos) /*!< 0x00000008 */
#define CAN_FA1R_FACT3 CAN_FA1R_FACT3_Msk                /*!< Filter 3 Active */
#define CAN_FA1R_FACT4_Pos (4U)
#define CAN_FA1R_FACT4_Msk (0x1UL << CAN_FA1R_FACT4_Pos) /*!< 0x00000010 */
#define CAN_FA1R_FACT4 CAN_FA1R_FACT4_Msk                /*!< Filter 4 Active */
#define CAN_FA1R_FACT5_Pos (5U)
#define CAN_FA1R_FACT5_Msk (0x1UL << CAN_FA1R_FACT5_Pos) /*!< 0x00000020 */
#define CAN_FA1R_FACT5 CAN_FA1R_FACT5_Msk                /*!< Filter 5 Active */
#define CAN_FA1R_FACT6_Pos (6U)
#define CAN_FA1R_FACT6_Msk (0x1UL << CAN_FA1R_FACT6_Pos) /*!< 0x00000040 */
#define CAN_FA1R_FACT6 CAN_FA1R_FACT6_Msk                /*!< Filter 6 Active */
#define CAN_FA1R_FACT7_Pos (7U)
#define CAN_FA1R_FACT7_Msk (0x1UL << CAN_FA1R_FACT7_Pos) /*!< 0x00000080 */
#define CAN_FA1R_FACT7 CAN_FA1R_FACT7_Msk                /*!< Filter 7 Active */
#define CAN_FA1R_FACT8_Pos (8U)
#define CAN_FA1R_FACT8_Msk (0x1UL << CAN_FA1R_FACT8_Pos) /*!< 0x00000100 */
#define CAN_FA1R_FACT8 CAN_FA1R_FACT8_Msk                /*!< Filter 8 Active */
#define CAN_FA1R_FACT9_Pos (9U)
#define CAN_FA1R_FACT9_Msk (0x1UL << CAN_FA1R_FACT9_Pos) /*!< 0x00000200 */
#define CAN_FA1R_FACT9 CAN_FA1R_FACT9_Msk                /*!< Filter 9 Active */
#define CAN_FA1R_FACT10_Pos (10U)
#define CAN_FA1R_FACT10_Msk (0x1UL << CAN_FA1R_FACT10_Pos) /*!< 0x00000400 */
#define CAN_FA1R_FACT10 CAN_FA1R_FACT10_Msk                /*!< Filter 10 Active */
#define CAN_FA1R_FACT11_Pos (11U)
#define CAN_FA1R_FACT11_Msk (0x1UL << CAN_FA1R_FACT11_Pos) /*!< 0x00000800 */
#define CAN_FA1R_FACT11 CAN_FA1R_FACT11_Msk                /*!< Filter 11 Active */
#define CAN_FA1R_FACT12_Pos (12U)
#define CAN_FA1R_FACT12_Msk (0x1UL << CAN_FA1R_FACT12_Pos) /*!< 0x00001000 */
#define CAN_FA1R_FACT12 CAN_FA1R_FACT12_Msk                /*!< Filter 12 Active */
#define CAN_FA1R_FACT13_Pos (13U)
#define CAN_FA1R_FACT13_Msk (0x1UL << CAN_FA1R_FACT13_Pos) /*!< 0x00002000 */
#define CAN_FA1R_FACT13 CAN_FA1R_FACT13_Msk                /*!< Filter 13 Active */
#define CAN_FA1R_FACT14_Pos (14U)
#define CAN_FA1R_FACT14_Msk (0x1UL << CAN_FA1R_FACT14_Pos) /*!< 0x00004000 */
#define CAN_FA1R_FACT14 CAN_FA1R_FACT14_Msk                /*!< Filter 14 Active */
#define CAN_FA1R_FACT15_Pos (15U)
#define CAN_FA1R_FACT15_Msk (0x1UL << CAN_FA1R_FACT15_Pos) /*!< 0x00008000 */
#define CAN_FA1R_FACT15 CAN_FA1R_FACT15_Msk                /*!< Filter 15 Active */
#define CAN_FA1R_FACT16_Pos (16U)
#define CAN_FA1R_FACT16_Msk (0x1UL << CAN_FA1R_FACT16_Pos) /*!< 0x00010000 */
#define CAN_FA1R_FACT16 CAN_FA1R_FACT16_Msk                /*!< Filter 16 Active */
#define CAN_FA1R_FACT17_Pos (17U)
#define CAN_FA1R_FACT17_Msk (0x1UL << CAN_FA1R_FACT17_Pos) /*!< 0x00020000 */
#define CAN_FA1R_FACT17 CAN_FA1R_FACT17_Msk                /*!< Filter 17 Active */
#define CAN_FA1R_FACT18_Pos (18U)
#define CAN_FA1R_FACT18_Msk (0x1UL << CAN_FA1R_FACT18_Pos) /*!< 0x00040000 */
#define CAN_FA1R_FACT18 CAN_FA1R_FACT18_Msk                /*!< Filter 18 Active */
#define CAN_FA1R_FACT19_Pos (19U)
#define CAN_FA1R_FACT19_Msk (0x1UL << CAN_FA1R_FACT19_Pos) /*!< 0x00080000 */
#define CAN_FA1R_FACT19 CAN_FA1R_FACT19_Msk                /*!< Filter 19 Active */
#define CAN_FA1R_FACT20_Pos (20U)
#define CAN_FA1R_FACT20_Msk (0x1UL << CAN_FA1R_FACT20_Pos) /*!< 0x00100000 */
#define CAN_FA1R_FACT20 CAN_FA1R_FACT20_Msk                /*!< Filter 20 Active */
#define CAN_FA1R_FACT21_Pos (21U)
#define CAN_FA1R_FACT21_Msk (0x1UL << CAN_FA1R_FACT21_Pos) /*!< 0x00200000 */
#define CAN_FA1R_FACT21 CAN_FA1R_FACT21_Msk                /*!< Filter 21 Active */
#define CAN_FA1R_FACT22_Pos (22U)
#define CAN_FA1R_FACT22_Msk (0x1UL << CAN_FA1R_FACT22_Pos) /*!< 0x00400000 */
#define CAN_FA1R_FACT22 CAN_FA1R_FACT22_Msk                /*!< Filter 22 Active */
#define CAN_FA1R_FACT23_Pos (23U)
#define CAN_FA1R_FACT23_Msk (0x1UL << CAN_FA1R_FACT23_Pos) /*!< 0x00800000 */
#define CAN_FA1R_FACT23 CAN_FA1R_FACT23_Msk                /*!< Filter 23 Active */
#define CAN_FA1R_FACT24_Pos (24U)
#define CAN_FA1R_FACT24_Msk (0x1UL << CAN_FA1R_FACT24_Pos) /*!< 0x01000000 */
#define CAN_FA1R_FACT24 CAN_FA1R_FACT24_Msk                /*!< Filter 24 Active */
#define CAN_FA1R_FACT25_Pos (25U)
#define CAN_FA1R_FACT25_Msk (0x1UL << CAN_FA1R_FACT25_Pos) /*!< 0x02000000 */
#define CAN_FA1R_FACT25 CAN_FA1R_FACT25_Msk                /*!< Filter 25 Active */
#define CAN_FA1R_FACT26_Pos (26U)
#define CAN_FA1R_FACT26_Msk (0x1UL << CAN_FA1R_FACT26_Pos) /*!< 0x04000000 */
#define CAN_FA1R_FACT26 CAN_FA1R_FACT26_Msk                /*!< Filter 26 Active */
#define CAN_FA1R_FACT27_Pos (27U)
#define CAN_FA1R_FACT27_Msk (0x1UL << CAN_FA1R_FACT27_Pos) /*!< 0x08000000 */
#define CAN_FA1R_FACT27 CAN_FA1R_FACT27_Msk                /*!< Filter 27 Active */

/*******************  Bit definition for CAN_F0R1 register  *******************/
#define CAN_F0R1_FB0_Pos (0U)
#define CAN_F0R1_FB0_Msk (0x1UL << CAN_F0R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F0R1_FB0 CAN_F0R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F0R1_FB1_Pos (1U)
#define CAN_F0R1_FB1_Msk (0x1UL << CAN_F0R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F0R1_FB1 CAN_F0R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F0R1_FB2_Pos (2U)
#define CAN_F0R1_FB2_Msk (0x1UL << CAN_F0R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F0R1_FB2 CAN_F0R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F0R1_FB3_Pos (3U)
#define CAN_F0R1_FB3_Msk (0x1UL << CAN_F0R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F0R1_FB3 CAN_F0R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F0R1_FB4_Pos (4U)
#define CAN_F0R1_FB4_Msk (0x1UL << CAN_F0R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F0R1_FB4 CAN_F0R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F0R1_FB5_Pos (5U)
#define CAN_F0R1_FB5_Msk (0x1UL << CAN_F0R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F0R1_FB5 CAN_F0R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F0R1_FB6_Pos (6U)
#define CAN_F0R1_FB6_Msk (0x1UL << CAN_F0R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F0R1_FB6 CAN_F0R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F0R1_FB7_Pos (7U)
#define CAN_F0R1_FB7_Msk (0x1UL << CAN_F0R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F0R1_FB7 CAN_F0R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F0R1_FB8_Pos (8U)
#define CAN_F0R1_FB8_Msk (0x1UL << CAN_F0R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F0R1_FB8 CAN_F0R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F0R1_FB9_Pos (9U)
#define CAN_F0R1_FB9_Msk (0x1UL << CAN_F0R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F0R1_FB9 CAN_F0R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F0R1_FB10_Pos (10U)
#define CAN_F0R1_FB10_Msk (0x1UL << CAN_F0R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F0R1_FB10 CAN_F0R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F0R1_FB11_Pos (11U)
#define CAN_F0R1_FB11_Msk (0x1UL << CAN_F0R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F0R1_FB11 CAN_F0R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F0R1_FB12_Pos (12U)
#define CAN_F0R1_FB12_Msk (0x1UL << CAN_F0R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F0R1_FB12 CAN_F0R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F0R1_FB13_Pos (13U)
#define CAN_F0R1_FB13_Msk (0x1UL << CAN_F0R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F0R1_FB13 CAN_F0R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F0R1_FB14_Pos (14U)
#define CAN_F0R1_FB14_Msk (0x1UL << CAN_F0R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F0R1_FB14 CAN_F0R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F0R1_FB15_Pos (15U)
#define CAN_F0R1_FB15_Msk (0x1UL << CAN_F0R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F0R1_FB15 CAN_F0R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F0R1_FB16_Pos (16U)
#define CAN_F0R1_FB16_Msk (0x1UL << CAN_F0R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F0R1_FB16 CAN_F0R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F0R1_FB17_Pos (17U)
#define CAN_F0R1_FB17_Msk (0x1UL << CAN_F0R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F0R1_FB17 CAN_F0R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F0R1_FB18_Pos (18U)
#define CAN_F0R1_FB18_Msk (0x1UL << CAN_F0R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F0R1_FB18 CAN_F0R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F0R1_FB19_Pos (19U)
#define CAN_F0R1_FB19_Msk (0x1UL << CAN_F0R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F0R1_FB19 CAN_F0R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F0R1_FB20_Pos (20U)
#define CAN_F0R1_FB20_Msk (0x1UL << CAN_F0R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F0R1_FB20 CAN_F0R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F0R1_FB21_Pos (21U)
#define CAN_F0R1_FB21_Msk (0x1UL << CAN_F0R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F0R1_FB21 CAN_F0R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F0R1_FB22_Pos (22U)
#define CAN_F0R1_FB22_Msk (0x1UL << CAN_F0R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F0R1_FB22 CAN_F0R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F0R1_FB23_Pos (23U)
#define CAN_F0R1_FB23_Msk (0x1UL << CAN_F0R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F0R1_FB23 CAN_F0R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F0R1_FB24_Pos (24U)
#define CAN_F0R1_FB24_Msk (0x1UL << CAN_F0R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F0R1_FB24 CAN_F0R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F0R1_FB25_Pos (25U)
#define CAN_F0R1_FB25_Msk (0x1UL << CAN_F0R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F0R1_FB25 CAN_F0R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F0R1_FB26_Pos (26U)
#define CAN_F0R1_FB26_Msk (0x1UL << CAN_F0R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F0R1_FB26 CAN_F0R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F0R1_FB27_Pos (27U)
#define CAN_F0R1_FB27_Msk (0x1UL << CAN_F0R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F0R1_FB27 CAN_F0R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F0R1_FB28_Pos (28U)
#define CAN_F0R1_FB28_Msk (0x1UL << CAN_F0R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F0R1_FB28 CAN_F0R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F0R1_FB29_Pos (29U)
#define CAN_F0R1_FB29_Msk (0x1UL << CAN_F0R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F0R1_FB29 CAN_F0R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F0R1_FB30_Pos (30U)
#define CAN_F0R1_FB30_Msk (0x1UL << CAN_F0R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F0R1_FB30 CAN_F0R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F0R1_FB31_Pos (31U)
#define CAN_F0R1_FB31_Msk (0x1UL << CAN_F0R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F0R1_FB31 CAN_F0R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F1R1 register  *******************/
#define CAN_F1R1_FB0_Pos (0U)
#define CAN_F1R1_FB0_Msk (0x1UL << CAN_F1R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F1R1_FB0 CAN_F1R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F1R1_FB1_Pos (1U)
#define CAN_F1R1_FB1_Msk (0x1UL << CAN_F1R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F1R1_FB1 CAN_F1R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F1R1_FB2_Pos (2U)
#define CAN_F1R1_FB2_Msk (0x1UL << CAN_F1R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F1R1_FB2 CAN_F1R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F1R1_FB3_Pos (3U)
#define CAN_F1R1_FB3_Msk (0x1UL << CAN_F1R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F1R1_FB3 CAN_F1R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F1R1_FB4_Pos (4U)
#define CAN_F1R1_FB4_Msk (0x1UL << CAN_F1R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F1R1_FB4 CAN_F1R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F1R1_FB5_Pos (5U)
#define CAN_F1R1_FB5_Msk (0x1UL << CAN_F1R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F1R1_FB5 CAN_F1R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F1R1_FB6_Pos (6U)
#define CAN_F1R1_FB6_Msk (0x1UL << CAN_F1R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F1R1_FB6 CAN_F1R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F1R1_FB7_Pos (7U)
#define CAN_F1R1_FB7_Msk (0x1UL << CAN_F1R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F1R1_FB7 CAN_F1R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F1R1_FB8_Pos (8U)
#define CAN_F1R1_FB8_Msk (0x1UL << CAN_F1R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F1R1_FB8 CAN_F1R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F1R1_FB9_Pos (9U)
#define CAN_F1R1_FB9_Msk (0x1UL << CAN_F1R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F1R1_FB9 CAN_F1R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F1R1_FB10_Pos (10U)
#define CAN_F1R1_FB10_Msk (0x1UL << CAN_F1R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F1R1_FB10 CAN_F1R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F1R1_FB11_Pos (11U)
#define CAN_F1R1_FB11_Msk (0x1UL << CAN_F1R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F1R1_FB11 CAN_F1R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F1R1_FB12_Pos (12U)
#define CAN_F1R1_FB12_Msk (0x1UL << CAN_F1R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F1R1_FB12 CAN_F1R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F1R1_FB13_Pos (13U)
#define CAN_F1R1_FB13_Msk (0x1UL << CAN_F1R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F1R1_FB13 CAN_F1R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F1R1_FB14_Pos (14U)
#define CAN_F1R1_FB14_Msk (0x1UL << CAN_F1R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F1R1_FB14 CAN_F1R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F1R1_FB15_Pos (15U)
#define CAN_F1R1_FB15_Msk (0x1UL << CAN_F1R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F1R1_FB15 CAN_F1R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F1R1_FB16_Pos (16U)
#define CAN_F1R1_FB16_Msk (0x1UL << CAN_F1R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F1R1_FB16 CAN_F1R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F1R1_FB17_Pos (17U)
#define CAN_F1R1_FB17_Msk (0x1UL << CAN_F1R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F1R1_FB17 CAN_F1R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F1R1_FB18_Pos (18U)
#define CAN_F1R1_FB18_Msk (0x1UL << CAN_F1R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F1R1_FB18 CAN_F1R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F1R1_FB19_Pos (19U)
#define CAN_F1R1_FB19_Msk (0x1UL << CAN_F1R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F1R1_FB19 CAN_F1R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F1R1_FB20_Pos (20U)
#define CAN_F1R1_FB20_Msk (0x1UL << CAN_F1R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F1R1_FB20 CAN_F1R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F1R1_FB21_Pos (21U)
#define CAN_F1R1_FB21_Msk (0x1UL << CAN_F1R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F1R1_FB21 CAN_F1R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F1R1_FB22_Pos (22U)
#define CAN_F1R1_FB22_Msk (0x1UL << CAN_F1R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F1R1_FB22 CAN_F1R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F1R1_FB23_Pos (23U)
#define CAN_F1R1_FB23_Msk (0x1UL << CAN_F1R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F1R1_FB23 CAN_F1R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F1R1_FB24_Pos (24U)
#define CAN_F1R1_FB24_Msk (0x1UL << CAN_F1R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F1R1_FB24 CAN_F1R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F1R1_FB25_Pos (25U)
#define CAN_F1R1_FB25_Msk (0x1UL << CAN_F1R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F1R1_FB25 CAN_F1R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F1R1_FB26_Pos (26U)
#define CAN_F1R1_FB26_Msk (0x1UL << CAN_F1R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F1R1_FB26 CAN_F1R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F1R1_FB27_Pos (27U)
#define CAN_F1R1_FB27_Msk (0x1UL << CAN_F1R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F1R1_FB27 CAN_F1R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F1R1_FB28_Pos (28U)
#define CAN_F1R1_FB28_Msk (0x1UL << CAN_F1R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F1R1_FB28 CAN_F1R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F1R1_FB29_Pos (29U)
#define CAN_F1R1_FB29_Msk (0x1UL << CAN_F1R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F1R1_FB29 CAN_F1R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F1R1_FB30_Pos (30U)
#define CAN_F1R1_FB30_Msk (0x1UL << CAN_F1R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F1R1_FB30 CAN_F1R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F1R1_FB31_Pos (31U)
#define CAN_F1R1_FB31_Msk (0x1UL << CAN_F1R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F1R1_FB31 CAN_F1R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F2R1 register  *******************/
#define CAN_F2R1_FB0_Pos (0U)
#define CAN_F2R1_FB0_Msk (0x1UL << CAN_F2R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F2R1_FB0 CAN_F2R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F2R1_FB1_Pos (1U)
#define CAN_F2R1_FB1_Msk (0x1UL << CAN_F2R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F2R1_FB1 CAN_F2R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F2R1_FB2_Pos (2U)
#define CAN_F2R1_FB2_Msk (0x1UL << CAN_F2R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F2R1_FB2 CAN_F2R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F2R1_FB3_Pos (3U)
#define CAN_F2R1_FB3_Msk (0x1UL << CAN_F2R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F2R1_FB3 CAN_F2R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F2R1_FB4_Pos (4U)
#define CAN_F2R1_FB4_Msk (0x1UL << CAN_F2R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F2R1_FB4 CAN_F2R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F2R1_FB5_Pos (5U)
#define CAN_F2R1_FB5_Msk (0x1UL << CAN_F2R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F2R1_FB5 CAN_F2R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F2R1_FB6_Pos (6U)
#define CAN_F2R1_FB6_Msk (0x1UL << CAN_F2R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F2R1_FB6 CAN_F2R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F2R1_FB7_Pos (7U)
#define CAN_F2R1_FB7_Msk (0x1UL << CAN_F2R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F2R1_FB7 CAN_F2R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F2R1_FB8_Pos (8U)
#define CAN_F2R1_FB8_Msk (0x1UL << CAN_F2R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F2R1_FB8 CAN_F2R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F2R1_FB9_Pos (9U)
#define CAN_F2R1_FB9_Msk (0x1UL << CAN_F2R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F2R1_FB9 CAN_F2R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F2R1_FB10_Pos (10U)
#define CAN_F2R1_FB10_Msk (0x1UL << CAN_F2R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F2R1_FB10 CAN_F2R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F2R1_FB11_Pos (11U)
#define CAN_F2R1_FB11_Msk (0x1UL << CAN_F2R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F2R1_FB11 CAN_F2R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F2R1_FB12_Pos (12U)
#define CAN_F2R1_FB12_Msk (0x1UL << CAN_F2R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F2R1_FB12 CAN_F2R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F2R1_FB13_Pos (13U)
#define CAN_F2R1_FB13_Msk (0x1UL << CAN_F2R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F2R1_FB13 CAN_F2R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F2R1_FB14_Pos (14U)
#define CAN_F2R1_FB14_Msk (0x1UL << CAN_F2R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F2R1_FB14 CAN_F2R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F2R1_FB15_Pos (15U)
#define CAN_F2R1_FB15_Msk (0x1UL << CAN_F2R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F2R1_FB15 CAN_F2R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F2R1_FB16_Pos (16U)
#define CAN_F2R1_FB16_Msk (0x1UL << CAN_F2R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F2R1_FB16 CAN_F2R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F2R1_FB17_Pos (17U)
#define CAN_F2R1_FB17_Msk (0x1UL << CAN_F2R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F2R1_FB17 CAN_F2R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F2R1_FB18_Pos (18U)
#define CAN_F2R1_FB18_Msk (0x1UL << CAN_F2R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F2R1_FB18 CAN_F2R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F2R1_FB19_Pos (19U)
#define CAN_F2R1_FB19_Msk (0x1UL << CAN_F2R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F2R1_FB19 CAN_F2R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F2R1_FB20_Pos (20U)
#define CAN_F2R1_FB20_Msk (0x1UL << CAN_F2R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F2R1_FB20 CAN_F2R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F2R1_FB21_Pos (21U)
#define CAN_F2R1_FB21_Msk (0x1UL << CAN_F2R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F2R1_FB21 CAN_F2R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F2R1_FB22_Pos (22U)
#define CAN_F2R1_FB22_Msk (0x1UL << CAN_F2R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F2R1_FB22 CAN_F2R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F2R1_FB23_Pos (23U)
#define CAN_F2R1_FB23_Msk (0x1UL << CAN_F2R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F2R1_FB23 CAN_F2R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F2R1_FB24_Pos (24U)
#define CAN_F2R1_FB24_Msk (0x1UL << CAN_F2R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F2R1_FB24 CAN_F2R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F2R1_FB25_Pos (25U)
#define CAN_F2R1_FB25_Msk (0x1UL << CAN_F2R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F2R1_FB25 CAN_F2R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F2R1_FB26_Pos (26U)
#define CAN_F2R1_FB26_Msk (0x1UL << CAN_F2R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F2R1_FB26 CAN_F2R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F2R1_FB27_Pos (27U)
#define CAN_F2R1_FB27_Msk (0x1UL << CAN_F2R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F2R1_FB27 CAN_F2R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F2R1_FB28_Pos (28U)
#define CAN_F2R1_FB28_Msk (0x1UL << CAN_F2R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F2R1_FB28 CAN_F2R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F2R1_FB29_Pos (29U)
#define CAN_F2R1_FB29_Msk (0x1UL << CAN_F2R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F2R1_FB29 CAN_F2R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F2R1_FB30_Pos (30U)
#define CAN_F2R1_FB30_Msk (0x1UL << CAN_F2R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F2R1_FB30 CAN_F2R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F2R1_FB31_Pos (31U)
#define CAN_F2R1_FB31_Msk (0x1UL << CAN_F2R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F2R1_FB31 CAN_F2R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F3R1 register  *******************/
#define CAN_F3R1_FB0_Pos (0U)
#define CAN_F3R1_FB0_Msk (0x1UL << CAN_F3R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F3R1_FB0 CAN_F3R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F3R1_FB1_Pos (1U)
#define CAN_F3R1_FB1_Msk (0x1UL << CAN_F3R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F3R1_FB1 CAN_F3R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F3R1_FB2_Pos (2U)
#define CAN_F3R1_FB2_Msk (0x1UL << CAN_F3R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F3R1_FB2 CAN_F3R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F3R1_FB3_Pos (3U)
#define CAN_F3R1_FB3_Msk (0x1UL << CAN_F3R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F3R1_FB3 CAN_F3R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F3R1_FB4_Pos (4U)
#define CAN_F3R1_FB4_Msk (0x1UL << CAN_F3R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F3R1_FB4 CAN_F3R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F3R1_FB5_Pos (5U)
#define CAN_F3R1_FB5_Msk (0x1UL << CAN_F3R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F3R1_FB5 CAN_F3R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F3R1_FB6_Pos (6U)
#define CAN_F3R1_FB6_Msk (0x1UL << CAN_F3R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F3R1_FB6 CAN_F3R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F3R1_FB7_Pos (7U)
#define CAN_F3R1_FB7_Msk (0x1UL << CAN_F3R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F3R1_FB7 CAN_F3R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F3R1_FB8_Pos (8U)
#define CAN_F3R1_FB8_Msk (0x1UL << CAN_F3R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F3R1_FB8 CAN_F3R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F3R1_FB9_Pos (9U)
#define CAN_F3R1_FB9_Msk (0x1UL << CAN_F3R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F3R1_FB9 CAN_F3R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F3R1_FB10_Pos (10U)
#define CAN_F3R1_FB10_Msk (0x1UL << CAN_F3R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F3R1_FB10 CAN_F3R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F3R1_FB11_Pos (11U)
#define CAN_F3R1_FB11_Msk (0x1UL << CAN_F3R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F3R1_FB11 CAN_F3R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F3R1_FB12_Pos (12U)
#define CAN_F3R1_FB12_Msk (0x1UL << CAN_F3R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F3R1_FB12 CAN_F3R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F3R1_FB13_Pos (13U)
#define CAN_F3R1_FB13_Msk (0x1UL << CAN_F3R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F3R1_FB13 CAN_F3R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F3R1_FB14_Pos (14U)
#define CAN_F3R1_FB14_Msk (0x1UL << CAN_F3R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F3R1_FB14 CAN_F3R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F3R1_FB15_Pos (15U)
#define CAN_F3R1_FB15_Msk (0x1UL << CAN_F3R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F3R1_FB15 CAN_F3R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F3R1_FB16_Pos (16U)
#define CAN_F3R1_FB16_Msk (0x1UL << CAN_F3R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F3R1_FB16 CAN_F3R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F3R1_FB17_Pos (17U)
#define CAN_F3R1_FB17_Msk (0x1UL << CAN_F3R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F3R1_FB17 CAN_F3R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F3R1_FB18_Pos (18U)
#define CAN_F3R1_FB18_Msk (0x1UL << CAN_F3R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F3R1_FB18 CAN_F3R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F3R1_FB19_Pos (19U)
#define CAN_F3R1_FB19_Msk (0x1UL << CAN_F3R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F3R1_FB19 CAN_F3R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F3R1_FB20_Pos (20U)
#define CAN_F3R1_FB20_Msk (0x1UL << CAN_F3R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F3R1_FB20 CAN_F3R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F3R1_FB21_Pos (21U)
#define CAN_F3R1_FB21_Msk (0x1UL << CAN_F3R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F3R1_FB21 CAN_F3R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F3R1_FB22_Pos (22U)
#define CAN_F3R1_FB22_Msk (0x1UL << CAN_F3R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F3R1_FB22 CAN_F3R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F3R1_FB23_Pos (23U)
#define CAN_F3R1_FB23_Msk (0x1UL << CAN_F3R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F3R1_FB23 CAN_F3R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F3R1_FB24_Pos (24U)
#define CAN_F3R1_FB24_Msk (0x1UL << CAN_F3R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F3R1_FB24 CAN_F3R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F3R1_FB25_Pos (25U)
#define CAN_F3R1_FB25_Msk (0x1UL << CAN_F3R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F3R1_FB25 CAN_F3R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F3R1_FB26_Pos (26U)
#define CAN_F3R1_FB26_Msk (0x1UL << CAN_F3R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F3R1_FB26 CAN_F3R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F3R1_FB27_Pos (27U)
#define CAN_F3R1_FB27_Msk (0x1UL << CAN_F3R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F3R1_FB27 CAN_F3R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F3R1_FB28_Pos (28U)
#define CAN_F3R1_FB28_Msk (0x1UL << CAN_F3R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F3R1_FB28 CAN_F3R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F3R1_FB29_Pos (29U)
#define CAN_F3R1_FB29_Msk (0x1UL << CAN_F3R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F3R1_FB29 CAN_F3R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F3R1_FB30_Pos (30U)
#define CAN_F3R1_FB30_Msk (0x1UL << CAN_F3R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F3R1_FB30 CAN_F3R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F3R1_FB31_Pos (31U)
#define CAN_F3R1_FB31_Msk (0x1UL << CAN_F3R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F3R1_FB31 CAN_F3R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F4R1 register  *******************/
#define CAN_F4R1_FB0_Pos (0U)
#define CAN_F4R1_FB0_Msk (0x1UL << CAN_F4R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F4R1_FB0 CAN_F4R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F4R1_FB1_Pos (1U)
#define CAN_F4R1_FB1_Msk (0x1UL << CAN_F4R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F4R1_FB1 CAN_F4R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F4R1_FB2_Pos (2U)
#define CAN_F4R1_FB2_Msk (0x1UL << CAN_F4R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F4R1_FB2 CAN_F4R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F4R1_FB3_Pos (3U)
#define CAN_F4R1_FB3_Msk (0x1UL << CAN_F4R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F4R1_FB3 CAN_F4R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F4R1_FB4_Pos (4U)
#define CAN_F4R1_FB4_Msk (0x1UL << CAN_F4R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F4R1_FB4 CAN_F4R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F4R1_FB5_Pos (5U)
#define CAN_F4R1_FB5_Msk (0x1UL << CAN_F4R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F4R1_FB5 CAN_F4R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F4R1_FB6_Pos (6U)
#define CAN_F4R1_FB6_Msk (0x1UL << CAN_F4R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F4R1_FB6 CAN_F4R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F4R1_FB7_Pos (7U)
#define CAN_F4R1_FB7_Msk (0x1UL << CAN_F4R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F4R1_FB7 CAN_F4R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F4R1_FB8_Pos (8U)
#define CAN_F4R1_FB8_Msk (0x1UL << CAN_F4R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F4R1_FB8 CAN_F4R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F4R1_FB9_Pos (9U)
#define CAN_F4R1_FB9_Msk (0x1UL << CAN_F4R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F4R1_FB9 CAN_F4R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F4R1_FB10_Pos (10U)
#define CAN_F4R1_FB10_Msk (0x1UL << CAN_F4R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F4R1_FB10 CAN_F4R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F4R1_FB11_Pos (11U)
#define CAN_F4R1_FB11_Msk (0x1UL << CAN_F4R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F4R1_FB11 CAN_F4R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F4R1_FB12_Pos (12U)
#define CAN_F4R1_FB12_Msk (0x1UL << CAN_F4R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F4R1_FB12 CAN_F4R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F4R1_FB13_Pos (13U)
#define CAN_F4R1_FB13_Msk (0x1UL << CAN_F4R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F4R1_FB13 CAN_F4R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F4R1_FB14_Pos (14U)
#define CAN_F4R1_FB14_Msk (0x1UL << CAN_F4R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F4R1_FB14 CAN_F4R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F4R1_FB15_Pos (15U)
#define CAN_F4R1_FB15_Msk (0x1UL << CAN_F4R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F4R1_FB15 CAN_F4R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F4R1_FB16_Pos (16U)
#define CAN_F4R1_FB16_Msk (0x1UL << CAN_F4R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F4R1_FB16 CAN_F4R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F4R1_FB17_Pos (17U)
#define CAN_F4R1_FB17_Msk (0x1UL << CAN_F4R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F4R1_FB17 CAN_F4R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F4R1_FB18_Pos (18U)
#define CAN_F4R1_FB18_Msk (0x1UL << CAN_F4R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F4R1_FB18 CAN_F4R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F4R1_FB19_Pos (19U)
#define CAN_F4R1_FB19_Msk (0x1UL << CAN_F4R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F4R1_FB19 CAN_F4R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F4R1_FB20_Pos (20U)
#define CAN_F4R1_FB20_Msk (0x1UL << CAN_F4R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F4R1_FB20 CAN_F4R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F4R1_FB21_Pos (21U)
#define CAN_F4R1_FB21_Msk (0x1UL << CAN_F4R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F4R1_FB21 CAN_F4R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F4R1_FB22_Pos (22U)
#define CAN_F4R1_FB22_Msk (0x1UL << CAN_F4R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F4R1_FB22 CAN_F4R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F4R1_FB23_Pos (23U)
#define CAN_F4R1_FB23_Msk (0x1UL << CAN_F4R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F4R1_FB23 CAN_F4R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F4R1_FB24_Pos (24U)
#define CAN_F4R1_FB24_Msk (0x1UL << CAN_F4R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F4R1_FB24 CAN_F4R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F4R1_FB25_Pos (25U)
#define CAN_F4R1_FB25_Msk (0x1UL << CAN_F4R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F4R1_FB25 CAN_F4R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F4R1_FB26_Pos (26U)
#define CAN_F4R1_FB26_Msk (0x1UL << CAN_F4R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F4R1_FB26 CAN_F4R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F4R1_FB27_Pos (27U)
#define CAN_F4R1_FB27_Msk (0x1UL << CAN_F4R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F4R1_FB27 CAN_F4R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F4R1_FB28_Pos (28U)
#define CAN_F4R1_FB28_Msk (0x1UL << CAN_F4R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F4R1_FB28 CAN_F4R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F4R1_FB29_Pos (29U)
#define CAN_F4R1_FB29_Msk (0x1UL << CAN_F4R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F4R1_FB29 CAN_F4R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F4R1_FB30_Pos (30U)
#define CAN_F4R1_FB30_Msk (0x1UL << CAN_F4R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F4R1_FB30 CAN_F4R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F4R1_FB31_Pos (31U)
#define CAN_F4R1_FB31_Msk (0x1UL << CAN_F4R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F4R1_FB31 CAN_F4R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F5R1 register  *******************/
#define CAN_F5R1_FB0_Pos (0U)
#define CAN_F5R1_FB0_Msk (0x1UL << CAN_F5R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F5R1_FB0 CAN_F5R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F5R1_FB1_Pos (1U)
#define CAN_F5R1_FB1_Msk (0x1UL << CAN_F5R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F5R1_FB1 CAN_F5R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F5R1_FB2_Pos (2U)
#define CAN_F5R1_FB2_Msk (0x1UL << CAN_F5R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F5R1_FB2 CAN_F5R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F5R1_FB3_Pos (3U)
#define CAN_F5R1_FB3_Msk (0x1UL << CAN_F5R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F5R1_FB3 CAN_F5R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F5R1_FB4_Pos (4U)
#define CAN_F5R1_FB4_Msk (0x1UL << CAN_F5R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F5R1_FB4 CAN_F5R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F5R1_FB5_Pos (5U)
#define CAN_F5R1_FB5_Msk (0x1UL << CAN_F5R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F5R1_FB5 CAN_F5R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F5R1_FB6_Pos (6U)
#define CAN_F5R1_FB6_Msk (0x1UL << CAN_F5R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F5R1_FB6 CAN_F5R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F5R1_FB7_Pos (7U)
#define CAN_F5R1_FB7_Msk (0x1UL << CAN_F5R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F5R1_FB7 CAN_F5R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F5R1_FB8_Pos (8U)
#define CAN_F5R1_FB8_Msk (0x1UL << CAN_F5R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F5R1_FB8 CAN_F5R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F5R1_FB9_Pos (9U)
#define CAN_F5R1_FB9_Msk (0x1UL << CAN_F5R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F5R1_FB9 CAN_F5R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F5R1_FB10_Pos (10U)
#define CAN_F5R1_FB10_Msk (0x1UL << CAN_F5R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F5R1_FB10 CAN_F5R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F5R1_FB11_Pos (11U)
#define CAN_F5R1_FB11_Msk (0x1UL << CAN_F5R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F5R1_FB11 CAN_F5R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F5R1_FB12_Pos (12U)
#define CAN_F5R1_FB12_Msk (0x1UL << CAN_F5R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F5R1_FB12 CAN_F5R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F5R1_FB13_Pos (13U)
#define CAN_F5R1_FB13_Msk (0x1UL << CAN_F5R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F5R1_FB13 CAN_F5R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F5R1_FB14_Pos (14U)
#define CAN_F5R1_FB14_Msk (0x1UL << CAN_F5R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F5R1_FB14 CAN_F5R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F5R1_FB15_Pos (15U)
#define CAN_F5R1_FB15_Msk (0x1UL << CAN_F5R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F5R1_FB15 CAN_F5R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F5R1_FB16_Pos (16U)
#define CAN_F5R1_FB16_Msk (0x1UL << CAN_F5R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F5R1_FB16 CAN_F5R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F5R1_FB17_Pos (17U)
#define CAN_F5R1_FB17_Msk (0x1UL << CAN_F5R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F5R1_FB17 CAN_F5R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F5R1_FB18_Pos (18U)
#define CAN_F5R1_FB18_Msk (0x1UL << CAN_F5R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F5R1_FB18 CAN_F5R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F5R1_FB19_Pos (19U)
#define CAN_F5R1_FB19_Msk (0x1UL << CAN_F5R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F5R1_FB19 CAN_F5R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F5R1_FB20_Pos (20U)
#define CAN_F5R1_FB20_Msk (0x1UL << CAN_F5R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F5R1_FB20 CAN_F5R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F5R1_FB21_Pos (21U)
#define CAN_F5R1_FB21_Msk (0x1UL << CAN_F5R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F5R1_FB21 CAN_F5R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F5R1_FB22_Pos (22U)
#define CAN_F5R1_FB22_Msk (0x1UL << CAN_F5R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F5R1_FB22 CAN_F5R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F5R1_FB23_Pos (23U)
#define CAN_F5R1_FB23_Msk (0x1UL << CAN_F5R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F5R1_FB23 CAN_F5R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F5R1_FB24_Pos (24U)
#define CAN_F5R1_FB24_Msk (0x1UL << CAN_F5R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F5R1_FB24 CAN_F5R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F5R1_FB25_Pos (25U)
#define CAN_F5R1_FB25_Msk (0x1UL << CAN_F5R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F5R1_FB25 CAN_F5R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F5R1_FB26_Pos (26U)
#define CAN_F5R1_FB26_Msk (0x1UL << CAN_F5R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F5R1_FB26 CAN_F5R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F5R1_FB27_Pos (27U)
#define CAN_F5R1_FB27_Msk (0x1UL << CAN_F5R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F5R1_FB27 CAN_F5R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F5R1_FB28_Pos (28U)
#define CAN_F5R1_FB28_Msk (0x1UL << CAN_F5R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F5R1_FB28 CAN_F5R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F5R1_FB29_Pos (29U)
#define CAN_F5R1_FB29_Msk (0x1UL << CAN_F5R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F5R1_FB29 CAN_F5R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F5R1_FB30_Pos (30U)
#define CAN_F5R1_FB30_Msk (0x1UL << CAN_F5R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F5R1_FB30 CAN_F5R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F5R1_FB31_Pos (31U)
#define CAN_F5R1_FB31_Msk (0x1UL << CAN_F5R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F5R1_FB31 CAN_F5R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F6R1 register  *******************/
#define CAN_F6R1_FB0_Pos (0U)
#define CAN_F6R1_FB0_Msk (0x1UL << CAN_F6R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F6R1_FB0 CAN_F6R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F6R1_FB1_Pos (1U)
#define CAN_F6R1_FB1_Msk (0x1UL << CAN_F6R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F6R1_FB1 CAN_F6R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F6R1_FB2_Pos (2U)
#define CAN_F6R1_FB2_Msk (0x1UL << CAN_F6R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F6R1_FB2 CAN_F6R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F6R1_FB3_Pos (3U)
#define CAN_F6R1_FB3_Msk (0x1UL << CAN_F6R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F6R1_FB3 CAN_F6R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F6R1_FB4_Pos (4U)
#define CAN_F6R1_FB4_Msk (0x1UL << CAN_F6R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F6R1_FB4 CAN_F6R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F6R1_FB5_Pos (5U)
#define CAN_F6R1_FB5_Msk (0x1UL << CAN_F6R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F6R1_FB5 CAN_F6R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F6R1_FB6_Pos (6U)
#define CAN_F6R1_FB6_Msk (0x1UL << CAN_F6R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F6R1_FB6 CAN_F6R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F6R1_FB7_Pos (7U)
#define CAN_F6R1_FB7_Msk (0x1UL << CAN_F6R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F6R1_FB7 CAN_F6R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F6R1_FB8_Pos (8U)
#define CAN_F6R1_FB8_Msk (0x1UL << CAN_F6R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F6R1_FB8 CAN_F6R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F6R1_FB9_Pos (9U)
#define CAN_F6R1_FB9_Msk (0x1UL << CAN_F6R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F6R1_FB9 CAN_F6R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F6R1_FB10_Pos (10U)
#define CAN_F6R1_FB10_Msk (0x1UL << CAN_F6R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F6R1_FB10 CAN_F6R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F6R1_FB11_Pos (11U)
#define CAN_F6R1_FB11_Msk (0x1UL << CAN_F6R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F6R1_FB11 CAN_F6R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F6R1_FB12_Pos (12U)
#define CAN_F6R1_FB12_Msk (0x1UL << CAN_F6R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F6R1_FB12 CAN_F6R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F6R1_FB13_Pos (13U)
#define CAN_F6R1_FB13_Msk (0x1UL << CAN_F6R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F6R1_FB13 CAN_F6R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F6R1_FB14_Pos (14U)
#define CAN_F6R1_FB14_Msk (0x1UL << CAN_F6R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F6R1_FB14 CAN_F6R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F6R1_FB15_Pos (15U)
#define CAN_F6R1_FB15_Msk (0x1UL << CAN_F6R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F6R1_FB15 CAN_F6R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F6R1_FB16_Pos (16U)
#define CAN_F6R1_FB16_Msk (0x1UL << CAN_F6R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F6R1_FB16 CAN_F6R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F6R1_FB17_Pos (17U)
#define CAN_F6R1_FB17_Msk (0x1UL << CAN_F6R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F6R1_FB17 CAN_F6R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F6R1_FB18_Pos (18U)
#define CAN_F6R1_FB18_Msk (0x1UL << CAN_F6R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F6R1_FB18 CAN_F6R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F6R1_FB19_Pos (19U)
#define CAN_F6R1_FB19_Msk (0x1UL << CAN_F6R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F6R1_FB19 CAN_F6R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F6R1_FB20_Pos (20U)
#define CAN_F6R1_FB20_Msk (0x1UL << CAN_F6R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F6R1_FB20 CAN_F6R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F6R1_FB21_Pos (21U)
#define CAN_F6R1_FB21_Msk (0x1UL << CAN_F6R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F6R1_FB21 CAN_F6R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F6R1_FB22_Pos (22U)
#define CAN_F6R1_FB22_Msk (0x1UL << CAN_F6R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F6R1_FB22 CAN_F6R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F6R1_FB23_Pos (23U)
#define CAN_F6R1_FB23_Msk (0x1UL << CAN_F6R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F6R1_FB23 CAN_F6R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F6R1_FB24_Pos (24U)
#define CAN_F6R1_FB24_Msk (0x1UL << CAN_F6R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F6R1_FB24 CAN_F6R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F6R1_FB25_Pos (25U)
#define CAN_F6R1_FB25_Msk (0x1UL << CAN_F6R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F6R1_FB25 CAN_F6R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F6R1_FB26_Pos (26U)
#define CAN_F6R1_FB26_Msk (0x1UL << CAN_F6R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F6R1_FB26 CAN_F6R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F6R1_FB27_Pos (27U)
#define CAN_F6R1_FB27_Msk (0x1UL << CAN_F6R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F6R1_FB27 CAN_F6R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F6R1_FB28_Pos (28U)
#define CAN_F6R1_FB28_Msk (0x1UL << CAN_F6R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F6R1_FB28 CAN_F6R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F6R1_FB29_Pos (29U)
#define CAN_F6R1_FB29_Msk (0x1UL << CAN_F6R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F6R1_FB29 CAN_F6R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F6R1_FB30_Pos (30U)
#define CAN_F6R1_FB30_Msk (0x1UL << CAN_F6R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F6R1_FB30 CAN_F6R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F6R1_FB31_Pos (31U)
#define CAN_F6R1_FB31_Msk (0x1UL << CAN_F6R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F6R1_FB31 CAN_F6R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F7R1 register  *******************/
#define CAN_F7R1_FB0_Pos (0U)
#define CAN_F7R1_FB0_Msk (0x1UL << CAN_F7R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F7R1_FB0 CAN_F7R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F7R1_FB1_Pos (1U)
#define CAN_F7R1_FB1_Msk (0x1UL << CAN_F7R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F7R1_FB1 CAN_F7R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F7R1_FB2_Pos (2U)
#define CAN_F7R1_FB2_Msk (0x1UL << CAN_F7R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F7R1_FB2 CAN_F7R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F7R1_FB3_Pos (3U)
#define CAN_F7R1_FB3_Msk (0x1UL << CAN_F7R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F7R1_FB3 CAN_F7R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F7R1_FB4_Pos (4U)
#define CAN_F7R1_FB4_Msk (0x1UL << CAN_F7R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F7R1_FB4 CAN_F7R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F7R1_FB5_Pos (5U)
#define CAN_F7R1_FB5_Msk (0x1UL << CAN_F7R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F7R1_FB5 CAN_F7R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F7R1_FB6_Pos (6U)
#define CAN_F7R1_FB6_Msk (0x1UL << CAN_F7R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F7R1_FB6 CAN_F7R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F7R1_FB7_Pos (7U)
#define CAN_F7R1_FB7_Msk (0x1UL << CAN_F7R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F7R1_FB7 CAN_F7R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F7R1_FB8_Pos (8U)
#define CAN_F7R1_FB8_Msk (0x1UL << CAN_F7R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F7R1_FB8 CAN_F7R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F7R1_FB9_Pos (9U)
#define CAN_F7R1_FB9_Msk (0x1UL << CAN_F7R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F7R1_FB9 CAN_F7R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F7R1_FB10_Pos (10U)
#define CAN_F7R1_FB10_Msk (0x1UL << CAN_F7R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F7R1_FB10 CAN_F7R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F7R1_FB11_Pos (11U)
#define CAN_F7R1_FB11_Msk (0x1UL << CAN_F7R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F7R1_FB11 CAN_F7R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F7R1_FB12_Pos (12U)
#define CAN_F7R1_FB12_Msk (0x1UL << CAN_F7R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F7R1_FB12 CAN_F7R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F7R1_FB13_Pos (13U)
#define CAN_F7R1_FB13_Msk (0x1UL << CAN_F7R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F7R1_FB13 CAN_F7R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F7R1_FB14_Pos (14U)
#define CAN_F7R1_FB14_Msk (0x1UL << CAN_F7R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F7R1_FB14 CAN_F7R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F7R1_FB15_Pos (15U)
#define CAN_F7R1_FB15_Msk (0x1UL << CAN_F7R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F7R1_FB15 CAN_F7R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F7R1_FB16_Pos (16U)
#define CAN_F7R1_FB16_Msk (0x1UL << CAN_F7R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F7R1_FB16 CAN_F7R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F7R1_FB17_Pos (17U)
#define CAN_F7R1_FB17_Msk (0x1UL << CAN_F7R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F7R1_FB17 CAN_F7R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F7R1_FB18_Pos (18U)
#define CAN_F7R1_FB18_Msk (0x1UL << CAN_F7R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F7R1_FB18 CAN_F7R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F7R1_FB19_Pos (19U)
#define CAN_F7R1_FB19_Msk (0x1UL << CAN_F7R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F7R1_FB19 CAN_F7R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F7R1_FB20_Pos (20U)
#define CAN_F7R1_FB20_Msk (0x1UL << CAN_F7R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F7R1_FB20 CAN_F7R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F7R1_FB21_Pos (21U)
#define CAN_F7R1_FB21_Msk (0x1UL << CAN_F7R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F7R1_FB21 CAN_F7R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F7R1_FB22_Pos (22U)
#define CAN_F7R1_FB22_Msk (0x1UL << CAN_F7R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F7R1_FB22 CAN_F7R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F7R1_FB23_Pos (23U)
#define CAN_F7R1_FB23_Msk (0x1UL << CAN_F7R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F7R1_FB23 CAN_F7R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F7R1_FB24_Pos (24U)
#define CAN_F7R1_FB24_Msk (0x1UL << CAN_F7R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F7R1_FB24 CAN_F7R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F7R1_FB25_Pos (25U)
#define CAN_F7R1_FB25_Msk (0x1UL << CAN_F7R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F7R1_FB25 CAN_F7R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F7R1_FB26_Pos (26U)
#define CAN_F7R1_FB26_Msk (0x1UL << CAN_F7R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F7R1_FB26 CAN_F7R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F7R1_FB27_Pos (27U)
#define CAN_F7R1_FB27_Msk (0x1UL << CAN_F7R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F7R1_FB27 CAN_F7R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F7R1_FB28_Pos (28U)
#define CAN_F7R1_FB28_Msk (0x1UL << CAN_F7R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F7R1_FB28 CAN_F7R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F7R1_FB29_Pos (29U)
#define CAN_F7R1_FB29_Msk (0x1UL << CAN_F7R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F7R1_FB29 CAN_F7R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F7R1_FB30_Pos (30U)
#define CAN_F7R1_FB30_Msk (0x1UL << CAN_F7R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F7R1_FB30 CAN_F7R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F7R1_FB31_Pos (31U)
#define CAN_F7R1_FB31_Msk (0x1UL << CAN_F7R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F7R1_FB31 CAN_F7R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F8R1 register  *******************/
#define CAN_F8R1_FB0_Pos (0U)
#define CAN_F8R1_FB0_Msk (0x1UL << CAN_F8R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F8R1_FB0 CAN_F8R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F8R1_FB1_Pos (1U)
#define CAN_F8R1_FB1_Msk (0x1UL << CAN_F8R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F8R1_FB1 CAN_F8R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F8R1_FB2_Pos (2U)
#define CAN_F8R1_FB2_Msk (0x1UL << CAN_F8R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F8R1_FB2 CAN_F8R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F8R1_FB3_Pos (3U)
#define CAN_F8R1_FB3_Msk (0x1UL << CAN_F8R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F8R1_FB3 CAN_F8R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F8R1_FB4_Pos (4U)
#define CAN_F8R1_FB4_Msk (0x1UL << CAN_F8R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F8R1_FB4 CAN_F8R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F8R1_FB5_Pos (5U)
#define CAN_F8R1_FB5_Msk (0x1UL << CAN_F8R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F8R1_FB5 CAN_F8R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F8R1_FB6_Pos (6U)
#define CAN_F8R1_FB6_Msk (0x1UL << CAN_F8R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F8R1_FB6 CAN_F8R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F8R1_FB7_Pos (7U)
#define CAN_F8R1_FB7_Msk (0x1UL << CAN_F8R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F8R1_FB7 CAN_F8R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F8R1_FB8_Pos (8U)
#define CAN_F8R1_FB8_Msk (0x1UL << CAN_F8R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F8R1_FB8 CAN_F8R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F8R1_FB9_Pos (9U)
#define CAN_F8R1_FB9_Msk (0x1UL << CAN_F8R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F8R1_FB9 CAN_F8R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F8R1_FB10_Pos (10U)
#define CAN_F8R1_FB10_Msk (0x1UL << CAN_F8R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F8R1_FB10 CAN_F8R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F8R1_FB11_Pos (11U)
#define CAN_F8R1_FB11_Msk (0x1UL << CAN_F8R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F8R1_FB11 CAN_F8R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F8R1_FB12_Pos (12U)
#define CAN_F8R1_FB12_Msk (0x1UL << CAN_F8R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F8R1_FB12 CAN_F8R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F8R1_FB13_Pos (13U)
#define CAN_F8R1_FB13_Msk (0x1UL << CAN_F8R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F8R1_FB13 CAN_F8R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F8R1_FB14_Pos (14U)
#define CAN_F8R1_FB14_Msk (0x1UL << CAN_F8R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F8R1_FB14 CAN_F8R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F8R1_FB15_Pos (15U)
#define CAN_F8R1_FB15_Msk (0x1UL << CAN_F8R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F8R1_FB15 CAN_F8R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F8R1_FB16_Pos (16U)
#define CAN_F8R1_FB16_Msk (0x1UL << CAN_F8R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F8R1_FB16 CAN_F8R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F8R1_FB17_Pos (17U)
#define CAN_F8R1_FB17_Msk (0x1UL << CAN_F8R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F8R1_FB17 CAN_F8R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F8R1_FB18_Pos (18U)
#define CAN_F8R1_FB18_Msk (0x1UL << CAN_F8R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F8R1_FB18 CAN_F8R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F8R1_FB19_Pos (19U)
#define CAN_F8R1_FB19_Msk (0x1UL << CAN_F8R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F8R1_FB19 CAN_F8R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F8R1_FB20_Pos (20U)
#define CAN_F8R1_FB20_Msk (0x1UL << CAN_F8R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F8R1_FB20 CAN_F8R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F8R1_FB21_Pos (21U)
#define CAN_F8R1_FB21_Msk (0x1UL << CAN_F8R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F8R1_FB21 CAN_F8R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F8R1_FB22_Pos (22U)
#define CAN_F8R1_FB22_Msk (0x1UL << CAN_F8R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F8R1_FB22 CAN_F8R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F8R1_FB23_Pos (23U)
#define CAN_F8R1_FB23_Msk (0x1UL << CAN_F8R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F8R1_FB23 CAN_F8R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F8R1_FB24_Pos (24U)
#define CAN_F8R1_FB24_Msk (0x1UL << CAN_F8R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F8R1_FB24 CAN_F8R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F8R1_FB25_Pos (25U)
#define CAN_F8R1_FB25_Msk (0x1UL << CAN_F8R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F8R1_FB25 CAN_F8R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F8R1_FB26_Pos (26U)
#define CAN_F8R1_FB26_Msk (0x1UL << CAN_F8R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F8R1_FB26 CAN_F8R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F8R1_FB27_Pos (27U)
#define CAN_F8R1_FB27_Msk (0x1UL << CAN_F8R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F8R1_FB27 CAN_F8R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F8R1_FB28_Pos (28U)
#define CAN_F8R1_FB28_Msk (0x1UL << CAN_F8R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F8R1_FB28 CAN_F8R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F8R1_FB29_Pos (29U)
#define CAN_F8R1_FB29_Msk (0x1UL << CAN_F8R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F8R1_FB29 CAN_F8R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F8R1_FB30_Pos (30U)
#define CAN_F8R1_FB30_Msk (0x1UL << CAN_F8R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F8R1_FB30 CAN_F8R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F8R1_FB31_Pos (31U)
#define CAN_F8R1_FB31_Msk (0x1UL << CAN_F8R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F8R1_FB31 CAN_F8R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F9R1 register  *******************/
#define CAN_F9R1_FB0_Pos (0U)
#define CAN_F9R1_FB0_Msk (0x1UL << CAN_F9R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F9R1_FB0 CAN_F9R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F9R1_FB1_Pos (1U)
#define CAN_F9R1_FB1_Msk (0x1UL << CAN_F9R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F9R1_FB1 CAN_F9R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F9R1_FB2_Pos (2U)
#define CAN_F9R1_FB2_Msk (0x1UL << CAN_F9R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F9R1_FB2 CAN_F9R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F9R1_FB3_Pos (3U)
#define CAN_F9R1_FB3_Msk (0x1UL << CAN_F9R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F9R1_FB3 CAN_F9R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F9R1_FB4_Pos (4U)
#define CAN_F9R1_FB4_Msk (0x1UL << CAN_F9R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F9R1_FB4 CAN_F9R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F9R1_FB5_Pos (5U)
#define CAN_F9R1_FB5_Msk (0x1UL << CAN_F9R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F9R1_FB5 CAN_F9R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F9R1_FB6_Pos (6U)
#define CAN_F9R1_FB6_Msk (0x1UL << CAN_F9R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F9R1_FB6 CAN_F9R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F9R1_FB7_Pos (7U)
#define CAN_F9R1_FB7_Msk (0x1UL << CAN_F9R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F9R1_FB7 CAN_F9R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F9R1_FB8_Pos (8U)
#define CAN_F9R1_FB8_Msk (0x1UL << CAN_F9R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F9R1_FB8 CAN_F9R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F9R1_FB9_Pos (9U)
#define CAN_F9R1_FB9_Msk (0x1UL << CAN_F9R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F9R1_FB9 CAN_F9R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F9R1_FB10_Pos (10U)
#define CAN_F9R1_FB10_Msk (0x1UL << CAN_F9R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F9R1_FB10 CAN_F9R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F9R1_FB11_Pos (11U)
#define CAN_F9R1_FB11_Msk (0x1UL << CAN_F9R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F9R1_FB11 CAN_F9R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F9R1_FB12_Pos (12U)
#define CAN_F9R1_FB12_Msk (0x1UL << CAN_F9R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F9R1_FB12 CAN_F9R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F9R1_FB13_Pos (13U)
#define CAN_F9R1_FB13_Msk (0x1UL << CAN_F9R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F9R1_FB13 CAN_F9R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F9R1_FB14_Pos (14U)
#define CAN_F9R1_FB14_Msk (0x1UL << CAN_F9R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F9R1_FB14 CAN_F9R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F9R1_FB15_Pos (15U)
#define CAN_F9R1_FB15_Msk (0x1UL << CAN_F9R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F9R1_FB15 CAN_F9R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F9R1_FB16_Pos (16U)
#define CAN_F9R1_FB16_Msk (0x1UL << CAN_F9R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F9R1_FB16 CAN_F9R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F9R1_FB17_Pos (17U)
#define CAN_F9R1_FB17_Msk (0x1UL << CAN_F9R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F9R1_FB17 CAN_F9R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F9R1_FB18_Pos (18U)
#define CAN_F9R1_FB18_Msk (0x1UL << CAN_F9R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F9R1_FB18 CAN_F9R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F9R1_FB19_Pos (19U)
#define CAN_F9R1_FB19_Msk (0x1UL << CAN_F9R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F9R1_FB19 CAN_F9R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F9R1_FB20_Pos (20U)
#define CAN_F9R1_FB20_Msk (0x1UL << CAN_F9R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F9R1_FB20 CAN_F9R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F9R1_FB21_Pos (21U)
#define CAN_F9R1_FB21_Msk (0x1UL << CAN_F9R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F9R1_FB21 CAN_F9R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F9R1_FB22_Pos (22U)
#define CAN_F9R1_FB22_Msk (0x1UL << CAN_F9R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F9R1_FB22 CAN_F9R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F9R1_FB23_Pos (23U)
#define CAN_F9R1_FB23_Msk (0x1UL << CAN_F9R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F9R1_FB23 CAN_F9R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F9R1_FB24_Pos (24U)
#define CAN_F9R1_FB24_Msk (0x1UL << CAN_F9R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F9R1_FB24 CAN_F9R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F9R1_FB25_Pos (25U)
#define CAN_F9R1_FB25_Msk (0x1UL << CAN_F9R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F9R1_FB25 CAN_F9R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F9R1_FB26_Pos (26U)
#define CAN_F9R1_FB26_Msk (0x1UL << CAN_F9R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F9R1_FB26 CAN_F9R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F9R1_FB27_Pos (27U)
#define CAN_F9R1_FB27_Msk (0x1UL << CAN_F9R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F9R1_FB27 CAN_F9R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F9R1_FB28_Pos (28U)
#define CAN_F9R1_FB28_Msk (0x1UL << CAN_F9R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F9R1_FB28 CAN_F9R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F9R1_FB29_Pos (29U)
#define CAN_F9R1_FB29_Msk (0x1UL << CAN_F9R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F9R1_FB29 CAN_F9R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F9R1_FB30_Pos (30U)
#define CAN_F9R1_FB30_Msk (0x1UL << CAN_F9R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F9R1_FB30 CAN_F9R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F9R1_FB31_Pos (31U)
#define CAN_F9R1_FB31_Msk (0x1UL << CAN_F9R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F9R1_FB31 CAN_F9R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F10R1 register  ******************/
#define CAN_F10R1_FB0_Pos (0U)
#define CAN_F10R1_FB0_Msk (0x1UL << CAN_F10R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F10R1_FB0 CAN_F10R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F10R1_FB1_Pos (1U)
#define CAN_F10R1_FB1_Msk (0x1UL << CAN_F10R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F10R1_FB1 CAN_F10R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F10R1_FB2_Pos (2U)
#define CAN_F10R1_FB2_Msk (0x1UL << CAN_F10R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F10R1_FB2 CAN_F10R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F10R1_FB3_Pos (3U)
#define CAN_F10R1_FB3_Msk (0x1UL << CAN_F10R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F10R1_FB3 CAN_F10R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F10R1_FB4_Pos (4U)
#define CAN_F10R1_FB4_Msk (0x1UL << CAN_F10R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F10R1_FB4 CAN_F10R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F10R1_FB5_Pos (5U)
#define CAN_F10R1_FB5_Msk (0x1UL << CAN_F10R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F10R1_FB5 CAN_F10R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F10R1_FB6_Pos (6U)
#define CAN_F10R1_FB6_Msk (0x1UL << CAN_F10R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F10R1_FB6 CAN_F10R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F10R1_FB7_Pos (7U)
#define CAN_F10R1_FB7_Msk (0x1UL << CAN_F10R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F10R1_FB7 CAN_F10R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F10R1_FB8_Pos (8U)
#define CAN_F10R1_FB8_Msk (0x1UL << CAN_F10R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F10R1_FB8 CAN_F10R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F10R1_FB9_Pos (9U)
#define CAN_F10R1_FB9_Msk (0x1UL << CAN_F10R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F10R1_FB9 CAN_F10R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F10R1_FB10_Pos (10U)
#define CAN_F10R1_FB10_Msk (0x1UL << CAN_F10R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F10R1_FB10 CAN_F10R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F10R1_FB11_Pos (11U)
#define CAN_F10R1_FB11_Msk (0x1UL << CAN_F10R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F10R1_FB11 CAN_F10R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F10R1_FB12_Pos (12U)
#define CAN_F10R1_FB12_Msk (0x1UL << CAN_F10R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F10R1_FB12 CAN_F10R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F10R1_FB13_Pos (13U)
#define CAN_F10R1_FB13_Msk (0x1UL << CAN_F10R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F10R1_FB13 CAN_F10R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F10R1_FB14_Pos (14U)
#define CAN_F10R1_FB14_Msk (0x1UL << CAN_F10R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F10R1_FB14 CAN_F10R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F10R1_FB15_Pos (15U)
#define CAN_F10R1_FB15_Msk (0x1UL << CAN_F10R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F10R1_FB15 CAN_F10R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F10R1_FB16_Pos (16U)
#define CAN_F10R1_FB16_Msk (0x1UL << CAN_F10R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F10R1_FB16 CAN_F10R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F10R1_FB17_Pos (17U)
#define CAN_F10R1_FB17_Msk (0x1UL << CAN_F10R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F10R1_FB17 CAN_F10R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F10R1_FB18_Pos (18U)
#define CAN_F10R1_FB18_Msk (0x1UL << CAN_F10R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F10R1_FB18 CAN_F10R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F10R1_FB19_Pos (19U)
#define CAN_F10R1_FB19_Msk (0x1UL << CAN_F10R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F10R1_FB19 CAN_F10R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F10R1_FB20_Pos (20U)
#define CAN_F10R1_FB20_Msk (0x1UL << CAN_F10R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F10R1_FB20 CAN_F10R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F10R1_FB21_Pos (21U)
#define CAN_F10R1_FB21_Msk (0x1UL << CAN_F10R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F10R1_FB21 CAN_F10R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F10R1_FB22_Pos (22U)
#define CAN_F10R1_FB22_Msk (0x1UL << CAN_F10R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F10R1_FB22 CAN_F10R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F10R1_FB23_Pos (23U)
#define CAN_F10R1_FB23_Msk (0x1UL << CAN_F10R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F10R1_FB23 CAN_F10R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F10R1_FB24_Pos (24U)
#define CAN_F10R1_FB24_Msk (0x1UL << CAN_F10R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F10R1_FB24 CAN_F10R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F10R1_FB25_Pos (25U)
#define CAN_F10R1_FB25_Msk (0x1UL << CAN_F10R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F10R1_FB25 CAN_F10R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F10R1_FB26_Pos (26U)
#define CAN_F10R1_FB26_Msk (0x1UL << CAN_F10R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F10R1_FB26 CAN_F10R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F10R1_FB27_Pos (27U)
#define CAN_F10R1_FB27_Msk (0x1UL << CAN_F10R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F10R1_FB27 CAN_F10R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F10R1_FB28_Pos (28U)
#define CAN_F10R1_FB28_Msk (0x1UL << CAN_F10R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F10R1_FB28 CAN_F10R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F10R1_FB29_Pos (29U)
#define CAN_F10R1_FB29_Msk (0x1UL << CAN_F10R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F10R1_FB29 CAN_F10R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F10R1_FB30_Pos (30U)
#define CAN_F10R1_FB30_Msk (0x1UL << CAN_F10R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F10R1_FB30 CAN_F10R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F10R1_FB31_Pos (31U)
#define CAN_F10R1_FB31_Msk (0x1UL << CAN_F10R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F10R1_FB31 CAN_F10R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F11R1 register  ******************/
#define CAN_F11R1_FB0_Pos (0U)
#define CAN_F11R1_FB0_Msk (0x1UL << CAN_F11R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F11R1_FB0 CAN_F11R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F11R1_FB1_Pos (1U)
#define CAN_F11R1_FB1_Msk (0x1UL << CAN_F11R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F11R1_FB1 CAN_F11R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F11R1_FB2_Pos (2U)
#define CAN_F11R1_FB2_Msk (0x1UL << CAN_F11R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F11R1_FB2 CAN_F11R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F11R1_FB3_Pos (3U)
#define CAN_F11R1_FB3_Msk (0x1UL << CAN_F11R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F11R1_FB3 CAN_F11R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F11R1_FB4_Pos (4U)
#define CAN_F11R1_FB4_Msk (0x1UL << CAN_F11R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F11R1_FB4 CAN_F11R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F11R1_FB5_Pos (5U)
#define CAN_F11R1_FB5_Msk (0x1UL << CAN_F11R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F11R1_FB5 CAN_F11R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F11R1_FB6_Pos (6U)
#define CAN_F11R1_FB6_Msk (0x1UL << CAN_F11R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F11R1_FB6 CAN_F11R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F11R1_FB7_Pos (7U)
#define CAN_F11R1_FB7_Msk (0x1UL << CAN_F11R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F11R1_FB7 CAN_F11R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F11R1_FB8_Pos (8U)
#define CAN_F11R1_FB8_Msk (0x1UL << CAN_F11R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F11R1_FB8 CAN_F11R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F11R1_FB9_Pos (9U)
#define CAN_F11R1_FB9_Msk (0x1UL << CAN_F11R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F11R1_FB9 CAN_F11R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F11R1_FB10_Pos (10U)
#define CAN_F11R1_FB10_Msk (0x1UL << CAN_F11R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F11R1_FB10 CAN_F11R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F11R1_FB11_Pos (11U)
#define CAN_F11R1_FB11_Msk (0x1UL << CAN_F11R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F11R1_FB11 CAN_F11R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F11R1_FB12_Pos (12U)
#define CAN_F11R1_FB12_Msk (0x1UL << CAN_F11R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F11R1_FB12 CAN_F11R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F11R1_FB13_Pos (13U)
#define CAN_F11R1_FB13_Msk (0x1UL << CAN_F11R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F11R1_FB13 CAN_F11R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F11R1_FB14_Pos (14U)
#define CAN_F11R1_FB14_Msk (0x1UL << CAN_F11R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F11R1_FB14 CAN_F11R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F11R1_FB15_Pos (15U)
#define CAN_F11R1_FB15_Msk (0x1UL << CAN_F11R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F11R1_FB15 CAN_F11R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F11R1_FB16_Pos (16U)
#define CAN_F11R1_FB16_Msk (0x1UL << CAN_F11R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F11R1_FB16 CAN_F11R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F11R1_FB17_Pos (17U)
#define CAN_F11R1_FB17_Msk (0x1UL << CAN_F11R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F11R1_FB17 CAN_F11R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F11R1_FB18_Pos (18U)
#define CAN_F11R1_FB18_Msk (0x1UL << CAN_F11R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F11R1_FB18 CAN_F11R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F11R1_FB19_Pos (19U)
#define CAN_F11R1_FB19_Msk (0x1UL << CAN_F11R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F11R1_FB19 CAN_F11R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F11R1_FB20_Pos (20U)
#define CAN_F11R1_FB20_Msk (0x1UL << CAN_F11R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F11R1_FB20 CAN_F11R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F11R1_FB21_Pos (21U)
#define CAN_F11R1_FB21_Msk (0x1UL << CAN_F11R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F11R1_FB21 CAN_F11R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F11R1_FB22_Pos (22U)
#define CAN_F11R1_FB22_Msk (0x1UL << CAN_F11R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F11R1_FB22 CAN_F11R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F11R1_FB23_Pos (23U)
#define CAN_F11R1_FB23_Msk (0x1UL << CAN_F11R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F11R1_FB23 CAN_F11R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F11R1_FB24_Pos (24U)
#define CAN_F11R1_FB24_Msk (0x1UL << CAN_F11R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F11R1_FB24 CAN_F11R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F11R1_FB25_Pos (25U)
#define CAN_F11R1_FB25_Msk (0x1UL << CAN_F11R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F11R1_FB25 CAN_F11R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F11R1_FB26_Pos (26U)
#define CAN_F11R1_FB26_Msk (0x1UL << CAN_F11R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F11R1_FB26 CAN_F11R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F11R1_FB27_Pos (27U)
#define CAN_F11R1_FB27_Msk (0x1UL << CAN_F11R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F11R1_FB27 CAN_F11R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F11R1_FB28_Pos (28U)
#define CAN_F11R1_FB28_Msk (0x1UL << CAN_F11R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F11R1_FB28 CAN_F11R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F11R1_FB29_Pos (29U)
#define CAN_F11R1_FB29_Msk (0x1UL << CAN_F11R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F11R1_FB29 CAN_F11R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F11R1_FB30_Pos (30U)
#define CAN_F11R1_FB30_Msk (0x1UL << CAN_F11R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F11R1_FB30 CAN_F11R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F11R1_FB31_Pos (31U)
#define CAN_F11R1_FB31_Msk (0x1UL << CAN_F11R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F11R1_FB31 CAN_F11R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F12R1 register  ******************/
#define CAN_F12R1_FB0_Pos (0U)
#define CAN_F12R1_FB0_Msk (0x1UL << CAN_F12R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F12R1_FB0 CAN_F12R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F12R1_FB1_Pos (1U)
#define CAN_F12R1_FB1_Msk (0x1UL << CAN_F12R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F12R1_FB1 CAN_F12R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F12R1_FB2_Pos (2U)
#define CAN_F12R1_FB2_Msk (0x1UL << CAN_F12R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F12R1_FB2 CAN_F12R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F12R1_FB3_Pos (3U)
#define CAN_F12R1_FB3_Msk (0x1UL << CAN_F12R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F12R1_FB3 CAN_F12R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F12R1_FB4_Pos (4U)
#define CAN_F12R1_FB4_Msk (0x1UL << CAN_F12R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F12R1_FB4 CAN_F12R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F12R1_FB5_Pos (5U)
#define CAN_F12R1_FB5_Msk (0x1UL << CAN_F12R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F12R1_FB5 CAN_F12R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F12R1_FB6_Pos (6U)
#define CAN_F12R1_FB6_Msk (0x1UL << CAN_F12R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F12R1_FB6 CAN_F12R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F12R1_FB7_Pos (7U)
#define CAN_F12R1_FB7_Msk (0x1UL << CAN_F12R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F12R1_FB7 CAN_F12R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F12R1_FB8_Pos (8U)
#define CAN_F12R1_FB8_Msk (0x1UL << CAN_F12R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F12R1_FB8 CAN_F12R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F12R1_FB9_Pos (9U)
#define CAN_F12R1_FB9_Msk (0x1UL << CAN_F12R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F12R1_FB9 CAN_F12R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F12R1_FB10_Pos (10U)
#define CAN_F12R1_FB10_Msk (0x1UL << CAN_F12R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F12R1_FB10 CAN_F12R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F12R1_FB11_Pos (11U)
#define CAN_F12R1_FB11_Msk (0x1UL << CAN_F12R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F12R1_FB11 CAN_F12R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F12R1_FB12_Pos (12U)
#define CAN_F12R1_FB12_Msk (0x1UL << CAN_F12R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F12R1_FB12 CAN_F12R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F12R1_FB13_Pos (13U)
#define CAN_F12R1_FB13_Msk (0x1UL << CAN_F12R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F12R1_FB13 CAN_F12R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F12R1_FB14_Pos (14U)
#define CAN_F12R1_FB14_Msk (0x1UL << CAN_F12R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F12R1_FB14 CAN_F12R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F12R1_FB15_Pos (15U)
#define CAN_F12R1_FB15_Msk (0x1UL << CAN_F12R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F12R1_FB15 CAN_F12R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F12R1_FB16_Pos (16U)
#define CAN_F12R1_FB16_Msk (0x1UL << CAN_F12R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F12R1_FB16 CAN_F12R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F12R1_FB17_Pos (17U)
#define CAN_F12R1_FB17_Msk (0x1UL << CAN_F12R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F12R1_FB17 CAN_F12R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F12R1_FB18_Pos (18U)
#define CAN_F12R1_FB18_Msk (0x1UL << CAN_F12R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F12R1_FB18 CAN_F12R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F12R1_FB19_Pos (19U)
#define CAN_F12R1_FB19_Msk (0x1UL << CAN_F12R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F12R1_FB19 CAN_F12R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F12R1_FB20_Pos (20U)
#define CAN_F12R1_FB20_Msk (0x1UL << CAN_F12R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F12R1_FB20 CAN_F12R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F12R1_FB21_Pos (21U)
#define CAN_F12R1_FB21_Msk (0x1UL << CAN_F12R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F12R1_FB21 CAN_F12R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F12R1_FB22_Pos (22U)
#define CAN_F12R1_FB22_Msk (0x1UL << CAN_F12R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F12R1_FB22 CAN_F12R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F12R1_FB23_Pos (23U)
#define CAN_F12R1_FB23_Msk (0x1UL << CAN_F12R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F12R1_FB23 CAN_F12R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F12R1_FB24_Pos (24U)
#define CAN_F12R1_FB24_Msk (0x1UL << CAN_F12R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F12R1_FB24 CAN_F12R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F12R1_FB25_Pos (25U)
#define CAN_F12R1_FB25_Msk (0x1UL << CAN_F12R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F12R1_FB25 CAN_F12R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F12R1_FB26_Pos (26U)
#define CAN_F12R1_FB26_Msk (0x1UL << CAN_F12R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F12R1_FB26 CAN_F12R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F12R1_FB27_Pos (27U)
#define CAN_F12R1_FB27_Msk (0x1UL << CAN_F12R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F12R1_FB27 CAN_F12R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F12R1_FB28_Pos (28U)
#define CAN_F12R1_FB28_Msk (0x1UL << CAN_F12R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F12R1_FB28 CAN_F12R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F12R1_FB29_Pos (29U)
#define CAN_F12R1_FB29_Msk (0x1UL << CAN_F12R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F12R1_FB29 CAN_F12R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F12R1_FB30_Pos (30U)
#define CAN_F12R1_FB30_Msk (0x1UL << CAN_F12R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F12R1_FB30 CAN_F12R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F12R1_FB31_Pos (31U)
#define CAN_F12R1_FB31_Msk (0x1UL << CAN_F12R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F12R1_FB31 CAN_F12R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F13R1 register  ******************/
#define CAN_F13R1_FB0_Pos (0U)
#define CAN_F13R1_FB0_Msk (0x1UL << CAN_F13R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F13R1_FB0 CAN_F13R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F13R1_FB1_Pos (1U)
#define CAN_F13R1_FB1_Msk (0x1UL << CAN_F13R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F13R1_FB1 CAN_F13R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F13R1_FB2_Pos (2U)
#define CAN_F13R1_FB2_Msk (0x1UL << CAN_F13R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F13R1_FB2 CAN_F13R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F13R1_FB3_Pos (3U)
#define CAN_F13R1_FB3_Msk (0x1UL << CAN_F13R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F13R1_FB3 CAN_F13R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F13R1_FB4_Pos (4U)
#define CAN_F13R1_FB4_Msk (0x1UL << CAN_F13R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F13R1_FB4 CAN_F13R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F13R1_FB5_Pos (5U)
#define CAN_F13R1_FB5_Msk (0x1UL << CAN_F13R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F13R1_FB5 CAN_F13R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F13R1_FB6_Pos (6U)
#define CAN_F13R1_FB6_Msk (0x1UL << CAN_F13R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F13R1_FB6 CAN_F13R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F13R1_FB7_Pos (7U)
#define CAN_F13R1_FB7_Msk (0x1UL << CAN_F13R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F13R1_FB7 CAN_F13R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F13R1_FB8_Pos (8U)
#define CAN_F13R1_FB8_Msk (0x1UL << CAN_F13R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F13R1_FB8 CAN_F13R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F13R1_FB9_Pos (9U)
#define CAN_F13R1_FB9_Msk (0x1UL << CAN_F13R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F13R1_FB9 CAN_F13R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F13R1_FB10_Pos (10U)
#define CAN_F13R1_FB10_Msk (0x1UL << CAN_F13R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F13R1_FB10 CAN_F13R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F13R1_FB11_Pos (11U)
#define CAN_F13R1_FB11_Msk (0x1UL << CAN_F13R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F13R1_FB11 CAN_F13R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F13R1_FB12_Pos (12U)
#define CAN_F13R1_FB12_Msk (0x1UL << CAN_F13R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F13R1_FB12 CAN_F13R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F13R1_FB13_Pos (13U)
#define CAN_F13R1_FB13_Msk (0x1UL << CAN_F13R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F13R1_FB13 CAN_F13R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F13R1_FB14_Pos (14U)
#define CAN_F13R1_FB14_Msk (0x1UL << CAN_F13R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F13R1_FB14 CAN_F13R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F13R1_FB15_Pos (15U)
#define CAN_F13R1_FB15_Msk (0x1UL << CAN_F13R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F13R1_FB15 CAN_F13R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F13R1_FB16_Pos (16U)
#define CAN_F13R1_FB16_Msk (0x1UL << CAN_F13R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F13R1_FB16 CAN_F13R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F13R1_FB17_Pos (17U)
#define CAN_F13R1_FB17_Msk (0x1UL << CAN_F13R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F13R1_FB17 CAN_F13R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F13R1_FB18_Pos (18U)
#define CAN_F13R1_FB18_Msk (0x1UL << CAN_F13R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F13R1_FB18 CAN_F13R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F13R1_FB19_Pos (19U)
#define CAN_F13R1_FB19_Msk (0x1UL << CAN_F13R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F13R1_FB19 CAN_F13R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F13R1_FB20_Pos (20U)
#define CAN_F13R1_FB20_Msk (0x1UL << CAN_F13R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F13R1_FB20 CAN_F13R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F13R1_FB21_Pos (21U)
#define CAN_F13R1_FB21_Msk (0x1UL << CAN_F13R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F13R1_FB21 CAN_F13R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F13R1_FB22_Pos (22U)
#define CAN_F13R1_FB22_Msk (0x1UL << CAN_F13R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F13R1_FB22 CAN_F13R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F13R1_FB23_Pos (23U)
#define CAN_F13R1_FB23_Msk (0x1UL << CAN_F13R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F13R1_FB23 CAN_F13R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F13R1_FB24_Pos (24U)
#define CAN_F13R1_FB24_Msk (0x1UL << CAN_F13R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F13R1_FB24 CAN_F13R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F13R1_FB25_Pos (25U)
#define CAN_F13R1_FB25_Msk (0x1UL << CAN_F13R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F13R1_FB25 CAN_F13R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F13R1_FB26_Pos (26U)
#define CAN_F13R1_FB26_Msk (0x1UL << CAN_F13R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F13R1_FB26 CAN_F13R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F13R1_FB27_Pos (27U)
#define CAN_F13R1_FB27_Msk (0x1UL << CAN_F13R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F13R1_FB27 CAN_F13R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F13R1_FB28_Pos (28U)
#define CAN_F13R1_FB28_Msk (0x1UL << CAN_F13R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F13R1_FB28 CAN_F13R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F13R1_FB29_Pos (29U)
#define CAN_F13R1_FB29_Msk (0x1UL << CAN_F13R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F13R1_FB29 CAN_F13R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F13R1_FB30_Pos (30U)
#define CAN_F13R1_FB30_Msk (0x1UL << CAN_F13R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F13R1_FB30 CAN_F13R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F13R1_FB31_Pos (31U)
#define CAN_F13R1_FB31_Msk (0x1UL << CAN_F13R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F13R1_FB31 CAN_F13R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F14R1 register  ******************/
#define CAN_F14R1_FB0_Pos (0U)
#define CAN_F14R1_FB0_Msk (0x1UL << CAN_F14R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F14R1_FB0 CAN_F14R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F14R1_FB1_Pos (1U)
#define CAN_F14R1_FB1_Msk (0x1UL << CAN_F14R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F14R1_FB1 CAN_F14R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F14R1_FB2_Pos (2U)
#define CAN_F14R1_FB2_Msk (0x1UL << CAN_F14R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F14R1_FB2 CAN_F14R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F14R1_FB3_Pos (3U)
#define CAN_F14R1_FB3_Msk (0x1UL << CAN_F14R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F14R1_FB3 CAN_F14R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F14R1_FB4_Pos (4U)
#define CAN_F14R1_FB4_Msk (0x1UL << CAN_F14R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F14R1_FB4 CAN_F14R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F14R1_FB5_Pos (5U)
#define CAN_F14R1_FB5_Msk (0x1UL << CAN_F14R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F14R1_FB5 CAN_F14R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F14R1_FB6_Pos (6U)
#define CAN_F14R1_FB6_Msk (0x1UL << CAN_F14R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F14R1_FB6 CAN_F14R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F14R1_FB7_Pos (7U)
#define CAN_F14R1_FB7_Msk (0x1UL << CAN_F14R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F14R1_FB7 CAN_F14R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F14R1_FB8_Pos (8U)
#define CAN_F14R1_FB8_Msk (0x1UL << CAN_F14R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F14R1_FB8 CAN_F14R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F14R1_FB9_Pos (9U)
#define CAN_F14R1_FB9_Msk (0x1UL << CAN_F14R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F14R1_FB9 CAN_F14R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F14R1_FB10_Pos (10U)
#define CAN_F14R1_FB10_Msk (0x1UL << CAN_F14R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F14R1_FB10 CAN_F14R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F14R1_FB11_Pos (11U)
#define CAN_F14R1_FB11_Msk (0x1UL << CAN_F14R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F14R1_FB11 CAN_F14R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F14R1_FB12_Pos (12U)
#define CAN_F14R1_FB12_Msk (0x1UL << CAN_F14R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F14R1_FB12 CAN_F14R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F14R1_FB13_Pos (13U)
#define CAN_F14R1_FB13_Msk (0x1UL << CAN_F14R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F14R1_FB13 CAN_F14R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F14R1_FB14_Pos (14U)
#define CAN_F14R1_FB14_Msk (0x1UL << CAN_F14R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F14R1_FB14 CAN_F14R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F14R1_FB15_Pos (15U)
#define CAN_F14R1_FB15_Msk (0x1UL << CAN_F14R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F14R1_FB15 CAN_F14R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F14R1_FB16_Pos (16U)
#define CAN_F14R1_FB16_Msk (0x1UL << CAN_F14R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F14R1_FB16 CAN_F14R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F14R1_FB17_Pos (17U)
#define CAN_F14R1_FB17_Msk (0x1UL << CAN_F14R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F14R1_FB17 CAN_F14R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F14R1_FB18_Pos (18U)
#define CAN_F14R1_FB18_Msk (0x1UL << CAN_F14R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F14R1_FB18 CAN_F14R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F14R1_FB19_Pos (19U)
#define CAN_F14R1_FB19_Msk (0x1UL << CAN_F14R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F14R1_FB19 CAN_F14R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F14R1_FB20_Pos (20U)
#define CAN_F14R1_FB20_Msk (0x1UL << CAN_F14R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F14R1_FB20 CAN_F14R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F14R1_FB21_Pos (21U)
#define CAN_F14R1_FB21_Msk (0x1UL << CAN_F14R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F14R1_FB21 CAN_F14R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F14R1_FB22_Pos (22U)
#define CAN_F14R1_FB22_Msk (0x1UL << CAN_F14R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F14R1_FB22 CAN_F14R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F14R1_FB23_Pos (23U)
#define CAN_F14R1_FB23_Msk (0x1UL << CAN_F14R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F14R1_FB23 CAN_F14R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F14R1_FB24_Pos (24U)
#define CAN_F14R1_FB24_Msk (0x1UL << CAN_F14R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F14R1_FB24 CAN_F14R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F14R1_FB25_Pos (25U)
#define CAN_F14R1_FB25_Msk (0x1UL << CAN_F14R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F14R1_FB25 CAN_F14R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F14R1_FB26_Pos (26U)
#define CAN_F14R1_FB26_Msk (0x1UL << CAN_F14R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F14R1_FB26 CAN_F14R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F14R1_FB27_Pos (27U)
#define CAN_F14R1_FB27_Msk (0x1UL << CAN_F14R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F14R1_FB27 CAN_F14R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F14R1_FB28_Pos (28U)
#define CAN_F14R1_FB28_Msk (0x1UL << CAN_F14R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F14R1_FB28 CAN_F14R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F14R1_FB29_Pos (29U)
#define CAN_F14R1_FB29_Msk (0x1UL << CAN_F14R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F14R1_FB29 CAN_F14R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F14R1_FB30_Pos (30U)
#define CAN_F14R1_FB30_Msk (0x1UL << CAN_F14R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F14R1_FB30 CAN_F14R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F14R1_FB31_Pos (31U)
#define CAN_F14R1_FB31_Msk (0x1UL << CAN_F14R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F14R1_FB31 CAN_F14R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F15R1 register  ******************/
#define CAN_F15R1_FB0_Pos (0U)
#define CAN_F15R1_FB0_Msk (0x1UL << CAN_F15R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F15R1_FB0 CAN_F15R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F15R1_FB1_Pos (1U)
#define CAN_F15R1_FB1_Msk (0x1UL << CAN_F15R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F15R1_FB1 CAN_F15R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F15R1_FB2_Pos (2U)
#define CAN_F15R1_FB2_Msk (0x1UL << CAN_F15R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F15R1_FB2 CAN_F15R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F15R1_FB3_Pos (3U)
#define CAN_F15R1_FB3_Msk (0x1UL << CAN_F15R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F15R1_FB3 CAN_F15R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F15R1_FB4_Pos (4U)
#define CAN_F15R1_FB4_Msk (0x1UL << CAN_F15R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F15R1_FB4 CAN_F15R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F15R1_FB5_Pos (5U)
#define CAN_F15R1_FB5_Msk (0x1UL << CAN_F15R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F15R1_FB5 CAN_F15R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F15R1_FB6_Pos (6U)
#define CAN_F15R1_FB6_Msk (0x1UL << CAN_F15R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F15R1_FB6 CAN_F15R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F15R1_FB7_Pos (7U)
#define CAN_F15R1_FB7_Msk (0x1UL << CAN_F15R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F15R1_FB7 CAN_F15R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F15R1_FB8_Pos (8U)
#define CAN_F15R1_FB8_Msk (0x1UL << CAN_F15R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F15R1_FB8 CAN_F15R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F15R1_FB9_Pos (9U)
#define CAN_F15R1_FB9_Msk (0x1UL << CAN_F15R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F15R1_FB9 CAN_F15R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F15R1_FB10_Pos (10U)
#define CAN_F15R1_FB10_Msk (0x1UL << CAN_F15R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F15R1_FB10 CAN_F15R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F15R1_FB11_Pos (11U)
#define CAN_F15R1_FB11_Msk (0x1UL << CAN_F15R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F15R1_FB11 CAN_F15R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F15R1_FB12_Pos (12U)
#define CAN_F15R1_FB12_Msk (0x1UL << CAN_F15R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F15R1_FB12 CAN_F15R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F15R1_FB13_Pos (13U)
#define CAN_F15R1_FB13_Msk (0x1UL << CAN_F15R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F15R1_FB13 CAN_F15R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F15R1_FB14_Pos (14U)
#define CAN_F15R1_FB14_Msk (0x1UL << CAN_F15R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F15R1_FB14 CAN_F15R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F15R1_FB15_Pos (15U)
#define CAN_F15R1_FB15_Msk (0x1UL << CAN_F15R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F15R1_FB15 CAN_F15R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F15R1_FB16_Pos (16U)
#define CAN_F15R1_FB16_Msk (0x1UL << CAN_F15R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F15R1_FB16 CAN_F15R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F15R1_FB17_Pos (17U)
#define CAN_F15R1_FB17_Msk (0x1UL << CAN_F15R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F15R1_FB17 CAN_F15R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F15R1_FB18_Pos (18U)
#define CAN_F15R1_FB18_Msk (0x1UL << CAN_F15R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F15R1_FB18 CAN_F15R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F15R1_FB19_Pos (19U)
#define CAN_F15R1_FB19_Msk (0x1UL << CAN_F15R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F15R1_FB19 CAN_F15R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F15R1_FB20_Pos (20U)
#define CAN_F15R1_FB20_Msk (0x1UL << CAN_F15R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F15R1_FB20 CAN_F15R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F15R1_FB21_Pos (21U)
#define CAN_F15R1_FB21_Msk (0x1UL << CAN_F15R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F15R1_FB21 CAN_F15R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F15R1_FB22_Pos (22U)
#define CAN_F15R1_FB22_Msk (0x1UL << CAN_F15R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F15R1_FB22 CAN_F15R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F15R1_FB23_Pos (23U)
#define CAN_F15R1_FB23_Msk (0x1UL << CAN_F15R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F15R1_FB23 CAN_F15R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F15R1_FB24_Pos (24U)
#define CAN_F15R1_FB24_Msk (0x1UL << CAN_F15R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F15R1_FB24 CAN_F15R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F15R1_FB25_Pos (25U)
#define CAN_F15R1_FB25_Msk (0x1UL << CAN_F15R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F15R1_FB25 CAN_F15R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F15R1_FB26_Pos (26U)
#define CAN_F15R1_FB26_Msk (0x1UL << CAN_F15R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F15R1_FB26 CAN_F15R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F15R1_FB27_Pos (27U)
#define CAN_F15R1_FB27_Msk (0x1UL << CAN_F15R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F15R1_FB27 CAN_F15R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F15R1_FB28_Pos (28U)
#define CAN_F15R1_FB28_Msk (0x1UL << CAN_F15R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F15R1_FB28 CAN_F15R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F15R1_FB29_Pos (29U)
#define CAN_F15R1_FB29_Msk (0x1UL << CAN_F15R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F15R1_FB29 CAN_F15R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F15R1_FB30_Pos (30U)
#define CAN_F15R1_FB30_Msk (0x1UL << CAN_F15R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F15R1_FB30 CAN_F15R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F15R1_FB31_Pos (31U)
#define CAN_F15R1_FB31_Msk (0x1UL << CAN_F15R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F15R1_FB31 CAN_F15R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F16R1 register  ******************/
#define CAN_F16R1_FB0_Pos (0U)
#define CAN_F16R1_FB0_Msk (0x1UL << CAN_F16R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F16R1_FB0 CAN_F16R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F16R1_FB1_Pos (1U)
#define CAN_F16R1_FB1_Msk (0x1UL << CAN_F16R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F16R1_FB1 CAN_F16R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F16R1_FB2_Pos (2U)
#define CAN_F16R1_FB2_Msk (0x1UL << CAN_F16R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F16R1_FB2 CAN_F16R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F16R1_FB3_Pos (3U)
#define CAN_F16R1_FB3_Msk (0x1UL << CAN_F16R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F16R1_FB3 CAN_F16R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F16R1_FB4_Pos (4U)
#define CAN_F16R1_FB4_Msk (0x1UL << CAN_F16R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F16R1_FB4 CAN_F16R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F16R1_FB5_Pos (5U)
#define CAN_F16R1_FB5_Msk (0x1UL << CAN_F16R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F16R1_FB5 CAN_F16R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F16R1_FB6_Pos (6U)
#define CAN_F16R1_FB6_Msk (0x1UL << CAN_F16R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F16R1_FB6 CAN_F16R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F16R1_FB7_Pos (7U)
#define CAN_F16R1_FB7_Msk (0x1UL << CAN_F16R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F16R1_FB7 CAN_F16R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F16R1_FB8_Pos (8U)
#define CAN_F16R1_FB8_Msk (0x1UL << CAN_F16R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F16R1_FB8 CAN_F16R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F16R1_FB9_Pos (9U)
#define CAN_F16R1_FB9_Msk (0x1UL << CAN_F16R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F16R1_FB9 CAN_F16R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F16R1_FB10_Pos (10U)
#define CAN_F16R1_FB10_Msk (0x1UL << CAN_F16R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F16R1_FB10 CAN_F16R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F16R1_FB11_Pos (11U)
#define CAN_F16R1_FB11_Msk (0x1UL << CAN_F16R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F16R1_FB11 CAN_F16R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F16R1_FB12_Pos (12U)
#define CAN_F16R1_FB12_Msk (0x1UL << CAN_F16R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F16R1_FB12 CAN_F16R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F16R1_FB13_Pos (13U)
#define CAN_F16R1_FB13_Msk (0x1UL << CAN_F16R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F16R1_FB13 CAN_F16R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F16R1_FB14_Pos (14U)
#define CAN_F16R1_FB14_Msk (0x1UL << CAN_F16R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F16R1_FB14 CAN_F16R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F16R1_FB15_Pos (15U)
#define CAN_F16R1_FB15_Msk (0x1UL << CAN_F16R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F16R1_FB15 CAN_F16R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F16R1_FB16_Pos (16U)
#define CAN_F16R1_FB16_Msk (0x1UL << CAN_F16R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F16R1_FB16 CAN_F16R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F16R1_FB17_Pos (17U)
#define CAN_F16R1_FB17_Msk (0x1UL << CAN_F16R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F16R1_FB17 CAN_F16R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F16R1_FB18_Pos (18U)
#define CAN_F16R1_FB18_Msk (0x1UL << CAN_F16R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F16R1_FB18 CAN_F16R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F16R1_FB19_Pos (19U)
#define CAN_F16R1_FB19_Msk (0x1UL << CAN_F16R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F16R1_FB19 CAN_F16R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F16R1_FB20_Pos (20U)
#define CAN_F16R1_FB20_Msk (0x1UL << CAN_F16R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F16R1_FB20 CAN_F16R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F16R1_FB21_Pos (21U)
#define CAN_F16R1_FB21_Msk (0x1UL << CAN_F16R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F16R1_FB21 CAN_F16R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F16R1_FB22_Pos (22U)
#define CAN_F16R1_FB22_Msk (0x1UL << CAN_F16R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F16R1_FB22 CAN_F16R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F16R1_FB23_Pos (23U)
#define CAN_F16R1_FB23_Msk (0x1UL << CAN_F16R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F16R1_FB23 CAN_F16R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F16R1_FB24_Pos (24U)
#define CAN_F16R1_FB24_Msk (0x1UL << CAN_F16R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F16R1_FB24 CAN_F16R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F16R1_FB25_Pos (25U)
#define CAN_F16R1_FB25_Msk (0x1UL << CAN_F16R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F16R1_FB25 CAN_F16R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F16R1_FB26_Pos (26U)
#define CAN_F16R1_FB26_Msk (0x1UL << CAN_F16R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F16R1_FB26 CAN_F16R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F16R1_FB27_Pos (27U)
#define CAN_F16R1_FB27_Msk (0x1UL << CAN_F16R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F16R1_FB27 CAN_F16R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F16R1_FB28_Pos (28U)
#define CAN_F16R1_FB28_Msk (0x1UL << CAN_F16R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F16R1_FB28 CAN_F16R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F16R1_FB29_Pos (29U)
#define CAN_F16R1_FB29_Msk (0x1UL << CAN_F16R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F16R1_FB29 CAN_F16R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F16R1_FB30_Pos (30U)
#define CAN_F16R1_FB30_Msk (0x1UL << CAN_F16R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F16R1_FB30 CAN_F16R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F16R1_FB31_Pos (31U)
#define CAN_F16R1_FB31_Msk (0x1UL << CAN_F16R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F16R1_FB31 CAN_F16R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F17R1 register  ******************/
#define CAN_F17R1_FB0_Pos (0U)
#define CAN_F17R1_FB0_Msk (0x1UL << CAN_F17R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F17R1_FB0 CAN_F17R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F17R1_FB1_Pos (1U)
#define CAN_F17R1_FB1_Msk (0x1UL << CAN_F17R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F17R1_FB1 CAN_F17R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F17R1_FB2_Pos (2U)
#define CAN_F17R1_FB2_Msk (0x1UL << CAN_F17R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F17R1_FB2 CAN_F17R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F17R1_FB3_Pos (3U)
#define CAN_F17R1_FB3_Msk (0x1UL << CAN_F17R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F17R1_FB3 CAN_F17R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F17R1_FB4_Pos (4U)
#define CAN_F17R1_FB4_Msk (0x1UL << CAN_F17R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F17R1_FB4 CAN_F17R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F17R1_FB5_Pos (5U)
#define CAN_F17R1_FB5_Msk (0x1UL << CAN_F17R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F17R1_FB5 CAN_F17R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F17R1_FB6_Pos (6U)
#define CAN_F17R1_FB6_Msk (0x1UL << CAN_F17R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F17R1_FB6 CAN_F17R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F17R1_FB7_Pos (7U)
#define CAN_F17R1_FB7_Msk (0x1UL << CAN_F17R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F17R1_FB7 CAN_F17R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F17R1_FB8_Pos (8U)
#define CAN_F17R1_FB8_Msk (0x1UL << CAN_F17R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F17R1_FB8 CAN_F17R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F17R1_FB9_Pos (9U)
#define CAN_F17R1_FB9_Msk (0x1UL << CAN_F17R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F17R1_FB9 CAN_F17R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F17R1_FB10_Pos (10U)
#define CAN_F17R1_FB10_Msk (0x1UL << CAN_F17R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F17R1_FB10 CAN_F17R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F17R1_FB11_Pos (11U)
#define CAN_F17R1_FB11_Msk (0x1UL << CAN_F17R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F17R1_FB11 CAN_F17R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F17R1_FB12_Pos (12U)
#define CAN_F17R1_FB12_Msk (0x1UL << CAN_F17R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F17R1_FB12 CAN_F17R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F17R1_FB13_Pos (13U)
#define CAN_F17R1_FB13_Msk (0x1UL << CAN_F17R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F17R1_FB13 CAN_F17R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F17R1_FB14_Pos (14U)
#define CAN_F17R1_FB14_Msk (0x1UL << CAN_F17R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F17R1_FB14 CAN_F17R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F17R1_FB15_Pos (15U)
#define CAN_F17R1_FB15_Msk (0x1UL << CAN_F17R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F17R1_FB15 CAN_F17R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F17R1_FB16_Pos (16U)
#define CAN_F17R1_FB16_Msk (0x1UL << CAN_F17R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F17R1_FB16 CAN_F17R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F17R1_FB17_Pos (17U)
#define CAN_F17R1_FB17_Msk (0x1UL << CAN_F17R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F17R1_FB17 CAN_F17R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F17R1_FB18_Pos (18U)
#define CAN_F17R1_FB18_Msk (0x1UL << CAN_F17R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F17R1_FB18 CAN_F17R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F17R1_FB19_Pos (19U)
#define CAN_F17R1_FB19_Msk (0x1UL << CAN_F17R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F17R1_FB19 CAN_F17R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F17R1_FB20_Pos (20U)
#define CAN_F17R1_FB20_Msk (0x1UL << CAN_F17R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F17R1_FB20 CAN_F17R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F17R1_FB21_Pos (21U)
#define CAN_F17R1_FB21_Msk (0x1UL << CAN_F17R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F17R1_FB21 CAN_F17R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F17R1_FB22_Pos (22U)
#define CAN_F17R1_FB22_Msk (0x1UL << CAN_F17R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F17R1_FB22 CAN_F17R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F17R1_FB23_Pos (23U)
#define CAN_F17R1_FB23_Msk (0x1UL << CAN_F17R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F17R1_FB23 CAN_F17R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F17R1_FB24_Pos (24U)
#define CAN_F17R1_FB24_Msk (0x1UL << CAN_F17R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F17R1_FB24 CAN_F17R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F17R1_FB25_Pos (25U)
#define CAN_F17R1_FB25_Msk (0x1UL << CAN_F17R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F17R1_FB25 CAN_F17R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F17R1_FB26_Pos (26U)
#define CAN_F17R1_FB26_Msk (0x1UL << CAN_F17R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F17R1_FB26 CAN_F17R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F17R1_FB27_Pos (27U)
#define CAN_F17R1_FB27_Msk (0x1UL << CAN_F17R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F17R1_FB27 CAN_F17R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F17R1_FB28_Pos (28U)
#define CAN_F17R1_FB28_Msk (0x1UL << CAN_F17R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F17R1_FB28 CAN_F17R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F17R1_FB29_Pos (29U)
#define CAN_F17R1_FB29_Msk (0x1UL << CAN_F17R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F17R1_FB29 CAN_F17R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F17R1_FB30_Pos (30U)
#define CAN_F17R1_FB30_Msk (0x1UL << CAN_F17R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F17R1_FB30 CAN_F17R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F17R1_FB31_Pos (31U)
#define CAN_F17R1_FB31_Msk (0x1UL << CAN_F17R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F17R1_FB31 CAN_F17R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F18R1 register  ******************/
#define CAN_F18R1_FB0_Pos (0U)
#define CAN_F18R1_FB0_Msk (0x1UL << CAN_F18R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F18R1_FB0 CAN_F18R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F18R1_FB1_Pos (1U)
#define CAN_F18R1_FB1_Msk (0x1UL << CAN_F18R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F18R1_FB1 CAN_F18R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F18R1_FB2_Pos (2U)
#define CAN_F18R1_FB2_Msk (0x1UL << CAN_F18R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F18R1_FB2 CAN_F18R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F18R1_FB3_Pos (3U)
#define CAN_F18R1_FB3_Msk (0x1UL << CAN_F18R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F18R1_FB3 CAN_F18R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F18R1_FB4_Pos (4U)
#define CAN_F18R1_FB4_Msk (0x1UL << CAN_F18R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F18R1_FB4 CAN_F18R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F18R1_FB5_Pos (5U)
#define CAN_F18R1_FB5_Msk (0x1UL << CAN_F18R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F18R1_FB5 CAN_F18R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F18R1_FB6_Pos (6U)
#define CAN_F18R1_FB6_Msk (0x1UL << CAN_F18R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F18R1_FB6 CAN_F18R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F18R1_FB7_Pos (7U)
#define CAN_F18R1_FB7_Msk (0x1UL << CAN_F18R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F18R1_FB7 CAN_F18R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F18R1_FB8_Pos (8U)
#define CAN_F18R1_FB8_Msk (0x1UL << CAN_F18R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F18R1_FB8 CAN_F18R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F18R1_FB9_Pos (9U)
#define CAN_F18R1_FB9_Msk (0x1UL << CAN_F18R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F18R1_FB9 CAN_F18R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F18R1_FB10_Pos (10U)
#define CAN_F18R1_FB10_Msk (0x1UL << CAN_F18R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F18R1_FB10 CAN_F18R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F18R1_FB11_Pos (11U)
#define CAN_F18R1_FB11_Msk (0x1UL << CAN_F18R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F18R1_FB11 CAN_F18R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F18R1_FB12_Pos (12U)
#define CAN_F18R1_FB12_Msk (0x1UL << CAN_F18R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F18R1_FB12 CAN_F18R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F18R1_FB13_Pos (13U)
#define CAN_F18R1_FB13_Msk (0x1UL << CAN_F18R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F18R1_FB13 CAN_F18R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F18R1_FB14_Pos (14U)
#define CAN_F18R1_FB14_Msk (0x1UL << CAN_F18R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F18R1_FB14 CAN_F18R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F18R1_FB15_Pos (15U)
#define CAN_F18R1_FB15_Msk (0x1UL << CAN_F18R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F18R1_FB15 CAN_F18R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F18R1_FB16_Pos (16U)
#define CAN_F18R1_FB16_Msk (0x1UL << CAN_F18R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F18R1_FB16 CAN_F18R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F18R1_FB17_Pos (17U)
#define CAN_F18R1_FB17_Msk (0x1UL << CAN_F18R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F18R1_FB17 CAN_F18R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F18R1_FB18_Pos (18U)
#define CAN_F18R1_FB18_Msk (0x1UL << CAN_F18R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F18R1_FB18 CAN_F18R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F18R1_FB19_Pos (19U)
#define CAN_F18R1_FB19_Msk (0x1UL << CAN_F18R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F18R1_FB19 CAN_F18R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F18R1_FB20_Pos (20U)
#define CAN_F18R1_FB20_Msk (0x1UL << CAN_F18R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F18R1_FB20 CAN_F18R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F18R1_FB21_Pos (21U)
#define CAN_F18R1_FB21_Msk (0x1UL << CAN_F18R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F18R1_FB21 CAN_F18R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F18R1_FB22_Pos (22U)
#define CAN_F18R1_FB22_Msk (0x1UL << CAN_F18R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F18R1_FB22 CAN_F18R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F18R1_FB23_Pos (23U)
#define CAN_F18R1_FB23_Msk (0x1UL << CAN_F18R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F18R1_FB23 CAN_F18R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F18R1_FB24_Pos (24U)
#define CAN_F18R1_FB24_Msk (0x1UL << CAN_F18R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F18R1_FB24 CAN_F18R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F18R1_FB25_Pos (25U)
#define CAN_F18R1_FB25_Msk (0x1UL << CAN_F18R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F18R1_FB25 CAN_F18R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F18R1_FB26_Pos (26U)
#define CAN_F18R1_FB26_Msk (0x1UL << CAN_F18R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F18R1_FB26 CAN_F18R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F18R1_FB27_Pos (27U)
#define CAN_F18R1_FB27_Msk (0x1UL << CAN_F18R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F18R1_FB27 CAN_F18R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F18R1_FB28_Pos (28U)
#define CAN_F18R1_FB28_Msk (0x1UL << CAN_F18R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F18R1_FB28 CAN_F18R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F18R1_FB29_Pos (29U)
#define CAN_F18R1_FB29_Msk (0x1UL << CAN_F18R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F18R1_FB29 CAN_F18R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F18R1_FB30_Pos (30U)
#define CAN_F18R1_FB30_Msk (0x1UL << CAN_F18R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F18R1_FB30 CAN_F18R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F18R1_FB31_Pos (31U)
#define CAN_F18R1_FB31_Msk (0x1UL << CAN_F18R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F18R1_FB31 CAN_F18R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F19R1 register  ******************/
#define CAN_F19R1_FB0_Pos (0U)
#define CAN_F19R1_FB0_Msk (0x1UL << CAN_F19R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F19R1_FB0 CAN_F19R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F19R1_FB1_Pos (1U)
#define CAN_F19R1_FB1_Msk (0x1UL << CAN_F19R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F19R1_FB1 CAN_F19R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F19R1_FB2_Pos (2U)
#define CAN_F19R1_FB2_Msk (0x1UL << CAN_F19R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F19R1_FB2 CAN_F19R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F19R1_FB3_Pos (3U)
#define CAN_F19R1_FB3_Msk (0x1UL << CAN_F19R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F19R1_FB3 CAN_F19R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F19R1_FB4_Pos (4U)
#define CAN_F19R1_FB4_Msk (0x1UL << CAN_F19R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F19R1_FB4 CAN_F19R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F19R1_FB5_Pos (5U)
#define CAN_F19R1_FB5_Msk (0x1UL << CAN_F19R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F19R1_FB5 CAN_F19R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F19R1_FB6_Pos (6U)
#define CAN_F19R1_FB6_Msk (0x1UL << CAN_F19R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F19R1_FB6 CAN_F19R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F19R1_FB7_Pos (7U)
#define CAN_F19R1_FB7_Msk (0x1UL << CAN_F19R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F19R1_FB7 CAN_F19R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F19R1_FB8_Pos (8U)
#define CAN_F19R1_FB8_Msk (0x1UL << CAN_F19R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F19R1_FB8 CAN_F19R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F19R1_FB9_Pos (9U)
#define CAN_F19R1_FB9_Msk (0x1UL << CAN_F19R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F19R1_FB9 CAN_F19R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F19R1_FB10_Pos (10U)
#define CAN_F19R1_FB10_Msk (0x1UL << CAN_F19R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F19R1_FB10 CAN_F19R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F19R1_FB11_Pos (11U)
#define CAN_F19R1_FB11_Msk (0x1UL << CAN_F19R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F19R1_FB11 CAN_F19R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F19R1_FB12_Pos (12U)
#define CAN_F19R1_FB12_Msk (0x1UL << CAN_F19R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F19R1_FB12 CAN_F19R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F19R1_FB13_Pos (13U)
#define CAN_F19R1_FB13_Msk (0x1UL << CAN_F19R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F19R1_FB13 CAN_F19R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F19R1_FB14_Pos (14U)
#define CAN_F19R1_FB14_Msk (0x1UL << CAN_F19R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F19R1_FB14 CAN_F19R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F19R1_FB15_Pos (15U)
#define CAN_F19R1_FB15_Msk (0x1UL << CAN_F19R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F19R1_FB15 CAN_F19R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F19R1_FB16_Pos (16U)
#define CAN_F19R1_FB16_Msk (0x1UL << CAN_F19R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F19R1_FB16 CAN_F19R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F19R1_FB17_Pos (17U)
#define CAN_F19R1_FB17_Msk (0x1UL << CAN_F19R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F19R1_FB17 CAN_F19R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F19R1_FB18_Pos (18U)
#define CAN_F19R1_FB18_Msk (0x1UL << CAN_F19R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F19R1_FB18 CAN_F19R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F19R1_FB19_Pos (19U)
#define CAN_F19R1_FB19_Msk (0x1UL << CAN_F19R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F19R1_FB19 CAN_F19R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F19R1_FB20_Pos (20U)
#define CAN_F19R1_FB20_Msk (0x1UL << CAN_F19R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F19R1_FB20 CAN_F19R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F19R1_FB21_Pos (21U)
#define CAN_F19R1_FB21_Msk (0x1UL << CAN_F19R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F19R1_FB21 CAN_F19R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F19R1_FB22_Pos (22U)
#define CAN_F19R1_FB22_Msk (0x1UL << CAN_F19R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F19R1_FB22 CAN_F19R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F19R1_FB23_Pos (23U)
#define CAN_F19R1_FB23_Msk (0x1UL << CAN_F19R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F19R1_FB23 CAN_F19R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F19R1_FB24_Pos (24U)
#define CAN_F19R1_FB24_Msk (0x1UL << CAN_F19R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F19R1_FB24 CAN_F19R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F19R1_FB25_Pos (25U)
#define CAN_F19R1_FB25_Msk (0x1UL << CAN_F19R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F19R1_FB25 CAN_F19R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F19R1_FB26_Pos (26U)
#define CAN_F19R1_FB26_Msk (0x1UL << CAN_F19R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F19R1_FB26 CAN_F19R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F19R1_FB27_Pos (27U)
#define CAN_F19R1_FB27_Msk (0x1UL << CAN_F19R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F19R1_FB27 CAN_F19R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F19R1_FB28_Pos (28U)
#define CAN_F19R1_FB28_Msk (0x1UL << CAN_F19R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F19R1_FB28 CAN_F19R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F19R1_FB29_Pos (29U)
#define CAN_F19R1_FB29_Msk (0x1UL << CAN_F19R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F19R1_FB29 CAN_F19R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F19R1_FB30_Pos (30U)
#define CAN_F19R1_FB30_Msk (0x1UL << CAN_F19R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F19R1_FB30 CAN_F19R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F19R1_FB31_Pos (31U)
#define CAN_F19R1_FB31_Msk (0x1UL << CAN_F19R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F19R1_FB31 CAN_F19R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F20R1 register  ******************/
#define CAN_F20R1_FB0_Pos (0U)
#define CAN_F20R1_FB0_Msk (0x1UL << CAN_F20R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F20R1_FB0 CAN_F20R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F20R1_FB1_Pos (1U)
#define CAN_F20R1_FB1_Msk (0x1UL << CAN_F20R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F20R1_FB1 CAN_F20R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F20R1_FB2_Pos (2U)
#define CAN_F20R1_FB2_Msk (0x1UL << CAN_F20R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F20R1_FB2 CAN_F20R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F20R1_FB3_Pos (3U)
#define CAN_F20R1_FB3_Msk (0x1UL << CAN_F20R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F20R1_FB3 CAN_F20R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F20R1_FB4_Pos (4U)
#define CAN_F20R1_FB4_Msk (0x1UL << CAN_F20R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F20R1_FB4 CAN_F20R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F20R1_FB5_Pos (5U)
#define CAN_F20R1_FB5_Msk (0x1UL << CAN_F20R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F20R1_FB5 CAN_F20R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F20R1_FB6_Pos (6U)
#define CAN_F20R1_FB6_Msk (0x1UL << CAN_F20R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F20R1_FB6 CAN_F20R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F20R1_FB7_Pos (7U)
#define CAN_F20R1_FB7_Msk (0x1UL << CAN_F20R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F20R1_FB7 CAN_F20R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F20R1_FB8_Pos (8U)
#define CAN_F20R1_FB8_Msk (0x1UL << CAN_F20R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F20R1_FB8 CAN_F20R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F20R1_FB9_Pos (9U)
#define CAN_F20R1_FB9_Msk (0x1UL << CAN_F20R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F20R1_FB9 CAN_F20R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F20R1_FB10_Pos (10U)
#define CAN_F20R1_FB10_Msk (0x1UL << CAN_F20R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F20R1_FB10 CAN_F20R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F20R1_FB11_Pos (11U)
#define CAN_F20R1_FB11_Msk (0x1UL << CAN_F20R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F20R1_FB11 CAN_F20R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F20R1_FB12_Pos (12U)
#define CAN_F20R1_FB12_Msk (0x1UL << CAN_F20R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F20R1_FB12 CAN_F20R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F20R1_FB13_Pos (13U)
#define CAN_F20R1_FB13_Msk (0x1UL << CAN_F20R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F20R1_FB13 CAN_F20R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F20R1_FB14_Pos (14U)
#define CAN_F20R1_FB14_Msk (0x1UL << CAN_F20R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F20R1_FB14 CAN_F20R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F20R1_FB15_Pos (15U)
#define CAN_F20R1_FB15_Msk (0x1UL << CAN_F20R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F20R1_FB15 CAN_F20R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F20R1_FB16_Pos (16U)
#define CAN_F20R1_FB16_Msk (0x1UL << CAN_F20R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F20R1_FB16 CAN_F20R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F20R1_FB17_Pos (17U)
#define CAN_F20R1_FB17_Msk (0x1UL << CAN_F20R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F20R1_FB17 CAN_F20R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F20R1_FB18_Pos (18U)
#define CAN_F20R1_FB18_Msk (0x1UL << CAN_F20R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F20R1_FB18 CAN_F20R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F20R1_FB19_Pos (19U)
#define CAN_F20R1_FB19_Msk (0x1UL << CAN_F20R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F20R1_FB19 CAN_F20R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F20R1_FB20_Pos (20U)
#define CAN_F20R1_FB20_Msk (0x1UL << CAN_F20R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F20R1_FB20 CAN_F20R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F20R1_FB21_Pos (21U)
#define CAN_F20R1_FB21_Msk (0x1UL << CAN_F20R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F20R1_FB21 CAN_F20R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F20R1_FB22_Pos (22U)
#define CAN_F20R1_FB22_Msk (0x1UL << CAN_F20R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F20R1_FB22 CAN_F20R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F20R1_FB23_Pos (23U)
#define CAN_F20R1_FB23_Msk (0x1UL << CAN_F20R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F20R1_FB23 CAN_F20R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F20R1_FB24_Pos (24U)
#define CAN_F20R1_FB24_Msk (0x1UL << CAN_F20R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F20R1_FB24 CAN_F20R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F20R1_FB25_Pos (25U)
#define CAN_F20R1_FB25_Msk (0x1UL << CAN_F20R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F20R1_FB25 CAN_F20R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F20R1_FB26_Pos (26U)
#define CAN_F20R1_FB26_Msk (0x1UL << CAN_F20R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F20R1_FB26 CAN_F20R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F20R1_FB27_Pos (27U)
#define CAN_F20R1_FB27_Msk (0x1UL << CAN_F20R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F20R1_FB27 CAN_F20R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F20R1_FB28_Pos (28U)
#define CAN_F20R1_FB28_Msk (0x1UL << CAN_F20R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F20R1_FB28 CAN_F20R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F20R1_FB29_Pos (29U)
#define CAN_F20R1_FB29_Msk (0x1UL << CAN_F20R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F20R1_FB29 CAN_F20R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F20R1_FB30_Pos (30U)
#define CAN_F20R1_FB30_Msk (0x1UL << CAN_F20R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F20R1_FB30 CAN_F20R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F20R1_FB31_Pos (31U)
#define CAN_F20R1_FB31_Msk (0x1UL << CAN_F20R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F20R1_FB31 CAN_F20R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F21R1 register  ******************/
#define CAN_F21R1_FB0_Pos (0U)
#define CAN_F21R1_FB0_Msk (0x1UL << CAN_F21R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F21R1_FB0 CAN_F21R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F21R1_FB1_Pos (1U)
#define CAN_F21R1_FB1_Msk (0x1UL << CAN_F21R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F21R1_FB1 CAN_F21R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F21R1_FB2_Pos (2U)
#define CAN_F21R1_FB2_Msk (0x1UL << CAN_F21R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F21R1_FB2 CAN_F21R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F21R1_FB3_Pos (3U)
#define CAN_F21R1_FB3_Msk (0x1UL << CAN_F21R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F21R1_FB3 CAN_F21R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F21R1_FB4_Pos (4U)
#define CAN_F21R1_FB4_Msk (0x1UL << CAN_F21R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F21R1_FB4 CAN_F21R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F21R1_FB5_Pos (5U)
#define CAN_F21R1_FB5_Msk (0x1UL << CAN_F21R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F21R1_FB5 CAN_F21R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F21R1_FB6_Pos (6U)
#define CAN_F21R1_FB6_Msk (0x1UL << CAN_F21R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F21R1_FB6 CAN_F21R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F21R1_FB7_Pos (7U)
#define CAN_F21R1_FB7_Msk (0x1UL << CAN_F21R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F21R1_FB7 CAN_F21R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F21R1_FB8_Pos (8U)
#define CAN_F21R1_FB8_Msk (0x1UL << CAN_F21R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F21R1_FB8 CAN_F21R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F21R1_FB9_Pos (9U)
#define CAN_F21R1_FB9_Msk (0x1UL << CAN_F21R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F21R1_FB9 CAN_F21R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F21R1_FB10_Pos (10U)
#define CAN_F21R1_FB10_Msk (0x1UL << CAN_F21R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F21R1_FB10 CAN_F21R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F21R1_FB11_Pos (11U)
#define CAN_F21R1_FB11_Msk (0x1UL << CAN_F21R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F21R1_FB11 CAN_F21R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F21R1_FB12_Pos (12U)
#define CAN_F21R1_FB12_Msk (0x1UL << CAN_F21R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F21R1_FB12 CAN_F21R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F21R1_FB13_Pos (13U)
#define CAN_F21R1_FB13_Msk (0x1UL << CAN_F21R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F21R1_FB13 CAN_F21R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F21R1_FB14_Pos (14U)
#define CAN_F21R1_FB14_Msk (0x1UL << CAN_F21R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F21R1_FB14 CAN_F21R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F21R1_FB15_Pos (15U)
#define CAN_F21R1_FB15_Msk (0x1UL << CAN_F21R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F21R1_FB15 CAN_F21R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F21R1_FB16_Pos (16U)
#define CAN_F21R1_FB16_Msk (0x1UL << CAN_F21R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F21R1_FB16 CAN_F21R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F21R1_FB17_Pos (17U)
#define CAN_F21R1_FB17_Msk (0x1UL << CAN_F21R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F21R1_FB17 CAN_F21R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F21R1_FB18_Pos (18U)
#define CAN_F21R1_FB18_Msk (0x1UL << CAN_F21R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F21R1_FB18 CAN_F21R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F21R1_FB19_Pos (19U)
#define CAN_F21R1_FB19_Msk (0x1UL << CAN_F21R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F21R1_FB19 CAN_F21R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F21R1_FB20_Pos (20U)
#define CAN_F21R1_FB20_Msk (0x1UL << CAN_F21R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F21R1_FB20 CAN_F21R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F21R1_FB21_Pos (21U)
#define CAN_F21R1_FB21_Msk (0x1UL << CAN_F21R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F21R1_FB21 CAN_F21R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F21R1_FB22_Pos (22U)
#define CAN_F21R1_FB22_Msk (0x1UL << CAN_F21R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F21R1_FB22 CAN_F21R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F21R1_FB23_Pos (23U)
#define CAN_F21R1_FB23_Msk (0x1UL << CAN_F21R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F21R1_FB23 CAN_F21R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F21R1_FB24_Pos (24U)
#define CAN_F21R1_FB24_Msk (0x1UL << CAN_F21R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F21R1_FB24 CAN_F21R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F21R1_FB25_Pos (25U)
#define CAN_F21R1_FB25_Msk (0x1UL << CAN_F21R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F21R1_FB25 CAN_F21R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F21R1_FB26_Pos (26U)
#define CAN_F21R1_FB26_Msk (0x1UL << CAN_F21R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F21R1_FB26 CAN_F21R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F21R1_FB27_Pos (27U)
#define CAN_F21R1_FB27_Msk (0x1UL << CAN_F21R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F21R1_FB27 CAN_F21R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F21R1_FB28_Pos (28U)
#define CAN_F21R1_FB28_Msk (0x1UL << CAN_F21R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F21R1_FB28 CAN_F21R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F21R1_FB29_Pos (29U)
#define CAN_F21R1_FB29_Msk (0x1UL << CAN_F21R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F21R1_FB29 CAN_F21R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F21R1_FB30_Pos (30U)
#define CAN_F21R1_FB30_Msk (0x1UL << CAN_F21R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F21R1_FB30 CAN_F21R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F21R1_FB31_Pos (31U)
#define CAN_F21R1_FB31_Msk (0x1UL << CAN_F21R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F21R1_FB31 CAN_F21R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F22R1 register  ******************/
#define CAN_F22R1_FB0_Pos (0U)
#define CAN_F22R1_FB0_Msk (0x1UL << CAN_F22R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F22R1_FB0 CAN_F22R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F22R1_FB1_Pos (1U)
#define CAN_F22R1_FB1_Msk (0x1UL << CAN_F22R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F22R1_FB1 CAN_F22R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F22R1_FB2_Pos (2U)
#define CAN_F22R1_FB2_Msk (0x1UL << CAN_F22R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F22R1_FB2 CAN_F22R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F22R1_FB3_Pos (3U)
#define CAN_F22R1_FB3_Msk (0x1UL << CAN_F22R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F22R1_FB3 CAN_F22R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F22R1_FB4_Pos (4U)
#define CAN_F22R1_FB4_Msk (0x1UL << CAN_F22R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F22R1_FB4 CAN_F22R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F22R1_FB5_Pos (5U)
#define CAN_F22R1_FB5_Msk (0x1UL << CAN_F22R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F22R1_FB5 CAN_F22R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F22R1_FB6_Pos (6U)
#define CAN_F22R1_FB6_Msk (0x1UL << CAN_F22R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F22R1_FB6 CAN_F22R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F22R1_FB7_Pos (7U)
#define CAN_F22R1_FB7_Msk (0x1UL << CAN_F22R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F22R1_FB7 CAN_F22R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F22R1_FB8_Pos (8U)
#define CAN_F22R1_FB8_Msk (0x1UL << CAN_F22R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F22R1_FB8 CAN_F22R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F22R1_FB9_Pos (9U)
#define CAN_F22R1_FB9_Msk (0x1UL << CAN_F22R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F22R1_FB9 CAN_F22R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F22R1_FB10_Pos (10U)
#define CAN_F22R1_FB10_Msk (0x1UL << CAN_F22R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F22R1_FB10 CAN_F22R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F22R1_FB11_Pos (11U)
#define CAN_F22R1_FB11_Msk (0x1UL << CAN_F22R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F22R1_FB11 CAN_F22R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F22R1_FB12_Pos (12U)
#define CAN_F22R1_FB12_Msk (0x1UL << CAN_F22R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F22R1_FB12 CAN_F22R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F22R1_FB13_Pos (13U)
#define CAN_F22R1_FB13_Msk (0x1UL << CAN_F22R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F22R1_FB13 CAN_F22R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F22R1_FB14_Pos (14U)
#define CAN_F22R1_FB14_Msk (0x1UL << CAN_F22R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F22R1_FB14 CAN_F22R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F22R1_FB15_Pos (15U)
#define CAN_F22R1_FB15_Msk (0x1UL << CAN_F22R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F22R1_FB15 CAN_F22R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F22R1_FB16_Pos (16U)
#define CAN_F22R1_FB16_Msk (0x1UL << CAN_F22R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F22R1_FB16 CAN_F22R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F22R1_FB17_Pos (17U)
#define CAN_F22R1_FB17_Msk (0x1UL << CAN_F22R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F22R1_FB17 CAN_F22R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F22R1_FB18_Pos (18U)
#define CAN_F22R1_FB18_Msk (0x1UL << CAN_F22R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F22R1_FB18 CAN_F22R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F22R1_FB19_Pos (19U)
#define CAN_F22R1_FB19_Msk (0x1UL << CAN_F22R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F22R1_FB19 CAN_F22R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F22R1_FB20_Pos (20U)
#define CAN_F22R1_FB20_Msk (0x1UL << CAN_F22R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F22R1_FB20 CAN_F22R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F22R1_FB21_Pos (21U)
#define CAN_F22R1_FB21_Msk (0x1UL << CAN_F22R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F22R1_FB21 CAN_F22R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F22R1_FB22_Pos (22U)
#define CAN_F22R1_FB22_Msk (0x1UL << CAN_F22R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F22R1_FB22 CAN_F22R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F22R1_FB23_Pos (23U)
#define CAN_F22R1_FB23_Msk (0x1UL << CAN_F22R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F22R1_FB23 CAN_F22R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F22R1_FB24_Pos (24U)
#define CAN_F22R1_FB24_Msk (0x1UL << CAN_F22R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F22R1_FB24 CAN_F22R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F22R1_FB25_Pos (25U)
#define CAN_F22R1_FB25_Msk (0x1UL << CAN_F22R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F22R1_FB25 CAN_F22R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F22R1_FB26_Pos (26U)
#define CAN_F22R1_FB26_Msk (0x1UL << CAN_F22R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F22R1_FB26 CAN_F22R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F22R1_FB27_Pos (27U)
#define CAN_F22R1_FB27_Msk (0x1UL << CAN_F22R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F22R1_FB27 CAN_F22R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F22R1_FB28_Pos (28U)
#define CAN_F22R1_FB28_Msk (0x1UL << CAN_F22R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F22R1_FB28 CAN_F22R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F22R1_FB29_Pos (29U)
#define CAN_F22R1_FB29_Msk (0x1UL << CAN_F22R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F22R1_FB29 CAN_F22R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F22R1_FB30_Pos (30U)
#define CAN_F22R1_FB30_Msk (0x1UL << CAN_F22R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F22R1_FB30 CAN_F22R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F22R1_FB31_Pos (31U)
#define CAN_F22R1_FB31_Msk (0x1UL << CAN_F22R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F22R1_FB31 CAN_F22R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F23R1 register  ******************/
#define CAN_F23R1_FB0_Pos (0U)
#define CAN_F23R1_FB0_Msk (0x1UL << CAN_F23R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F23R1_FB0 CAN_F23R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F23R1_FB1_Pos (1U)
#define CAN_F23R1_FB1_Msk (0x1UL << CAN_F23R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F23R1_FB1 CAN_F23R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F23R1_FB2_Pos (2U)
#define CAN_F23R1_FB2_Msk (0x1UL << CAN_F23R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F23R1_FB2 CAN_F23R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F23R1_FB3_Pos (3U)
#define CAN_F23R1_FB3_Msk (0x1UL << CAN_F23R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F23R1_FB3 CAN_F23R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F23R1_FB4_Pos (4U)
#define CAN_F23R1_FB4_Msk (0x1UL << CAN_F23R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F23R1_FB4 CAN_F23R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F23R1_FB5_Pos (5U)
#define CAN_F23R1_FB5_Msk (0x1UL << CAN_F23R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F23R1_FB5 CAN_F23R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F23R1_FB6_Pos (6U)
#define CAN_F23R1_FB6_Msk (0x1UL << CAN_F23R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F23R1_FB6 CAN_F23R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F23R1_FB7_Pos (7U)
#define CAN_F23R1_FB7_Msk (0x1UL << CAN_F23R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F23R1_FB7 CAN_F23R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F23R1_FB8_Pos (8U)
#define CAN_F23R1_FB8_Msk (0x1UL << CAN_F23R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F23R1_FB8 CAN_F23R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F23R1_FB9_Pos (9U)
#define CAN_F23R1_FB9_Msk (0x1UL << CAN_F23R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F23R1_FB9 CAN_F23R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F23R1_FB10_Pos (10U)
#define CAN_F23R1_FB10_Msk (0x1UL << CAN_F23R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F23R1_FB10 CAN_F23R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F23R1_FB11_Pos (11U)
#define CAN_F23R1_FB11_Msk (0x1UL << CAN_F23R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F23R1_FB11 CAN_F23R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F23R1_FB12_Pos (12U)
#define CAN_F23R1_FB12_Msk (0x1UL << CAN_F23R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F23R1_FB12 CAN_F23R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F23R1_FB13_Pos (13U)
#define CAN_F23R1_FB13_Msk (0x1UL << CAN_F23R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F23R1_FB13 CAN_F23R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F23R1_FB14_Pos (14U)
#define CAN_F23R1_FB14_Msk (0x1UL << CAN_F23R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F23R1_FB14 CAN_F23R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F23R1_FB15_Pos (15U)
#define CAN_F23R1_FB15_Msk (0x1UL << CAN_F23R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F23R1_FB15 CAN_F23R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F23R1_FB16_Pos (16U)
#define CAN_F23R1_FB16_Msk (0x1UL << CAN_F23R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F23R1_FB16 CAN_F23R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F23R1_FB17_Pos (17U)
#define CAN_F23R1_FB17_Msk (0x1UL << CAN_F23R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F23R1_FB17 CAN_F23R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F23R1_FB18_Pos (18U)
#define CAN_F23R1_FB18_Msk (0x1UL << CAN_F23R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F23R1_FB18 CAN_F23R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F23R1_FB19_Pos (19U)
#define CAN_F23R1_FB19_Msk (0x1UL << CAN_F23R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F23R1_FB19 CAN_F23R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F23R1_FB20_Pos (20U)
#define CAN_F23R1_FB20_Msk (0x1UL << CAN_F23R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F23R1_FB20 CAN_F23R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F23R1_FB21_Pos (21U)
#define CAN_F23R1_FB21_Msk (0x1UL << CAN_F23R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F23R1_FB21 CAN_F23R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F23R1_FB22_Pos (22U)
#define CAN_F23R1_FB22_Msk (0x1UL << CAN_F23R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F23R1_FB22 CAN_F23R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F23R1_FB23_Pos (23U)
#define CAN_F23R1_FB23_Msk (0x1UL << CAN_F23R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F23R1_FB23 CAN_F23R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F23R1_FB24_Pos (24U)
#define CAN_F23R1_FB24_Msk (0x1UL << CAN_F23R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F23R1_FB24 CAN_F23R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F23R1_FB25_Pos (25U)
#define CAN_F23R1_FB25_Msk (0x1UL << CAN_F23R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F23R1_FB25 CAN_F23R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F23R1_FB26_Pos (26U)
#define CAN_F23R1_FB26_Msk (0x1UL << CAN_F23R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F23R1_FB26 CAN_F23R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F23R1_FB27_Pos (27U)
#define CAN_F23R1_FB27_Msk (0x1UL << CAN_F23R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F23R1_FB27 CAN_F23R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F23R1_FB28_Pos (28U)
#define CAN_F23R1_FB28_Msk (0x1UL << CAN_F23R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F23R1_FB28 CAN_F23R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F23R1_FB29_Pos (29U)
#define CAN_F23R1_FB29_Msk (0x1UL << CAN_F23R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F23R1_FB29 CAN_F23R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F23R1_FB30_Pos (30U)
#define CAN_F23R1_FB30_Msk (0x1UL << CAN_F23R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F23R1_FB30 CAN_F23R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F23R1_FB31_Pos (31U)
#define CAN_F23R1_FB31_Msk (0x1UL << CAN_F23R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F23R1_FB31 CAN_F23R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F24R1 register  ******************/
#define CAN_F24R1_FB0_Pos (0U)
#define CAN_F24R1_FB0_Msk (0x1UL << CAN_F24R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F24R1_FB0 CAN_F24R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F24R1_FB1_Pos (1U)
#define CAN_F24R1_FB1_Msk (0x1UL << CAN_F24R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F24R1_FB1 CAN_F24R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F24R1_FB2_Pos (2U)
#define CAN_F24R1_FB2_Msk (0x1UL << CAN_F24R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F24R1_FB2 CAN_F24R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F24R1_FB3_Pos (3U)
#define CAN_F24R1_FB3_Msk (0x1UL << CAN_F24R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F24R1_FB3 CAN_F24R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F24R1_FB4_Pos (4U)
#define CAN_F24R1_FB4_Msk (0x1UL << CAN_F24R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F24R1_FB4 CAN_F24R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F24R1_FB5_Pos (5U)
#define CAN_F24R1_FB5_Msk (0x1UL << CAN_F24R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F24R1_FB5 CAN_F24R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F24R1_FB6_Pos (6U)
#define CAN_F24R1_FB6_Msk (0x1UL << CAN_F24R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F24R1_FB6 CAN_F24R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F24R1_FB7_Pos (7U)
#define CAN_F24R1_FB7_Msk (0x1UL << CAN_F24R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F24R1_FB7 CAN_F24R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F24R1_FB8_Pos (8U)
#define CAN_F24R1_FB8_Msk (0x1UL << CAN_F24R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F24R1_FB8 CAN_F24R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F24R1_FB9_Pos (9U)
#define CAN_F24R1_FB9_Msk (0x1UL << CAN_F24R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F24R1_FB9 CAN_F24R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F24R1_FB10_Pos (10U)
#define CAN_F24R1_FB10_Msk (0x1UL << CAN_F24R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F24R1_FB10 CAN_F24R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F24R1_FB11_Pos (11U)
#define CAN_F24R1_FB11_Msk (0x1UL << CAN_F24R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F24R1_FB11 CAN_F24R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F24R1_FB12_Pos (12U)
#define CAN_F24R1_FB12_Msk (0x1UL << CAN_F24R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F24R1_FB12 CAN_F24R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F24R1_FB13_Pos (13U)
#define CAN_F24R1_FB13_Msk (0x1UL << CAN_F24R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F24R1_FB13 CAN_F24R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F24R1_FB14_Pos (14U)
#define CAN_F24R1_FB14_Msk (0x1UL << CAN_F24R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F24R1_FB14 CAN_F24R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F24R1_FB15_Pos (15U)
#define CAN_F24R1_FB15_Msk (0x1UL << CAN_F24R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F24R1_FB15 CAN_F24R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F24R1_FB16_Pos (16U)
#define CAN_F24R1_FB16_Msk (0x1UL << CAN_F24R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F24R1_FB16 CAN_F24R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F24R1_FB17_Pos (17U)
#define CAN_F24R1_FB17_Msk (0x1UL << CAN_F24R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F24R1_FB17 CAN_F24R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F24R1_FB18_Pos (18U)
#define CAN_F24R1_FB18_Msk (0x1UL << CAN_F24R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F24R1_FB18 CAN_F24R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F24R1_FB19_Pos (19U)
#define CAN_F24R1_FB19_Msk (0x1UL << CAN_F24R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F24R1_FB19 CAN_F24R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F24R1_FB20_Pos (20U)
#define CAN_F24R1_FB20_Msk (0x1UL << CAN_F24R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F24R1_FB20 CAN_F24R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F24R1_FB21_Pos (21U)
#define CAN_F24R1_FB21_Msk (0x1UL << CAN_F24R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F24R1_FB21 CAN_F24R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F24R1_FB22_Pos (22U)
#define CAN_F24R1_FB22_Msk (0x1UL << CAN_F24R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F24R1_FB22 CAN_F24R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F24R1_FB23_Pos (23U)
#define CAN_F24R1_FB23_Msk (0x1UL << CAN_F24R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F24R1_FB23 CAN_F24R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F24R1_FB24_Pos (24U)
#define CAN_F24R1_FB24_Msk (0x1UL << CAN_F24R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F24R1_FB24 CAN_F24R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F24R1_FB25_Pos (25U)
#define CAN_F24R1_FB25_Msk (0x1UL << CAN_F24R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F24R1_FB25 CAN_F24R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F24R1_FB26_Pos (26U)
#define CAN_F24R1_FB26_Msk (0x1UL << CAN_F24R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F24R1_FB26 CAN_F24R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F24R1_FB27_Pos (27U)
#define CAN_F24R1_FB27_Msk (0x1UL << CAN_F24R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F24R1_FB27 CAN_F24R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F24R1_FB28_Pos (28U)
#define CAN_F24R1_FB28_Msk (0x1UL << CAN_F24R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F24R1_FB28 CAN_F24R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F24R1_FB29_Pos (29U)
#define CAN_F24R1_FB29_Msk (0x1UL << CAN_F24R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F24R1_FB29 CAN_F24R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F24R1_FB30_Pos (30U)
#define CAN_F24R1_FB30_Msk (0x1UL << CAN_F24R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F24R1_FB30 CAN_F24R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F24R1_FB31_Pos (31U)
#define CAN_F24R1_FB31_Msk (0x1UL << CAN_F24R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F24R1_FB31 CAN_F24R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F25R1 register  ******************/
#define CAN_F25R1_FB0_Pos (0U)
#define CAN_F25R1_FB0_Msk (0x1UL << CAN_F25R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F25R1_FB0 CAN_F25R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F25R1_FB1_Pos (1U)
#define CAN_F25R1_FB1_Msk (0x1UL << CAN_F25R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F25R1_FB1 CAN_F25R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F25R1_FB2_Pos (2U)
#define CAN_F25R1_FB2_Msk (0x1UL << CAN_F25R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F25R1_FB2 CAN_F25R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F25R1_FB3_Pos (3U)
#define CAN_F25R1_FB3_Msk (0x1UL << CAN_F25R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F25R1_FB3 CAN_F25R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F25R1_FB4_Pos (4U)
#define CAN_F25R1_FB4_Msk (0x1UL << CAN_F25R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F25R1_FB4 CAN_F25R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F25R1_FB5_Pos (5U)
#define CAN_F25R1_FB5_Msk (0x1UL << CAN_F25R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F25R1_FB5 CAN_F25R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F25R1_FB6_Pos (6U)
#define CAN_F25R1_FB6_Msk (0x1UL << CAN_F25R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F25R1_FB6 CAN_F25R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F25R1_FB7_Pos (7U)
#define CAN_F25R1_FB7_Msk (0x1UL << CAN_F25R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F25R1_FB7 CAN_F25R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F25R1_FB8_Pos (8U)
#define CAN_F25R1_FB8_Msk (0x1UL << CAN_F25R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F25R1_FB8 CAN_F25R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F25R1_FB9_Pos (9U)
#define CAN_F25R1_FB9_Msk (0x1UL << CAN_F25R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F25R1_FB9 CAN_F25R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F25R1_FB10_Pos (10U)
#define CAN_F25R1_FB10_Msk (0x1UL << CAN_F25R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F25R1_FB10 CAN_F25R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F25R1_FB11_Pos (11U)
#define CAN_F25R1_FB11_Msk (0x1UL << CAN_F25R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F25R1_FB11 CAN_F25R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F25R1_FB12_Pos (12U)
#define CAN_F25R1_FB12_Msk (0x1UL << CAN_F25R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F25R1_FB12 CAN_F25R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F25R1_FB13_Pos (13U)
#define CAN_F25R1_FB13_Msk (0x1UL << CAN_F25R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F25R1_FB13 CAN_F25R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F25R1_FB14_Pos (14U)
#define CAN_F25R1_FB14_Msk (0x1UL << CAN_F25R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F25R1_FB14 CAN_F25R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F25R1_FB15_Pos (15U)
#define CAN_F25R1_FB15_Msk (0x1UL << CAN_F25R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F25R1_FB15 CAN_F25R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F25R1_FB16_Pos (16U)
#define CAN_F25R1_FB16_Msk (0x1UL << CAN_F25R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F25R1_FB16 CAN_F25R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F25R1_FB17_Pos (17U)
#define CAN_F25R1_FB17_Msk (0x1UL << CAN_F25R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F25R1_FB17 CAN_F25R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F25R1_FB18_Pos (18U)
#define CAN_F25R1_FB18_Msk (0x1UL << CAN_F25R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F25R1_FB18 CAN_F25R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F25R1_FB19_Pos (19U)
#define CAN_F25R1_FB19_Msk (0x1UL << CAN_F25R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F25R1_FB19 CAN_F25R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F25R1_FB20_Pos (20U)
#define CAN_F25R1_FB20_Msk (0x1UL << CAN_F25R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F25R1_FB20 CAN_F25R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F25R1_FB21_Pos (21U)
#define CAN_F25R1_FB21_Msk (0x1UL << CAN_F25R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F25R1_FB21 CAN_F25R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F25R1_FB22_Pos (22U)
#define CAN_F25R1_FB22_Msk (0x1UL << CAN_F25R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F25R1_FB22 CAN_F25R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F25R1_FB23_Pos (23U)
#define CAN_F25R1_FB23_Msk (0x1UL << CAN_F25R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F25R1_FB23 CAN_F25R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F25R1_FB24_Pos (24U)
#define CAN_F25R1_FB24_Msk (0x1UL << CAN_F25R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F25R1_FB24 CAN_F25R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F25R1_FB25_Pos (25U)
#define CAN_F25R1_FB25_Msk (0x1UL << CAN_F25R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F25R1_FB25 CAN_F25R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F25R1_FB26_Pos (26U)
#define CAN_F25R1_FB26_Msk (0x1UL << CAN_F25R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F25R1_FB26 CAN_F25R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F25R1_FB27_Pos (27U)
#define CAN_F25R1_FB27_Msk (0x1UL << CAN_F25R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F25R1_FB27 CAN_F25R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F25R1_FB28_Pos (28U)
#define CAN_F25R1_FB28_Msk (0x1UL << CAN_F25R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F25R1_FB28 CAN_F25R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F25R1_FB29_Pos (29U)
#define CAN_F25R1_FB29_Msk (0x1UL << CAN_F25R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F25R1_FB29 CAN_F25R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F25R1_FB30_Pos (30U)
#define CAN_F25R1_FB30_Msk (0x1UL << CAN_F25R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F25R1_FB30 CAN_F25R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F25R1_FB31_Pos (31U)
#define CAN_F25R1_FB31_Msk (0x1UL << CAN_F25R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F25R1_FB31 CAN_F25R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F26R1 register  ******************/
#define CAN_F26R1_FB0_Pos (0U)
#define CAN_F26R1_FB0_Msk (0x1UL << CAN_F26R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F26R1_FB0 CAN_F26R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F26R1_FB1_Pos (1U)
#define CAN_F26R1_FB1_Msk (0x1UL << CAN_F26R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F26R1_FB1 CAN_F26R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F26R1_FB2_Pos (2U)
#define CAN_F26R1_FB2_Msk (0x1UL << CAN_F26R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F26R1_FB2 CAN_F26R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F26R1_FB3_Pos (3U)
#define CAN_F26R1_FB3_Msk (0x1UL << CAN_F26R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F26R1_FB3 CAN_F26R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F26R1_FB4_Pos (4U)
#define CAN_F26R1_FB4_Msk (0x1UL << CAN_F26R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F26R1_FB4 CAN_F26R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F26R1_FB5_Pos (5U)
#define CAN_F26R1_FB5_Msk (0x1UL << CAN_F26R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F26R1_FB5 CAN_F26R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F26R1_FB6_Pos (6U)
#define CAN_F26R1_FB6_Msk (0x1UL << CAN_F26R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F26R1_FB6 CAN_F26R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F26R1_FB7_Pos (7U)
#define CAN_F26R1_FB7_Msk (0x1UL << CAN_F26R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F26R1_FB7 CAN_F26R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F26R1_FB8_Pos (8U)
#define CAN_F26R1_FB8_Msk (0x1UL << CAN_F26R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F26R1_FB8 CAN_F26R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F26R1_FB9_Pos (9U)
#define CAN_F26R1_FB9_Msk (0x1UL << CAN_F26R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F26R1_FB9 CAN_F26R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F26R1_FB10_Pos (10U)
#define CAN_F26R1_FB10_Msk (0x1UL << CAN_F26R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F26R1_FB10 CAN_F26R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F26R1_FB11_Pos (11U)
#define CAN_F26R1_FB11_Msk (0x1UL << CAN_F26R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F26R1_FB11 CAN_F26R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F26R1_FB12_Pos (12U)
#define CAN_F26R1_FB12_Msk (0x1UL << CAN_F26R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F26R1_FB12 CAN_F26R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F26R1_FB13_Pos (13U)
#define CAN_F26R1_FB13_Msk (0x1UL << CAN_F26R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F26R1_FB13 CAN_F26R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F26R1_FB14_Pos (14U)
#define CAN_F26R1_FB14_Msk (0x1UL << CAN_F26R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F26R1_FB14 CAN_F26R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F26R1_FB15_Pos (15U)
#define CAN_F26R1_FB15_Msk (0x1UL << CAN_F26R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F26R1_FB15 CAN_F26R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F26R1_FB16_Pos (16U)
#define CAN_F26R1_FB16_Msk (0x1UL << CAN_F26R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F26R1_FB16 CAN_F26R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F26R1_FB17_Pos (17U)
#define CAN_F26R1_FB17_Msk (0x1UL << CAN_F26R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F26R1_FB17 CAN_F26R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F26R1_FB18_Pos (18U)
#define CAN_F26R1_FB18_Msk (0x1UL << CAN_F26R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F26R1_FB18 CAN_F26R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F26R1_FB19_Pos (19U)
#define CAN_F26R1_FB19_Msk (0x1UL << CAN_F26R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F26R1_FB19 CAN_F26R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F26R1_FB20_Pos (20U)
#define CAN_F26R1_FB20_Msk (0x1UL << CAN_F26R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F26R1_FB20 CAN_F26R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F26R1_FB21_Pos (21U)
#define CAN_F26R1_FB21_Msk (0x1UL << CAN_F26R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F26R1_FB21 CAN_F26R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F26R1_FB22_Pos (22U)
#define CAN_F26R1_FB22_Msk (0x1UL << CAN_F26R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F26R1_FB22 CAN_F26R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F26R1_FB23_Pos (23U)
#define CAN_F26R1_FB23_Msk (0x1UL << CAN_F26R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F26R1_FB23 CAN_F26R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F26R1_FB24_Pos (24U)
#define CAN_F26R1_FB24_Msk (0x1UL << CAN_F26R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F26R1_FB24 CAN_F26R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F26R1_FB25_Pos (25U)
#define CAN_F26R1_FB25_Msk (0x1UL << CAN_F26R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F26R1_FB25 CAN_F26R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F26R1_FB26_Pos (26U)
#define CAN_F26R1_FB26_Msk (0x1UL << CAN_F26R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F26R1_FB26 CAN_F26R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F26R1_FB27_Pos (27U)
#define CAN_F26R1_FB27_Msk (0x1UL << CAN_F26R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F26R1_FB27 CAN_F26R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F26R1_FB28_Pos (28U)
#define CAN_F26R1_FB28_Msk (0x1UL << CAN_F26R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F26R1_FB28 CAN_F26R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F26R1_FB29_Pos (29U)
#define CAN_F26R1_FB29_Msk (0x1UL << CAN_F26R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F26R1_FB29 CAN_F26R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F26R1_FB30_Pos (30U)
#define CAN_F26R1_FB30_Msk (0x1UL << CAN_F26R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F26R1_FB30 CAN_F26R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F26R1_FB31_Pos (31U)
#define CAN_F26R1_FB31_Msk (0x1UL << CAN_F26R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F26R1_FB31 CAN_F26R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F27R1 register  ******************/
#define CAN_F27R1_FB0_Pos (0U)
#define CAN_F27R1_FB0_Msk (0x1UL << CAN_F27R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F27R1_FB0 CAN_F27R1_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F27R1_FB1_Pos (1U)
#define CAN_F27R1_FB1_Msk (0x1UL << CAN_F27R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F27R1_FB1 CAN_F27R1_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F27R1_FB2_Pos (2U)
#define CAN_F27R1_FB2_Msk (0x1UL << CAN_F27R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F27R1_FB2 CAN_F27R1_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F27R1_FB3_Pos (3U)
#define CAN_F27R1_FB3_Msk (0x1UL << CAN_F27R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F27R1_FB3 CAN_F27R1_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F27R1_FB4_Pos (4U)
#define CAN_F27R1_FB4_Msk (0x1UL << CAN_F27R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F27R1_FB4 CAN_F27R1_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F27R1_FB5_Pos (5U)
#define CAN_F27R1_FB5_Msk (0x1UL << CAN_F27R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F27R1_FB5 CAN_F27R1_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F27R1_FB6_Pos (6U)
#define CAN_F27R1_FB6_Msk (0x1UL << CAN_F27R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F27R1_FB6 CAN_F27R1_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F27R1_FB7_Pos (7U)
#define CAN_F27R1_FB7_Msk (0x1UL << CAN_F27R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F27R1_FB7 CAN_F27R1_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F27R1_FB8_Pos (8U)
#define CAN_F27R1_FB8_Msk (0x1UL << CAN_F27R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F27R1_FB8 CAN_F27R1_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F27R1_FB9_Pos (9U)
#define CAN_F27R1_FB9_Msk (0x1UL << CAN_F27R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F27R1_FB9 CAN_F27R1_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F27R1_FB10_Pos (10U)
#define CAN_F27R1_FB10_Msk (0x1UL << CAN_F27R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F27R1_FB10 CAN_F27R1_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F27R1_FB11_Pos (11U)
#define CAN_F27R1_FB11_Msk (0x1UL << CAN_F27R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F27R1_FB11 CAN_F27R1_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F27R1_FB12_Pos (12U)
#define CAN_F27R1_FB12_Msk (0x1UL << CAN_F27R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F27R1_FB12 CAN_F27R1_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F27R1_FB13_Pos (13U)
#define CAN_F27R1_FB13_Msk (0x1UL << CAN_F27R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F27R1_FB13 CAN_F27R1_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F27R1_FB14_Pos (14U)
#define CAN_F27R1_FB14_Msk (0x1UL << CAN_F27R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F27R1_FB14 CAN_F27R1_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F27R1_FB15_Pos (15U)
#define CAN_F27R1_FB15_Msk (0x1UL << CAN_F27R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F27R1_FB15 CAN_F27R1_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F27R1_FB16_Pos (16U)
#define CAN_F27R1_FB16_Msk (0x1UL << CAN_F27R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F27R1_FB16 CAN_F27R1_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F27R1_FB17_Pos (17U)
#define CAN_F27R1_FB17_Msk (0x1UL << CAN_F27R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F27R1_FB17 CAN_F27R1_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F27R1_FB18_Pos (18U)
#define CAN_F27R1_FB18_Msk (0x1UL << CAN_F27R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F27R1_FB18 CAN_F27R1_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F27R1_FB19_Pos (19U)
#define CAN_F27R1_FB19_Msk (0x1UL << CAN_F27R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F27R1_FB19 CAN_F27R1_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F27R1_FB20_Pos (20U)
#define CAN_F27R1_FB20_Msk (0x1UL << CAN_F27R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F27R1_FB20 CAN_F27R1_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F27R1_FB21_Pos (21U)
#define CAN_F27R1_FB21_Msk (0x1UL << CAN_F27R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F27R1_FB21 CAN_F27R1_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F27R1_FB22_Pos (22U)
#define CAN_F27R1_FB22_Msk (0x1UL << CAN_F27R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F27R1_FB22 CAN_F27R1_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F27R1_FB23_Pos (23U)
#define CAN_F27R1_FB23_Msk (0x1UL << CAN_F27R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F27R1_FB23 CAN_F27R1_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F27R1_FB24_Pos (24U)
#define CAN_F27R1_FB24_Msk (0x1UL << CAN_F27R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F27R1_FB24 CAN_F27R1_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F27R1_FB25_Pos (25U)
#define CAN_F27R1_FB25_Msk (0x1UL << CAN_F27R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F27R1_FB25 CAN_F27R1_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F27R1_FB26_Pos (26U)
#define CAN_F27R1_FB26_Msk (0x1UL << CAN_F27R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F27R1_FB26 CAN_F27R1_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F27R1_FB27_Pos (27U)
#define CAN_F27R1_FB27_Msk (0x1UL << CAN_F27R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F27R1_FB27 CAN_F27R1_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F27R1_FB28_Pos (28U)
#define CAN_F27R1_FB28_Msk (0x1UL << CAN_F27R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F27R1_FB28 CAN_F27R1_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F27R1_FB29_Pos (29U)
#define CAN_F27R1_FB29_Msk (0x1UL << CAN_F27R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F27R1_FB29 CAN_F27R1_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F27R1_FB30_Pos (30U)
#define CAN_F27R1_FB30_Msk (0x1UL << CAN_F27R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F27R1_FB30 CAN_F27R1_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F27R1_FB31_Pos (31U)
#define CAN_F27R1_FB31_Msk (0x1UL << CAN_F27R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F27R1_FB31 CAN_F27R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F0R2 register  *******************/
#define CAN_F0R2_FB0_Pos (0U)
#define CAN_F0R2_FB0_Msk (0x1UL << CAN_F0R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F0R2_FB0 CAN_F0R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F0R2_FB1_Pos (1U)
#define CAN_F0R2_FB1_Msk (0x1UL << CAN_F0R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F0R2_FB1 CAN_F0R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F0R2_FB2_Pos (2U)
#define CAN_F0R2_FB2_Msk (0x1UL << CAN_F0R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F0R2_FB2 CAN_F0R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F0R2_FB3_Pos (3U)
#define CAN_F0R2_FB3_Msk (0x1UL << CAN_F0R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F0R2_FB3 CAN_F0R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F0R2_FB4_Pos (4U)
#define CAN_F0R2_FB4_Msk (0x1UL << CAN_F0R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F0R2_FB4 CAN_F0R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F0R2_FB5_Pos (5U)
#define CAN_F0R2_FB5_Msk (0x1UL << CAN_F0R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F0R2_FB5 CAN_F0R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F0R2_FB6_Pos (6U)
#define CAN_F0R2_FB6_Msk (0x1UL << CAN_F0R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F0R2_FB6 CAN_F0R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F0R2_FB7_Pos (7U)
#define CAN_F0R2_FB7_Msk (0x1UL << CAN_F0R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F0R2_FB7 CAN_F0R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F0R2_FB8_Pos (8U)
#define CAN_F0R2_FB8_Msk (0x1UL << CAN_F0R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F0R2_FB8 CAN_F0R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F0R2_FB9_Pos (9U)
#define CAN_F0R2_FB9_Msk (0x1UL << CAN_F0R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F0R2_FB9 CAN_F0R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F0R2_FB10_Pos (10U)
#define CAN_F0R2_FB10_Msk (0x1UL << CAN_F0R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F0R2_FB10 CAN_F0R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F0R2_FB11_Pos (11U)
#define CAN_F0R2_FB11_Msk (0x1UL << CAN_F0R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F0R2_FB11 CAN_F0R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F0R2_FB12_Pos (12U)
#define CAN_F0R2_FB12_Msk (0x1UL << CAN_F0R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F0R2_FB12 CAN_F0R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F0R2_FB13_Pos (13U)
#define CAN_F0R2_FB13_Msk (0x1UL << CAN_F0R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F0R2_FB13 CAN_F0R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F0R2_FB14_Pos (14U)
#define CAN_F0R2_FB14_Msk (0x1UL << CAN_F0R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F0R2_FB14 CAN_F0R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F0R2_FB15_Pos (15U)
#define CAN_F0R2_FB15_Msk (0x1UL << CAN_F0R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F0R2_FB15 CAN_F0R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F0R2_FB16_Pos (16U)
#define CAN_F0R2_FB16_Msk (0x1UL << CAN_F0R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F0R2_FB16 CAN_F0R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F0R2_FB17_Pos (17U)
#define CAN_F0R2_FB17_Msk (0x1UL << CAN_F0R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F0R2_FB17 CAN_F0R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F0R2_FB18_Pos (18U)
#define CAN_F0R2_FB18_Msk (0x1UL << CAN_F0R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F0R2_FB18 CAN_F0R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F0R2_FB19_Pos (19U)
#define CAN_F0R2_FB19_Msk (0x1UL << CAN_F0R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F0R2_FB19 CAN_F0R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F0R2_FB20_Pos (20U)
#define CAN_F0R2_FB20_Msk (0x1UL << CAN_F0R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F0R2_FB20 CAN_F0R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F0R2_FB21_Pos (21U)
#define CAN_F0R2_FB21_Msk (0x1UL << CAN_F0R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F0R2_FB21 CAN_F0R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F0R2_FB22_Pos (22U)
#define CAN_F0R2_FB22_Msk (0x1UL << CAN_F0R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F0R2_FB22 CAN_F0R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F0R2_FB23_Pos (23U)
#define CAN_F0R2_FB23_Msk (0x1UL << CAN_F0R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F0R2_FB23 CAN_F0R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F0R2_FB24_Pos (24U)
#define CAN_F0R2_FB24_Msk (0x1UL << CAN_F0R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F0R2_FB24 CAN_F0R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F0R2_FB25_Pos (25U)
#define CAN_F0R2_FB25_Msk (0x1UL << CAN_F0R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F0R2_FB25 CAN_F0R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F0R2_FB26_Pos (26U)
#define CAN_F0R2_FB26_Msk (0x1UL << CAN_F0R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F0R2_FB26 CAN_F0R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F0R2_FB27_Pos (27U)
#define CAN_F0R2_FB27_Msk (0x1UL << CAN_F0R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F0R2_FB27 CAN_F0R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F0R2_FB28_Pos (28U)
#define CAN_F0R2_FB28_Msk (0x1UL << CAN_F0R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F0R2_FB28 CAN_F0R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F0R2_FB29_Pos (29U)
#define CAN_F0R2_FB29_Msk (0x1UL << CAN_F0R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F0R2_FB29 CAN_F0R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F0R2_FB30_Pos (30U)
#define CAN_F0R2_FB30_Msk (0x1UL << CAN_F0R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F0R2_FB30 CAN_F0R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F0R2_FB31_Pos (31U)
#define CAN_F0R2_FB31_Msk (0x1UL << CAN_F0R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F0R2_FB31 CAN_F0R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F1R2 register  *******************/
#define CAN_F1R2_FB0_Pos (0U)
#define CAN_F1R2_FB0_Msk (0x1UL << CAN_F1R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F1R2_FB0 CAN_F1R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F1R2_FB1_Pos (1U)
#define CAN_F1R2_FB1_Msk (0x1UL << CAN_F1R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F1R2_FB1 CAN_F1R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F1R2_FB2_Pos (2U)
#define CAN_F1R2_FB2_Msk (0x1UL << CAN_F1R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F1R2_FB2 CAN_F1R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F1R2_FB3_Pos (3U)
#define CAN_F1R2_FB3_Msk (0x1UL << CAN_F1R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F1R2_FB3 CAN_F1R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F1R2_FB4_Pos (4U)
#define CAN_F1R2_FB4_Msk (0x1UL << CAN_F1R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F1R2_FB4 CAN_F1R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F1R2_FB5_Pos (5U)
#define CAN_F1R2_FB5_Msk (0x1UL << CAN_F1R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F1R2_FB5 CAN_F1R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F1R2_FB6_Pos (6U)
#define CAN_F1R2_FB6_Msk (0x1UL << CAN_F1R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F1R2_FB6 CAN_F1R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F1R2_FB7_Pos (7U)
#define CAN_F1R2_FB7_Msk (0x1UL << CAN_F1R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F1R2_FB7 CAN_F1R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F1R2_FB8_Pos (8U)
#define CAN_F1R2_FB8_Msk (0x1UL << CAN_F1R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F1R2_FB8 CAN_F1R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F1R2_FB9_Pos (9U)
#define CAN_F1R2_FB9_Msk (0x1UL << CAN_F1R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F1R2_FB9 CAN_F1R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F1R2_FB10_Pos (10U)
#define CAN_F1R2_FB10_Msk (0x1UL << CAN_F1R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F1R2_FB10 CAN_F1R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F1R2_FB11_Pos (11U)
#define CAN_F1R2_FB11_Msk (0x1UL << CAN_F1R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F1R2_FB11 CAN_F1R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F1R2_FB12_Pos (12U)
#define CAN_F1R2_FB12_Msk (0x1UL << CAN_F1R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F1R2_FB12 CAN_F1R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F1R2_FB13_Pos (13U)
#define CAN_F1R2_FB13_Msk (0x1UL << CAN_F1R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F1R2_FB13 CAN_F1R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F1R2_FB14_Pos (14U)
#define CAN_F1R2_FB14_Msk (0x1UL << CAN_F1R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F1R2_FB14 CAN_F1R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F1R2_FB15_Pos (15U)
#define CAN_F1R2_FB15_Msk (0x1UL << CAN_F1R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F1R2_FB15 CAN_F1R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F1R2_FB16_Pos (16U)
#define CAN_F1R2_FB16_Msk (0x1UL << CAN_F1R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F1R2_FB16 CAN_F1R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F1R2_FB17_Pos (17U)
#define CAN_F1R2_FB17_Msk (0x1UL << CAN_F1R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F1R2_FB17 CAN_F1R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F1R2_FB18_Pos (18U)
#define CAN_F1R2_FB18_Msk (0x1UL << CAN_F1R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F1R2_FB18 CAN_F1R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F1R2_FB19_Pos (19U)
#define CAN_F1R2_FB19_Msk (0x1UL << CAN_F1R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F1R2_FB19 CAN_F1R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F1R2_FB20_Pos (20U)
#define CAN_F1R2_FB20_Msk (0x1UL << CAN_F1R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F1R2_FB20 CAN_F1R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F1R2_FB21_Pos (21U)
#define CAN_F1R2_FB21_Msk (0x1UL << CAN_F1R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F1R2_FB21 CAN_F1R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F1R2_FB22_Pos (22U)
#define CAN_F1R2_FB22_Msk (0x1UL << CAN_F1R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F1R2_FB22 CAN_F1R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F1R2_FB23_Pos (23U)
#define CAN_F1R2_FB23_Msk (0x1UL << CAN_F1R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F1R2_FB23 CAN_F1R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F1R2_FB24_Pos (24U)
#define CAN_F1R2_FB24_Msk (0x1UL << CAN_F1R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F1R2_FB24 CAN_F1R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F1R2_FB25_Pos (25U)
#define CAN_F1R2_FB25_Msk (0x1UL << CAN_F1R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F1R2_FB25 CAN_F1R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F1R2_FB26_Pos (26U)
#define CAN_F1R2_FB26_Msk (0x1UL << CAN_F1R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F1R2_FB26 CAN_F1R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F1R2_FB27_Pos (27U)
#define CAN_F1R2_FB27_Msk (0x1UL << CAN_F1R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F1R2_FB27 CAN_F1R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F1R2_FB28_Pos (28U)
#define CAN_F1R2_FB28_Msk (0x1UL << CAN_F1R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F1R2_FB28 CAN_F1R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F1R2_FB29_Pos (29U)
#define CAN_F1R2_FB29_Msk (0x1UL << CAN_F1R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F1R2_FB29 CAN_F1R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F1R2_FB30_Pos (30U)
#define CAN_F1R2_FB30_Msk (0x1UL << CAN_F1R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F1R2_FB30 CAN_F1R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F1R2_FB31_Pos (31U)
#define CAN_F1R2_FB31_Msk (0x1UL << CAN_F1R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F1R2_FB31 CAN_F1R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F2R2 register  *******************/
#define CAN_F2R2_FB0_Pos (0U)
#define CAN_F2R2_FB0_Msk (0x1UL << CAN_F2R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F2R2_FB0 CAN_F2R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F2R2_FB1_Pos (1U)
#define CAN_F2R2_FB1_Msk (0x1UL << CAN_F2R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F2R2_FB1 CAN_F2R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F2R2_FB2_Pos (2U)
#define CAN_F2R2_FB2_Msk (0x1UL << CAN_F2R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F2R2_FB2 CAN_F2R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F2R2_FB3_Pos (3U)
#define CAN_F2R2_FB3_Msk (0x1UL << CAN_F2R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F2R2_FB3 CAN_F2R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F2R2_FB4_Pos (4U)
#define CAN_F2R2_FB4_Msk (0x1UL << CAN_F2R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F2R2_FB4 CAN_F2R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F2R2_FB5_Pos (5U)
#define CAN_F2R2_FB5_Msk (0x1UL << CAN_F2R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F2R2_FB5 CAN_F2R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F2R2_FB6_Pos (6U)
#define CAN_F2R2_FB6_Msk (0x1UL << CAN_F2R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F2R2_FB6 CAN_F2R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F2R2_FB7_Pos (7U)
#define CAN_F2R2_FB7_Msk (0x1UL << CAN_F2R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F2R2_FB7 CAN_F2R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F2R2_FB8_Pos (8U)
#define CAN_F2R2_FB8_Msk (0x1UL << CAN_F2R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F2R2_FB8 CAN_F2R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F2R2_FB9_Pos (9U)
#define CAN_F2R2_FB9_Msk (0x1UL << CAN_F2R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F2R2_FB9 CAN_F2R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F2R2_FB10_Pos (10U)
#define CAN_F2R2_FB10_Msk (0x1UL << CAN_F2R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F2R2_FB10 CAN_F2R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F2R2_FB11_Pos (11U)
#define CAN_F2R2_FB11_Msk (0x1UL << CAN_F2R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F2R2_FB11 CAN_F2R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F2R2_FB12_Pos (12U)
#define CAN_F2R2_FB12_Msk (0x1UL << CAN_F2R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F2R2_FB12 CAN_F2R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F2R2_FB13_Pos (13U)
#define CAN_F2R2_FB13_Msk (0x1UL << CAN_F2R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F2R2_FB13 CAN_F2R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F2R2_FB14_Pos (14U)
#define CAN_F2R2_FB14_Msk (0x1UL << CAN_F2R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F2R2_FB14 CAN_F2R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F2R2_FB15_Pos (15U)
#define CAN_F2R2_FB15_Msk (0x1UL << CAN_F2R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F2R2_FB15 CAN_F2R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F2R2_FB16_Pos (16U)
#define CAN_F2R2_FB16_Msk (0x1UL << CAN_F2R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F2R2_FB16 CAN_F2R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F2R2_FB17_Pos (17U)
#define CAN_F2R2_FB17_Msk (0x1UL << CAN_F2R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F2R2_FB17 CAN_F2R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F2R2_FB18_Pos (18U)
#define CAN_F2R2_FB18_Msk (0x1UL << CAN_F2R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F2R2_FB18 CAN_F2R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F2R2_FB19_Pos (19U)
#define CAN_F2R2_FB19_Msk (0x1UL << CAN_F2R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F2R2_FB19 CAN_F2R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F2R2_FB20_Pos (20U)
#define CAN_F2R2_FB20_Msk (0x1UL << CAN_F2R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F2R2_FB20 CAN_F2R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F2R2_FB21_Pos (21U)
#define CAN_F2R2_FB21_Msk (0x1UL << CAN_F2R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F2R2_FB21 CAN_F2R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F2R2_FB22_Pos (22U)
#define CAN_F2R2_FB22_Msk (0x1UL << CAN_F2R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F2R2_FB22 CAN_F2R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F2R2_FB23_Pos (23U)
#define CAN_F2R2_FB23_Msk (0x1UL << CAN_F2R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F2R2_FB23 CAN_F2R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F2R2_FB24_Pos (24U)
#define CAN_F2R2_FB24_Msk (0x1UL << CAN_F2R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F2R2_FB24 CAN_F2R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F2R2_FB25_Pos (25U)
#define CAN_F2R2_FB25_Msk (0x1UL << CAN_F2R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F2R2_FB25 CAN_F2R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F2R2_FB26_Pos (26U)
#define CAN_F2R2_FB26_Msk (0x1UL << CAN_F2R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F2R2_FB26 CAN_F2R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F2R2_FB27_Pos (27U)
#define CAN_F2R2_FB27_Msk (0x1UL << CAN_F2R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F2R2_FB27 CAN_F2R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F2R2_FB28_Pos (28U)
#define CAN_F2R2_FB28_Msk (0x1UL << CAN_F2R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F2R2_FB28 CAN_F2R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F2R2_FB29_Pos (29U)
#define CAN_F2R2_FB29_Msk (0x1UL << CAN_F2R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F2R2_FB29 CAN_F2R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F2R2_FB30_Pos (30U)
#define CAN_F2R2_FB30_Msk (0x1UL << CAN_F2R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F2R2_FB30 CAN_F2R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F2R2_FB31_Pos (31U)
#define CAN_F2R2_FB31_Msk (0x1UL << CAN_F2R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F2R2_FB31 CAN_F2R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F3R2 register  *******************/
#define CAN_F3R2_FB0_Pos (0U)
#define CAN_F3R2_FB0_Msk (0x1UL << CAN_F3R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F3R2_FB0 CAN_F3R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F3R2_FB1_Pos (1U)
#define CAN_F3R2_FB1_Msk (0x1UL << CAN_F3R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F3R2_FB1 CAN_F3R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F3R2_FB2_Pos (2U)
#define CAN_F3R2_FB2_Msk (0x1UL << CAN_F3R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F3R2_FB2 CAN_F3R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F3R2_FB3_Pos (3U)
#define CAN_F3R2_FB3_Msk (0x1UL << CAN_F3R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F3R2_FB3 CAN_F3R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F3R2_FB4_Pos (4U)
#define CAN_F3R2_FB4_Msk (0x1UL << CAN_F3R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F3R2_FB4 CAN_F3R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F3R2_FB5_Pos (5U)
#define CAN_F3R2_FB5_Msk (0x1UL << CAN_F3R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F3R2_FB5 CAN_F3R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F3R2_FB6_Pos (6U)
#define CAN_F3R2_FB6_Msk (0x1UL << CAN_F3R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F3R2_FB6 CAN_F3R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F3R2_FB7_Pos (7U)
#define CAN_F3R2_FB7_Msk (0x1UL << CAN_F3R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F3R2_FB7 CAN_F3R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F3R2_FB8_Pos (8U)
#define CAN_F3R2_FB8_Msk (0x1UL << CAN_F3R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F3R2_FB8 CAN_F3R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F3R2_FB9_Pos (9U)
#define CAN_F3R2_FB9_Msk (0x1UL << CAN_F3R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F3R2_FB9 CAN_F3R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F3R2_FB10_Pos (10U)
#define CAN_F3R2_FB10_Msk (0x1UL << CAN_F3R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F3R2_FB10 CAN_F3R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F3R2_FB11_Pos (11U)
#define CAN_F3R2_FB11_Msk (0x1UL << CAN_F3R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F3R2_FB11 CAN_F3R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F3R2_FB12_Pos (12U)
#define CAN_F3R2_FB12_Msk (0x1UL << CAN_F3R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F3R2_FB12 CAN_F3R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F3R2_FB13_Pos (13U)
#define CAN_F3R2_FB13_Msk (0x1UL << CAN_F3R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F3R2_FB13 CAN_F3R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F3R2_FB14_Pos (14U)
#define CAN_F3R2_FB14_Msk (0x1UL << CAN_F3R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F3R2_FB14 CAN_F3R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F3R2_FB15_Pos (15U)
#define CAN_F3R2_FB15_Msk (0x1UL << CAN_F3R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F3R2_FB15 CAN_F3R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F3R2_FB16_Pos (16U)
#define CAN_F3R2_FB16_Msk (0x1UL << CAN_F3R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F3R2_FB16 CAN_F3R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F3R2_FB17_Pos (17U)
#define CAN_F3R2_FB17_Msk (0x1UL << CAN_F3R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F3R2_FB17 CAN_F3R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F3R2_FB18_Pos (18U)
#define CAN_F3R2_FB18_Msk (0x1UL << CAN_F3R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F3R2_FB18 CAN_F3R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F3R2_FB19_Pos (19U)
#define CAN_F3R2_FB19_Msk (0x1UL << CAN_F3R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F3R2_FB19 CAN_F3R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F3R2_FB20_Pos (20U)
#define CAN_F3R2_FB20_Msk (0x1UL << CAN_F3R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F3R2_FB20 CAN_F3R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F3R2_FB21_Pos (21U)
#define CAN_F3R2_FB21_Msk (0x1UL << CAN_F3R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F3R2_FB21 CAN_F3R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F3R2_FB22_Pos (22U)
#define CAN_F3R2_FB22_Msk (0x1UL << CAN_F3R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F3R2_FB22 CAN_F3R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F3R2_FB23_Pos (23U)
#define CAN_F3R2_FB23_Msk (0x1UL << CAN_F3R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F3R2_FB23 CAN_F3R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F3R2_FB24_Pos (24U)
#define CAN_F3R2_FB24_Msk (0x1UL << CAN_F3R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F3R2_FB24 CAN_F3R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F3R2_FB25_Pos (25U)
#define CAN_F3R2_FB25_Msk (0x1UL << CAN_F3R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F3R2_FB25 CAN_F3R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F3R2_FB26_Pos (26U)
#define CAN_F3R2_FB26_Msk (0x1UL << CAN_F3R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F3R2_FB26 CAN_F3R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F3R2_FB27_Pos (27U)
#define CAN_F3R2_FB27_Msk (0x1UL << CAN_F3R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F3R2_FB27 CAN_F3R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F3R2_FB28_Pos (28U)
#define CAN_F3R2_FB28_Msk (0x1UL << CAN_F3R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F3R2_FB28 CAN_F3R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F3R2_FB29_Pos (29U)
#define CAN_F3R2_FB29_Msk (0x1UL << CAN_F3R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F3R2_FB29 CAN_F3R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F3R2_FB30_Pos (30U)
#define CAN_F3R2_FB30_Msk (0x1UL << CAN_F3R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F3R2_FB30 CAN_F3R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F3R2_FB31_Pos (31U)
#define CAN_F3R2_FB31_Msk (0x1UL << CAN_F3R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F3R2_FB31 CAN_F3R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F4R2 register  *******************/
#define CAN_F4R2_FB0_Pos (0U)
#define CAN_F4R2_FB0_Msk (0x1UL << CAN_F4R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F4R2_FB0 CAN_F4R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F4R2_FB1_Pos (1U)
#define CAN_F4R2_FB1_Msk (0x1UL << CAN_F4R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F4R2_FB1 CAN_F4R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F4R2_FB2_Pos (2U)
#define CAN_F4R2_FB2_Msk (0x1UL << CAN_F4R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F4R2_FB2 CAN_F4R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F4R2_FB3_Pos (3U)
#define CAN_F4R2_FB3_Msk (0x1UL << CAN_F4R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F4R2_FB3 CAN_F4R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F4R2_FB4_Pos (4U)
#define CAN_F4R2_FB4_Msk (0x1UL << CAN_F4R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F4R2_FB4 CAN_F4R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F4R2_FB5_Pos (5U)
#define CAN_F4R2_FB5_Msk (0x1UL << CAN_F4R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F4R2_FB5 CAN_F4R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F4R2_FB6_Pos (6U)
#define CAN_F4R2_FB6_Msk (0x1UL << CAN_F4R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F4R2_FB6 CAN_F4R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F4R2_FB7_Pos (7U)
#define CAN_F4R2_FB7_Msk (0x1UL << CAN_F4R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F4R2_FB7 CAN_F4R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F4R2_FB8_Pos (8U)
#define CAN_F4R2_FB8_Msk (0x1UL << CAN_F4R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F4R2_FB8 CAN_F4R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F4R2_FB9_Pos (9U)
#define CAN_F4R2_FB9_Msk (0x1UL << CAN_F4R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F4R2_FB9 CAN_F4R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F4R2_FB10_Pos (10U)
#define CAN_F4R2_FB10_Msk (0x1UL << CAN_F4R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F4R2_FB10 CAN_F4R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F4R2_FB11_Pos (11U)
#define CAN_F4R2_FB11_Msk (0x1UL << CAN_F4R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F4R2_FB11 CAN_F4R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F4R2_FB12_Pos (12U)
#define CAN_F4R2_FB12_Msk (0x1UL << CAN_F4R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F4R2_FB12 CAN_F4R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F4R2_FB13_Pos (13U)
#define CAN_F4R2_FB13_Msk (0x1UL << CAN_F4R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F4R2_FB13 CAN_F4R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F4R2_FB14_Pos (14U)
#define CAN_F4R2_FB14_Msk (0x1UL << CAN_F4R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F4R2_FB14 CAN_F4R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F4R2_FB15_Pos (15U)
#define CAN_F4R2_FB15_Msk (0x1UL << CAN_F4R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F4R2_FB15 CAN_F4R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F4R2_FB16_Pos (16U)
#define CAN_F4R2_FB16_Msk (0x1UL << CAN_F4R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F4R2_FB16 CAN_F4R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F4R2_FB17_Pos (17U)
#define CAN_F4R2_FB17_Msk (0x1UL << CAN_F4R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F4R2_FB17 CAN_F4R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F4R2_FB18_Pos (18U)
#define CAN_F4R2_FB18_Msk (0x1UL << CAN_F4R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F4R2_FB18 CAN_F4R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F4R2_FB19_Pos (19U)
#define CAN_F4R2_FB19_Msk (0x1UL << CAN_F4R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F4R2_FB19 CAN_F4R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F4R2_FB20_Pos (20U)
#define CAN_F4R2_FB20_Msk (0x1UL << CAN_F4R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F4R2_FB20 CAN_F4R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F4R2_FB21_Pos (21U)
#define CAN_F4R2_FB21_Msk (0x1UL << CAN_F4R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F4R2_FB21 CAN_F4R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F4R2_FB22_Pos (22U)
#define CAN_F4R2_FB22_Msk (0x1UL << CAN_F4R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F4R2_FB22 CAN_F4R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F4R2_FB23_Pos (23U)
#define CAN_F4R2_FB23_Msk (0x1UL << CAN_F4R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F4R2_FB23 CAN_F4R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F4R2_FB24_Pos (24U)
#define CAN_F4R2_FB24_Msk (0x1UL << CAN_F4R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F4R2_FB24 CAN_F4R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F4R2_FB25_Pos (25U)
#define CAN_F4R2_FB25_Msk (0x1UL << CAN_F4R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F4R2_FB25 CAN_F4R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F4R2_FB26_Pos (26U)
#define CAN_F4R2_FB26_Msk (0x1UL << CAN_F4R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F4R2_FB26 CAN_F4R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F4R2_FB27_Pos (27U)
#define CAN_F4R2_FB27_Msk (0x1UL << CAN_F4R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F4R2_FB27 CAN_F4R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F4R2_FB28_Pos (28U)
#define CAN_F4R2_FB28_Msk (0x1UL << CAN_F4R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F4R2_FB28 CAN_F4R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F4R2_FB29_Pos (29U)
#define CAN_F4R2_FB29_Msk (0x1UL << CAN_F4R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F4R2_FB29 CAN_F4R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F4R2_FB30_Pos (30U)
#define CAN_F4R2_FB30_Msk (0x1UL << CAN_F4R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F4R2_FB30 CAN_F4R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F4R2_FB31_Pos (31U)
#define CAN_F4R2_FB31_Msk (0x1UL << CAN_F4R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F4R2_FB31 CAN_F4R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F5R2 register  *******************/
#define CAN_F5R2_FB0_Pos (0U)
#define CAN_F5R2_FB0_Msk (0x1UL << CAN_F5R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F5R2_FB0 CAN_F5R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F5R2_FB1_Pos (1U)
#define CAN_F5R2_FB1_Msk (0x1UL << CAN_F5R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F5R2_FB1 CAN_F5R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F5R2_FB2_Pos (2U)
#define CAN_F5R2_FB2_Msk (0x1UL << CAN_F5R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F5R2_FB2 CAN_F5R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F5R2_FB3_Pos (3U)
#define CAN_F5R2_FB3_Msk (0x1UL << CAN_F5R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F5R2_FB3 CAN_F5R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F5R2_FB4_Pos (4U)
#define CAN_F5R2_FB4_Msk (0x1UL << CAN_F5R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F5R2_FB4 CAN_F5R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F5R2_FB5_Pos (5U)
#define CAN_F5R2_FB5_Msk (0x1UL << CAN_F5R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F5R2_FB5 CAN_F5R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F5R2_FB6_Pos (6U)
#define CAN_F5R2_FB6_Msk (0x1UL << CAN_F5R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F5R2_FB6 CAN_F5R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F5R2_FB7_Pos (7U)
#define CAN_F5R2_FB7_Msk (0x1UL << CAN_F5R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F5R2_FB7 CAN_F5R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F5R2_FB8_Pos (8U)
#define CAN_F5R2_FB8_Msk (0x1UL << CAN_F5R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F5R2_FB8 CAN_F5R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F5R2_FB9_Pos (9U)
#define CAN_F5R2_FB9_Msk (0x1UL << CAN_F5R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F5R2_FB9 CAN_F5R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F5R2_FB10_Pos (10U)
#define CAN_F5R2_FB10_Msk (0x1UL << CAN_F5R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F5R2_FB10 CAN_F5R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F5R2_FB11_Pos (11U)
#define CAN_F5R2_FB11_Msk (0x1UL << CAN_F5R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F5R2_FB11 CAN_F5R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F5R2_FB12_Pos (12U)
#define CAN_F5R2_FB12_Msk (0x1UL << CAN_F5R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F5R2_FB12 CAN_F5R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F5R2_FB13_Pos (13U)
#define CAN_F5R2_FB13_Msk (0x1UL << CAN_F5R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F5R2_FB13 CAN_F5R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F5R2_FB14_Pos (14U)
#define CAN_F5R2_FB14_Msk (0x1UL << CAN_F5R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F5R2_FB14 CAN_F5R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F5R2_FB15_Pos (15U)
#define CAN_F5R2_FB15_Msk (0x1UL << CAN_F5R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F5R2_FB15 CAN_F5R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F5R2_FB16_Pos (16U)
#define CAN_F5R2_FB16_Msk (0x1UL << CAN_F5R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F5R2_FB16 CAN_F5R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F5R2_FB17_Pos (17U)
#define CAN_F5R2_FB17_Msk (0x1UL << CAN_F5R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F5R2_FB17 CAN_F5R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F5R2_FB18_Pos (18U)
#define CAN_F5R2_FB18_Msk (0x1UL << CAN_F5R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F5R2_FB18 CAN_F5R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F5R2_FB19_Pos (19U)
#define CAN_F5R2_FB19_Msk (0x1UL << CAN_F5R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F5R2_FB19 CAN_F5R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F5R2_FB20_Pos (20U)
#define CAN_F5R2_FB20_Msk (0x1UL << CAN_F5R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F5R2_FB20 CAN_F5R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F5R2_FB21_Pos (21U)
#define CAN_F5R2_FB21_Msk (0x1UL << CAN_F5R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F5R2_FB21 CAN_F5R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F5R2_FB22_Pos (22U)
#define CAN_F5R2_FB22_Msk (0x1UL << CAN_F5R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F5R2_FB22 CAN_F5R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F5R2_FB23_Pos (23U)
#define CAN_F5R2_FB23_Msk (0x1UL << CAN_F5R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F5R2_FB23 CAN_F5R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F5R2_FB24_Pos (24U)
#define CAN_F5R2_FB24_Msk (0x1UL << CAN_F5R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F5R2_FB24 CAN_F5R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F5R2_FB25_Pos (25U)
#define CAN_F5R2_FB25_Msk (0x1UL << CAN_F5R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F5R2_FB25 CAN_F5R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F5R2_FB26_Pos (26U)
#define CAN_F5R2_FB26_Msk (0x1UL << CAN_F5R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F5R2_FB26 CAN_F5R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F5R2_FB27_Pos (27U)
#define CAN_F5R2_FB27_Msk (0x1UL << CAN_F5R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F5R2_FB27 CAN_F5R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F5R2_FB28_Pos (28U)
#define CAN_F5R2_FB28_Msk (0x1UL << CAN_F5R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F5R2_FB28 CAN_F5R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F5R2_FB29_Pos (29U)
#define CAN_F5R2_FB29_Msk (0x1UL << CAN_F5R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F5R2_FB29 CAN_F5R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F5R2_FB30_Pos (30U)
#define CAN_F5R2_FB30_Msk (0x1UL << CAN_F5R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F5R2_FB30 CAN_F5R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F5R2_FB31_Pos (31U)
#define CAN_F5R2_FB31_Msk (0x1UL << CAN_F5R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F5R2_FB31 CAN_F5R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F6R2 register  *******************/
#define CAN_F6R2_FB0_Pos (0U)
#define CAN_F6R2_FB0_Msk (0x1UL << CAN_F6R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F6R2_FB0 CAN_F6R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F6R2_FB1_Pos (1U)
#define CAN_F6R2_FB1_Msk (0x1UL << CAN_F6R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F6R2_FB1 CAN_F6R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F6R2_FB2_Pos (2U)
#define CAN_F6R2_FB2_Msk (0x1UL << CAN_F6R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F6R2_FB2 CAN_F6R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F6R2_FB3_Pos (3U)
#define CAN_F6R2_FB3_Msk (0x1UL << CAN_F6R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F6R2_FB3 CAN_F6R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F6R2_FB4_Pos (4U)
#define CAN_F6R2_FB4_Msk (0x1UL << CAN_F6R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F6R2_FB4 CAN_F6R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F6R2_FB5_Pos (5U)
#define CAN_F6R2_FB5_Msk (0x1UL << CAN_F6R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F6R2_FB5 CAN_F6R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F6R2_FB6_Pos (6U)
#define CAN_F6R2_FB6_Msk (0x1UL << CAN_F6R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F6R2_FB6 CAN_F6R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F6R2_FB7_Pos (7U)
#define CAN_F6R2_FB7_Msk (0x1UL << CAN_F6R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F6R2_FB7 CAN_F6R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F6R2_FB8_Pos (8U)
#define CAN_F6R2_FB8_Msk (0x1UL << CAN_F6R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F6R2_FB8 CAN_F6R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F6R2_FB9_Pos (9U)
#define CAN_F6R2_FB9_Msk (0x1UL << CAN_F6R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F6R2_FB9 CAN_F6R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F6R2_FB10_Pos (10U)
#define CAN_F6R2_FB10_Msk (0x1UL << CAN_F6R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F6R2_FB10 CAN_F6R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F6R2_FB11_Pos (11U)
#define CAN_F6R2_FB11_Msk (0x1UL << CAN_F6R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F6R2_FB11 CAN_F6R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F6R2_FB12_Pos (12U)
#define CAN_F6R2_FB12_Msk (0x1UL << CAN_F6R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F6R2_FB12 CAN_F6R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F6R2_FB13_Pos (13U)
#define CAN_F6R2_FB13_Msk (0x1UL << CAN_F6R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F6R2_FB13 CAN_F6R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F6R2_FB14_Pos (14U)
#define CAN_F6R2_FB14_Msk (0x1UL << CAN_F6R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F6R2_FB14 CAN_F6R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F6R2_FB15_Pos (15U)
#define CAN_F6R2_FB15_Msk (0x1UL << CAN_F6R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F6R2_FB15 CAN_F6R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F6R2_FB16_Pos (16U)
#define CAN_F6R2_FB16_Msk (0x1UL << CAN_F6R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F6R2_FB16 CAN_F6R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F6R2_FB17_Pos (17U)
#define CAN_F6R2_FB17_Msk (0x1UL << CAN_F6R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F6R2_FB17 CAN_F6R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F6R2_FB18_Pos (18U)
#define CAN_F6R2_FB18_Msk (0x1UL << CAN_F6R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F6R2_FB18 CAN_F6R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F6R2_FB19_Pos (19U)
#define CAN_F6R2_FB19_Msk (0x1UL << CAN_F6R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F6R2_FB19 CAN_F6R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F6R2_FB20_Pos (20U)
#define CAN_F6R2_FB20_Msk (0x1UL << CAN_F6R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F6R2_FB20 CAN_F6R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F6R2_FB21_Pos (21U)
#define CAN_F6R2_FB21_Msk (0x1UL << CAN_F6R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F6R2_FB21 CAN_F6R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F6R2_FB22_Pos (22U)
#define CAN_F6R2_FB22_Msk (0x1UL << CAN_F6R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F6R2_FB22 CAN_F6R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F6R2_FB23_Pos (23U)
#define CAN_F6R2_FB23_Msk (0x1UL << CAN_F6R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F6R2_FB23 CAN_F6R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F6R2_FB24_Pos (24U)
#define CAN_F6R2_FB24_Msk (0x1UL << CAN_F6R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F6R2_FB24 CAN_F6R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F6R2_FB25_Pos (25U)
#define CAN_F6R2_FB25_Msk (0x1UL << CAN_F6R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F6R2_FB25 CAN_F6R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F6R2_FB26_Pos (26U)
#define CAN_F6R2_FB26_Msk (0x1UL << CAN_F6R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F6R2_FB26 CAN_F6R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F6R2_FB27_Pos (27U)
#define CAN_F6R2_FB27_Msk (0x1UL << CAN_F6R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F6R2_FB27 CAN_F6R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F6R2_FB28_Pos (28U)
#define CAN_F6R2_FB28_Msk (0x1UL << CAN_F6R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F6R2_FB28 CAN_F6R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F6R2_FB29_Pos (29U)
#define CAN_F6R2_FB29_Msk (0x1UL << CAN_F6R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F6R2_FB29 CAN_F6R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F6R2_FB30_Pos (30U)
#define CAN_F6R2_FB30_Msk (0x1UL << CAN_F6R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F6R2_FB30 CAN_F6R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F6R2_FB31_Pos (31U)
#define CAN_F6R2_FB31_Msk (0x1UL << CAN_F6R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F6R2_FB31 CAN_F6R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F7R2 register  *******************/
#define CAN_F7R2_FB0_Pos (0U)
#define CAN_F7R2_FB0_Msk (0x1UL << CAN_F7R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F7R2_FB0 CAN_F7R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F7R2_FB1_Pos (1U)
#define CAN_F7R2_FB1_Msk (0x1UL << CAN_F7R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F7R2_FB1 CAN_F7R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F7R2_FB2_Pos (2U)
#define CAN_F7R2_FB2_Msk (0x1UL << CAN_F7R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F7R2_FB2 CAN_F7R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F7R2_FB3_Pos (3U)
#define CAN_F7R2_FB3_Msk (0x1UL << CAN_F7R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F7R2_FB3 CAN_F7R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F7R2_FB4_Pos (4U)
#define CAN_F7R2_FB4_Msk (0x1UL << CAN_F7R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F7R2_FB4 CAN_F7R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F7R2_FB5_Pos (5U)
#define CAN_F7R2_FB5_Msk (0x1UL << CAN_F7R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F7R2_FB5 CAN_F7R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F7R2_FB6_Pos (6U)
#define CAN_F7R2_FB6_Msk (0x1UL << CAN_F7R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F7R2_FB6 CAN_F7R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F7R2_FB7_Pos (7U)
#define CAN_F7R2_FB7_Msk (0x1UL << CAN_F7R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F7R2_FB7 CAN_F7R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F7R2_FB8_Pos (8U)
#define CAN_F7R2_FB8_Msk (0x1UL << CAN_F7R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F7R2_FB8 CAN_F7R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F7R2_FB9_Pos (9U)
#define CAN_F7R2_FB9_Msk (0x1UL << CAN_F7R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F7R2_FB9 CAN_F7R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F7R2_FB10_Pos (10U)
#define CAN_F7R2_FB10_Msk (0x1UL << CAN_F7R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F7R2_FB10 CAN_F7R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F7R2_FB11_Pos (11U)
#define CAN_F7R2_FB11_Msk (0x1UL << CAN_F7R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F7R2_FB11 CAN_F7R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F7R2_FB12_Pos (12U)
#define CAN_F7R2_FB12_Msk (0x1UL << CAN_F7R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F7R2_FB12 CAN_F7R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F7R2_FB13_Pos (13U)
#define CAN_F7R2_FB13_Msk (0x1UL << CAN_F7R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F7R2_FB13 CAN_F7R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F7R2_FB14_Pos (14U)
#define CAN_F7R2_FB14_Msk (0x1UL << CAN_F7R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F7R2_FB14 CAN_F7R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F7R2_FB15_Pos (15U)
#define CAN_F7R2_FB15_Msk (0x1UL << CAN_F7R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F7R2_FB15 CAN_F7R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F7R2_FB16_Pos (16U)
#define CAN_F7R2_FB16_Msk (0x1UL << CAN_F7R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F7R2_FB16 CAN_F7R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F7R2_FB17_Pos (17U)
#define CAN_F7R2_FB17_Msk (0x1UL << CAN_F7R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F7R2_FB17 CAN_F7R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F7R2_FB18_Pos (18U)
#define CAN_F7R2_FB18_Msk (0x1UL << CAN_F7R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F7R2_FB18 CAN_F7R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F7R2_FB19_Pos (19U)
#define CAN_F7R2_FB19_Msk (0x1UL << CAN_F7R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F7R2_FB19 CAN_F7R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F7R2_FB20_Pos (20U)
#define CAN_F7R2_FB20_Msk (0x1UL << CAN_F7R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F7R2_FB20 CAN_F7R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F7R2_FB21_Pos (21U)
#define CAN_F7R2_FB21_Msk (0x1UL << CAN_F7R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F7R2_FB21 CAN_F7R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F7R2_FB22_Pos (22U)
#define CAN_F7R2_FB22_Msk (0x1UL << CAN_F7R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F7R2_FB22 CAN_F7R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F7R2_FB23_Pos (23U)
#define CAN_F7R2_FB23_Msk (0x1UL << CAN_F7R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F7R2_FB23 CAN_F7R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F7R2_FB24_Pos (24U)
#define CAN_F7R2_FB24_Msk (0x1UL << CAN_F7R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F7R2_FB24 CAN_F7R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F7R2_FB25_Pos (25U)
#define CAN_F7R2_FB25_Msk (0x1UL << CAN_F7R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F7R2_FB25 CAN_F7R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F7R2_FB26_Pos (26U)
#define CAN_F7R2_FB26_Msk (0x1UL << CAN_F7R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F7R2_FB26 CAN_F7R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F7R2_FB27_Pos (27U)
#define CAN_F7R2_FB27_Msk (0x1UL << CAN_F7R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F7R2_FB27 CAN_F7R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F7R2_FB28_Pos (28U)
#define CAN_F7R2_FB28_Msk (0x1UL << CAN_F7R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F7R2_FB28 CAN_F7R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F7R2_FB29_Pos (29U)
#define CAN_F7R2_FB29_Msk (0x1UL << CAN_F7R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F7R2_FB29 CAN_F7R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F7R2_FB30_Pos (30U)
#define CAN_F7R2_FB30_Msk (0x1UL << CAN_F7R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F7R2_FB30 CAN_F7R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F7R2_FB31_Pos (31U)
#define CAN_F7R2_FB31_Msk (0x1UL << CAN_F7R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F7R2_FB31 CAN_F7R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F8R2 register  *******************/
#define CAN_F8R2_FB0_Pos (0U)
#define CAN_F8R2_FB0_Msk (0x1UL << CAN_F8R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F8R2_FB0 CAN_F8R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F8R2_FB1_Pos (1U)
#define CAN_F8R2_FB1_Msk (0x1UL << CAN_F8R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F8R2_FB1 CAN_F8R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F8R2_FB2_Pos (2U)
#define CAN_F8R2_FB2_Msk (0x1UL << CAN_F8R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F8R2_FB2 CAN_F8R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F8R2_FB3_Pos (3U)
#define CAN_F8R2_FB3_Msk (0x1UL << CAN_F8R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F8R2_FB3 CAN_F8R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F8R2_FB4_Pos (4U)
#define CAN_F8R2_FB4_Msk (0x1UL << CAN_F8R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F8R2_FB4 CAN_F8R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F8R2_FB5_Pos (5U)
#define CAN_F8R2_FB5_Msk (0x1UL << CAN_F8R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F8R2_FB5 CAN_F8R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F8R2_FB6_Pos (6U)
#define CAN_F8R2_FB6_Msk (0x1UL << CAN_F8R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F8R2_FB6 CAN_F8R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F8R2_FB7_Pos (7U)
#define CAN_F8R2_FB7_Msk (0x1UL << CAN_F8R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F8R2_FB7 CAN_F8R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F8R2_FB8_Pos (8U)
#define CAN_F8R2_FB8_Msk (0x1UL << CAN_F8R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F8R2_FB8 CAN_F8R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F8R2_FB9_Pos (9U)
#define CAN_F8R2_FB9_Msk (0x1UL << CAN_F8R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F8R2_FB9 CAN_F8R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F8R2_FB10_Pos (10U)
#define CAN_F8R2_FB10_Msk (0x1UL << CAN_F8R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F8R2_FB10 CAN_F8R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F8R2_FB11_Pos (11U)
#define CAN_F8R2_FB11_Msk (0x1UL << CAN_F8R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F8R2_FB11 CAN_F8R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F8R2_FB12_Pos (12U)
#define CAN_F8R2_FB12_Msk (0x1UL << CAN_F8R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F8R2_FB12 CAN_F8R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F8R2_FB13_Pos (13U)
#define CAN_F8R2_FB13_Msk (0x1UL << CAN_F8R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F8R2_FB13 CAN_F8R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F8R2_FB14_Pos (14U)
#define CAN_F8R2_FB14_Msk (0x1UL << CAN_F8R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F8R2_FB14 CAN_F8R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F8R2_FB15_Pos (15U)
#define CAN_F8R2_FB15_Msk (0x1UL << CAN_F8R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F8R2_FB15 CAN_F8R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F8R2_FB16_Pos (16U)
#define CAN_F8R2_FB16_Msk (0x1UL << CAN_F8R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F8R2_FB16 CAN_F8R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F8R2_FB17_Pos (17U)
#define CAN_F8R2_FB17_Msk (0x1UL << CAN_F8R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F8R2_FB17 CAN_F8R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F8R2_FB18_Pos (18U)
#define CAN_F8R2_FB18_Msk (0x1UL << CAN_F8R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F8R2_FB18 CAN_F8R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F8R2_FB19_Pos (19U)
#define CAN_F8R2_FB19_Msk (0x1UL << CAN_F8R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F8R2_FB19 CAN_F8R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F8R2_FB20_Pos (20U)
#define CAN_F8R2_FB20_Msk (0x1UL << CAN_F8R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F8R2_FB20 CAN_F8R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F8R2_FB21_Pos (21U)
#define CAN_F8R2_FB21_Msk (0x1UL << CAN_F8R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F8R2_FB21 CAN_F8R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F8R2_FB22_Pos (22U)
#define CAN_F8R2_FB22_Msk (0x1UL << CAN_F8R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F8R2_FB22 CAN_F8R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F8R2_FB23_Pos (23U)
#define CAN_F8R2_FB23_Msk (0x1UL << CAN_F8R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F8R2_FB23 CAN_F8R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F8R2_FB24_Pos (24U)
#define CAN_F8R2_FB24_Msk (0x1UL << CAN_F8R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F8R2_FB24 CAN_F8R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F8R2_FB25_Pos (25U)
#define CAN_F8R2_FB25_Msk (0x1UL << CAN_F8R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F8R2_FB25 CAN_F8R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F8R2_FB26_Pos (26U)
#define CAN_F8R2_FB26_Msk (0x1UL << CAN_F8R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F8R2_FB26 CAN_F8R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F8R2_FB27_Pos (27U)
#define CAN_F8R2_FB27_Msk (0x1UL << CAN_F8R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F8R2_FB27 CAN_F8R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F8R2_FB28_Pos (28U)
#define CAN_F8R2_FB28_Msk (0x1UL << CAN_F8R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F8R2_FB28 CAN_F8R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F8R2_FB29_Pos (29U)
#define CAN_F8R2_FB29_Msk (0x1UL << CAN_F8R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F8R2_FB29 CAN_F8R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F8R2_FB30_Pos (30U)
#define CAN_F8R2_FB30_Msk (0x1UL << CAN_F8R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F8R2_FB30 CAN_F8R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F8R2_FB31_Pos (31U)
#define CAN_F8R2_FB31_Msk (0x1UL << CAN_F8R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F8R2_FB31 CAN_F8R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F9R2 register  *******************/
#define CAN_F9R2_FB0_Pos (0U)
#define CAN_F9R2_FB0_Msk (0x1UL << CAN_F9R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F9R2_FB0 CAN_F9R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F9R2_FB1_Pos (1U)
#define CAN_F9R2_FB1_Msk (0x1UL << CAN_F9R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F9R2_FB1 CAN_F9R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F9R2_FB2_Pos (2U)
#define CAN_F9R2_FB2_Msk (0x1UL << CAN_F9R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F9R2_FB2 CAN_F9R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F9R2_FB3_Pos (3U)
#define CAN_F9R2_FB3_Msk (0x1UL << CAN_F9R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F9R2_FB3 CAN_F9R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F9R2_FB4_Pos (4U)
#define CAN_F9R2_FB4_Msk (0x1UL << CAN_F9R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F9R2_FB4 CAN_F9R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F9R2_FB5_Pos (5U)
#define CAN_F9R2_FB5_Msk (0x1UL << CAN_F9R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F9R2_FB5 CAN_F9R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F9R2_FB6_Pos (6U)
#define CAN_F9R2_FB6_Msk (0x1UL << CAN_F9R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F9R2_FB6 CAN_F9R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F9R2_FB7_Pos (7U)
#define CAN_F9R2_FB7_Msk (0x1UL << CAN_F9R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F9R2_FB7 CAN_F9R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F9R2_FB8_Pos (8U)
#define CAN_F9R2_FB8_Msk (0x1UL << CAN_F9R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F9R2_FB8 CAN_F9R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F9R2_FB9_Pos (9U)
#define CAN_F9R2_FB9_Msk (0x1UL << CAN_F9R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F9R2_FB9 CAN_F9R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F9R2_FB10_Pos (10U)
#define CAN_F9R2_FB10_Msk (0x1UL << CAN_F9R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F9R2_FB10 CAN_F9R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F9R2_FB11_Pos (11U)
#define CAN_F9R2_FB11_Msk (0x1UL << CAN_F9R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F9R2_FB11 CAN_F9R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F9R2_FB12_Pos (12U)
#define CAN_F9R2_FB12_Msk (0x1UL << CAN_F9R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F9R2_FB12 CAN_F9R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F9R2_FB13_Pos (13U)
#define CAN_F9R2_FB13_Msk (0x1UL << CAN_F9R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F9R2_FB13 CAN_F9R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F9R2_FB14_Pos (14U)
#define CAN_F9R2_FB14_Msk (0x1UL << CAN_F9R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F9R2_FB14 CAN_F9R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F9R2_FB15_Pos (15U)
#define CAN_F9R2_FB15_Msk (0x1UL << CAN_F9R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F9R2_FB15 CAN_F9R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F9R2_FB16_Pos (16U)
#define CAN_F9R2_FB16_Msk (0x1UL << CAN_F9R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F9R2_FB16 CAN_F9R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F9R2_FB17_Pos (17U)
#define CAN_F9R2_FB17_Msk (0x1UL << CAN_F9R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F9R2_FB17 CAN_F9R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F9R2_FB18_Pos (18U)
#define CAN_F9R2_FB18_Msk (0x1UL << CAN_F9R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F9R2_FB18 CAN_F9R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F9R2_FB19_Pos (19U)
#define CAN_F9R2_FB19_Msk (0x1UL << CAN_F9R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F9R2_FB19 CAN_F9R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F9R2_FB20_Pos (20U)
#define CAN_F9R2_FB20_Msk (0x1UL << CAN_F9R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F9R2_FB20 CAN_F9R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F9R2_FB21_Pos (21U)
#define CAN_F9R2_FB21_Msk (0x1UL << CAN_F9R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F9R2_FB21 CAN_F9R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F9R2_FB22_Pos (22U)
#define CAN_F9R2_FB22_Msk (0x1UL << CAN_F9R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F9R2_FB22 CAN_F9R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F9R2_FB23_Pos (23U)
#define CAN_F9R2_FB23_Msk (0x1UL << CAN_F9R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F9R2_FB23 CAN_F9R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F9R2_FB24_Pos (24U)
#define CAN_F9R2_FB24_Msk (0x1UL << CAN_F9R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F9R2_FB24 CAN_F9R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F9R2_FB25_Pos (25U)
#define CAN_F9R2_FB25_Msk (0x1UL << CAN_F9R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F9R2_FB25 CAN_F9R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F9R2_FB26_Pos (26U)
#define CAN_F9R2_FB26_Msk (0x1UL << CAN_F9R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F9R2_FB26 CAN_F9R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F9R2_FB27_Pos (27U)
#define CAN_F9R2_FB27_Msk (0x1UL << CAN_F9R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F9R2_FB27 CAN_F9R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F9R2_FB28_Pos (28U)
#define CAN_F9R2_FB28_Msk (0x1UL << CAN_F9R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F9R2_FB28 CAN_F9R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F9R2_FB29_Pos (29U)
#define CAN_F9R2_FB29_Msk (0x1UL << CAN_F9R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F9R2_FB29 CAN_F9R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F9R2_FB30_Pos (30U)
#define CAN_F9R2_FB30_Msk (0x1UL << CAN_F9R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F9R2_FB30 CAN_F9R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F9R2_FB31_Pos (31U)
#define CAN_F9R2_FB31_Msk (0x1UL << CAN_F9R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F9R2_FB31 CAN_F9R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F10R2 register  ******************/
#define CAN_F10R2_FB0_Pos (0U)
#define CAN_F10R2_FB0_Msk (0x1UL << CAN_F10R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F10R2_FB0 CAN_F10R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F10R2_FB1_Pos (1U)
#define CAN_F10R2_FB1_Msk (0x1UL << CAN_F10R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F10R2_FB1 CAN_F10R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F10R2_FB2_Pos (2U)
#define CAN_F10R2_FB2_Msk (0x1UL << CAN_F10R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F10R2_FB2 CAN_F10R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F10R2_FB3_Pos (3U)
#define CAN_F10R2_FB3_Msk (0x1UL << CAN_F10R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F10R2_FB3 CAN_F10R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F10R2_FB4_Pos (4U)
#define CAN_F10R2_FB4_Msk (0x1UL << CAN_F10R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F10R2_FB4 CAN_F10R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F10R2_FB5_Pos (5U)
#define CAN_F10R2_FB5_Msk (0x1UL << CAN_F10R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F10R2_FB5 CAN_F10R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F10R2_FB6_Pos (6U)
#define CAN_F10R2_FB6_Msk (0x1UL << CAN_F10R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F10R2_FB6 CAN_F10R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F10R2_FB7_Pos (7U)
#define CAN_F10R2_FB7_Msk (0x1UL << CAN_F10R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F10R2_FB7 CAN_F10R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F10R2_FB8_Pos (8U)
#define CAN_F10R2_FB8_Msk (0x1UL << CAN_F10R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F10R2_FB8 CAN_F10R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F10R2_FB9_Pos (9U)
#define CAN_F10R2_FB9_Msk (0x1UL << CAN_F10R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F10R2_FB9 CAN_F10R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F10R2_FB10_Pos (10U)
#define CAN_F10R2_FB10_Msk (0x1UL << CAN_F10R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F10R2_FB10 CAN_F10R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F10R2_FB11_Pos (11U)
#define CAN_F10R2_FB11_Msk (0x1UL << CAN_F10R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F10R2_FB11 CAN_F10R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F10R2_FB12_Pos (12U)
#define CAN_F10R2_FB12_Msk (0x1UL << CAN_F10R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F10R2_FB12 CAN_F10R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F10R2_FB13_Pos (13U)
#define CAN_F10R2_FB13_Msk (0x1UL << CAN_F10R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F10R2_FB13 CAN_F10R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F10R2_FB14_Pos (14U)
#define CAN_F10R2_FB14_Msk (0x1UL << CAN_F10R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F10R2_FB14 CAN_F10R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F10R2_FB15_Pos (15U)
#define CAN_F10R2_FB15_Msk (0x1UL << CAN_F10R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F10R2_FB15 CAN_F10R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F10R2_FB16_Pos (16U)
#define CAN_F10R2_FB16_Msk (0x1UL << CAN_F10R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F10R2_FB16 CAN_F10R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F10R2_FB17_Pos (17U)
#define CAN_F10R2_FB17_Msk (0x1UL << CAN_F10R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F10R2_FB17 CAN_F10R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F10R2_FB18_Pos (18U)
#define CAN_F10R2_FB18_Msk (0x1UL << CAN_F10R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F10R2_FB18 CAN_F10R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F10R2_FB19_Pos (19U)
#define CAN_F10R2_FB19_Msk (0x1UL << CAN_F10R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F10R2_FB19 CAN_F10R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F10R2_FB20_Pos (20U)
#define CAN_F10R2_FB20_Msk (0x1UL << CAN_F10R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F10R2_FB20 CAN_F10R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F10R2_FB21_Pos (21U)
#define CAN_F10R2_FB21_Msk (0x1UL << CAN_F10R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F10R2_FB21 CAN_F10R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F10R2_FB22_Pos (22U)
#define CAN_F10R2_FB22_Msk (0x1UL << CAN_F10R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F10R2_FB22 CAN_F10R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F10R2_FB23_Pos (23U)
#define CAN_F10R2_FB23_Msk (0x1UL << CAN_F10R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F10R2_FB23 CAN_F10R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F10R2_FB24_Pos (24U)
#define CAN_F10R2_FB24_Msk (0x1UL << CAN_F10R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F10R2_FB24 CAN_F10R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F10R2_FB25_Pos (25U)
#define CAN_F10R2_FB25_Msk (0x1UL << CAN_F10R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F10R2_FB25 CAN_F10R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F10R2_FB26_Pos (26U)
#define CAN_F10R2_FB26_Msk (0x1UL << CAN_F10R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F10R2_FB26 CAN_F10R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F10R2_FB27_Pos (27U)
#define CAN_F10R2_FB27_Msk (0x1UL << CAN_F10R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F10R2_FB27 CAN_F10R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F10R2_FB28_Pos (28U)
#define CAN_F10R2_FB28_Msk (0x1UL << CAN_F10R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F10R2_FB28 CAN_F10R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F10R2_FB29_Pos (29U)
#define CAN_F10R2_FB29_Msk (0x1UL << CAN_F10R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F10R2_FB29 CAN_F10R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F10R2_FB30_Pos (30U)
#define CAN_F10R2_FB30_Msk (0x1UL << CAN_F10R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F10R2_FB30 CAN_F10R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F10R2_FB31_Pos (31U)
#define CAN_F10R2_FB31_Msk (0x1UL << CAN_F10R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F10R2_FB31 CAN_F10R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F11R2 register  ******************/
#define CAN_F11R2_FB0_Pos (0U)
#define CAN_F11R2_FB0_Msk (0x1UL << CAN_F11R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F11R2_FB0 CAN_F11R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F11R2_FB1_Pos (1U)
#define CAN_F11R2_FB1_Msk (0x1UL << CAN_F11R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F11R2_FB1 CAN_F11R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F11R2_FB2_Pos (2U)
#define CAN_F11R2_FB2_Msk (0x1UL << CAN_F11R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F11R2_FB2 CAN_F11R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F11R2_FB3_Pos (3U)
#define CAN_F11R2_FB3_Msk (0x1UL << CAN_F11R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F11R2_FB3 CAN_F11R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F11R2_FB4_Pos (4U)
#define CAN_F11R2_FB4_Msk (0x1UL << CAN_F11R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F11R2_FB4 CAN_F11R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F11R2_FB5_Pos (5U)
#define CAN_F11R2_FB5_Msk (0x1UL << CAN_F11R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F11R2_FB5 CAN_F11R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F11R2_FB6_Pos (6U)
#define CAN_F11R2_FB6_Msk (0x1UL << CAN_F11R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F11R2_FB6 CAN_F11R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F11R2_FB7_Pos (7U)
#define CAN_F11R2_FB7_Msk (0x1UL << CAN_F11R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F11R2_FB7 CAN_F11R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F11R2_FB8_Pos (8U)
#define CAN_F11R2_FB8_Msk (0x1UL << CAN_F11R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F11R2_FB8 CAN_F11R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F11R2_FB9_Pos (9U)
#define CAN_F11R2_FB9_Msk (0x1UL << CAN_F11R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F11R2_FB9 CAN_F11R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F11R2_FB10_Pos (10U)
#define CAN_F11R2_FB10_Msk (0x1UL << CAN_F11R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F11R2_FB10 CAN_F11R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F11R2_FB11_Pos (11U)
#define CAN_F11R2_FB11_Msk (0x1UL << CAN_F11R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F11R2_FB11 CAN_F11R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F11R2_FB12_Pos (12U)
#define CAN_F11R2_FB12_Msk (0x1UL << CAN_F11R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F11R2_FB12 CAN_F11R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F11R2_FB13_Pos (13U)
#define CAN_F11R2_FB13_Msk (0x1UL << CAN_F11R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F11R2_FB13 CAN_F11R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F11R2_FB14_Pos (14U)
#define CAN_F11R2_FB14_Msk (0x1UL << CAN_F11R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F11R2_FB14 CAN_F11R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F11R2_FB15_Pos (15U)
#define CAN_F11R2_FB15_Msk (0x1UL << CAN_F11R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F11R2_FB15 CAN_F11R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F11R2_FB16_Pos (16U)
#define CAN_F11R2_FB16_Msk (0x1UL << CAN_F11R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F11R2_FB16 CAN_F11R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F11R2_FB17_Pos (17U)
#define CAN_F11R2_FB17_Msk (0x1UL << CAN_F11R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F11R2_FB17 CAN_F11R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F11R2_FB18_Pos (18U)
#define CAN_F11R2_FB18_Msk (0x1UL << CAN_F11R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F11R2_FB18 CAN_F11R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F11R2_FB19_Pos (19U)
#define CAN_F11R2_FB19_Msk (0x1UL << CAN_F11R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F11R2_FB19 CAN_F11R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F11R2_FB20_Pos (20U)
#define CAN_F11R2_FB20_Msk (0x1UL << CAN_F11R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F11R2_FB20 CAN_F11R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F11R2_FB21_Pos (21U)
#define CAN_F11R2_FB21_Msk (0x1UL << CAN_F11R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F11R2_FB21 CAN_F11R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F11R2_FB22_Pos (22U)
#define CAN_F11R2_FB22_Msk (0x1UL << CAN_F11R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F11R2_FB22 CAN_F11R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F11R2_FB23_Pos (23U)
#define CAN_F11R2_FB23_Msk (0x1UL << CAN_F11R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F11R2_FB23 CAN_F11R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F11R2_FB24_Pos (24U)
#define CAN_F11R2_FB24_Msk (0x1UL << CAN_F11R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F11R2_FB24 CAN_F11R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F11R2_FB25_Pos (25U)
#define CAN_F11R2_FB25_Msk (0x1UL << CAN_F11R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F11R2_FB25 CAN_F11R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F11R2_FB26_Pos (26U)
#define CAN_F11R2_FB26_Msk (0x1UL << CAN_F11R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F11R2_FB26 CAN_F11R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F11R2_FB27_Pos (27U)
#define CAN_F11R2_FB27_Msk (0x1UL << CAN_F11R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F11R2_FB27 CAN_F11R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F11R2_FB28_Pos (28U)
#define CAN_F11R2_FB28_Msk (0x1UL << CAN_F11R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F11R2_FB28 CAN_F11R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F11R2_FB29_Pos (29U)
#define CAN_F11R2_FB29_Msk (0x1UL << CAN_F11R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F11R2_FB29 CAN_F11R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F11R2_FB30_Pos (30U)
#define CAN_F11R2_FB30_Msk (0x1UL << CAN_F11R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F11R2_FB30 CAN_F11R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F11R2_FB31_Pos (31U)
#define CAN_F11R2_FB31_Msk (0x1UL << CAN_F11R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F11R2_FB31 CAN_F11R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F12R2 register  ******************/
#define CAN_F12R2_FB0_Pos (0U)
#define CAN_F12R2_FB0_Msk (0x1UL << CAN_F12R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F12R2_FB0 CAN_F12R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F12R2_FB1_Pos (1U)
#define CAN_F12R2_FB1_Msk (0x1UL << CAN_F12R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F12R2_FB1 CAN_F12R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F12R2_FB2_Pos (2U)
#define CAN_F12R2_FB2_Msk (0x1UL << CAN_F12R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F12R2_FB2 CAN_F12R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F12R2_FB3_Pos (3U)
#define CAN_F12R2_FB3_Msk (0x1UL << CAN_F12R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F12R2_FB3 CAN_F12R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F12R2_FB4_Pos (4U)
#define CAN_F12R2_FB4_Msk (0x1UL << CAN_F12R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F12R2_FB4 CAN_F12R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F12R2_FB5_Pos (5U)
#define CAN_F12R2_FB5_Msk (0x1UL << CAN_F12R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F12R2_FB5 CAN_F12R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F12R2_FB6_Pos (6U)
#define CAN_F12R2_FB6_Msk (0x1UL << CAN_F12R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F12R2_FB6 CAN_F12R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F12R2_FB7_Pos (7U)
#define CAN_F12R2_FB7_Msk (0x1UL << CAN_F12R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F12R2_FB7 CAN_F12R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F12R2_FB8_Pos (8U)
#define CAN_F12R2_FB8_Msk (0x1UL << CAN_F12R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F12R2_FB8 CAN_F12R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F12R2_FB9_Pos (9U)
#define CAN_F12R2_FB9_Msk (0x1UL << CAN_F12R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F12R2_FB9 CAN_F12R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F12R2_FB10_Pos (10U)
#define CAN_F12R2_FB10_Msk (0x1UL << CAN_F12R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F12R2_FB10 CAN_F12R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F12R2_FB11_Pos (11U)
#define CAN_F12R2_FB11_Msk (0x1UL << CAN_F12R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F12R2_FB11 CAN_F12R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F12R2_FB12_Pos (12U)
#define CAN_F12R2_FB12_Msk (0x1UL << CAN_F12R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F12R2_FB12 CAN_F12R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F12R2_FB13_Pos (13U)
#define CAN_F12R2_FB13_Msk (0x1UL << CAN_F12R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F12R2_FB13 CAN_F12R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F12R2_FB14_Pos (14U)
#define CAN_F12R2_FB14_Msk (0x1UL << CAN_F12R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F12R2_FB14 CAN_F12R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F12R2_FB15_Pos (15U)
#define CAN_F12R2_FB15_Msk (0x1UL << CAN_F12R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F12R2_FB15 CAN_F12R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F12R2_FB16_Pos (16U)
#define CAN_F12R2_FB16_Msk (0x1UL << CAN_F12R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F12R2_FB16 CAN_F12R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F12R2_FB17_Pos (17U)
#define CAN_F12R2_FB17_Msk (0x1UL << CAN_F12R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F12R2_FB17 CAN_F12R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F12R2_FB18_Pos (18U)
#define CAN_F12R2_FB18_Msk (0x1UL << CAN_F12R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F12R2_FB18 CAN_F12R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F12R2_FB19_Pos (19U)
#define CAN_F12R2_FB19_Msk (0x1UL << CAN_F12R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F12R2_FB19 CAN_F12R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F12R2_FB20_Pos (20U)
#define CAN_F12R2_FB20_Msk (0x1UL << CAN_F12R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F12R2_FB20 CAN_F12R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F12R2_FB21_Pos (21U)
#define CAN_F12R2_FB21_Msk (0x1UL << CAN_F12R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F12R2_FB21 CAN_F12R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F12R2_FB22_Pos (22U)
#define CAN_F12R2_FB22_Msk (0x1UL << CAN_F12R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F12R2_FB22 CAN_F12R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F12R2_FB23_Pos (23U)
#define CAN_F12R2_FB23_Msk (0x1UL << CAN_F12R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F12R2_FB23 CAN_F12R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F12R2_FB24_Pos (24U)
#define CAN_F12R2_FB24_Msk (0x1UL << CAN_F12R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F12R2_FB24 CAN_F12R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F12R2_FB25_Pos (25U)
#define CAN_F12R2_FB25_Msk (0x1UL << CAN_F12R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F12R2_FB25 CAN_F12R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F12R2_FB26_Pos (26U)
#define CAN_F12R2_FB26_Msk (0x1UL << CAN_F12R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F12R2_FB26 CAN_F12R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F12R2_FB27_Pos (27U)
#define CAN_F12R2_FB27_Msk (0x1UL << CAN_F12R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F12R2_FB27 CAN_F12R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F12R2_FB28_Pos (28U)
#define CAN_F12R2_FB28_Msk (0x1UL << CAN_F12R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F12R2_FB28 CAN_F12R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F12R2_FB29_Pos (29U)
#define CAN_F12R2_FB29_Msk (0x1UL << CAN_F12R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F12R2_FB29 CAN_F12R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F12R2_FB30_Pos (30U)
#define CAN_F12R2_FB30_Msk (0x1UL << CAN_F12R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F12R2_FB30 CAN_F12R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F12R2_FB31_Pos (31U)
#define CAN_F12R2_FB31_Msk (0x1UL << CAN_F12R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F12R2_FB31 CAN_F12R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F13R2 register  ******************/
#define CAN_F13R2_FB0_Pos (0U)
#define CAN_F13R2_FB0_Msk (0x1UL << CAN_F13R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F13R2_FB0 CAN_F13R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F13R2_FB1_Pos (1U)
#define CAN_F13R2_FB1_Msk (0x1UL << CAN_F13R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F13R2_FB1 CAN_F13R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F13R2_FB2_Pos (2U)
#define CAN_F13R2_FB2_Msk (0x1UL << CAN_F13R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F13R2_FB2 CAN_F13R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F13R2_FB3_Pos (3U)
#define CAN_F13R2_FB3_Msk (0x1UL << CAN_F13R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F13R2_FB3 CAN_F13R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F13R2_FB4_Pos (4U)
#define CAN_F13R2_FB4_Msk (0x1UL << CAN_F13R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F13R2_FB4 CAN_F13R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F13R2_FB5_Pos (5U)
#define CAN_F13R2_FB5_Msk (0x1UL << CAN_F13R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F13R2_FB5 CAN_F13R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F13R2_FB6_Pos (6U)
#define CAN_F13R2_FB6_Msk (0x1UL << CAN_F13R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F13R2_FB6 CAN_F13R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F13R2_FB7_Pos (7U)
#define CAN_F13R2_FB7_Msk (0x1UL << CAN_F13R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F13R2_FB7 CAN_F13R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F13R2_FB8_Pos (8U)
#define CAN_F13R2_FB8_Msk (0x1UL << CAN_F13R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F13R2_FB8 CAN_F13R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F13R2_FB9_Pos (9U)
#define CAN_F13R2_FB9_Msk (0x1UL << CAN_F13R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F13R2_FB9 CAN_F13R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F13R2_FB10_Pos (10U)
#define CAN_F13R2_FB10_Msk (0x1UL << CAN_F13R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F13R2_FB10 CAN_F13R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F13R2_FB11_Pos (11U)
#define CAN_F13R2_FB11_Msk (0x1UL << CAN_F13R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F13R2_FB11 CAN_F13R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F13R2_FB12_Pos (12U)
#define CAN_F13R2_FB12_Msk (0x1UL << CAN_F13R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F13R2_FB12 CAN_F13R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F13R2_FB13_Pos (13U)
#define CAN_F13R2_FB13_Msk (0x1UL << CAN_F13R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F13R2_FB13 CAN_F13R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F13R2_FB14_Pos (14U)
#define CAN_F13R2_FB14_Msk (0x1UL << CAN_F13R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F13R2_FB14 CAN_F13R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F13R2_FB15_Pos (15U)
#define CAN_F13R2_FB15_Msk (0x1UL << CAN_F13R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F13R2_FB15 CAN_F13R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F13R2_FB16_Pos (16U)
#define CAN_F13R2_FB16_Msk (0x1UL << CAN_F13R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F13R2_FB16 CAN_F13R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F13R2_FB17_Pos (17U)
#define CAN_F13R2_FB17_Msk (0x1UL << CAN_F13R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F13R2_FB17 CAN_F13R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F13R2_FB18_Pos (18U)
#define CAN_F13R2_FB18_Msk (0x1UL << CAN_F13R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F13R2_FB18 CAN_F13R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F13R2_FB19_Pos (19U)
#define CAN_F13R2_FB19_Msk (0x1UL << CAN_F13R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F13R2_FB19 CAN_F13R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F13R2_FB20_Pos (20U)
#define CAN_F13R2_FB20_Msk (0x1UL << CAN_F13R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F13R2_FB20 CAN_F13R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F13R2_FB21_Pos (21U)
#define CAN_F13R2_FB21_Msk (0x1UL << CAN_F13R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F13R2_FB21 CAN_F13R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F13R2_FB22_Pos (22U)
#define CAN_F13R2_FB22_Msk (0x1UL << CAN_F13R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F13R2_FB22 CAN_F13R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F13R2_FB23_Pos (23U)
#define CAN_F13R2_FB23_Msk (0x1UL << CAN_F13R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F13R2_FB23 CAN_F13R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F13R2_FB24_Pos (24U)
#define CAN_F13R2_FB24_Msk (0x1UL << CAN_F13R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F13R2_FB24 CAN_F13R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F13R2_FB25_Pos (25U)
#define CAN_F13R2_FB25_Msk (0x1UL << CAN_F13R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F13R2_FB25 CAN_F13R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F13R2_FB26_Pos (26U)
#define CAN_F13R2_FB26_Msk (0x1UL << CAN_F13R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F13R2_FB26 CAN_F13R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F13R2_FB27_Pos (27U)
#define CAN_F13R2_FB27_Msk (0x1UL << CAN_F13R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F13R2_FB27 CAN_F13R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F13R2_FB28_Pos (28U)
#define CAN_F13R2_FB28_Msk (0x1UL << CAN_F13R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F13R2_FB28 CAN_F13R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F13R2_FB29_Pos (29U)
#define CAN_F13R2_FB29_Msk (0x1UL << CAN_F13R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F13R2_FB29 CAN_F13R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F13R2_FB30_Pos (30U)
#define CAN_F13R2_FB30_Msk (0x1UL << CAN_F13R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F13R2_FB30 CAN_F13R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F13R2_FB31_Pos (31U)
#define CAN_F13R2_FB31_Msk (0x1UL << CAN_F13R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F13R2_FB31 CAN_F13R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F14R2 register  ******************/
#define CAN_F14R2_FB0_Pos (0U)
#define CAN_F14R2_FB0_Msk (0x1UL << CAN_F14R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F14R2_FB0 CAN_F14R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F14R2_FB1_Pos (1U)
#define CAN_F14R2_FB1_Msk (0x1UL << CAN_F14R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F14R2_FB1 CAN_F14R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F14R2_FB2_Pos (2U)
#define CAN_F14R2_FB2_Msk (0x1UL << CAN_F14R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F14R2_FB2 CAN_F14R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F14R2_FB3_Pos (3U)
#define CAN_F14R2_FB3_Msk (0x1UL << CAN_F14R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F14R2_FB3 CAN_F14R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F14R2_FB4_Pos (4U)
#define CAN_F14R2_FB4_Msk (0x1UL << CAN_F14R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F14R2_FB4 CAN_F14R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F14R2_FB5_Pos (5U)
#define CAN_F14R2_FB5_Msk (0x1UL << CAN_F14R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F14R2_FB5 CAN_F14R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F14R2_FB6_Pos (6U)
#define CAN_F14R2_FB6_Msk (0x1UL << CAN_F14R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F14R2_FB6 CAN_F14R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F14R2_FB7_Pos (7U)
#define CAN_F14R2_FB7_Msk (0x1UL << CAN_F14R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F14R2_FB7 CAN_F14R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F14R2_FB8_Pos (8U)
#define CAN_F14R2_FB8_Msk (0x1UL << CAN_F14R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F14R2_FB8 CAN_F14R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F14R2_FB9_Pos (9U)
#define CAN_F14R2_FB9_Msk (0x1UL << CAN_F14R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F14R2_FB9 CAN_F14R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F14R2_FB10_Pos (10U)
#define CAN_F14R2_FB10_Msk (0x1UL << CAN_F14R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F14R2_FB10 CAN_F14R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F14R2_FB11_Pos (11U)
#define CAN_F14R2_FB11_Msk (0x1UL << CAN_F14R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F14R2_FB11 CAN_F14R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F14R2_FB12_Pos (12U)
#define CAN_F14R2_FB12_Msk (0x1UL << CAN_F14R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F14R2_FB12 CAN_F14R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F14R2_FB13_Pos (13U)
#define CAN_F14R2_FB13_Msk (0x1UL << CAN_F14R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F14R2_FB13 CAN_F14R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F14R2_FB14_Pos (14U)
#define CAN_F14R2_FB14_Msk (0x1UL << CAN_F14R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F14R2_FB14 CAN_F14R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F14R2_FB15_Pos (15U)
#define CAN_F14R2_FB15_Msk (0x1UL << CAN_F14R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F14R2_FB15 CAN_F14R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F14R2_FB16_Pos (16U)
#define CAN_F14R2_FB16_Msk (0x1UL << CAN_F14R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F14R2_FB16 CAN_F14R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F14R2_FB17_Pos (17U)
#define CAN_F14R2_FB17_Msk (0x1UL << CAN_F14R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F14R2_FB17 CAN_F14R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F14R2_FB18_Pos (18U)
#define CAN_F14R2_FB18_Msk (0x1UL << CAN_F14R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F14R2_FB18 CAN_F14R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F14R2_FB19_Pos (19U)
#define CAN_F14R2_FB19_Msk (0x1UL << CAN_F14R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F14R2_FB19 CAN_F14R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F14R2_FB20_Pos (20U)
#define CAN_F14R2_FB20_Msk (0x1UL << CAN_F14R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F14R2_FB20 CAN_F14R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F14R2_FB21_Pos (21U)
#define CAN_F14R2_FB21_Msk (0x1UL << CAN_F14R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F14R2_FB21 CAN_F14R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F14R2_FB22_Pos (22U)
#define CAN_F14R2_FB22_Msk (0x1UL << CAN_F14R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F14R2_FB22 CAN_F14R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F14R2_FB23_Pos (23U)
#define CAN_F14R2_FB23_Msk (0x1UL << CAN_F14R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F14R2_FB23 CAN_F14R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F14R2_FB24_Pos (24U)
#define CAN_F14R2_FB24_Msk (0x1UL << CAN_F14R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F14R2_FB24 CAN_F14R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F14R2_FB25_Pos (25U)
#define CAN_F14R2_FB25_Msk (0x1UL << CAN_F14R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F14R2_FB25 CAN_F14R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F14R2_FB26_Pos (26U)
#define CAN_F14R2_FB26_Msk (0x1UL << CAN_F14R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F14R2_FB26 CAN_F14R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F14R2_FB27_Pos (27U)
#define CAN_F14R2_FB27_Msk (0x1UL << CAN_F14R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F14R2_FB27 CAN_F14R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F14R2_FB28_Pos (28U)
#define CAN_F14R2_FB28_Msk (0x1UL << CAN_F14R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F14R2_FB28 CAN_F14R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F14R2_FB29_Pos (29U)
#define CAN_F14R2_FB29_Msk (0x1UL << CAN_F14R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F14R2_FB29 CAN_F14R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F14R2_FB30_Pos (30U)
#define CAN_F14R2_FB30_Msk (0x1UL << CAN_F14R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F14R2_FB30 CAN_F14R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F14R2_FB31_Pos (31U)
#define CAN_F14R2_FB31_Msk (0x1UL << CAN_F14R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F14R2_FB31 CAN_F14R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F15R2 register  ******************/
#define CAN_F15R2_FB0_Pos (0U)
#define CAN_F15R2_FB0_Msk (0x1UL << CAN_F15R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F15R2_FB0 CAN_F15R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F15R2_FB1_Pos (1U)
#define CAN_F15R2_FB1_Msk (0x1UL << CAN_F15R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F15R2_FB1 CAN_F15R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F15R2_FB2_Pos (2U)
#define CAN_F15R2_FB2_Msk (0x1UL << CAN_F15R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F15R2_FB2 CAN_F15R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F15R2_FB3_Pos (3U)
#define CAN_F15R2_FB3_Msk (0x1UL << CAN_F15R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F15R2_FB3 CAN_F15R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F15R2_FB4_Pos (4U)
#define CAN_F15R2_FB4_Msk (0x1UL << CAN_F15R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F15R2_FB4 CAN_F15R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F15R2_FB5_Pos (5U)
#define CAN_F15R2_FB5_Msk (0x1UL << CAN_F15R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F15R2_FB5 CAN_F15R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F15R2_FB6_Pos (6U)
#define CAN_F15R2_FB6_Msk (0x1UL << CAN_F15R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F15R2_FB6 CAN_F15R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F15R2_FB7_Pos (7U)
#define CAN_F15R2_FB7_Msk (0x1UL << CAN_F15R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F15R2_FB7 CAN_F15R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F15R2_FB8_Pos (8U)
#define CAN_F15R2_FB8_Msk (0x1UL << CAN_F15R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F15R2_FB8 CAN_F15R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F15R2_FB9_Pos (9U)
#define CAN_F15R2_FB9_Msk (0x1UL << CAN_F15R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F15R2_FB9 CAN_F15R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F15R2_FB10_Pos (10U)
#define CAN_F15R2_FB10_Msk (0x1UL << CAN_F15R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F15R2_FB10 CAN_F15R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F15R2_FB11_Pos (11U)
#define CAN_F15R2_FB11_Msk (0x1UL << CAN_F15R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F15R2_FB11 CAN_F15R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F15R2_FB12_Pos (12U)
#define CAN_F15R2_FB12_Msk (0x1UL << CAN_F15R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F15R2_FB12 CAN_F15R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F15R2_FB13_Pos (13U)
#define CAN_F15R2_FB13_Msk (0x1UL << CAN_F15R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F15R2_FB13 CAN_F15R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F15R2_FB14_Pos (14U)
#define CAN_F15R2_FB14_Msk (0x1UL << CAN_F15R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F15R2_FB14 CAN_F15R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F15R2_FB15_Pos (15U)
#define CAN_F15R2_FB15_Msk (0x1UL << CAN_F15R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F15R2_FB15 CAN_F15R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F15R2_FB16_Pos (16U)
#define CAN_F15R2_FB16_Msk (0x1UL << CAN_F15R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F15R2_FB16 CAN_F15R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F15R2_FB17_Pos (17U)
#define CAN_F15R2_FB17_Msk (0x1UL << CAN_F15R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F15R2_FB17 CAN_F15R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F15R2_FB18_Pos (18U)
#define CAN_F15R2_FB18_Msk (0x1UL << CAN_F15R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F15R2_FB18 CAN_F15R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F15R2_FB19_Pos (19U)
#define CAN_F15R2_FB19_Msk (0x1UL << CAN_F15R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F15R2_FB19 CAN_F15R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F15R2_FB20_Pos (20U)
#define CAN_F15R2_FB20_Msk (0x1UL << CAN_F15R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F15R2_FB20 CAN_F15R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F15R2_FB21_Pos (21U)
#define CAN_F15R2_FB21_Msk (0x1UL << CAN_F15R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F15R2_FB21 CAN_F15R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F15R2_FB22_Pos (22U)
#define CAN_F15R2_FB22_Msk (0x1UL << CAN_F15R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F15R2_FB22 CAN_F15R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F15R2_FB23_Pos (23U)
#define CAN_F15R2_FB23_Msk (0x1UL << CAN_F15R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F15R2_FB23 CAN_F15R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F15R2_FB24_Pos (24U)
#define CAN_F15R2_FB24_Msk (0x1UL << CAN_F15R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F15R2_FB24 CAN_F15R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F15R2_FB25_Pos (25U)
#define CAN_F15R2_FB25_Msk (0x1UL << CAN_F15R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F15R2_FB25 CAN_F15R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F15R2_FB26_Pos (26U)
#define CAN_F15R2_FB26_Msk (0x1UL << CAN_F15R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F15R2_FB26 CAN_F15R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F15R2_FB27_Pos (27U)
#define CAN_F15R2_FB27_Msk (0x1UL << CAN_F15R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F15R2_FB27 CAN_F15R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F15R2_FB28_Pos (28U)
#define CAN_F15R2_FB28_Msk (0x1UL << CAN_F15R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F15R2_FB28 CAN_F15R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F15R2_FB29_Pos (29U)
#define CAN_F15R2_FB29_Msk (0x1UL << CAN_F15R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F15R2_FB29 CAN_F15R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F15R2_FB30_Pos (30U)
#define CAN_F15R2_FB30_Msk (0x1UL << CAN_F15R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F15R2_FB30 CAN_F15R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F15R2_FB31_Pos (31U)
#define CAN_F15R2_FB31_Msk (0x1UL << CAN_F15R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F15R2_FB31 CAN_F15R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F16R2 register  ******************/
#define CAN_F16R2_FB0_Pos (0U)
#define CAN_F16R2_FB0_Msk (0x1UL << CAN_F16R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F16R2_FB0 CAN_F16R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F16R2_FB1_Pos (1U)
#define CAN_F16R2_FB1_Msk (0x1UL << CAN_F16R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F16R2_FB1 CAN_F16R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F16R2_FB2_Pos (2U)
#define CAN_F16R2_FB2_Msk (0x1UL << CAN_F16R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F16R2_FB2 CAN_F16R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F16R2_FB3_Pos (3U)
#define CAN_F16R2_FB3_Msk (0x1UL << CAN_F16R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F16R2_FB3 CAN_F16R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F16R2_FB4_Pos (4U)
#define CAN_F16R2_FB4_Msk (0x1UL << CAN_F16R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F16R2_FB4 CAN_F16R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F16R2_FB5_Pos (5U)
#define CAN_F16R2_FB5_Msk (0x1UL << CAN_F16R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F16R2_FB5 CAN_F16R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F16R2_FB6_Pos (6U)
#define CAN_F16R2_FB6_Msk (0x1UL << CAN_F16R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F16R2_FB6 CAN_F16R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F16R2_FB7_Pos (7U)
#define CAN_F16R2_FB7_Msk (0x1UL << CAN_F16R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F16R2_FB7 CAN_F16R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F16R2_FB8_Pos (8U)
#define CAN_F16R2_FB8_Msk (0x1UL << CAN_F16R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F16R2_FB8 CAN_F16R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F16R2_FB9_Pos (9U)
#define CAN_F16R2_FB9_Msk (0x1UL << CAN_F16R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F16R2_FB9 CAN_F16R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F16R2_FB10_Pos (10U)
#define CAN_F16R2_FB10_Msk (0x1UL << CAN_F16R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F16R2_FB10 CAN_F16R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F16R2_FB11_Pos (11U)
#define CAN_F16R2_FB11_Msk (0x1UL << CAN_F16R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F16R2_FB11 CAN_F16R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F16R2_FB12_Pos (12U)
#define CAN_F16R2_FB12_Msk (0x1UL << CAN_F16R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F16R2_FB12 CAN_F16R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F16R2_FB13_Pos (13U)
#define CAN_F16R2_FB13_Msk (0x1UL << CAN_F16R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F16R2_FB13 CAN_F16R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F16R2_FB14_Pos (14U)
#define CAN_F16R2_FB14_Msk (0x1UL << CAN_F16R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F16R2_FB14 CAN_F16R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F16R2_FB15_Pos (15U)
#define CAN_F16R2_FB15_Msk (0x1UL << CAN_F16R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F16R2_FB15 CAN_F16R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F16R2_FB16_Pos (16U)
#define CAN_F16R2_FB16_Msk (0x1UL << CAN_F16R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F16R2_FB16 CAN_F16R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F16R2_FB17_Pos (17U)
#define CAN_F16R2_FB17_Msk (0x1UL << CAN_F16R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F16R2_FB17 CAN_F16R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F16R2_FB18_Pos (18U)
#define CAN_F16R2_FB18_Msk (0x1UL << CAN_F16R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F16R2_FB18 CAN_F16R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F16R2_FB19_Pos (19U)
#define CAN_F16R2_FB19_Msk (0x1UL << CAN_F16R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F16R2_FB19 CAN_F16R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F16R2_FB20_Pos (20U)
#define CAN_F16R2_FB20_Msk (0x1UL << CAN_F16R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F16R2_FB20 CAN_F16R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F16R2_FB21_Pos (21U)
#define CAN_F16R2_FB21_Msk (0x1UL << CAN_F16R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F16R2_FB21 CAN_F16R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F16R2_FB22_Pos (22U)
#define CAN_F16R2_FB22_Msk (0x1UL << CAN_F16R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F16R2_FB22 CAN_F16R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F16R2_FB23_Pos (23U)
#define CAN_F16R2_FB23_Msk (0x1UL << CAN_F16R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F16R2_FB23 CAN_F16R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F16R2_FB24_Pos (24U)
#define CAN_F16R2_FB24_Msk (0x1UL << CAN_F16R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F16R2_FB24 CAN_F16R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F16R2_FB25_Pos (25U)
#define CAN_F16R2_FB25_Msk (0x1UL << CAN_F16R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F16R2_FB25 CAN_F16R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F16R2_FB26_Pos (26U)
#define CAN_F16R2_FB26_Msk (0x1UL << CAN_F16R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F16R2_FB26 CAN_F16R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F16R2_FB27_Pos (27U)
#define CAN_F16R2_FB27_Msk (0x1UL << CAN_F16R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F16R2_FB27 CAN_F16R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F16R2_FB28_Pos (28U)
#define CAN_F16R2_FB28_Msk (0x1UL << CAN_F16R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F16R2_FB28 CAN_F16R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F16R2_FB29_Pos (29U)
#define CAN_F16R2_FB29_Msk (0x1UL << CAN_F16R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F16R2_FB29 CAN_F16R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F16R2_FB30_Pos (30U)
#define CAN_F16R2_FB30_Msk (0x1UL << CAN_F16R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F16R2_FB30 CAN_F16R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F16R2_FB31_Pos (31U)
#define CAN_F16R2_FB31_Msk (0x1UL << CAN_F16R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F16R2_FB31 CAN_F16R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F17R2 register  ******************/
#define CAN_F17R2_FB0_Pos (0U)
#define CAN_F17R2_FB0_Msk (0x1UL << CAN_F17R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F17R2_FB0 CAN_F17R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F17R2_FB1_Pos (1U)
#define CAN_F17R2_FB1_Msk (0x1UL << CAN_F17R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F17R2_FB1 CAN_F17R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F17R2_FB2_Pos (2U)
#define CAN_F17R2_FB2_Msk (0x1UL << CAN_F17R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F17R2_FB2 CAN_F17R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F17R2_FB3_Pos (3U)
#define CAN_F17R2_FB3_Msk (0x1UL << CAN_F17R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F17R2_FB3 CAN_F17R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F17R2_FB4_Pos (4U)
#define CAN_F17R2_FB4_Msk (0x1UL << CAN_F17R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F17R2_FB4 CAN_F17R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F17R2_FB5_Pos (5U)
#define CAN_F17R2_FB5_Msk (0x1UL << CAN_F17R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F17R2_FB5 CAN_F17R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F17R2_FB6_Pos (6U)
#define CAN_F17R2_FB6_Msk (0x1UL << CAN_F17R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F17R2_FB6 CAN_F17R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F17R2_FB7_Pos (7U)
#define CAN_F17R2_FB7_Msk (0x1UL << CAN_F17R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F17R2_FB7 CAN_F17R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F17R2_FB8_Pos (8U)
#define CAN_F17R2_FB8_Msk (0x1UL << CAN_F17R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F17R2_FB8 CAN_F17R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F17R2_FB9_Pos (9U)
#define CAN_F17R2_FB9_Msk (0x1UL << CAN_F17R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F17R2_FB9 CAN_F17R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F17R2_FB10_Pos (10U)
#define CAN_F17R2_FB10_Msk (0x1UL << CAN_F17R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F17R2_FB10 CAN_F17R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F17R2_FB11_Pos (11U)
#define CAN_F17R2_FB11_Msk (0x1UL << CAN_F17R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F17R2_FB11 CAN_F17R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F17R2_FB12_Pos (12U)
#define CAN_F17R2_FB12_Msk (0x1UL << CAN_F17R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F17R2_FB12 CAN_F17R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F17R2_FB13_Pos (13U)
#define CAN_F17R2_FB13_Msk (0x1UL << CAN_F17R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F17R2_FB13 CAN_F17R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F17R2_FB14_Pos (14U)
#define CAN_F17R2_FB14_Msk (0x1UL << CAN_F17R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F17R2_FB14 CAN_F17R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F17R2_FB15_Pos (15U)
#define CAN_F17R2_FB15_Msk (0x1UL << CAN_F17R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F17R2_FB15 CAN_F17R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F17R2_FB16_Pos (16U)
#define CAN_F17R2_FB16_Msk (0x1UL << CAN_F17R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F17R2_FB16 CAN_F17R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F17R2_FB17_Pos (17U)
#define CAN_F17R2_FB17_Msk (0x1UL << CAN_F17R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F17R2_FB17 CAN_F17R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F17R2_FB18_Pos (18U)
#define CAN_F17R2_FB18_Msk (0x1UL << CAN_F17R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F17R2_FB18 CAN_F17R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F17R2_FB19_Pos (19U)
#define CAN_F17R2_FB19_Msk (0x1UL << CAN_F17R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F17R2_FB19 CAN_F17R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F17R2_FB20_Pos (20U)
#define CAN_F17R2_FB20_Msk (0x1UL << CAN_F17R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F17R2_FB20 CAN_F17R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F17R2_FB21_Pos (21U)
#define CAN_F17R2_FB21_Msk (0x1UL << CAN_F17R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F17R2_FB21 CAN_F17R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F17R2_FB22_Pos (22U)
#define CAN_F17R2_FB22_Msk (0x1UL << CAN_F17R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F17R2_FB22 CAN_F17R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F17R2_FB23_Pos (23U)
#define CAN_F17R2_FB23_Msk (0x1UL << CAN_F17R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F17R2_FB23 CAN_F17R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F17R2_FB24_Pos (24U)
#define CAN_F17R2_FB24_Msk (0x1UL << CAN_F17R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F17R2_FB24 CAN_F17R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F17R2_FB25_Pos (25U)
#define CAN_F17R2_FB25_Msk (0x1UL << CAN_F17R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F17R2_FB25 CAN_F17R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F17R2_FB26_Pos (26U)
#define CAN_F17R2_FB26_Msk (0x1UL << CAN_F17R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F17R2_FB26 CAN_F17R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F17R2_FB27_Pos (27U)
#define CAN_F17R2_FB27_Msk (0x1UL << CAN_F17R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F17R2_FB27 CAN_F17R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F17R2_FB28_Pos (28U)
#define CAN_F17R2_FB28_Msk (0x1UL << CAN_F17R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F17R2_FB28 CAN_F17R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F17R2_FB29_Pos (29U)
#define CAN_F17R2_FB29_Msk (0x1UL << CAN_F17R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F17R2_FB29 CAN_F17R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F17R2_FB30_Pos (30U)
#define CAN_F17R2_FB30_Msk (0x1UL << CAN_F17R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F17R2_FB30 CAN_F17R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F17R2_FB31_Pos (31U)
#define CAN_F17R2_FB31_Msk (0x1UL << CAN_F17R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F17R2_FB31 CAN_F17R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F18R2 register  ******************/
#define CAN_F18R2_FB0_Pos (0U)
#define CAN_F18R2_FB0_Msk (0x1UL << CAN_F18R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F18R2_FB0 CAN_F18R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F18R2_FB1_Pos (1U)
#define CAN_F18R2_FB1_Msk (0x1UL << CAN_F18R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F18R2_FB1 CAN_F18R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F18R2_FB2_Pos (2U)
#define CAN_F18R2_FB2_Msk (0x1UL << CAN_F18R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F18R2_FB2 CAN_F18R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F18R2_FB3_Pos (3U)
#define CAN_F18R2_FB3_Msk (0x1UL << CAN_F18R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F18R2_FB3 CAN_F18R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F18R2_FB4_Pos (4U)
#define CAN_F18R2_FB4_Msk (0x1UL << CAN_F18R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F18R2_FB4 CAN_F18R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F18R2_FB5_Pos (5U)
#define CAN_F18R2_FB5_Msk (0x1UL << CAN_F18R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F18R2_FB5 CAN_F18R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F18R2_FB6_Pos (6U)
#define CAN_F18R2_FB6_Msk (0x1UL << CAN_F18R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F18R2_FB6 CAN_F18R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F18R2_FB7_Pos (7U)
#define CAN_F18R2_FB7_Msk (0x1UL << CAN_F18R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F18R2_FB7 CAN_F18R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F18R2_FB8_Pos (8U)
#define CAN_F18R2_FB8_Msk (0x1UL << CAN_F18R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F18R2_FB8 CAN_F18R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F18R2_FB9_Pos (9U)
#define CAN_F18R2_FB9_Msk (0x1UL << CAN_F18R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F18R2_FB9 CAN_F18R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F18R2_FB10_Pos (10U)
#define CAN_F18R2_FB10_Msk (0x1UL << CAN_F18R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F18R2_FB10 CAN_F18R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F18R2_FB11_Pos (11U)
#define CAN_F18R2_FB11_Msk (0x1UL << CAN_F18R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F18R2_FB11 CAN_F18R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F18R2_FB12_Pos (12U)
#define CAN_F18R2_FB12_Msk (0x1UL << CAN_F18R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F18R2_FB12 CAN_F18R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F18R2_FB13_Pos (13U)
#define CAN_F18R2_FB13_Msk (0x1UL << CAN_F18R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F18R2_FB13 CAN_F18R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F18R2_FB14_Pos (14U)
#define CAN_F18R2_FB14_Msk (0x1UL << CAN_F18R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F18R2_FB14 CAN_F18R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F18R2_FB15_Pos (15U)
#define CAN_F18R2_FB15_Msk (0x1UL << CAN_F18R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F18R2_FB15 CAN_F18R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F18R2_FB16_Pos (16U)
#define CAN_F18R2_FB16_Msk (0x1UL << CAN_F18R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F18R2_FB16 CAN_F18R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F18R2_FB17_Pos (17U)
#define CAN_F18R2_FB17_Msk (0x1UL << CAN_F18R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F18R2_FB17 CAN_F18R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F18R2_FB18_Pos (18U)
#define CAN_F18R2_FB18_Msk (0x1UL << CAN_F18R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F18R2_FB18 CAN_F18R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F18R2_FB19_Pos (19U)
#define CAN_F18R2_FB19_Msk (0x1UL << CAN_F18R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F18R2_FB19 CAN_F18R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F18R2_FB20_Pos (20U)
#define CAN_F18R2_FB20_Msk (0x1UL << CAN_F18R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F18R2_FB20 CAN_F18R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F18R2_FB21_Pos (21U)
#define CAN_F18R2_FB21_Msk (0x1UL << CAN_F18R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F18R2_FB21 CAN_F18R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F18R2_FB22_Pos (22U)
#define CAN_F18R2_FB22_Msk (0x1UL << CAN_F18R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F18R2_FB22 CAN_F18R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F18R2_FB23_Pos (23U)
#define CAN_F18R2_FB23_Msk (0x1UL << CAN_F18R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F18R2_FB23 CAN_F18R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F18R2_FB24_Pos (24U)
#define CAN_F18R2_FB24_Msk (0x1UL << CAN_F18R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F18R2_FB24 CAN_F18R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F18R2_FB25_Pos (25U)
#define CAN_F18R2_FB25_Msk (0x1UL << CAN_F18R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F18R2_FB25 CAN_F18R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F18R2_FB26_Pos (26U)
#define CAN_F18R2_FB26_Msk (0x1UL << CAN_F18R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F18R2_FB26 CAN_F18R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F18R2_FB27_Pos (27U)
#define CAN_F18R2_FB27_Msk (0x1UL << CAN_F18R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F18R2_FB27 CAN_F18R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F18R2_FB28_Pos (28U)
#define CAN_F18R2_FB28_Msk (0x1UL << CAN_F18R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F18R2_FB28 CAN_F18R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F18R2_FB29_Pos (29U)
#define CAN_F18R2_FB29_Msk (0x1UL << CAN_F18R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F18R2_FB29 CAN_F18R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F18R2_FB30_Pos (30U)
#define CAN_F18R2_FB30_Msk (0x1UL << CAN_F18R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F18R2_FB30 CAN_F18R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F18R2_FB31_Pos (31U)
#define CAN_F18R2_FB31_Msk (0x1UL << CAN_F18R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F18R2_FB31 CAN_F18R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F19R2 register  ******************/
#define CAN_F19R2_FB0_Pos (0U)
#define CAN_F19R2_FB0_Msk (0x1UL << CAN_F19R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F19R2_FB0 CAN_F19R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F19R2_FB1_Pos (1U)
#define CAN_F19R2_FB1_Msk (0x1UL << CAN_F19R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F19R2_FB1 CAN_F19R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F19R2_FB2_Pos (2U)
#define CAN_F19R2_FB2_Msk (0x1UL << CAN_F19R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F19R2_FB2 CAN_F19R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F19R2_FB3_Pos (3U)
#define CAN_F19R2_FB3_Msk (0x1UL << CAN_F19R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F19R2_FB3 CAN_F19R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F19R2_FB4_Pos (4U)
#define CAN_F19R2_FB4_Msk (0x1UL << CAN_F19R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F19R2_FB4 CAN_F19R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F19R2_FB5_Pos (5U)
#define CAN_F19R2_FB5_Msk (0x1UL << CAN_F19R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F19R2_FB5 CAN_F19R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F19R2_FB6_Pos (6U)
#define CAN_F19R2_FB6_Msk (0x1UL << CAN_F19R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F19R2_FB6 CAN_F19R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F19R2_FB7_Pos (7U)
#define CAN_F19R2_FB7_Msk (0x1UL << CAN_F19R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F19R2_FB7 CAN_F19R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F19R2_FB8_Pos (8U)
#define CAN_F19R2_FB8_Msk (0x1UL << CAN_F19R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F19R2_FB8 CAN_F19R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F19R2_FB9_Pos (9U)
#define CAN_F19R2_FB9_Msk (0x1UL << CAN_F19R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F19R2_FB9 CAN_F19R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F19R2_FB10_Pos (10U)
#define CAN_F19R2_FB10_Msk (0x1UL << CAN_F19R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F19R2_FB10 CAN_F19R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F19R2_FB11_Pos (11U)
#define CAN_F19R2_FB11_Msk (0x1UL << CAN_F19R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F19R2_FB11 CAN_F19R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F19R2_FB12_Pos (12U)
#define CAN_F19R2_FB12_Msk (0x1UL << CAN_F19R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F19R2_FB12 CAN_F19R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F19R2_FB13_Pos (13U)
#define CAN_F19R2_FB13_Msk (0x1UL << CAN_F19R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F19R2_FB13 CAN_F19R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F19R2_FB14_Pos (14U)
#define CAN_F19R2_FB14_Msk (0x1UL << CAN_F19R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F19R2_FB14 CAN_F19R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F19R2_FB15_Pos (15U)
#define CAN_F19R2_FB15_Msk (0x1UL << CAN_F19R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F19R2_FB15 CAN_F19R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F19R2_FB16_Pos (16U)
#define CAN_F19R2_FB16_Msk (0x1UL << CAN_F19R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F19R2_FB16 CAN_F19R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F19R2_FB17_Pos (17U)
#define CAN_F19R2_FB17_Msk (0x1UL << CAN_F19R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F19R2_FB17 CAN_F19R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F19R2_FB18_Pos (18U)
#define CAN_F19R2_FB18_Msk (0x1UL << CAN_F19R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F19R2_FB18 CAN_F19R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F19R2_FB19_Pos (19U)
#define CAN_F19R2_FB19_Msk (0x1UL << CAN_F19R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F19R2_FB19 CAN_F19R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F19R2_FB20_Pos (20U)
#define CAN_F19R2_FB20_Msk (0x1UL << CAN_F19R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F19R2_FB20 CAN_F19R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F19R2_FB21_Pos (21U)
#define CAN_F19R2_FB21_Msk (0x1UL << CAN_F19R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F19R2_FB21 CAN_F19R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F19R2_FB22_Pos (22U)
#define CAN_F19R2_FB22_Msk (0x1UL << CAN_F19R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F19R2_FB22 CAN_F19R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F19R2_FB23_Pos (23U)
#define CAN_F19R2_FB23_Msk (0x1UL << CAN_F19R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F19R2_FB23 CAN_F19R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F19R2_FB24_Pos (24U)
#define CAN_F19R2_FB24_Msk (0x1UL << CAN_F19R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F19R2_FB24 CAN_F19R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F19R2_FB25_Pos (25U)
#define CAN_F19R2_FB25_Msk (0x1UL << CAN_F19R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F19R2_FB25 CAN_F19R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F19R2_FB26_Pos (26U)
#define CAN_F19R2_FB26_Msk (0x1UL << CAN_F19R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F19R2_FB26 CAN_F19R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F19R2_FB27_Pos (27U)
#define CAN_F19R2_FB27_Msk (0x1UL << CAN_F19R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F19R2_FB27 CAN_F19R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F19R2_FB28_Pos (28U)
#define CAN_F19R2_FB28_Msk (0x1UL << CAN_F19R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F19R2_FB28 CAN_F19R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F19R2_FB29_Pos (29U)
#define CAN_F19R2_FB29_Msk (0x1UL << CAN_F19R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F19R2_FB29 CAN_F19R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F19R2_FB30_Pos (30U)
#define CAN_F19R2_FB30_Msk (0x1UL << CAN_F19R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F19R2_FB30 CAN_F19R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F19R2_FB31_Pos (31U)
#define CAN_F19R2_FB31_Msk (0x1UL << CAN_F19R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F19R2_FB31 CAN_F19R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F20R2 register  ******************/
#define CAN_F20R2_FB0_Pos (0U)
#define CAN_F20R2_FB0_Msk (0x1UL << CAN_F20R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F20R2_FB0 CAN_F20R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F20R2_FB1_Pos (1U)
#define CAN_F20R2_FB1_Msk (0x1UL << CAN_F20R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F20R2_FB1 CAN_F20R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F20R2_FB2_Pos (2U)
#define CAN_F20R2_FB2_Msk (0x1UL << CAN_F20R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F20R2_FB2 CAN_F20R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F20R2_FB3_Pos (3U)
#define CAN_F20R2_FB3_Msk (0x1UL << CAN_F20R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F20R2_FB3 CAN_F20R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F20R2_FB4_Pos (4U)
#define CAN_F20R2_FB4_Msk (0x1UL << CAN_F20R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F20R2_FB4 CAN_F20R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F20R2_FB5_Pos (5U)
#define CAN_F20R2_FB5_Msk (0x1UL << CAN_F20R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F20R2_FB5 CAN_F20R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F20R2_FB6_Pos (6U)
#define CAN_F20R2_FB6_Msk (0x1UL << CAN_F20R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F20R2_FB6 CAN_F20R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F20R2_FB7_Pos (7U)
#define CAN_F20R2_FB7_Msk (0x1UL << CAN_F20R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F20R2_FB7 CAN_F20R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F20R2_FB8_Pos (8U)
#define CAN_F20R2_FB8_Msk (0x1UL << CAN_F20R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F20R2_FB8 CAN_F20R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F20R2_FB9_Pos (9U)
#define CAN_F20R2_FB9_Msk (0x1UL << CAN_F20R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F20R2_FB9 CAN_F20R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F20R2_FB10_Pos (10U)
#define CAN_F20R2_FB10_Msk (0x1UL << CAN_F20R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F20R2_FB10 CAN_F20R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F20R2_FB11_Pos (11U)
#define CAN_F20R2_FB11_Msk (0x1UL << CAN_F20R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F20R2_FB11 CAN_F20R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F20R2_FB12_Pos (12U)
#define CAN_F20R2_FB12_Msk (0x1UL << CAN_F20R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F20R2_FB12 CAN_F20R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F20R2_FB13_Pos (13U)
#define CAN_F20R2_FB13_Msk (0x1UL << CAN_F20R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F20R2_FB13 CAN_F20R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F20R2_FB14_Pos (14U)
#define CAN_F20R2_FB14_Msk (0x1UL << CAN_F20R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F20R2_FB14 CAN_F20R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F20R2_FB15_Pos (15U)
#define CAN_F20R2_FB15_Msk (0x1UL << CAN_F20R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F20R2_FB15 CAN_F20R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F20R2_FB16_Pos (16U)
#define CAN_F20R2_FB16_Msk (0x1UL << CAN_F20R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F20R2_FB16 CAN_F20R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F20R2_FB17_Pos (17U)
#define CAN_F20R2_FB17_Msk (0x1UL << CAN_F20R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F20R2_FB17 CAN_F20R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F20R2_FB18_Pos (18U)
#define CAN_F20R2_FB18_Msk (0x1UL << CAN_F20R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F20R2_FB18 CAN_F20R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F20R2_FB19_Pos (19U)
#define CAN_F20R2_FB19_Msk (0x1UL << CAN_F20R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F20R2_FB19 CAN_F20R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F20R2_FB20_Pos (20U)
#define CAN_F20R2_FB20_Msk (0x1UL << CAN_F20R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F20R2_FB20 CAN_F20R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F20R2_FB21_Pos (21U)
#define CAN_F20R2_FB21_Msk (0x1UL << CAN_F20R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F20R2_FB21 CAN_F20R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F20R2_FB22_Pos (22U)
#define CAN_F20R2_FB22_Msk (0x1UL << CAN_F20R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F20R2_FB22 CAN_F20R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F20R2_FB23_Pos (23U)
#define CAN_F20R2_FB23_Msk (0x1UL << CAN_F20R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F20R2_FB23 CAN_F20R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F20R2_FB24_Pos (24U)
#define CAN_F20R2_FB24_Msk (0x1UL << CAN_F20R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F20R2_FB24 CAN_F20R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F20R2_FB25_Pos (25U)
#define CAN_F20R2_FB25_Msk (0x1UL << CAN_F20R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F20R2_FB25 CAN_F20R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F20R2_FB26_Pos (26U)
#define CAN_F20R2_FB26_Msk (0x1UL << CAN_F20R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F20R2_FB26 CAN_F20R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F20R2_FB27_Pos (27U)
#define CAN_F20R2_FB27_Msk (0x1UL << CAN_F20R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F20R2_FB27 CAN_F20R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F20R2_FB28_Pos (28U)
#define CAN_F20R2_FB28_Msk (0x1UL << CAN_F20R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F20R2_FB28 CAN_F20R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F20R2_FB29_Pos (29U)
#define CAN_F20R2_FB29_Msk (0x1UL << CAN_F20R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F20R2_FB29 CAN_F20R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F20R2_FB30_Pos (30U)
#define CAN_F20R2_FB30_Msk (0x1UL << CAN_F20R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F20R2_FB30 CAN_F20R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F20R2_FB31_Pos (31U)
#define CAN_F20R2_FB31_Msk (0x1UL << CAN_F20R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F20R2_FB31 CAN_F20R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F21R2 register  ******************/
#define CAN_F21R2_FB0_Pos (0U)
#define CAN_F21R2_FB0_Msk (0x1UL << CAN_F21R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F21R2_FB0 CAN_F21R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F21R2_FB1_Pos (1U)
#define CAN_F21R2_FB1_Msk (0x1UL << CAN_F21R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F21R2_FB1 CAN_F21R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F21R2_FB2_Pos (2U)
#define CAN_F21R2_FB2_Msk (0x1UL << CAN_F21R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F21R2_FB2 CAN_F21R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F21R2_FB3_Pos (3U)
#define CAN_F21R2_FB3_Msk (0x1UL << CAN_F21R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F21R2_FB3 CAN_F21R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F21R2_FB4_Pos (4U)
#define CAN_F21R2_FB4_Msk (0x1UL << CAN_F21R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F21R2_FB4 CAN_F21R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F21R2_FB5_Pos (5U)
#define CAN_F21R2_FB5_Msk (0x1UL << CAN_F21R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F21R2_FB5 CAN_F21R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F21R2_FB6_Pos (6U)
#define CAN_F21R2_FB6_Msk (0x1UL << CAN_F21R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F21R2_FB6 CAN_F21R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F21R2_FB7_Pos (7U)
#define CAN_F21R2_FB7_Msk (0x1UL << CAN_F21R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F21R2_FB7 CAN_F21R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F21R2_FB8_Pos (8U)
#define CAN_F21R2_FB8_Msk (0x1UL << CAN_F21R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F21R2_FB8 CAN_F21R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F21R2_FB9_Pos (9U)
#define CAN_F21R2_FB9_Msk (0x1UL << CAN_F21R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F21R2_FB9 CAN_F21R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F21R2_FB10_Pos (10U)
#define CAN_F21R2_FB10_Msk (0x1UL << CAN_F21R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F21R2_FB10 CAN_F21R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F21R2_FB11_Pos (11U)
#define CAN_F21R2_FB11_Msk (0x1UL << CAN_F21R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F21R2_FB11 CAN_F21R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F21R2_FB12_Pos (12U)
#define CAN_F21R2_FB12_Msk (0x1UL << CAN_F21R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F21R2_FB12 CAN_F21R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F21R2_FB13_Pos (13U)
#define CAN_F21R2_FB13_Msk (0x1UL << CAN_F21R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F21R2_FB13 CAN_F21R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F21R2_FB14_Pos (14U)
#define CAN_F21R2_FB14_Msk (0x1UL << CAN_F21R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F21R2_FB14 CAN_F21R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F21R2_FB15_Pos (15U)
#define CAN_F21R2_FB15_Msk (0x1UL << CAN_F21R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F21R2_FB15 CAN_F21R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F21R2_FB16_Pos (16U)
#define CAN_F21R2_FB16_Msk (0x1UL << CAN_F21R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F21R2_FB16 CAN_F21R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F21R2_FB17_Pos (17U)
#define CAN_F21R2_FB17_Msk (0x1UL << CAN_F21R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F21R2_FB17 CAN_F21R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F21R2_FB18_Pos (18U)
#define CAN_F21R2_FB18_Msk (0x1UL << CAN_F21R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F21R2_FB18 CAN_F21R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F21R2_FB19_Pos (19U)
#define CAN_F21R2_FB19_Msk (0x1UL << CAN_F21R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F21R2_FB19 CAN_F21R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F21R2_FB20_Pos (20U)
#define CAN_F21R2_FB20_Msk (0x1UL << CAN_F21R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F21R2_FB20 CAN_F21R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F21R2_FB21_Pos (21U)
#define CAN_F21R2_FB21_Msk (0x1UL << CAN_F21R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F21R2_FB21 CAN_F21R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F21R2_FB22_Pos (22U)
#define CAN_F21R2_FB22_Msk (0x1UL << CAN_F21R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F21R2_FB22 CAN_F21R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F21R2_FB23_Pos (23U)
#define CAN_F21R2_FB23_Msk (0x1UL << CAN_F21R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F21R2_FB23 CAN_F21R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F21R2_FB24_Pos (24U)
#define CAN_F21R2_FB24_Msk (0x1UL << CAN_F21R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F21R2_FB24 CAN_F21R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F21R2_FB25_Pos (25U)
#define CAN_F21R2_FB25_Msk (0x1UL << CAN_F21R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F21R2_FB25 CAN_F21R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F21R2_FB26_Pos (26U)
#define CAN_F21R2_FB26_Msk (0x1UL << CAN_F21R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F21R2_FB26 CAN_F21R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F21R2_FB27_Pos (27U)
#define CAN_F21R2_FB27_Msk (0x1UL << CAN_F21R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F21R2_FB27 CAN_F21R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F21R2_FB28_Pos (28U)
#define CAN_F21R2_FB28_Msk (0x1UL << CAN_F21R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F21R2_FB28 CAN_F21R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F21R2_FB29_Pos (29U)
#define CAN_F21R2_FB29_Msk (0x1UL << CAN_F21R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F21R2_FB29 CAN_F21R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F21R2_FB30_Pos (30U)
#define CAN_F21R2_FB30_Msk (0x1UL << CAN_F21R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F21R2_FB30 CAN_F21R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F21R2_FB31_Pos (31U)
#define CAN_F21R2_FB31_Msk (0x1UL << CAN_F21R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F21R2_FB31 CAN_F21R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F22R2 register  ******************/
#define CAN_F22R2_FB0_Pos (0U)
#define CAN_F22R2_FB0_Msk (0x1UL << CAN_F22R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F22R2_FB0 CAN_F22R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F22R2_FB1_Pos (1U)
#define CAN_F22R2_FB1_Msk (0x1UL << CAN_F22R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F22R2_FB1 CAN_F22R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F22R2_FB2_Pos (2U)
#define CAN_F22R2_FB2_Msk (0x1UL << CAN_F22R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F22R2_FB2 CAN_F22R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F22R2_FB3_Pos (3U)
#define CAN_F22R2_FB3_Msk (0x1UL << CAN_F22R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F22R2_FB3 CAN_F22R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F22R2_FB4_Pos (4U)
#define CAN_F22R2_FB4_Msk (0x1UL << CAN_F22R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F22R2_FB4 CAN_F22R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F22R2_FB5_Pos (5U)
#define CAN_F22R2_FB5_Msk (0x1UL << CAN_F22R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F22R2_FB5 CAN_F22R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F22R2_FB6_Pos (6U)
#define CAN_F22R2_FB6_Msk (0x1UL << CAN_F22R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F22R2_FB6 CAN_F22R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F22R2_FB7_Pos (7U)
#define CAN_F22R2_FB7_Msk (0x1UL << CAN_F22R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F22R2_FB7 CAN_F22R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F22R2_FB8_Pos (8U)
#define CAN_F22R2_FB8_Msk (0x1UL << CAN_F22R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F22R2_FB8 CAN_F22R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F22R2_FB9_Pos (9U)
#define CAN_F22R2_FB9_Msk (0x1UL << CAN_F22R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F22R2_FB9 CAN_F22R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F22R2_FB10_Pos (10U)
#define CAN_F22R2_FB10_Msk (0x1UL << CAN_F22R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F22R2_FB10 CAN_F22R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F22R2_FB11_Pos (11U)
#define CAN_F22R2_FB11_Msk (0x1UL << CAN_F22R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F22R2_FB11 CAN_F22R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F22R2_FB12_Pos (12U)
#define CAN_F22R2_FB12_Msk (0x1UL << CAN_F22R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F22R2_FB12 CAN_F22R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F22R2_FB13_Pos (13U)
#define CAN_F22R2_FB13_Msk (0x1UL << CAN_F22R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F22R2_FB13 CAN_F22R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F22R2_FB14_Pos (14U)
#define CAN_F22R2_FB14_Msk (0x1UL << CAN_F22R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F22R2_FB14 CAN_F22R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F22R2_FB15_Pos (15U)
#define CAN_F22R2_FB15_Msk (0x1UL << CAN_F22R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F22R2_FB15 CAN_F22R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F22R2_FB16_Pos (16U)
#define CAN_F22R2_FB16_Msk (0x1UL << CAN_F22R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F22R2_FB16 CAN_F22R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F22R2_FB17_Pos (17U)
#define CAN_F22R2_FB17_Msk (0x1UL << CAN_F22R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F22R2_FB17 CAN_F22R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F22R2_FB18_Pos (18U)
#define CAN_F22R2_FB18_Msk (0x1UL << CAN_F22R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F22R2_FB18 CAN_F22R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F22R2_FB19_Pos (19U)
#define CAN_F22R2_FB19_Msk (0x1UL << CAN_F22R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F22R2_FB19 CAN_F22R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F22R2_FB20_Pos (20U)
#define CAN_F22R2_FB20_Msk (0x1UL << CAN_F22R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F22R2_FB20 CAN_F22R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F22R2_FB21_Pos (21U)
#define CAN_F22R2_FB21_Msk (0x1UL << CAN_F22R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F22R2_FB21 CAN_F22R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F22R2_FB22_Pos (22U)
#define CAN_F22R2_FB22_Msk (0x1UL << CAN_F22R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F22R2_FB22 CAN_F22R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F22R2_FB23_Pos (23U)
#define CAN_F22R2_FB23_Msk (0x1UL << CAN_F22R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F22R2_FB23 CAN_F22R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F22R2_FB24_Pos (24U)
#define CAN_F22R2_FB24_Msk (0x1UL << CAN_F22R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F22R2_FB24 CAN_F22R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F22R2_FB25_Pos (25U)
#define CAN_F22R2_FB25_Msk (0x1UL << CAN_F22R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F22R2_FB25 CAN_F22R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F22R2_FB26_Pos (26U)
#define CAN_F22R2_FB26_Msk (0x1UL << CAN_F22R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F22R2_FB26 CAN_F22R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F22R2_FB27_Pos (27U)
#define CAN_F22R2_FB27_Msk (0x1UL << CAN_F22R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F22R2_FB27 CAN_F22R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F22R2_FB28_Pos (28U)
#define CAN_F22R2_FB28_Msk (0x1UL << CAN_F22R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F22R2_FB28 CAN_F22R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F22R2_FB29_Pos (29U)
#define CAN_F22R2_FB29_Msk (0x1UL << CAN_F22R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F22R2_FB29 CAN_F22R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F22R2_FB30_Pos (30U)
#define CAN_F22R2_FB30_Msk (0x1UL << CAN_F22R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F22R2_FB30 CAN_F22R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F22R2_FB31_Pos (31U)
#define CAN_F22R2_FB31_Msk (0x1UL << CAN_F22R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F22R2_FB31 CAN_F22R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F23R2 register  ******************/
#define CAN_F23R2_FB0_Pos (0U)
#define CAN_F23R2_FB0_Msk (0x1UL << CAN_F23R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F23R2_FB0 CAN_F23R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F23R2_FB1_Pos (1U)
#define CAN_F23R2_FB1_Msk (0x1UL << CAN_F23R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F23R2_FB1 CAN_F23R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F23R2_FB2_Pos (2U)
#define CAN_F23R2_FB2_Msk (0x1UL << CAN_F23R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F23R2_FB2 CAN_F23R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F23R2_FB3_Pos (3U)
#define CAN_F23R2_FB3_Msk (0x1UL << CAN_F23R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F23R2_FB3 CAN_F23R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F23R2_FB4_Pos (4U)
#define CAN_F23R2_FB4_Msk (0x1UL << CAN_F23R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F23R2_FB4 CAN_F23R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F23R2_FB5_Pos (5U)
#define CAN_F23R2_FB5_Msk (0x1UL << CAN_F23R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F23R2_FB5 CAN_F23R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F23R2_FB6_Pos (6U)
#define CAN_F23R2_FB6_Msk (0x1UL << CAN_F23R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F23R2_FB6 CAN_F23R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F23R2_FB7_Pos (7U)
#define CAN_F23R2_FB7_Msk (0x1UL << CAN_F23R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F23R2_FB7 CAN_F23R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F23R2_FB8_Pos (8U)
#define CAN_F23R2_FB8_Msk (0x1UL << CAN_F23R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F23R2_FB8 CAN_F23R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F23R2_FB9_Pos (9U)
#define CAN_F23R2_FB9_Msk (0x1UL << CAN_F23R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F23R2_FB9 CAN_F23R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F23R2_FB10_Pos (10U)
#define CAN_F23R2_FB10_Msk (0x1UL << CAN_F23R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F23R2_FB10 CAN_F23R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F23R2_FB11_Pos (11U)
#define CAN_F23R2_FB11_Msk (0x1UL << CAN_F23R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F23R2_FB11 CAN_F23R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F23R2_FB12_Pos (12U)
#define CAN_F23R2_FB12_Msk (0x1UL << CAN_F23R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F23R2_FB12 CAN_F23R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F23R2_FB13_Pos (13U)
#define CAN_F23R2_FB13_Msk (0x1UL << CAN_F23R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F23R2_FB13 CAN_F23R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F23R2_FB14_Pos (14U)
#define CAN_F23R2_FB14_Msk (0x1UL << CAN_F23R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F23R2_FB14 CAN_F23R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F23R2_FB15_Pos (15U)
#define CAN_F23R2_FB15_Msk (0x1UL << CAN_F23R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F23R2_FB15 CAN_F23R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F23R2_FB16_Pos (16U)
#define CAN_F23R2_FB16_Msk (0x1UL << CAN_F23R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F23R2_FB16 CAN_F23R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F23R2_FB17_Pos (17U)
#define CAN_F23R2_FB17_Msk (0x1UL << CAN_F23R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F23R2_FB17 CAN_F23R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F23R2_FB18_Pos (18U)
#define CAN_F23R2_FB18_Msk (0x1UL << CAN_F23R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F23R2_FB18 CAN_F23R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F23R2_FB19_Pos (19U)
#define CAN_F23R2_FB19_Msk (0x1UL << CAN_F23R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F23R2_FB19 CAN_F23R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F23R2_FB20_Pos (20U)
#define CAN_F23R2_FB20_Msk (0x1UL << CAN_F23R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F23R2_FB20 CAN_F23R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F23R2_FB21_Pos (21U)
#define CAN_F23R2_FB21_Msk (0x1UL << CAN_F23R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F23R2_FB21 CAN_F23R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F23R2_FB22_Pos (22U)
#define CAN_F23R2_FB22_Msk (0x1UL << CAN_F23R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F23R2_FB22 CAN_F23R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F23R2_FB23_Pos (23U)
#define CAN_F23R2_FB23_Msk (0x1UL << CAN_F23R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F23R2_FB23 CAN_F23R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F23R2_FB24_Pos (24U)
#define CAN_F23R2_FB24_Msk (0x1UL << CAN_F23R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F23R2_FB24 CAN_F23R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F23R2_FB25_Pos (25U)
#define CAN_F23R2_FB25_Msk (0x1UL << CAN_F23R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F23R2_FB25 CAN_F23R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F23R2_FB26_Pos (26U)
#define CAN_F23R2_FB26_Msk (0x1UL << CAN_F23R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F23R2_FB26 CAN_F23R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F23R2_FB27_Pos (27U)
#define CAN_F23R2_FB27_Msk (0x1UL << CAN_F23R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F23R2_FB27 CAN_F23R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F23R2_FB28_Pos (28U)
#define CAN_F23R2_FB28_Msk (0x1UL << CAN_F23R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F23R2_FB28 CAN_F23R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F23R2_FB29_Pos (29U)
#define CAN_F23R2_FB29_Msk (0x1UL << CAN_F23R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F23R2_FB29 CAN_F23R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F23R2_FB30_Pos (30U)
#define CAN_F23R2_FB30_Msk (0x1UL << CAN_F23R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F23R2_FB30 CAN_F23R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F23R2_FB31_Pos (31U)
#define CAN_F23R2_FB31_Msk (0x1UL << CAN_F23R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F23R2_FB31 CAN_F23R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F24R2 register  ******************/
#define CAN_F24R2_FB0_Pos (0U)
#define CAN_F24R2_FB0_Msk (0x1UL << CAN_F24R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F24R2_FB0 CAN_F24R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F24R2_FB1_Pos (1U)
#define CAN_F24R2_FB1_Msk (0x1UL << CAN_F24R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F24R2_FB1 CAN_F24R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F24R2_FB2_Pos (2U)
#define CAN_F24R2_FB2_Msk (0x1UL << CAN_F24R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F24R2_FB2 CAN_F24R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F24R2_FB3_Pos (3U)
#define CAN_F24R2_FB3_Msk (0x1UL << CAN_F24R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F24R2_FB3 CAN_F24R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F24R2_FB4_Pos (4U)
#define CAN_F24R2_FB4_Msk (0x1UL << CAN_F24R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F24R2_FB4 CAN_F24R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F24R2_FB5_Pos (5U)
#define CAN_F24R2_FB5_Msk (0x1UL << CAN_F24R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F24R2_FB5 CAN_F24R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F24R2_FB6_Pos (6U)
#define CAN_F24R2_FB6_Msk (0x1UL << CAN_F24R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F24R2_FB6 CAN_F24R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F24R2_FB7_Pos (7U)
#define CAN_F24R2_FB7_Msk (0x1UL << CAN_F24R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F24R2_FB7 CAN_F24R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F24R2_FB8_Pos (8U)
#define CAN_F24R2_FB8_Msk (0x1UL << CAN_F24R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F24R2_FB8 CAN_F24R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F24R2_FB9_Pos (9U)
#define CAN_F24R2_FB9_Msk (0x1UL << CAN_F24R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F24R2_FB9 CAN_F24R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F24R2_FB10_Pos (10U)
#define CAN_F24R2_FB10_Msk (0x1UL << CAN_F24R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F24R2_FB10 CAN_F24R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F24R2_FB11_Pos (11U)
#define CAN_F24R2_FB11_Msk (0x1UL << CAN_F24R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F24R2_FB11 CAN_F24R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F24R2_FB12_Pos (12U)
#define CAN_F24R2_FB12_Msk (0x1UL << CAN_F24R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F24R2_FB12 CAN_F24R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F24R2_FB13_Pos (13U)
#define CAN_F24R2_FB13_Msk (0x1UL << CAN_F24R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F24R2_FB13 CAN_F24R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F24R2_FB14_Pos (14U)
#define CAN_F24R2_FB14_Msk (0x1UL << CAN_F24R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F24R2_FB14 CAN_F24R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F24R2_FB15_Pos (15U)
#define CAN_F24R2_FB15_Msk (0x1UL << CAN_F24R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F24R2_FB15 CAN_F24R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F24R2_FB16_Pos (16U)
#define CAN_F24R2_FB16_Msk (0x1UL << CAN_F24R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F24R2_FB16 CAN_F24R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F24R2_FB17_Pos (17U)
#define CAN_F24R2_FB17_Msk (0x1UL << CAN_F24R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F24R2_FB17 CAN_F24R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F24R2_FB18_Pos (18U)
#define CAN_F24R2_FB18_Msk (0x1UL << CAN_F24R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F24R2_FB18 CAN_F24R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F24R2_FB19_Pos (19U)
#define CAN_F24R2_FB19_Msk (0x1UL << CAN_F24R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F24R2_FB19 CAN_F24R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F24R2_FB20_Pos (20U)
#define CAN_F24R2_FB20_Msk (0x1UL << CAN_F24R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F24R2_FB20 CAN_F24R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F24R2_FB21_Pos (21U)
#define CAN_F24R2_FB21_Msk (0x1UL << CAN_F24R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F24R2_FB21 CAN_F24R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F24R2_FB22_Pos (22U)
#define CAN_F24R2_FB22_Msk (0x1UL << CAN_F24R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F24R2_FB22 CAN_F24R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F24R2_FB23_Pos (23U)
#define CAN_F24R2_FB23_Msk (0x1UL << CAN_F24R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F24R2_FB23 CAN_F24R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F24R2_FB24_Pos (24U)
#define CAN_F24R2_FB24_Msk (0x1UL << CAN_F24R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F24R2_FB24 CAN_F24R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F24R2_FB25_Pos (25U)
#define CAN_F24R2_FB25_Msk (0x1UL << CAN_F24R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F24R2_FB25 CAN_F24R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F24R2_FB26_Pos (26U)
#define CAN_F24R2_FB26_Msk (0x1UL << CAN_F24R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F24R2_FB26 CAN_F24R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F24R2_FB27_Pos (27U)
#define CAN_F24R2_FB27_Msk (0x1UL << CAN_F24R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F24R2_FB27 CAN_F24R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F24R2_FB28_Pos (28U)
#define CAN_F24R2_FB28_Msk (0x1UL << CAN_F24R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F24R2_FB28 CAN_F24R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F24R2_FB29_Pos (29U)
#define CAN_F24R2_FB29_Msk (0x1UL << CAN_F24R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F24R2_FB29 CAN_F24R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F24R2_FB30_Pos (30U)
#define CAN_F24R2_FB30_Msk (0x1UL << CAN_F24R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F24R2_FB30 CAN_F24R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F24R2_FB31_Pos (31U)
#define CAN_F24R2_FB31_Msk (0x1UL << CAN_F24R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F24R2_FB31 CAN_F24R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F25R2 register  ******************/
#define CAN_F25R2_FB0_Pos (0U)
#define CAN_F25R2_FB0_Msk (0x1UL << CAN_F25R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F25R2_FB0 CAN_F25R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F25R2_FB1_Pos (1U)
#define CAN_F25R2_FB1_Msk (0x1UL << CAN_F25R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F25R2_FB1 CAN_F25R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F25R2_FB2_Pos (2U)
#define CAN_F25R2_FB2_Msk (0x1UL << CAN_F25R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F25R2_FB2 CAN_F25R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F25R2_FB3_Pos (3U)
#define CAN_F25R2_FB3_Msk (0x1UL << CAN_F25R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F25R2_FB3 CAN_F25R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F25R2_FB4_Pos (4U)
#define CAN_F25R2_FB4_Msk (0x1UL << CAN_F25R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F25R2_FB4 CAN_F25R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F25R2_FB5_Pos (5U)
#define CAN_F25R2_FB5_Msk (0x1UL << CAN_F25R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F25R2_FB5 CAN_F25R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F25R2_FB6_Pos (6U)
#define CAN_F25R2_FB6_Msk (0x1UL << CAN_F25R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F25R2_FB6 CAN_F25R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F25R2_FB7_Pos (7U)
#define CAN_F25R2_FB7_Msk (0x1UL << CAN_F25R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F25R2_FB7 CAN_F25R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F25R2_FB8_Pos (8U)
#define CAN_F25R2_FB8_Msk (0x1UL << CAN_F25R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F25R2_FB8 CAN_F25R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F25R2_FB9_Pos (9U)
#define CAN_F25R2_FB9_Msk (0x1UL << CAN_F25R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F25R2_FB9 CAN_F25R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F25R2_FB10_Pos (10U)
#define CAN_F25R2_FB10_Msk (0x1UL << CAN_F25R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F25R2_FB10 CAN_F25R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F25R2_FB11_Pos (11U)
#define CAN_F25R2_FB11_Msk (0x1UL << CAN_F25R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F25R2_FB11 CAN_F25R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F25R2_FB12_Pos (12U)
#define CAN_F25R2_FB12_Msk (0x1UL << CAN_F25R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F25R2_FB12 CAN_F25R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F25R2_FB13_Pos (13U)
#define CAN_F25R2_FB13_Msk (0x1UL << CAN_F25R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F25R2_FB13 CAN_F25R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F25R2_FB14_Pos (14U)
#define CAN_F25R2_FB14_Msk (0x1UL << CAN_F25R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F25R2_FB14 CAN_F25R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F25R2_FB15_Pos (15U)
#define CAN_F25R2_FB15_Msk (0x1UL << CAN_F25R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F25R2_FB15 CAN_F25R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F25R2_FB16_Pos (16U)
#define CAN_F25R2_FB16_Msk (0x1UL << CAN_F25R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F25R2_FB16 CAN_F25R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F25R2_FB17_Pos (17U)
#define CAN_F25R2_FB17_Msk (0x1UL << CAN_F25R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F25R2_FB17 CAN_F25R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F25R2_FB18_Pos (18U)
#define CAN_F25R2_FB18_Msk (0x1UL << CAN_F25R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F25R2_FB18 CAN_F25R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F25R2_FB19_Pos (19U)
#define CAN_F25R2_FB19_Msk (0x1UL << CAN_F25R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F25R2_FB19 CAN_F25R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F25R2_FB20_Pos (20U)
#define CAN_F25R2_FB20_Msk (0x1UL << CAN_F25R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F25R2_FB20 CAN_F25R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F25R2_FB21_Pos (21U)
#define CAN_F25R2_FB21_Msk (0x1UL << CAN_F25R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F25R2_FB21 CAN_F25R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F25R2_FB22_Pos (22U)
#define CAN_F25R2_FB22_Msk (0x1UL << CAN_F25R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F25R2_FB22 CAN_F25R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F25R2_FB23_Pos (23U)
#define CAN_F25R2_FB23_Msk (0x1UL << CAN_F25R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F25R2_FB23 CAN_F25R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F25R2_FB24_Pos (24U)
#define CAN_F25R2_FB24_Msk (0x1UL << CAN_F25R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F25R2_FB24 CAN_F25R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F25R2_FB25_Pos (25U)
#define CAN_F25R2_FB25_Msk (0x1UL << CAN_F25R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F25R2_FB25 CAN_F25R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F25R2_FB26_Pos (26U)
#define CAN_F25R2_FB26_Msk (0x1UL << CAN_F25R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F25R2_FB26 CAN_F25R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F25R2_FB27_Pos (27U)
#define CAN_F25R2_FB27_Msk (0x1UL << CAN_F25R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F25R2_FB27 CAN_F25R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F25R2_FB28_Pos (28U)
#define CAN_F25R2_FB28_Msk (0x1UL << CAN_F25R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F25R2_FB28 CAN_F25R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F25R2_FB29_Pos (29U)
#define CAN_F25R2_FB29_Msk (0x1UL << CAN_F25R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F25R2_FB29 CAN_F25R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F25R2_FB30_Pos (30U)
#define CAN_F25R2_FB30_Msk (0x1UL << CAN_F25R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F25R2_FB30 CAN_F25R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F25R2_FB31_Pos (31U)
#define CAN_F25R2_FB31_Msk (0x1UL << CAN_F25R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F25R2_FB31 CAN_F25R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F26R2 register  ******************/
#define CAN_F26R2_FB0_Pos (0U)
#define CAN_F26R2_FB0_Msk (0x1UL << CAN_F26R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F26R2_FB0 CAN_F26R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F26R2_FB1_Pos (1U)
#define CAN_F26R2_FB1_Msk (0x1UL << CAN_F26R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F26R2_FB1 CAN_F26R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F26R2_FB2_Pos (2U)
#define CAN_F26R2_FB2_Msk (0x1UL << CAN_F26R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F26R2_FB2 CAN_F26R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F26R2_FB3_Pos (3U)
#define CAN_F26R2_FB3_Msk (0x1UL << CAN_F26R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F26R2_FB3 CAN_F26R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F26R2_FB4_Pos (4U)
#define CAN_F26R2_FB4_Msk (0x1UL << CAN_F26R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F26R2_FB4 CAN_F26R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F26R2_FB5_Pos (5U)
#define CAN_F26R2_FB5_Msk (0x1UL << CAN_F26R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F26R2_FB5 CAN_F26R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F26R2_FB6_Pos (6U)
#define CAN_F26R2_FB6_Msk (0x1UL << CAN_F26R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F26R2_FB6 CAN_F26R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F26R2_FB7_Pos (7U)
#define CAN_F26R2_FB7_Msk (0x1UL << CAN_F26R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F26R2_FB7 CAN_F26R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F26R2_FB8_Pos (8U)
#define CAN_F26R2_FB8_Msk (0x1UL << CAN_F26R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F26R2_FB8 CAN_F26R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F26R2_FB9_Pos (9U)
#define CAN_F26R2_FB9_Msk (0x1UL << CAN_F26R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F26R2_FB9 CAN_F26R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F26R2_FB10_Pos (10U)
#define CAN_F26R2_FB10_Msk (0x1UL << CAN_F26R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F26R2_FB10 CAN_F26R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F26R2_FB11_Pos (11U)
#define CAN_F26R2_FB11_Msk (0x1UL << CAN_F26R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F26R2_FB11 CAN_F26R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F26R2_FB12_Pos (12U)
#define CAN_F26R2_FB12_Msk (0x1UL << CAN_F26R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F26R2_FB12 CAN_F26R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F26R2_FB13_Pos (13U)
#define CAN_F26R2_FB13_Msk (0x1UL << CAN_F26R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F26R2_FB13 CAN_F26R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F26R2_FB14_Pos (14U)
#define CAN_F26R2_FB14_Msk (0x1UL << CAN_F26R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F26R2_FB14 CAN_F26R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F26R2_FB15_Pos (15U)
#define CAN_F26R2_FB15_Msk (0x1UL << CAN_F26R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F26R2_FB15 CAN_F26R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F26R2_FB16_Pos (16U)
#define CAN_F26R2_FB16_Msk (0x1UL << CAN_F26R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F26R2_FB16 CAN_F26R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F26R2_FB17_Pos (17U)
#define CAN_F26R2_FB17_Msk (0x1UL << CAN_F26R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F26R2_FB17 CAN_F26R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F26R2_FB18_Pos (18U)
#define CAN_F26R2_FB18_Msk (0x1UL << CAN_F26R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F26R2_FB18 CAN_F26R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F26R2_FB19_Pos (19U)
#define CAN_F26R2_FB19_Msk (0x1UL << CAN_F26R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F26R2_FB19 CAN_F26R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F26R2_FB20_Pos (20U)
#define CAN_F26R2_FB20_Msk (0x1UL << CAN_F26R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F26R2_FB20 CAN_F26R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F26R2_FB21_Pos (21U)
#define CAN_F26R2_FB21_Msk (0x1UL << CAN_F26R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F26R2_FB21 CAN_F26R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F26R2_FB22_Pos (22U)
#define CAN_F26R2_FB22_Msk (0x1UL << CAN_F26R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F26R2_FB22 CAN_F26R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F26R2_FB23_Pos (23U)
#define CAN_F26R2_FB23_Msk (0x1UL << CAN_F26R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F26R2_FB23 CAN_F26R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F26R2_FB24_Pos (24U)
#define CAN_F26R2_FB24_Msk (0x1UL << CAN_F26R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F26R2_FB24 CAN_F26R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F26R2_FB25_Pos (25U)
#define CAN_F26R2_FB25_Msk (0x1UL << CAN_F26R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F26R2_FB25 CAN_F26R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F26R2_FB26_Pos (26U)
#define CAN_F26R2_FB26_Msk (0x1UL << CAN_F26R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F26R2_FB26 CAN_F26R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F26R2_FB27_Pos (27U)
#define CAN_F26R2_FB27_Msk (0x1UL << CAN_F26R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F26R2_FB27 CAN_F26R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F26R2_FB28_Pos (28U)
#define CAN_F26R2_FB28_Msk (0x1UL << CAN_F26R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F26R2_FB28 CAN_F26R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F26R2_FB29_Pos (29U)
#define CAN_F26R2_FB29_Msk (0x1UL << CAN_F26R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F26R2_FB29 CAN_F26R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F26R2_FB30_Pos (30U)
#define CAN_F26R2_FB30_Msk (0x1UL << CAN_F26R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F26R2_FB30 CAN_F26R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F26R2_FB31_Pos (31U)
#define CAN_F26R2_FB31_Msk (0x1UL << CAN_F26R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F26R2_FB31 CAN_F26R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F27R2 register  ******************/
#define CAN_F27R2_FB0_Pos (0U)
#define CAN_F27R2_FB0_Msk (0x1UL << CAN_F27R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F27R2_FB0 CAN_F27R2_FB0_Msk                /*!< Filter bit 0 */
#define CAN_F27R2_FB1_Pos (1U)
#define CAN_F27R2_FB1_Msk (0x1UL << CAN_F27R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F27R2_FB1 CAN_F27R2_FB1_Msk                /*!< Filter bit 1 */
#define CAN_F27R2_FB2_Pos (2U)
#define CAN_F27R2_FB2_Msk (0x1UL << CAN_F27R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F27R2_FB2 CAN_F27R2_FB2_Msk                /*!< Filter bit 2 */
#define CAN_F27R2_FB3_Pos (3U)
#define CAN_F27R2_FB3_Msk (0x1UL << CAN_F27R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F27R2_FB3 CAN_F27R2_FB3_Msk                /*!< Filter bit 3 */
#define CAN_F27R2_FB4_Pos (4U)
#define CAN_F27R2_FB4_Msk (0x1UL << CAN_F27R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F27R2_FB4 CAN_F27R2_FB4_Msk                /*!< Filter bit 4 */
#define CAN_F27R2_FB5_Pos (5U)
#define CAN_F27R2_FB5_Msk (0x1UL << CAN_F27R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F27R2_FB5 CAN_F27R2_FB5_Msk                /*!< Filter bit 5 */
#define CAN_F27R2_FB6_Pos (6U)
#define CAN_F27R2_FB6_Msk (0x1UL << CAN_F27R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F27R2_FB6 CAN_F27R2_FB6_Msk                /*!< Filter bit 6 */
#define CAN_F27R2_FB7_Pos (7U)
#define CAN_F27R2_FB7_Msk (0x1UL << CAN_F27R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F27R2_FB7 CAN_F27R2_FB7_Msk                /*!< Filter bit 7 */
#define CAN_F27R2_FB8_Pos (8U)
#define CAN_F27R2_FB8_Msk (0x1UL << CAN_F27R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F27R2_FB8 CAN_F27R2_FB8_Msk                /*!< Filter bit 8 */
#define CAN_F27R2_FB9_Pos (9U)
#define CAN_F27R2_FB9_Msk (0x1UL << CAN_F27R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F27R2_FB9 CAN_F27R2_FB9_Msk                /*!< Filter bit 9 */
#define CAN_F27R2_FB10_Pos (10U)
#define CAN_F27R2_FB10_Msk (0x1UL << CAN_F27R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F27R2_FB10 CAN_F27R2_FB10_Msk                /*!< Filter bit 10 */
#define CAN_F27R2_FB11_Pos (11U)
#define CAN_F27R2_FB11_Msk (0x1UL << CAN_F27R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F27R2_FB11 CAN_F27R2_FB11_Msk                /*!< Filter bit 11 */
#define CAN_F27R2_FB12_Pos (12U)
#define CAN_F27R2_FB12_Msk (0x1UL << CAN_F27R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F27R2_FB12 CAN_F27R2_FB12_Msk                /*!< Filter bit 12 */
#define CAN_F27R2_FB13_Pos (13U)
#define CAN_F27R2_FB13_Msk (0x1UL << CAN_F27R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F27R2_FB13 CAN_F27R2_FB13_Msk                /*!< Filter bit 13 */
#define CAN_F27R2_FB14_Pos (14U)
#define CAN_F27R2_FB14_Msk (0x1UL << CAN_F27R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F27R2_FB14 CAN_F27R2_FB14_Msk                /*!< Filter bit 14 */
#define CAN_F27R2_FB15_Pos (15U)
#define CAN_F27R2_FB15_Msk (0x1UL << CAN_F27R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F27R2_FB15 CAN_F27R2_FB15_Msk                /*!< Filter bit 15 */
#define CAN_F27R2_FB16_Pos (16U)
#define CAN_F27R2_FB16_Msk (0x1UL << CAN_F27R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F27R2_FB16 CAN_F27R2_FB16_Msk                /*!< Filter bit 16 */
#define CAN_F27R2_FB17_Pos (17U)
#define CAN_F27R2_FB17_Msk (0x1UL << CAN_F27R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F27R2_FB17 CAN_F27R2_FB17_Msk                /*!< Filter bit 17 */
#define CAN_F27R2_FB18_Pos (18U)
#define CAN_F27R2_FB18_Msk (0x1UL << CAN_F27R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F27R2_FB18 CAN_F27R2_FB18_Msk                /*!< Filter bit 18 */
#define CAN_F27R2_FB19_Pos (19U)
#define CAN_F27R2_FB19_Msk (0x1UL << CAN_F27R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F27R2_FB19 CAN_F27R2_FB19_Msk                /*!< Filter bit 19 */
#define CAN_F27R2_FB20_Pos (20U)
#define CAN_F27R2_FB20_Msk (0x1UL << CAN_F27R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F27R2_FB20 CAN_F27R2_FB20_Msk                /*!< Filter bit 20 */
#define CAN_F27R2_FB21_Pos (21U)
#define CAN_F27R2_FB21_Msk (0x1UL << CAN_F27R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F27R2_FB21 CAN_F27R2_FB21_Msk                /*!< Filter bit 21 */
#define CAN_F27R2_FB22_Pos (22U)
#define CAN_F27R2_FB22_Msk (0x1UL << CAN_F27R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F27R2_FB22 CAN_F27R2_FB22_Msk                /*!< Filter bit 22 */
#define CAN_F27R2_FB23_Pos (23U)
#define CAN_F27R2_FB23_Msk (0x1UL << CAN_F27R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F27R2_FB23 CAN_F27R2_FB23_Msk                /*!< Filter bit 23 */
#define CAN_F27R2_FB24_Pos (24U)
#define CAN_F27R2_FB24_Msk (0x1UL << CAN_F27R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F27R2_FB24 CAN_F27R2_FB24_Msk                /*!< Filter bit 24 */
#define CAN_F27R2_FB25_Pos (25U)
#define CAN_F27R2_FB25_Msk (0x1UL << CAN_F27R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F27R2_FB25 CAN_F27R2_FB25_Msk                /*!< Filter bit 25 */
#define CAN_F27R2_FB26_Pos (26U)
#define CAN_F27R2_FB26_Msk (0x1UL << CAN_F27R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F27R2_FB26 CAN_F27R2_FB26_Msk                /*!< Filter bit 26 */
#define CAN_F27R2_FB27_Pos (27U)
#define CAN_F27R2_FB27_Msk (0x1UL << CAN_F27R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F27R2_FB27 CAN_F27R2_FB27_Msk                /*!< Filter bit 27 */
#define CAN_F27R2_FB28_Pos (28U)
#define CAN_F27R2_FB28_Msk (0x1UL << CAN_F27R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F27R2_FB28 CAN_F27R2_FB28_Msk                /*!< Filter bit 28 */
#define CAN_F27R2_FB29_Pos (29U)
#define CAN_F27R2_FB29_Msk (0x1UL << CAN_F27R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F27R2_FB29 CAN_F27R2_FB29_Msk                /*!< Filter bit 29 */
#define CAN_F27R2_FB30_Pos (30U)
#define CAN_F27R2_FB30_Msk (0x1UL << CAN_F27R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F27R2_FB30 CAN_F27R2_FB30_Msk                /*!< Filter bit 30 */
#define CAN_F27R2_FB31_Pos (31U)
#define CAN_F27R2_FB31_Msk (0x1UL << CAN_F27R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F27R2_FB31 CAN_F27R2_FB31_Msk                /*!< Filter bit 31 */

/******************************************************************************/
/*                                                                            */
/*                        Serial Peripheral Interface                         */
/*                                                                            */
/******************************************************************************/
/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F1 serie)
 */
#define SPI_I2S_SUPPORT /*!< I2S support */
#define I2S2_I2S3_CLOCK_FEATURE

/*******************  Bit definition for SPI_CR1 register  ********************/
#define SPI_CR1_CPHA_Pos (0U)
#define SPI_CR1_CPHA_Msk (0x1UL << SPI_CR1_CPHA_Pos) /*!< 0x00000001 */
#define SPI_CR1_CPHA SPI_CR1_CPHA_Msk                /*!< Clock Phase */
#define SPI_CR1_CPOL_Pos (1U)
#define SPI_CR1_CPOL_Msk (0x1UL << SPI_CR1_CPOL_Pos) /*!< 0x00000002 */
#define SPI_CR1_CPOL SPI_CR1_CPOL_Msk                /*!< Clock Polarity */
#define SPI_CR1_MSTR_Pos (2U)
#define SPI_CR1_MSTR_Msk (0x1UL << SPI_CR1_MSTR_Pos) /*!< 0x00000004 */
#define SPI_CR1_MSTR SPI_CR1_MSTR_Msk                /*!< Master Selection */

#define SPI_CR1_BR_Pos (3U)
#define SPI_CR1_BR_Msk (0x7UL << SPI_CR1_BR_Pos) /*!< 0x00000038 */
#define SPI_CR1_BR SPI_CR1_BR_Msk                /*!< BR[2:0] bits (Baud Rate Control) */
#define SPI_CR1_BR_0 (0x1UL << SPI_CR1_BR_Pos)   /*!< 0x00000008 */
#define SPI_CR1_BR_1 (0x2UL << SPI_CR1_BR_Pos)   /*!< 0x00000010 */
#define SPI_CR1_BR_2 (0x4UL << SPI_CR1_BR_Pos)   /*!< 0x00000020 */

#define SPI_CR1_SPE_Pos (6U)
#define SPI_CR1_SPE_Msk (0x1UL << SPI_CR1_SPE_Pos) /*!< 0x00000040 */
#define SPI_CR1_SPE SPI_CR1_SPE_Msk                /*!< SPI Enable */
#define SPI_CR1_LSBFIRST_Pos (7U)
#define SPI_CR1_LSBFIRST_Msk (0x1UL << SPI_CR1_LSBFIRST_Pos) /*!< 0x00000080 */
#define SPI_CR1_LSBFIRST SPI_CR1_LSBFIRST_Msk                /*!< Frame Format */
#define SPI_CR1_SSI_Pos (8U)
#define SPI_CR1_SSI_Msk (0x1UL << SPI_CR1_SSI_Pos) /*!< 0x00000100 */
#define SPI_CR1_SSI SPI_CR1_SSI_Msk                /*!< Internal slave select */
#define SPI_CR1_SSM_Pos (9U)
#define SPI_CR1_SSM_Msk (0x1UL << SPI_CR1_SSM_Pos) /*!< 0x00000200 */
#define SPI_CR1_SSM SPI_CR1_SSM_Msk                /*!< Software slave management */
#define SPI_CR1_RXONLY_Pos (10U)
#define SPI_CR1_RXONLY_Msk (0x1UL << SPI_CR1_RXONLY_Pos) /*!< 0x00000400 */
#define SPI_CR1_RXONLY SPI_CR1_RXONLY_Msk                /*!< Receive only */
#define SPI_CR1_DFF_Pos (11U)
#define SPI_CR1_DFF_Msk (0x1UL << SPI_CR1_DFF_Pos) /*!< 0x00000800 */
#define SPI_CR1_DFF SPI_CR1_DFF_Msk                /*!< Data Frame Format */
#define SPI_CR1_CRCNEXT_Pos (12U)
#define SPI_CR1_CRCNEXT_Msk (0x1UL << SPI_CR1_CRCNEXT_Pos) /*!< 0x00001000 */
#define SPI_CR1_CRCNEXT SPI_CR1_CRCNEXT_Msk                /*!< Transmit CRC next */
#define SPI_CR1_CRCEN_Pos (13U)
#define SPI_CR1_CRCEN_Msk (0x1UL << SPI_CR1_CRCEN_Pos) /*!< 0x00002000 */
#define SPI_CR1_CRCEN SPI_CR1_CRCEN_Msk                /*!< Hardware CRC calculation enable */
#define SPI_CR1_BIDIOE_Pos (14U)
#define SPI_CR1_BIDIOE_Msk (0x1UL << SPI_CR1_BIDIOE_Pos) /*!< 0x00004000 */
#define SPI_CR1_BIDIOE SPI_CR1_BIDIOE_Msk                /*!< Output enable in bidirectional mode */
#define SPI_CR1_BIDIMODE_Pos (15U)
#define SPI_CR1_BIDIMODE_Msk (0x1UL << SPI_CR1_BIDIMODE_Pos) /*!< 0x00008000 */
#define SPI_CR1_BIDIMODE SPI_CR1_BIDIMODE_Msk                /*!< Bidirectional data mode enable */

/*******************  Bit definition for SPI_CR2 register  ********************/
#define SPI_CR2_RXDMAEN_Pos (0U)
#define SPI_CR2_RXDMAEN_Msk (0x1UL << SPI_CR2_RXDMAEN_Pos) /*!< 0x00000001 */
#define SPI_CR2_RXDMAEN SPI_CR2_RXDMAEN_Msk                /*!< Rx Buffer DMA Enable */
#define SPI_CR2_TXDMAEN_Pos (1U)
#define SPI_CR2_TXDMAEN_Msk (0x1UL << SPI_CR2_TXDMAEN_Pos) /*!< 0x00000002 */
#define SPI_CR2_TXDMAEN SPI_CR2_TXDMAEN_Msk                /*!< Tx Buffer DMA Enable */
#define SPI_CR2_SSOE_Pos (2U)
#define SPI_CR2_SSOE_Msk (0x1UL << SPI_CR2_SSOE_Pos) /*!< 0x00000004 */
#define SPI_CR2_SSOE SPI_CR2_SSOE_Msk                /*!< SS Output Enable */
#define SPI_CR2_ERRIE_Pos (5U)
#define SPI_CR2_ERRIE_Msk (0x1UL << SPI_CR2_ERRIE_Pos) /*!< 0x00000020 */
#define SPI_CR2_ERRIE SPI_CR2_ERRIE_Msk                /*!< Error Interrupt Enable */
#define SPI_CR2_RXNEIE_Pos (6U)
#define SPI_CR2_RXNEIE_Msk (0x1UL << SPI_CR2_RXNEIE_Pos) /*!< 0x00000040 */
#define SPI_CR2_RXNEIE SPI_CR2_RXNEIE_Msk                /*!< RX buffer Not Empty Interrupt Enable */
#define SPI_CR2_TXEIE_Pos (7U)
#define SPI_CR2_TXEIE_Msk (0x1UL << SPI_CR2_TXEIE_Pos) /*!< 0x00000080 */
#define SPI_CR2_TXEIE SPI_CR2_TXEIE_Msk                /*!< Tx buffer Empty Interrupt Enable */

/********************  Bit definition for SPI_SR register  ********************/
#define SPI_SR_RXNE_Pos (0U)
#define SPI_SR_RXNE_Msk (0x1UL << SPI_SR_RXNE_Pos) /*!< 0x00000001 */
#define SPI_SR_RXNE SPI_SR_RXNE_Msk                /*!< Receive buffer Not Empty */
#define SPI_SR_TXE_Pos (1U)
#define SPI_SR_TXE_Msk (0x1UL << SPI_SR_TXE_Pos) /*!< 0x00000002 */
#define SPI_SR_TXE SPI_SR_TXE_Msk                /*!< Transmit buffer Empty */
#define SPI_SR_CHSIDE_Pos (2U)
#define SPI_SR_CHSIDE_Msk (0x1UL << SPI_SR_CHSIDE_Pos) /*!< 0x00000004 */
#define SPI_SR_CHSIDE SPI_SR_CHSIDE_Msk                /*!< Channel side */
#define SPI_SR_UDR_Pos (3U)
#define SPI_SR_UDR_Msk (0x1UL << SPI_SR_UDR_Pos) /*!< 0x00000008 */
#define SPI_SR_UDR SPI_SR_UDR_Msk                /*!< Underrun flag */
#define SPI_SR_CRCERR_Pos (4U)
#define SPI_SR_CRCERR_Msk (0x1UL << SPI_SR_CRCERR_Pos) /*!< 0x00000010 */
#define SPI_SR_CRCERR SPI_SR_CRCERR_Msk                /*!< CRC Error flag */
#define SPI_SR_MODF_Pos (5U)
#define SPI_SR_MODF_Msk (0x1UL << SPI_SR_MODF_Pos) /*!< 0x00000020 */
#define SPI_SR_MODF SPI_SR_MODF_Msk                /*!< Mode fault */
#define SPI_SR_OVR_Pos (6U)
#define SPI_SR_OVR_Msk (0x1UL << SPI_SR_OVR_Pos) /*!< 0x00000040 */
#define SPI_SR_OVR SPI_SR_OVR_Msk                /*!< Overrun flag */
#define SPI_SR_BSY_Pos (7U)
#define SPI_SR_BSY_Msk (0x1UL << SPI_SR_BSY_Pos) /*!< 0x00000080 */
#define SPI_SR_BSY SPI_SR_BSY_Msk                /*!< Busy flag */

/********************  Bit definition for SPI_DR register  ********************/
#define SPI_DR_DR_Pos (0U)
#define SPI_DR_DR_Msk (0xFFFFUL << SPI_DR_DR_Pos) /*!< 0x0000FFFF */
#define SPI_DR_DR SPI_DR_DR_Msk                   /*!< Data Register */

/*******************  Bit definition for SPI_CRCPR register  ******************/
#define SPI_CRCPR_CRCPOLY_Pos (0U)
#define SPI_CRCPR_CRCPOLY_Msk (0xFFFFUL << SPI_CRCPR_CRCPOLY_Pos) /*!< 0x0000FFFF */
#define SPI_CRCPR_CRCPOLY SPI_CRCPR_CRCPOLY_Msk                   /*!< CRC polynomial register */

/******************  Bit definition for SPI_RXCRCR register  ******************/
#define SPI_RXCRCR_RXCRC_Pos (0U)
#define SPI_RXCRCR_RXCRC_Msk (0xFFFFUL << SPI_RXCRCR_RXCRC_Pos) /*!< 0x0000FFFF */
#define SPI_RXCRCR_RXCRC SPI_RXCRCR_RXCRC_Msk                   /*!< Rx CRC Register */

/******************  Bit definition for SPI_TXCRCR register  ******************/
#define SPI_TXCRCR_TXCRC_Pos (0U)
#define SPI_TXCRCR_TXCRC_Msk (0xFFFFUL << SPI_TXCRCR_TXCRC_Pos) /*!< 0x0000FFFF */
#define SPI_TXCRCR_TXCRC SPI_TXCRCR_TXCRC_Msk                   /*!< Tx CRC Register */

/******************  Bit definition for SPI_I2SCFGR register  *****************/
#define SPI_I2SCFGR_CHLEN_Pos (0U)
#define SPI_I2SCFGR_CHLEN_Msk (0x1UL << SPI_I2SCFGR_CHLEN_Pos) /*!< 0x00000001 */
#define SPI_I2SCFGR_CHLEN SPI_I2SCFGR_CHLEN_Msk                /*!< Channel length (number of bits per audio channel) */

#define SPI_I2SCFGR_DATLEN_Pos (1U)
#define SPI_I2SCFGR_DATLEN_Msk (0x3UL << SPI_I2SCFGR_DATLEN_Pos) /*!< 0x00000006 */
#define SPI_I2SCFGR_DATLEN SPI_I2SCFGR_DATLEN_Msk                /*!< DATLEN[1:0] bits (Data length to be transferred) */
#define SPI_I2SCFGR_DATLEN_0 (0x1UL << SPI_I2SCFGR_DATLEN_Pos)   /*!< 0x00000002 */
#define SPI_I2SCFGR_DATLEN_1 (0x2UL << SPI_I2SCFGR_DATLEN_Pos)   /*!< 0x00000004 */

#define SPI_I2SCFGR_CKPOL_Pos (3U)
#define SPI_I2SCFGR_CKPOL_Msk (0x1UL << SPI_I2SCFGR_CKPOL_Pos) /*!< 0x00000008 */
#define SPI_I2SCFGR_CKPOL SPI_I2SCFGR_CKPOL_Msk                /*!< steady state clock polarity */

#define SPI_I2SCFGR_I2SSTD_Pos (4U)
#define SPI_I2SCFGR_I2SSTD_Msk (0x3UL << SPI_I2SCFGR_I2SSTD_Pos) /*!< 0x00000030 */
#define SPI_I2SCFGR_I2SSTD SPI_I2SCFGR_I2SSTD_Msk                /*!< I2SSTD[1:0] bits (I2S standard selection) */
#define SPI_I2SCFGR_I2SSTD_0 (0x1UL << SPI_I2SCFGR_I2SSTD_Pos)   /*!< 0x00000010 */
#define SPI_I2SCFGR_I2SSTD_1 (0x2UL << SPI_I2SCFGR_I2SSTD_Pos)   /*!< 0x00000020 */

#define SPI_I2SCFGR_PCMSYNC_Pos (7U)
#define SPI_I2SCFGR_PCMSYNC_Msk (0x1UL << SPI_I2SCFGR_PCMSYNC_Pos) /*!< 0x00000080 */
#define SPI_I2SCFGR_PCMSYNC SPI_I2SCFGR_PCMSYNC_Msk                /*!< PCM frame synchronization */

#define SPI_I2SCFGR_I2SCFG_Pos (8U)
#define SPI_I2SCFGR_I2SCFG_Msk (0x3UL << SPI_I2SCFGR_I2SCFG_Pos) /*!< 0x00000300 */
#define SPI_I2SCFGR_I2SCFG SPI_I2SCFGR_I2SCFG_Msk                /*!< I2SCFG[1:0] bits (I2S configuration mode) */
#define SPI_I2SCFGR_I2SCFG_0 (0x1UL << SPI_I2SCFGR_I2SCFG_Pos)   /*!< 0x00000100 */
#define SPI_I2SCFGR_I2SCFG_1 (0x2UL << SPI_I2SCFGR_I2SCFG_Pos)   /*!< 0x00000200 */

#define SPI_I2SCFGR_I2SE_Pos (10U)
#define SPI_I2SCFGR_I2SE_Msk (0x1UL << SPI_I2SCFGR_I2SE_Pos) /*!< 0x00000400 */
#define SPI_I2SCFGR_I2SE SPI_I2SCFGR_I2SE_Msk                /*!< I2S Enable */
#define SPI_I2SCFGR_I2SMOD_Pos (11U)
#define SPI_I2SCFGR_I2SMOD_Msk (0x1UL << SPI_I2SCFGR_I2SMOD_Pos) /*!< 0x00000800 */
#define SPI_I2SCFGR_I2SMOD SPI_I2SCFGR_I2SMOD_Msk                /*!< I2S mode selection */

/******************  Bit definition for SPI_I2SPR register  *******************/
#define SPI_I2SPR_I2SDIV_Pos (0U)
#define SPI_I2SPR_I2SDIV_Msk (0xFFUL << SPI_I2SPR_I2SDIV_Pos) /*!< 0x000000FF */
#define SPI_I2SPR_I2SDIV SPI_I2SPR_I2SDIV_Msk                 /*!< I2S Linear prescaler */
#define SPI_I2SPR_ODD_Pos (8U)
#define SPI_I2SPR_ODD_Msk (0x1UL << SPI_I2SPR_ODD_Pos) /*!< 0x00000100 */
#define SPI_I2SPR_ODD SPI_I2SPR_ODD_Msk                /*!< Odd factor for the prescaler */
#define SPI_I2SPR_MCKOE_Pos (9U)
#define SPI_I2SPR_MCKOE_Msk (0x1UL << SPI_I2SPR_MCKOE_Pos) /*!< 0x00000200 */
#define SPI_I2SPR_MCKOE SPI_I2SPR_MCKOE_Msk                /*!< Master Clock Output Enable */

/******************************************************************************/
/*                                                                            */
/*                      Inter-integrated Circuit Interface                    */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for I2C_CR1 register  ********************/
#define I2C_CR1_PE_Pos (0U)
#define I2C_CR1_PE_Msk (0x1UL << I2C_CR1_PE_Pos) /*!< 0x00000001 */
#define I2C_CR1_PE I2C_CR1_PE_Msk                /*!< Peripheral Enable */
#define I2C_CR1_SMBUS_Pos (1U)
#define I2C_CR1_SMBUS_Msk (0x1UL << I2C_CR1_SMBUS_Pos) /*!< 0x00000002 */
#define I2C_CR1_SMBUS I2C_CR1_SMBUS_Msk                /*!< SMBus Mode */
#define I2C_CR1_SMBTYPE_Pos (3U)
#define I2C_CR1_SMBTYPE_Msk (0x1UL << I2C_CR1_SMBTYPE_Pos) /*!< 0x00000008 */
#define I2C_CR1_SMBTYPE I2C_CR1_SMBTYPE_Msk                /*!< SMBus Type */
#define I2C_CR1_ENARP_Pos (4U)
#define I2C_CR1_ENARP_Msk (0x1UL << I2C_CR1_ENARP_Pos) /*!< 0x00000010 */
#define I2C_CR1_ENARP I2C_CR1_ENARP_Msk                /*!< ARP Enable */
#define I2C_CR1_ENPEC_Pos (5U)
#define I2C_CR1_ENPEC_Msk (0x1UL << I2C_CR1_ENPEC_Pos) /*!< 0x00000020 */
#define I2C_CR1_ENPEC I2C_CR1_ENPEC_Msk                /*!< PEC Enable */
#define I2C_CR1_ENGC_Pos (6U)
#define I2C_CR1_ENGC_Msk (0x1UL << I2C_CR1_ENGC_Pos) /*!< 0x00000040 */
#define I2C_CR1_ENGC I2C_CR1_ENGC_Msk                /*!< General Call Enable */
#define I2C_CR1_NOSTRETCH_Pos (7U)
#define I2C_CR1_NOSTRETCH_Msk (0x1UL << I2C_CR1_NOSTRETCH_Pos) /*!< 0x00000080 */
#define I2C_CR1_NOSTRETCH I2C_CR1_NOSTRETCH_Msk                /*!< Clock Stretching Disable (Slave mode) */
#define I2C_CR1_START_Pos (8U)
#define I2C_CR1_START_Msk (0x1UL << I2C_CR1_START_Pos) /*!< 0x00000100 */
#define I2C_CR1_START I2C_CR1_START_Msk                /*!< Start Generation */
#define I2C_CR1_STOP_Pos (9U)
#define I2C_CR1_STOP_Msk (0x1UL << I2C_CR1_STOP_Pos) /*!< 0x00000200 */
#define I2C_CR1_STOP I2C_CR1_STOP_Msk                /*!< Stop Generation */
#define I2C_CR1_ACK_Pos (10U)
#define I2C_CR1_ACK_Msk (0x1UL << I2C_CR1_ACK_Pos) /*!< 0x00000400 */
#define I2C_CR1_ACK I2C_CR1_ACK_Msk                /*!< Acknowledge Enable */
#define I2C_CR1_POS_Pos (11U)
#define I2C_CR1_POS_Msk (0x1UL << I2C_CR1_POS_Pos) /*!< 0x00000800 */
#define I2C_CR1_POS I2C_CR1_POS_Msk                /*!< Acknowledge/PEC Position (for data reception) */
#define I2C_CR1_PEC_Pos (12U)
#define I2C_CR1_PEC_Msk (0x1UL << I2C_CR1_PEC_Pos) /*!< 0x00001000 */
#define I2C_CR1_PEC I2C_CR1_PEC_Msk                /*!< Packet Error Checking */
#define I2C_CR1_ALERT_Pos (13U)
#define I2C_CR1_ALERT_Msk (0x1UL << I2C_CR1_ALERT_Pos) /*!< 0x00002000 */
#define I2C_CR1_ALERT I2C_CR1_ALERT_Msk                /*!< SMBus Alert */
#define I2C_CR1_SWRST_Pos (15U)
#define I2C_CR1_SWRST_Msk (0x1UL << I2C_CR1_SWRST_Pos) /*!< 0x00008000 */
#define I2C_CR1_SWRST I2C_CR1_SWRST_Msk                /*!< Software Reset */

/*******************  Bit definition for I2C_CR2 register  ********************/
#define I2C_CR2_FREQ_Pos (0U)
#define I2C_CR2_FREQ_Msk (0x3FUL << I2C_CR2_FREQ_Pos) /*!< 0x0000003F */
#define I2C_CR2_FREQ I2C_CR2_FREQ_Msk                 /*!< FREQ[5:0] bits (Peripheral Clock Frequency) */
#define I2C_CR2_FREQ_0 (0x01UL << I2C_CR2_FREQ_Pos)   /*!< 0x00000001 */
#define I2C_CR2_FREQ_1 (0x02UL << I2C_CR2_FREQ_Pos)   /*!< 0x00000002 */
#define I2C_CR2_FREQ_2 (0x04UL << I2C_CR2_FREQ_Pos)   /*!< 0x00000004 */
#define I2C_CR2_FREQ_3 (0x08UL << I2C_CR2_FREQ_Pos)   /*!< 0x00000008 */
#define I2C_CR2_FREQ_4 (0x10UL << I2C_CR2_FREQ_Pos)   /*!< 0x00000010 */
#define I2C_CR2_FREQ_5 (0x20UL << I2C_CR2_FREQ_Pos)   /*!< 0x00000020 */

#define I2C_CR2_ITERREN_Pos (8U)
#define I2C_CR2_ITERREN_Msk (0x1UL << I2C_CR2_ITERREN_Pos) /*!< 0x00000100 */
#define I2C_CR2_ITERREN I2C_CR2_ITERREN_Msk                /*!< Error Interrupt Enable */
#define I2C_CR2_ITEVTEN_Pos (9U)
#define I2C_CR2_ITEVTEN_Msk (0x1UL << I2C_CR2_ITEVTEN_Pos) /*!< 0x00000200 */
#define I2C_CR2_ITEVTEN I2C_CR2_ITEVTEN_Msk                /*!< Event Interrupt Enable */
#define I2C_CR2_ITBUFEN_Pos (10U)
#define I2C_CR2_ITBUFEN_Msk (0x1UL << I2C_CR2_ITBUFEN_Pos) /*!< 0x00000400 */
#define I2C_CR2_ITBUFEN I2C_CR2_ITBUFEN_Msk                /*!< Buffer Interrupt Enable */
#define I2C_CR2_DMAEN_Pos (11U)
#define I2C_CR2_DMAEN_Msk (0x1UL << I2C_CR2_DMAEN_Pos) /*!< 0x00000800 */
#define I2C_CR2_DMAEN I2C_CR2_DMAEN_Msk                /*!< DMA Requests Enable */
#define I2C_CR2_LAST_Pos (12U)
#define I2C_CR2_LAST_Msk (0x1UL << I2C_CR2_LAST_Pos) /*!< 0x00001000 */
#define I2C_CR2_LAST I2C_CR2_LAST_Msk                /*!< DMA Last Transfer */

/*******************  Bit definition for I2C_OAR1 register  *******************/
#define I2C_OAR1_ADD1_7 0x000000FEU /*!< Interface Address */
#define I2C_OAR1_ADD8_9 0x00000300U /*!< Interface Address */

#define I2C_OAR1_ADD0_Pos (0U)
#define I2C_OAR1_ADD0_Msk (0x1UL << I2C_OAR1_ADD0_Pos) /*!< 0x00000001 */
#define I2C_OAR1_ADD0 I2C_OAR1_ADD0_Msk                /*!< Bit 0 */
#define I2C_OAR1_ADD1_Pos (1U)
#define I2C_OAR1_ADD1_Msk (0x1UL << I2C_OAR1_ADD1_Pos) /*!< 0x00000002 */
#define I2C_OAR1_ADD1 I2C_OAR1_ADD1_Msk                /*!< Bit 1 */
#define I2C_OAR1_ADD2_Pos (2U)
#define I2C_OAR1_ADD2_Msk (0x1UL << I2C_OAR1_ADD2_Pos) /*!< 0x00000004 */
#define I2C_OAR1_ADD2 I2C_OAR1_ADD2_Msk                /*!< Bit 2 */
#define I2C_OAR1_ADD3_Pos (3U)
#define I2C_OAR1_ADD3_Msk (0x1UL << I2C_OAR1_ADD3_Pos) /*!< 0x00000008 */
#define I2C_OAR1_ADD3 I2C_OAR1_ADD3_Msk                /*!< Bit 3 */
#define I2C_OAR1_ADD4_Pos (4U)
#define I2C_OAR1_ADD4_Msk (0x1UL << I2C_OAR1_ADD4_Pos) /*!< 0x00000010 */
#define I2C_OAR1_ADD4 I2C_OAR1_ADD4_Msk                /*!< Bit 4 */
#define I2C_OAR1_ADD5_Pos (5U)
#define I2C_OAR1_ADD5_Msk (0x1UL << I2C_OAR1_ADD5_Pos) /*!< 0x00000020 */
#define I2C_OAR1_ADD5 I2C_OAR1_ADD5_Msk                /*!< Bit 5 */
#define I2C_OAR1_ADD6_Pos (6U)
#define I2C_OAR1_ADD6_Msk (0x1UL << I2C_OAR1_ADD6_Pos) /*!< 0x00000040 */
#define I2C_OAR1_ADD6 I2C_OAR1_ADD6_Msk                /*!< Bit 6 */
#define I2C_OAR1_ADD7_Pos (7U)
#define I2C_OAR1_ADD7_Msk (0x1UL << I2C_OAR1_ADD7_Pos) /*!< 0x00000080 */
#define I2C_OAR1_ADD7 I2C_OAR1_ADD7_Msk                /*!< Bit 7 */
#define I2C_OAR1_ADD8_Pos (8U)
#define I2C_OAR1_ADD8_Msk (0x1UL << I2C_OAR1_ADD8_Pos) /*!< 0x00000100 */
#define I2C_OAR1_ADD8 I2C_OAR1_ADD8_Msk                /*!< Bit 8 */
#define I2C_OAR1_ADD9_Pos (9U)
#define I2C_OAR1_ADD9_Msk (0x1UL << I2C_OAR1_ADD9_Pos) /*!< 0x00000200 */
#define I2C_OAR1_ADD9 I2C_OAR1_ADD9_Msk                /*!< Bit 9 */

#define I2C_OAR1_ADDMODE_Pos (15U)
#define I2C_OAR1_ADDMODE_Msk (0x1UL << I2C_OAR1_ADDMODE_Pos) /*!< 0x00008000 */
#define I2C_OAR1_ADDMODE I2C_OAR1_ADDMODE_Msk                /*!< Addressing Mode (Slave mode) */

/*******************  Bit definition for I2C_OAR2 register  *******************/
#define I2C_OAR2_ENDUAL_Pos (0U)
#define I2C_OAR2_ENDUAL_Msk (0x1UL << I2C_OAR2_ENDUAL_Pos) /*!< 0x00000001 */
#define I2C_OAR2_ENDUAL I2C_OAR2_ENDUAL_Msk                /*!< Dual addressing mode enable */
#define I2C_OAR2_ADD2_Pos (1U)
#define I2C_OAR2_ADD2_Msk (0x7FUL << I2C_OAR2_ADD2_Pos) /*!< 0x000000FE */
#define I2C_OAR2_ADD2 I2C_OAR2_ADD2_Msk                 /*!< Interface address */

/********************  Bit definition for I2C_DR register  ********************/
#define I2C_DR_DR_Pos (0U)
#define I2C_DR_DR_Msk (0xFFUL << I2C_DR_DR_Pos) /*!< 0x000000FF */
#define I2C_DR_DR I2C_DR_DR_Msk                 /*!< 8-bit Data Register         */

/*******************  Bit definition for I2C_SR1 register  ********************/
#define I2C_SR1_SB_Pos (0U)
#define I2C_SR1_SB_Msk (0x1UL << I2C_SR1_SB_Pos) /*!< 0x00000001 */
#define I2C_SR1_SB I2C_SR1_SB_Msk                /*!< Start Bit (Master mode) */
#define I2C_SR1_ADDR_Pos (1U)
#define I2C_SR1_ADDR_Msk (0x1UL << I2C_SR1_ADDR_Pos) /*!< 0x00000002 */
#define I2C_SR1_ADDR I2C_SR1_ADDR_Msk                /*!< Address sent (master mode)/matched (slave mode) */
#define I2C_SR1_BTF_Pos (2U)
#define I2C_SR1_BTF_Msk (0x1UL << I2C_SR1_BTF_Pos) /*!< 0x00000004 */
#define I2C_SR1_BTF I2C_SR1_BTF_Msk                /*!< Byte Transfer Finished */
#define I2C_SR1_ADD10_Pos (3U)
#define I2C_SR1_ADD10_Msk (0x1UL << I2C_SR1_ADD10_Pos) /*!< 0x00000008 */
#define I2C_SR1_ADD10 I2C_SR1_ADD10_Msk                /*!< 10-bit header sent (Master mode) */
#define I2C_SR1_STOPF_Pos (4U)
#define I2C_SR1_STOPF_Msk (0x1UL << I2C_SR1_STOPF_Pos) /*!< 0x00000010 */
#define I2C_SR1_STOPF I2C_SR1_STOPF_Msk                /*!< Stop detection (Slave mode) */
#define I2C_SR1_RXNE_Pos (6U)
#define I2C_SR1_RXNE_Msk (0x1UL << I2C_SR1_RXNE_Pos) /*!< 0x00000040 */
#define I2C_SR1_RXNE I2C_SR1_RXNE_Msk                /*!< Data Register not Empty (receivers) */
#define I2C_SR1_TXE_Pos (7U)
#define I2C_SR1_TXE_Msk (0x1UL << I2C_SR1_TXE_Pos) /*!< 0x00000080 */
#define I2C_SR1_TXE I2C_SR1_TXE_Msk                /*!< Data Register Empty (transmitters) */
#define I2C_SR1_BERR_Pos (8U)
#define I2C_SR1_BERR_Msk (0x1UL << I2C_SR1_BERR_Pos) /*!< 0x00000100 */
#define I2C_SR1_BERR I2C_SR1_BERR_Msk                /*!< Bus Error */
#define I2C_SR1_ARLO_Pos (9U)
#define I2C_SR1_ARLO_Msk (0x1UL << I2C_SR1_ARLO_Pos) /*!< 0x00000200 */
#define I2C_SR1_ARLO I2C_SR1_ARLO_Msk                /*!< Arbitration Lost (master mode) */
#define I2C_SR1_AF_Pos (10U)
#define I2C_SR1_AF_Msk (0x1UL << I2C_SR1_AF_Pos) /*!< 0x00000400 */
#define I2C_SR1_AF I2C_SR1_AF_Msk                /*!< Acknowledge Failure */
#define I2C_SR1_OVR_Pos (11U)
#define I2C_SR1_OVR_Msk (0x1UL << I2C_SR1_OVR_Pos) /*!< 0x00000800 */
#define I2C_SR1_OVR I2C_SR1_OVR_Msk                /*!< Overrun/Underrun */
#define I2C_SR1_PECERR_Pos (12U)
#define I2C_SR1_PECERR_Msk (0x1UL << I2C_SR1_PECERR_Pos) /*!< 0x00001000 */
#define I2C_SR1_PECERR I2C_SR1_PECERR_Msk                /*!< PEC Error in reception */
#define I2C_SR1_TIMEOUT_Pos (14U)
#define I2C_SR1_TIMEOUT_Msk (0x1UL << I2C_SR1_TIMEOUT_Pos) /*!< 0x00004000 */
#define I2C_SR1_TIMEOUT I2C_SR1_TIMEOUT_Msk                /*!< Timeout or Tlow Error */
#define I2C_SR1_SMBALERT_Pos (15U)
#define I2C_SR1_SMBALERT_Msk (0x1UL << I2C_SR1_SMBALERT_Pos) /*!< 0x00008000 */
#define I2C_SR1_SMBALERT I2C_SR1_SMBALERT_Msk                /*!< SMBus Alert */

/*******************  Bit definition for I2C_SR2 register  ********************/
#define I2C_SR2_MSL_Pos (0U)
#define I2C_SR2_MSL_Msk (0x1UL << I2C_SR2_MSL_Pos) /*!< 0x00000001 */
#define I2C_SR2_MSL I2C_SR2_MSL_Msk                /*!< Master/Slave */
#define I2C_SR2_BUSY_Pos (1U)
#define I2C_SR2_BUSY_Msk (0x1UL << I2C_SR2_BUSY_Pos) /*!< 0x00000002 */
#define I2C_SR2_BUSY I2C_SR2_BUSY_Msk                /*!< Bus Busy */
#define I2C_SR2_TRA_Pos (2U)
#define I2C_SR2_TRA_Msk (0x1UL << I2C_SR2_TRA_Pos) /*!< 0x00000004 */
#define I2C_SR2_TRA I2C_SR2_TRA_Msk                /*!< Transmitter/Receiver */
#define I2C_SR2_GENCALL_Pos (4U)
#define I2C_SR2_GENCALL_Msk (0x1UL << I2C_SR2_GENCALL_Pos) /*!< 0x00000010 */
#define I2C_SR2_GENCALL I2C_SR2_GENCALL_Msk                /*!< General Call Address (Slave mode) */
#define I2C_SR2_SMBDEFAULT_Pos (5U)
#define I2C_SR2_SMBDEFAULT_Msk (0x1UL << I2C_SR2_SMBDEFAULT_Pos) /*!< 0x00000020 */
#define I2C_SR2_SMBDEFAULT I2C_SR2_SMBDEFAULT_Msk                /*!< SMBus Device Default Address (Slave mode) */
#define I2C_SR2_SMBHOST_Pos (6U)
#define I2C_SR2_SMBHOST_Msk (0x1UL << I2C_SR2_SMBHOST_Pos) /*!< 0x00000040 */
#define I2C_SR2_SMBHOST I2C_SR2_SMBHOST_Msk                /*!< SMBus Host Header (Slave mode) */
#define I2C_SR2_DUALF_Pos (7U)
#define I2C_SR2_DUALF_Msk (0x1UL << I2C_SR2_DUALF_Pos) /*!< 0x00000080 */
#define I2C_SR2_DUALF I2C_SR2_DUALF_Msk                /*!< Dual Flag (Slave mode) */
#define I2C_SR2_PEC_Pos (8U)
#define I2C_SR2_PEC_Msk (0xFFUL << I2C_SR2_PEC_Pos) /*!< 0x0000FF00 */
#define I2C_SR2_PEC I2C_SR2_PEC_Msk                 /*!< Packet Error Checking Register */

/*******************  Bit definition for I2C_CCR register  ********************/
#define I2C_CCR_CCR_Pos (0U)
#define I2C_CCR_CCR_Msk (0xFFFUL << I2C_CCR_CCR_Pos) /*!< 0x00000FFF */
#define I2C_CCR_CCR I2C_CCR_CCR_Msk                  /*!< Clock Control Register in Fast/Standard mode (Master mode) */
#define I2C_CCR_DUTY_Pos (14U)
#define I2C_CCR_DUTY_Msk (0x1UL << I2C_CCR_DUTY_Pos) /*!< 0x00004000 */
#define I2C_CCR_DUTY I2C_CCR_DUTY_Msk                /*!< Fast Mode Duty Cycle */
#define I2C_CCR_FS_Pos (15U)
#define I2C_CCR_FS_Msk (0x1UL << I2C_CCR_FS_Pos) /*!< 0x00008000 */
#define I2C_CCR_FS I2C_CCR_FS_Msk                /*!< I2C Master Mode Selection */

/******************  Bit definition for I2C_TRISE register  *******************/
#define I2C_TRISE_TRISE_Pos (0U)
#define I2C_TRISE_TRISE_Msk (0x3FUL << I2C_TRISE_TRISE_Pos) /*!< 0x0000003F */
#define I2C_TRISE_TRISE I2C_TRISE_TRISE_Msk                 /*!< Maximum Rise Time in Fast/Standard mode (Master mode) */

/******************************************************************************/
/*                                                                            */
/*         Universal Synchronous Asynchronous Receiver Transmitter            */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for USART_SR register  *******************/
#define USART_SR_PE_Pos (0U)
#define USART_SR_PE_Msk (0x1UL << USART_SR_PE_Pos) /*!< 0x00000001 */
#define USART_SR_PE USART_SR_PE_Msk                /*!< Parity Error */
#define USART_SR_FE_Pos (1U)
#define USART_SR_FE_Msk (0x1UL << USART_SR_FE_Pos) /*!< 0x00000002 */
#define USART_SR_FE USART_SR_FE_Msk                /*!< Framing Error */
#define USART_SR_NE_Pos (2U)
#define USART_SR_NE_Msk (0x1UL << USART_SR_NE_Pos) /*!< 0x00000004 */
#define USART_SR_NE USART_SR_NE_Msk                /*!< Noise Error Flag */
#define USART_SR_ORE_Pos (3U)
#define USART_SR_ORE_Msk (0x1UL << USART_SR_ORE_Pos) /*!< 0x00000008 */
#define USART_SR_ORE USART_SR_ORE_Msk                /*!< OverRun Error */
#define USART_SR_IDLE_Pos (4U)
#define USART_SR_IDLE_Msk (0x1UL << USART_SR_IDLE_Pos) /*!< 0x00000010 */
#define USART_SR_IDLE USART_SR_IDLE_Msk                /*!< IDLE line detected */
#define USART_SR_RXNE_Pos (5U)
#define USART_SR_RXNE_Msk (0x1UL << USART_SR_RXNE_Pos) /*!< 0x00000020 */
#define USART_SR_RXNE USART_SR_RXNE_Msk                /*!< Read Data Register Not Empty */
#define USART_SR_TC_Pos (6U)
#define USART_SR_TC_Msk (0x1UL << USART_SR_TC_Pos) /*!< 0x00000040 */
#define USART_SR_TC USART_SR_TC_Msk                /*!< Transmission Complete */
#define USART_SR_TXE_Pos (7U)
#define USART_SR_TXE_Msk (0x1UL << USART_SR_TXE_Pos) /*!< 0x00000080 */
#define USART_SR_TXE USART_SR_TXE_Msk                /*!< Transmit Data Register Empty */
#define USART_SR_LBD_Pos (8U)
#define USART_SR_LBD_Msk (0x1UL << USART_SR_LBD_Pos) /*!< 0x00000100 */
#define USART_SR_LBD USART_SR_LBD_Msk                /*!< LIN Break Detection Flag */
#define USART_SR_CTS_Pos (9U)
#define USART_SR_CTS_Msk (0x1UL << USART_SR_CTS_Pos) /*!< 0x00000200 */
#define USART_SR_CTS USART_SR_CTS_Msk                /*!< CTS Flag */

/*******************  Bit definition for USART_DR register  *******************/
#define USART_DR_DR_Pos (0U)
#define USART_DR_DR_Msk (0x1FFUL << USART_DR_DR_Pos) /*!< 0x000001FF */
#define USART_DR_DR USART_DR_DR_Msk                  /*!< Data value */

/******************  Bit definition for USART_BRR register  *******************/
#define USART_BRR_DIV_Fraction_Pos (0U)
#define USART_BRR_DIV_Fraction_Msk (0xFUL << USART_BRR_DIV_Fraction_Pos) /*!< 0x0000000F */
#define USART_BRR_DIV_Fraction USART_BRR_DIV_Fraction_Msk                /*!< Fraction of USARTDIV */
#define USART_BRR_DIV_Mantissa_Pos (4U)
#define USART_BRR_DIV_Mantissa_Msk (0xFFFUL << USART_BRR_DIV_Mantissa_Pos) /*!< 0x0000FFF0 */
#define USART_BRR_DIV_Mantissa USART_BRR_DIV_Mantissa_Msk                  /*!< Mantissa of USARTDIV */

/******************  Bit definition for USART_CR1 register  *******************/
#define USART_CR1_SBK_Pos (0U)
#define USART_CR1_SBK_Msk (0x1UL << USART_CR1_SBK_Pos) /*!< 0x00000001 */
#define USART_CR1_SBK USART_CR1_SBK_Msk                /*!< Send Break */
#define USART_CR1_RWU_Pos (1U)
#define USART_CR1_RWU_Msk (0x1UL << USART_CR1_RWU_Pos) /*!< 0x00000002 */
#define USART_CR1_RWU USART_CR1_RWU_Msk                /*!< Receiver wakeup */
#define USART_CR1_RE_Pos (2U)
#define USART_CR1_RE_Msk (0x1UL << USART_CR1_RE_Pos) /*!< 0x00000004 */
#define USART_CR1_RE USART_CR1_RE_Msk                /*!< Receiver Enable */
#define USART_CR1_TE_Pos (3U)
#define USART_CR1_TE_Msk (0x1UL << USART_CR1_TE_Pos) /*!< 0x00000008 */
#define USART_CR1_TE USART_CR1_TE_Msk                /*!< Transmitter Enable */
#define USART_CR1_IDLEIE_Pos (4U)
#define USART_CR1_IDLEIE_Msk (0x1UL << USART_CR1_IDLEIE_Pos) /*!< 0x00000010 */
#define USART_CR1_IDLEIE USART_CR1_IDLEIE_Msk                /*!< IDLE Interrupt Enable */
#define USART_CR1_RXNEIE_Pos (5U)
#define USART_CR1_RXNEIE_Msk (0x1UL << USART_CR1_RXNEIE_Pos) /*!< 0x00000020 */
#define USART_CR1_RXNEIE USART_CR1_RXNEIE_Msk                /*!< RXNE Interrupt Enable */
#define USART_CR1_TCIE_Pos (6U)
#define USART_CR1_TCIE_Msk (0x1UL << USART_CR1_TCIE_Pos) /*!< 0x00000040 */
#define USART_CR1_TCIE USART_CR1_TCIE_Msk                /*!< Transmission Complete Interrupt Enable */
#define USART_CR1_TXEIE_Pos (7U)
#define USART_CR1_TXEIE_Msk (0x1UL << USART_CR1_TXEIE_Pos) /*!< 0x00000080 */
#define USART_CR1_TXEIE USART_CR1_TXEIE_Msk                /*!< PE Interrupt Enable */
#define USART_CR1_PEIE_Pos (8U)
#define USART_CR1_PEIE_Msk (0x1UL << USART_CR1_PEIE_Pos) /*!< 0x00000100 */
#define USART_CR1_PEIE USART_CR1_PEIE_Msk                /*!< PE Interrupt Enable */
#define USART_CR1_PS_Pos (9U)
#define USART_CR1_PS_Msk (0x1UL << USART_CR1_PS_Pos) /*!< 0x00000200 */
#define USART_CR1_PS USART_CR1_PS_Msk                /*!< Parity Selection */
#define USART_CR1_PCE_Pos (10U)
#define USART_CR1_PCE_Msk (0x1UL << USART_CR1_PCE_Pos) /*!< 0x00000400 */
#define USART_CR1_PCE USART_CR1_PCE_Msk                /*!< Parity Control Enable */
#define USART_CR1_WAKE_Pos (11U)
#define USART_CR1_WAKE_Msk (0x1UL << USART_CR1_WAKE_Pos) /*!< 0x00000800 */
#define USART_CR1_WAKE USART_CR1_WAKE_Msk                /*!< Wakeup method */
#define USART_CR1_M_Pos (12U)
#define USART_CR1_M_Msk (0x1UL << USART_CR1_M_Pos) /*!< 0x00001000 */
#define USART_CR1_M USART_CR1_M_Msk                /*!< Word length */
#define USART_CR1_UE_Pos (13U)
#define USART_CR1_UE_Msk (0x1UL << USART_CR1_UE_Pos) /*!< 0x00002000 */
#define USART_CR1_UE USART_CR1_UE_Msk                /*!< USART Enable */

/******************  Bit definition for USART_CR2 register  *******************/
#define USART_CR2_ADD_Pos (0U)
#define USART_CR2_ADD_Msk (0xFUL << USART_CR2_ADD_Pos) /*!< 0x0000000F */
#define USART_CR2_ADD USART_CR2_ADD_Msk                /*!< Address of the USART node */
#define USART_CR2_LBDL_Pos (5U)
#define USART_CR2_LBDL_Msk (0x1UL << USART_CR2_LBDL_Pos) /*!< 0x00000020 */
#define USART_CR2_LBDL USART_CR2_LBDL_Msk                /*!< LIN Break Detection Length */
#define USART_CR2_LBDIE_Pos (6U)
#define USART_CR2_LBDIE_Msk (0x1UL << USART_CR2_LBDIE_Pos) /*!< 0x00000040 */
#define USART_CR2_LBDIE USART_CR2_LBDIE_Msk                /*!< LIN Break Detection Interrupt Enable */
#define USART_CR2_LBCL_Pos (8U)
#define USART_CR2_LBCL_Msk (0x1UL << USART_CR2_LBCL_Pos) /*!< 0x00000100 */
#define USART_CR2_LBCL USART_CR2_LBCL_Msk                /*!< Last Bit Clock pulse */
#define USART_CR2_CPHA_Pos (9U)
#define USART_CR2_CPHA_Msk (0x1UL << USART_CR2_CPHA_Pos) /*!< 0x00000200 */
#define USART_CR2_CPHA USART_CR2_CPHA_Msk                /*!< Clock Phase */
#define USART_CR2_CPOL_Pos (10U)
#define USART_CR2_CPOL_Msk (0x1UL << USART_CR2_CPOL_Pos) /*!< 0x00000400 */
#define USART_CR2_CPOL USART_CR2_CPOL_Msk                /*!< Clock Polarity */
#define USART_CR2_CLKEN_Pos (11U)
#define USART_CR2_CLKEN_Msk (0x1UL << USART_CR2_CLKEN_Pos) /*!< 0x00000800 */
#define USART_CR2_CLKEN USART_CR2_CLKEN_Msk                /*!< Clock Enable */

#define USART_CR2_STOP_Pos (12U)
#define USART_CR2_STOP_Msk (0x3UL << USART_CR2_STOP_Pos) /*!< 0x00003000 */
#define USART_CR2_STOP USART_CR2_STOP_Msk                /*!< STOP[1:0] bits (STOP bits) */
#define USART_CR2_STOP_0 (0x1UL << USART_CR2_STOP_Pos)   /*!< 0x00001000 */
#define USART_CR2_STOP_1 (0x2UL << USART_CR2_STOP_Pos)   /*!< 0x00002000 */

#define USART_CR2_LINEN_Pos (14U)
#define USART_CR2_LINEN_Msk (0x1UL << USART_CR2_LINEN_Pos) /*!< 0x00004000 */
#define USART_CR2_LINEN USART_CR2_LINEN_Msk                /*!< LIN mode enable */

/******************  Bit definition for USART_CR3 register  *******************/
#define USART_CR3_EIE_Pos (0U)
#define USART_CR3_EIE_Msk (0x1UL << USART_CR3_EIE_Pos) /*!< 0x00000001 */
#define USART_CR3_EIE USART_CR3_EIE_Msk                /*!< Error Interrupt Enable */
#define USART_CR3_IREN_Pos (1U)
#define USART_CR3_IREN_Msk (0x1UL << USART_CR3_IREN_Pos) /*!< 0x00000002 */
#define USART_CR3_IREN USART_CR3_IREN_Msk                /*!< IrDA mode Enable */
#define USART_CR3_IRLP_Pos (2U)
#define USART_CR3_IRLP_Msk (0x1UL << USART_CR3_IRLP_Pos) /*!< 0x00000004 */
#define USART_CR3_IRLP USART_CR3_IRLP_Msk                /*!< IrDA Low-Power */
#define USART_CR3_HDSEL_Pos (3U)
#define USART_CR3_HDSEL_Msk (0x1UL << USART_CR3_HDSEL_Pos) /*!< 0x00000008 */
#define USART_CR3_HDSEL USART_CR3_HDSEL_Msk                /*!< Half-Duplex Selection */
#define USART_CR3_NACK_Pos (4U)
#define USART_CR3_NACK_Msk (0x1UL << USART_CR3_NACK_Pos) /*!< 0x00000010 */
#define USART_CR3_NACK USART_CR3_NACK_Msk                /*!< Smartcard NACK enable */
#define USART_CR3_SCEN_Pos (5U)
#define USART_CR3_SCEN_Msk (0x1UL << USART_CR3_SCEN_Pos) /*!< 0x00000020 */
#define USART_CR3_SCEN USART_CR3_SCEN_Msk                /*!< Smartcard mode enable */
#define USART_CR3_DMAR_Pos (6U)
#define USART_CR3_DMAR_Msk (0x1UL << USART_CR3_DMAR_Pos) /*!< 0x00000040 */
#define USART_CR3_DMAR USART_CR3_DMAR_Msk                /*!< DMA Enable Receiver */
#define USART_CR3_DMAT_Pos (7U)
#define USART_CR3_DMAT_Msk (0x1UL << USART_CR3_DMAT_Pos) /*!< 0x00000080 */
#define USART_CR3_DMAT USART_CR3_DMAT_Msk                /*!< DMA Enable Transmitter */
#define USART_CR3_RTSE_Pos (8U)
#define USART_CR3_RTSE_Msk (0x1UL << USART_CR3_RTSE_Pos) /*!< 0x00000100 */
#define USART_CR3_RTSE USART_CR3_RTSE_Msk                /*!< RTS Enable */
#define USART_CR3_CTSE_Pos (9U)
#define USART_CR3_CTSE_Msk (0x1UL << USART_CR3_CTSE_Pos) /*!< 0x00000200 */
#define USART_CR3_CTSE USART_CR3_CTSE_Msk                /*!< CTS Enable */
#define USART_CR3_CTSIE_Pos (10U)
#define USART_CR3_CTSIE_Msk (0x1UL << USART_CR3_CTSIE_Pos) /*!< 0x00000400 */
#define USART_CR3_CTSIE USART_CR3_CTSIE_Msk                /*!< CTS Interrupt Enable */

/******************  Bit definition for USART_GTPR register  ******************/
#define USART_GTPR_PSC_Pos (0U)
#define USART_GTPR_PSC_Msk (0xFFUL << USART_GTPR_PSC_Pos) /*!< 0x000000FF */
#define USART_GTPR_PSC USART_GTPR_PSC_Msk                 /*!< PSC[7:0] bits (Prescaler value) */
#define USART_GTPR_PSC_0 (0x01UL << USART_GTPR_PSC_Pos)   /*!< 0x00000001 */
#define USART_GTPR_PSC_1 (0x02UL << USART_GTPR_PSC_Pos)   /*!< 0x00000002 */
#define USART_GTPR_PSC_2 (0x04UL << USART_GTPR_PSC_Pos)   /*!< 0x00000004 */
#define USART_GTPR_PSC_3 (0x08UL << USART_GTPR_PSC_Pos)   /*!< 0x00000008 */
#define USART_GTPR_PSC_4 (0x10UL << USART_GTPR_PSC_Pos)   /*!< 0x00000010 */
#define USART_GTPR_PSC_5 (0x20UL << USART_GTPR_PSC_Pos)   /*!< 0x00000020 */
#define USART_GTPR_PSC_6 (0x40UL << USART_GTPR_PSC_Pos)   /*!< 0x00000040 */
#define USART_GTPR_PSC_7 (0x80UL << USART_GTPR_PSC_Pos)   /*!< 0x00000080 */

#define USART_GTPR_GT_Pos (8U)
#define USART_GTPR_GT_Msk (0xFFUL << USART_GTPR_GT_Pos) /*!< 0x0000FF00 */
#define USART_GTPR_GT USART_GTPR_GT_Msk                 /*!< Guard time value */

/******************************************************************************/
/*                                                                            */
/*                                 Debug MCU                                  */
/*                                                                            */
/******************************************************************************/

/****************  Bit definition for DBGMCU_IDCODE register  *****************/
#define DBGMCU_IDCODE_DEV_ID_Pos (0U)
#define DBGMCU_IDCODE_DEV_ID_Msk (0xFFFUL << DBGMCU_IDCODE_DEV_ID_Pos) /*!< 0x00000FFF */
#define DBGMCU_IDCODE_DEV_ID DBGMCU_IDCODE_DEV_ID_Msk                  /*!< Device Identifier */

#define DBGMCU_IDCODE_REV_ID_Pos (16U)
#define DBGMCU_IDCODE_REV_ID_Msk (0xFFFFUL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0xFFFF0000 */
#define DBGMCU_IDCODE_REV_ID DBGMCU_IDCODE_REV_ID_Msk                   /*!< REV_ID[15:0] bits (Revision Identifier) */
#define DBGMCU_IDCODE_REV_ID_0 (0x0001UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x00010000 */
#define DBGMCU_IDCODE_REV_ID_1 (0x0002UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x00020000 */
#define DBGMCU_IDCODE_REV_ID_2 (0x0004UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x00040000 */
#define DBGMCU_IDCODE_REV_ID_3 (0x0008UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x00080000 */
#define DBGMCU_IDCODE_REV_ID_4 (0x0010UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x00100000 */
#define DBGMCU_IDCODE_REV_ID_5 (0x0020UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x00200000 */
#define DBGMCU_IDCODE_REV_ID_6 (0x0040UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x00400000 */
#define DBGMCU_IDCODE_REV_ID_7 (0x0080UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x00800000 */
#define DBGMCU_IDCODE_REV_ID_8 (0x0100UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x01000000 */
#define DBGMCU_IDCODE_REV_ID_9 (0x0200UL << DBGMCU_IDCODE_REV_ID_Pos)   /*!< 0x02000000 */
#define DBGMCU_IDCODE_REV_ID_10 (0x0400UL << DBGMCU_IDCODE_REV_ID_Pos)  /*!< 0x04000000 */
#define DBGMCU_IDCODE_REV_ID_11 (0x0800UL << DBGMCU_IDCODE_REV_ID_Pos)  /*!< 0x08000000 */
#define DBGMCU_IDCODE_REV_ID_12 (0x1000UL << DBGMCU_IDCODE_REV_ID_Pos)  /*!< 0x10000000 */
#define DBGMCU_IDCODE_REV_ID_13 (0x2000UL << DBGMCU_IDCODE_REV_ID_Pos)  /*!< 0x20000000 */
#define DBGMCU_IDCODE_REV_ID_14 (0x4000UL << DBGMCU_IDCODE_REV_ID_Pos)  /*!< 0x40000000 */
#define DBGMCU_IDCODE_REV_ID_15 (0x8000UL << DBGMCU_IDCODE_REV_ID_Pos)  /*!< 0x80000000 */

/******************  Bit definition for DBGMCU_CR register  *******************/
#define DBGMCU_CR_DBG_SLEEP_Pos (0U)
#define DBGMCU_CR_DBG_SLEEP_Msk (0x1UL << DBGMCU_CR_DBG_SLEEP_Pos) /*!< 0x00000001 */
#define DBGMCU_CR_DBG_SLEEP DBGMCU_CR_DBG_SLEEP_Msk                /*!< Debug Sleep Mode */
#define DBGMCU_CR_DBG_STOP_Pos (1U)
#define DBGMCU_CR_DBG_STOP_Msk (0x1UL << DBGMCU_CR_DBG_STOP_Pos) /*!< 0x00000002 */
#define DBGMCU_CR_DBG_STOP DBGMCU_CR_DBG_STOP_Msk                /*!< Debug Stop Mode */
#define DBGMCU_CR_DBG_STANDBY_Pos (2U)
#define DBGMCU_CR_DBG_STANDBY_Msk (0x1UL << DBGMCU_CR_DBG_STANDBY_Pos) /*!< 0x00000004 */
#define DBGMCU_CR_DBG_STANDBY DBGMCU_CR_DBG_STANDBY_Msk                /*!< Debug Standby mode */
#define DBGMCU_CR_TRACE_IOEN_Pos (5U)
#define DBGMCU_CR_TRACE_IOEN_Msk (0x1UL << DBGMCU_CR_TRACE_IOEN_Pos) /*!< 0x00000020 */
#define DBGMCU_CR_TRACE_IOEN DBGMCU_CR_TRACE_IOEN_Msk                /*!< Trace Pin Assignment Control */

#define DBGMCU_CR_TRACE_MODE_Pos (6U)
#define DBGMCU_CR_TRACE_MODE_Msk (0x3UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x000000C0 */
#define DBGMCU_CR_TRACE_MODE DBGMCU_CR_TRACE_MODE_Msk                /*!< TRACE_MODE[1:0] bits (Trace Pin Assignment Control) */
#define DBGMCU_CR_TRACE_MODE_0 (0x1UL << DBGMCU_CR_TRACE_MODE_Pos)   /*!< 0x00000040 */
#define DBGMCU_CR_TRACE_MODE_1 (0x2UL << DBGMCU_CR_TRACE_MODE_Pos)   /*!< 0x00000080 */

#define DBGMCU_CR_DBG_IWDG_STOP_Pos (8U)
#define DBGMCU_CR_DBG_IWDG_STOP_Msk (0x1UL << DBGMCU_CR_DBG_IWDG_STOP_Pos) /*!< 0x00000100 */
#define DBGMCU_CR_DBG_IWDG_STOP DBGMCU_CR_DBG_IWDG_STOP_Msk                /*!< Debug Independent Watchdog stopped when Core is halted */
#define DBGMCU_CR_DBG_WWDG_STOP_Pos (9U)
#define DBGMCU_CR_DBG_WWDG_STOP_Msk (0x1UL << DBGMCU_CR_DBG_WWDG_STOP_Pos) /*!< 0x00000200 */
#define DBGMCU_CR_DBG_WWDG_STOP DBGMCU_CR_DBG_WWDG_STOP_Msk                /*!< Debug Window Watchdog stopped when Core is halted */
#define DBGMCU_CR_DBG_TIM1_STOP_Pos (10U)
#define DBGMCU_CR_DBG_TIM1_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM1_STOP_Pos) /*!< 0x00000400 */
#define DBGMCU_CR_DBG_TIM1_STOP DBGMCU_CR_DBG_TIM1_STOP_Msk                /*!< TIM1 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM2_STOP_Pos (11U)
#define DBGMCU_CR_DBG_TIM2_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM2_STOP_Pos) /*!< 0x00000800 */
#define DBGMCU_CR_DBG_TIM2_STOP DBGMCU_CR_DBG_TIM2_STOP_Msk                /*!< TIM2 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM3_STOP_Pos (12U)
#define DBGMCU_CR_DBG_TIM3_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM3_STOP_Pos) /*!< 0x00001000 */
#define DBGMCU_CR_DBG_TIM3_STOP DBGMCU_CR_DBG_TIM3_STOP_Msk                /*!< TIM3 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM4_STOP_Pos (13U)
#define DBGMCU_CR_DBG_TIM4_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM4_STOP_Pos) /*!< 0x00002000 */
#define DBGMCU_CR_DBG_TIM4_STOP DBGMCU_CR_DBG_TIM4_STOP_Msk                /*!< TIM4 counter stopped when core is halted */
#define DBGMCU_CR_DBG_CAN1_STOP_Pos (14U)
#define DBGMCU_CR_DBG_CAN1_STOP_Msk (0x1UL << DBGMCU_CR_DBG_CAN1_STOP_Pos) /*!< 0x00004000 */
#define DBGMCU_CR_DBG_CAN1_STOP DBGMCU_CR_DBG_CAN1_STOP_Msk                /*!< Debug CAN1 stopped when Core is halted */
#define DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Pos (15U)
#define DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Msk (0x1UL << DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Pos) /*!< 0x00008000 */
#define DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Msk                /*!< SMBUS timeout mode stopped when Core is halted */
#define DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Pos (16U)
#define DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Msk (0x1UL << DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Pos) /*!< 0x00010000 */
#define DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Msk                /*!< SMBUS timeout mode stopped when Core is halted */
#define DBGMCU_CR_DBG_TIM5_STOP_Pos (18U)
#define DBGMCU_CR_DBG_TIM5_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM5_STOP_Pos) /*!< 0x00040000 */
#define DBGMCU_CR_DBG_TIM5_STOP DBGMCU_CR_DBG_TIM5_STOP_Msk                /*!< TIM5 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM6_STOP_Pos (19U)
#define DBGMCU_CR_DBG_TIM6_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM6_STOP_Pos) /*!< 0x00080000 */
#define DBGMCU_CR_DBG_TIM6_STOP DBGMCU_CR_DBG_TIM6_STOP_Msk                /*!< TIM6 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM7_STOP_Pos (20U)
#define DBGMCU_CR_DBG_TIM7_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM7_STOP_Pos) /*!< 0x00100000 */
#define DBGMCU_CR_DBG_TIM7_STOP DBGMCU_CR_DBG_TIM7_STOP_Msk                /*!< TIM7 counter stopped when core is halted */
#define DBGMCU_CR_DBG_CAN2_STOP_Pos (21U)
#define DBGMCU_CR_DBG_CAN2_STOP_Msk (0x1UL << DBGMCU_CR_DBG_CAN2_STOP_Pos) /*!< 0x00200000 */
#define DBGMCU_CR_DBG_CAN2_STOP DBGMCU_CR_DBG_CAN2_STOP_Msk                /*!< Debug CAN2 stopped when Core is halted */
#define DBGMCU_CR_DBG_TIM9_STOP_Pos (28U)
#define DBGMCU_CR_DBG_TIM9_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM9_STOP_Pos) /*!< 0x10000000 */
#define DBGMCU_CR_DBG_TIM9_STOP DBGMCU_CR_DBG_TIM9_STOP_Msk                /*!< Debug TIM9 stopped when Core is halted */
#define DBGMCU_CR_DBG_TIM10_STOP_Pos (29U)
#define DBGMCU_CR_DBG_TIM10_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM10_STOP_Pos) /*!< 0x20000000 */
#define DBGMCU_CR_DBG_TIM10_STOP DBGMCU_CR_DBG_TIM10_STOP_Msk                /*!< Debug TIM10 stopped when Core is halted */
#define DBGMCU_CR_DBG_TIM11_STOP_Pos (30U)
#define DBGMCU_CR_DBG_TIM11_STOP_Msk (0x1UL << DBGMCU_CR_DBG_TIM11_STOP_Pos) /*!< 0x40000000 */
#define DBGMCU_CR_DBG_TIM11_STOP DBGMCU_CR_DBG_TIM11_STOP_Msk                /*!< Debug TIM11 stopped when Core is halted */

/******************************************************************************/
/*                                                                            */
/*                      FLASH and Option Bytes Registers                      */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for FLASH_ACR register  ******************/
#define FLASH_ACR_LATENCY_Pos (0U)
#define FLASH_ACR_LATENCY_Msk (0x7UL << FLASH_ACR_LATENCY_Pos) /*!< 0x00000007 */
#define FLASH_ACR_LATENCY FLASH_ACR_LATENCY_Msk                /*!< LATENCY[2:0] bits (Latency) */
#define FLASH_ACR_LATENCY_0 (0x1UL << FLASH_ACR_LATENCY_Pos)   /*!< 0x00000001 */
#define FLASH_ACR_LATENCY_1 (0x2UL << FLASH_ACR_LATENCY_Pos)   /*!< 0x00000002 */
#define FLASH_ACR_LATENCY_2 (0x4UL << FLASH_ACR_LATENCY_Pos)   /*!< 0x00000004 */

#define FLASH_ACR_HLFCYA_Pos (3U)
#define FLASH_ACR_HLFCYA_Msk (0x1UL << FLASH_ACR_HLFCYA_Pos) /*!< 0x00000008 */
#define FLASH_ACR_HLFCYA FLASH_ACR_HLFCYA_Msk                /*!< Flash Half Cycle Access Enable */
#define FLASH_ACR_PRFTBE_Pos (4U)
#define FLASH_ACR_PRFTBE_Msk (0x1UL << FLASH_ACR_PRFTBE_Pos) /*!< 0x00000010 */
#define FLASH_ACR_PRFTBE FLASH_ACR_PRFTBE_Msk                /*!< Prefetch Buffer Enable */
#define FLASH_ACR_PRFTBS_Pos (5U)
#define FLASH_ACR_PRFTBS_Msk (0x1UL << FLASH_ACR_PRFTBS_Pos) /*!< 0x00000020 */
#define FLASH_ACR_PRFTBS FLASH_ACR_PRFTBS_Msk                /*!< Prefetch Buffer Status */

/******************  Bit definition for FLASH_KEYR register  ******************/
#define FLASH_KEYR_FKEYR_Pos (0U)
#define FLASH_KEYR_FKEYR_Msk (0xFFFFFFFFUL << FLASH_KEYR_FKEYR_Pos) /*!< 0xFFFFFFFF */
#define FLASH_KEYR_FKEYR FLASH_KEYR_FKEYR_Msk                       /*!< FPEC Key */

#define RDP_KEY_Pos (0U)
#define RDP_KEY_Msk (0xA5UL << RDP_KEY_Pos) /*!< 0x000000A5 */
#define RDP_KEY RDP_KEY_Msk                 /*!< RDP Key */
#define FLASH_KEY1_Pos (0U)
#define FLASH_KEY1_Msk (0x45670123UL << FLASH_KEY1_Pos) /*!< 0x45670123 */
#define FLASH_KEY1 FLASH_KEY1_Msk                       /*!< FPEC Key1 */
#define FLASH_KEY2_Pos (0U)
#define FLASH_KEY2_Msk (0xCDEF89ABUL << FLASH_KEY2_Pos) /*!< 0xCDEF89AB */
#define FLASH_KEY2 FLASH_KEY2_Msk                       /*!< FPEC Key2 */

/*****************  Bit definition for FLASH_OPTKEYR register  ****************/
#define FLASH_OPTKEYR_OPTKEYR_Pos (0U)
#define FLASH_OPTKEYR_OPTKEYR_Msk (0xFFFFFFFFUL << FLASH_OPTKEYR_OPTKEYR_Pos) /*!< 0xFFFFFFFF */
#define FLASH_OPTKEYR_OPTKEYR FLASH_OPTKEYR_OPTKEYR_Msk                       /*!< Option Byte Key */

#define FLASH_OPTKEY1 FLASH_KEY1 /*!< Option Byte Key1 */
#define FLASH_OPTKEY2 FLASH_KEY2 /*!< Option Byte Key2 */

/******************  Bit definition for FLASH_SR register  ********************/
#define FLASH_SR_BSY_Pos (0U)
#define FLASH_SR_BSY_Msk (0x1UL << FLASH_SR_BSY_Pos) /*!< 0x00000001 */
#define FLASH_SR_BSY FLASH_SR_BSY_Msk                /*!< Busy */
#define FLASH_SR_PGERR_Pos (2U)
#define FLASH_SR_PGERR_Msk (0x1UL << FLASH_SR_PGERR_Pos) /*!< 0x00000004 */
#define FLASH_SR_PGERR FLASH_SR_PGERR_Msk                /*!< Programming Error */
#define FLASH_SR_WRPRTERR_Pos (4U)
#define FLASH_SR_WRPRTERR_Msk (0x1UL << FLASH_SR_WRPRTERR_Pos) /*!< 0x00000010 */
#define FLASH_SR_WRPRTERR FLASH_SR_WRPRTERR_Msk                /*!< Write Protection Error */
#define FLASH_SR_EOP_Pos (5U)
#define FLASH_SR_EOP_Msk (0x1UL << FLASH_SR_EOP_Pos) /*!< 0x00000020 */
#define FLASH_SR_EOP FLASH_SR_EOP_Msk                /*!< End of operation */

/*******************  Bit definition for FLASH_CR register  *******************/
#define FLASH_CR_PG_Pos (0U)
#define FLASH_CR_PG_Msk (0x1UL << FLASH_CR_PG_Pos) /*!< 0x00000001 */
#define FLASH_CR_PG FLASH_CR_PG_Msk                /*!< Programming */
#define FLASH_CR_PER_Pos (1U)
#define FLASH_CR_PER_Msk (0x1UL << FLASH_CR_PER_Pos) /*!< 0x00000002 */
#define FLASH_CR_PER FLASH_CR_PER_Msk                /*!< Page Erase */
#define FLASH_CR_MER_Pos (2U)
#define FLASH_CR_MER_Msk (0x1UL << FLASH_CR_MER_Pos) /*!< 0x00000004 */
#define FLASH_CR_MER FLASH_CR_MER_Msk                /*!< Mass Erase */
#define FLASH_CR_OPTPG_Pos (4U)
#define FLASH_CR_OPTPG_Msk (0x1UL << FLASH_CR_OPTPG_Pos) /*!< 0x00000010 */
#define FLASH_CR_OPTPG FLASH_CR_OPTPG_Msk                /*!< Option Byte Programming */
#define FLASH_CR_OPTER_Pos (5U)
#define FLASH_CR_OPTER_Msk (0x1UL << FLASH_CR_OPTER_Pos) /*!< 0x00000020 */
#define FLASH_CR_OPTER FLASH_CR_OPTER_Msk                /*!< Option Byte Erase */
#define FLASH_CR_STRT_Pos (6U)
#define FLASH_CR_STRT_Msk (0x1UL << FLASH_CR_STRT_Pos) /*!< 0x00000040 */
#define FLASH_CR_STRT FLASH_CR_STRT_Msk                /*!< Start */
#define FLASH_CR_LOCK_Pos (7U)
#define FLASH_CR_LOCK_Msk (0x1UL << FLASH_CR_LOCK_Pos) /*!< 0x00000080 */
#define FLASH_CR_LOCK FLASH_CR_LOCK_Msk                /*!< Lock */
#define FLASH_CR_OPTWRE_Pos (9U)
#define FLASH_CR_OPTWRE_Msk (0x1UL << FLASH_CR_OPTWRE_Pos) /*!< 0x00000200 */
#define FLASH_CR_OPTWRE FLASH_CR_OPTWRE_Msk                /*!< Option Bytes Write Enable */
#define FLASH_CR_ERRIE_Pos (10U)
#define FLASH_CR_ERRIE_Msk (0x1UL << FLASH_CR_ERRIE_Pos) /*!< 0x00000400 */
#define FLASH_CR_ERRIE FLASH_CR_ERRIE_Msk                /*!< Error Interrupt Enable */
#define FLASH_CR_EOPIE_Pos (12U)
#define FLASH_CR_EOPIE_Msk (0x1UL << FLASH_CR_EOPIE_Pos) /*!< 0x00001000 */
#define FLASH_CR_EOPIE FLASH_CR_EOPIE_Msk                /*!< End of operation interrupt enable */

/*******************  Bit definition for FLASH_AR register  *******************/
#define FLASH_AR_FAR_Pos (0U)
#define FLASH_AR_FAR_Msk (0xFFFFFFFFUL << FLASH_AR_FAR_Pos) /*!< 0xFFFFFFFF */
#define FLASH_AR_FAR FLASH_AR_FAR_Msk                       /*!< Flash Address */

/******************  Bit definition for FLASH_OBR register  *******************/
#define FLASH_OBR_OPTERR_Pos (0U)
#define FLASH_OBR_OPTERR_Msk (0x1UL << FLASH_OBR_OPTERR_Pos) /*!< 0x00000001 */
#define FLASH_OBR_OPTERR FLASH_OBR_OPTERR_Msk                /*!< Option Byte Error */
#define FLASH_OBR_RDPRT_Pos (1U)
#define FLASH_OBR_RDPRT_Msk (0x1UL << FLASH_OBR_RDPRT_Pos) /*!< 0x00000002 */
#define FLASH_OBR_RDPRT FLASH_OBR_RDPRT_Msk                /*!< Read protection */

#define FLASH_OBR_IWDG_SW_Pos (2U)
#define FLASH_OBR_IWDG_SW_Msk (0x1UL << FLASH_OBR_IWDG_SW_Pos) /*!< 0x00000004 */
#define FLASH_OBR_IWDG_SW FLASH_OBR_IWDG_SW_Msk                /*!< IWDG SW */
#define FLASH_OBR_nRST_STOP_Pos (3U)
#define FLASH_OBR_nRST_STOP_Msk (0x1UL << FLASH_OBR_nRST_STOP_Pos) /*!< 0x00000008 */
#define FLASH_OBR_nRST_STOP FLASH_OBR_nRST_STOP_Msk                /*!< nRST_STOP */
#define FLASH_OBR_nRST_STDBY_Pos (4U)
#define FLASH_OBR_nRST_STDBY_Msk (0x1UL << FLASH_OBR_nRST_STDBY_Pos) /*!< 0x00000010 */
#define FLASH_OBR_nRST_STDBY FLASH_OBR_nRST_STDBY_Msk                /*!< nRST_STDBY */
#define FLASH_OBR_USER_Pos (2U)
#define FLASH_OBR_USER_Msk (0x7UL << FLASH_OBR_USER_Pos) /*!< 0x0000001C */
#define FLASH_OBR_USER FLASH_OBR_USER_Msk                /*!< User Option Bytes */
#define FLASH_OBR_DATA0_Pos (10U)
#define FLASH_OBR_DATA0_Msk (0xFFUL << FLASH_OBR_DATA0_Pos) /*!< 0x0003FC00 */
#define FLASH_OBR_DATA0 FLASH_OBR_DATA0_Msk                 /*!< Data0 */
#define FLASH_OBR_DATA1_Pos (18U)
#define FLASH_OBR_DATA1_Msk (0xFFUL << FLASH_OBR_DATA1_Pos) /*!< 0x03FC0000 */
#define FLASH_OBR_DATA1 FLASH_OBR_DATA1_Msk                 /*!< Data1 */

/******************  Bit definition for FLASH_WRPR register  ******************/
#define FLASH_WRPR_WRP_Pos (0U)
#define FLASH_WRPR_WRP_Msk (0xFFFFFFFFUL << FLASH_WRPR_WRP_Pos) /*!< 0xFFFFFFFF */
#define FLASH_WRPR_WRP FLASH_WRPR_WRP_Msk                       /*!< Write Protect */

/*----------------------------------------------------------------------------*/

/******************  Bit definition for FLASH_RDP register  *******************/
#define FLASH_RDP_RDP_Pos (0U)
#define FLASH_RDP_RDP_Msk (0xFFUL << FLASH_RDP_RDP_Pos) /*!< 0x000000FF */
#define FLASH_RDP_RDP FLASH_RDP_RDP_Msk                 /*!< Read protection option byte */
#define FLASH_RDP_nRDP_Pos (8U)
#define FLASH_RDP_nRDP_Msk (0xFFUL << FLASH_RDP_nRDP_Pos) /*!< 0x0000FF00 */
#define FLASH_RDP_nRDP FLASH_RDP_nRDP_Msk                 /*!< Read protection complemented option byte */

/******************  Bit definition for FLASH_USER register  ******************/
#define FLASH_USER_USER_Pos (16U)
#define FLASH_USER_USER_Msk (0xFFUL << FLASH_USER_USER_Pos) /*!< 0x00FF0000 */
#define FLASH_USER_USER FLASH_USER_USER_Msk                 /*!< User option byte */
#define FLASH_USER_nUSER_Pos (24U)
#define FLASH_USER_nUSER_Msk (0xFFUL << FLASH_USER_nUSER_Pos) /*!< 0xFF000000 */
#define FLASH_USER_nUSER FLASH_USER_nUSER_Msk                 /*!< User complemented option byte */

/******************  Bit definition for FLASH_Data0 register  *****************/
#define FLASH_DATA0_DATA0_Pos (0U)
#define FLASH_DATA0_DATA0_Msk (0xFFUL << FLASH_DATA0_DATA0_Pos) /*!< 0x000000FF */
#define FLASH_DATA0_DATA0 FLASH_DATA0_DATA0_Msk                 /*!< User data storage option byte */
#define FLASH_DATA0_nDATA0_Pos (8U)
#define FLASH_DATA0_nDATA0_Msk (0xFFUL << FLASH_DATA0_nDATA0_Pos) /*!< 0x0000FF00 */
#define FLASH_DATA0_nDATA0 FLASH_DATA0_nDATA0_Msk                 /*!< User data storage complemented option byte */

/******************  Bit definition for FLASH_Data1 register  *****************/
#define FLASH_DATA1_DATA1_Pos (16U)
#define FLASH_DATA1_DATA1_Msk (0xFFUL << FLASH_DATA1_DATA1_Pos) /*!< 0x00FF0000 */
#define FLASH_DATA1_DATA1 FLASH_DATA1_DATA1_Msk                 /*!< User data storage option byte */
#define FLASH_DATA1_nDATA1_Pos (24U)
#define FLASH_DATA1_nDATA1_Msk (0xFFUL << FLASH_DATA1_nDATA1_Pos) /*!< 0xFF000000 */
#define FLASH_DATA1_nDATA1 FLASH_DATA1_nDATA1_Msk                 /*!< User data storage complemented option byte */

/******************  Bit definition for FLASH_WRP0 register  ******************/
#define FLASH_WRP0_WRP0_Pos (0U)
#define FLASH_WRP0_WRP0_Msk (0xFFUL << FLASH_WRP0_WRP0_Pos) /*!< 0x000000FF */
#define FLASH_WRP0_WRP0 FLASH_WRP0_WRP0_Msk                 /*!< Flash memory write protection option bytes */
#define FLASH_WRP0_nWRP0_Pos (8U)
#define FLASH_WRP0_nWRP0_Msk (0xFFUL << FLASH_WRP0_nWRP0_Pos) /*!< 0x0000FF00 */
#define FLASH_WRP0_nWRP0 FLASH_WRP0_nWRP0_Msk                 /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP1 register  ******************/
#define FLASH_WRP1_WRP1_Pos (16U)
#define FLASH_WRP1_WRP1_Msk (0xFFUL << FLASH_WRP1_WRP1_Pos) /*!< 0x00FF0000 */
#define FLASH_WRP1_WRP1 FLASH_WRP1_WRP1_Msk                 /*!< Flash memory write protection option bytes */
#define FLASH_WRP1_nWRP1_Pos (24U)
#define FLASH_WRP1_nWRP1_Msk (0xFFUL << FLASH_WRP1_nWRP1_Pos) /*!< 0xFF000000 */
#define FLASH_WRP1_nWRP1 FLASH_WRP1_nWRP1_Msk                 /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP2 register  ******************/
#define FLASH_WRP2_WRP2_Pos (0U)
#define FLASH_WRP2_WRP2_Msk (0xFFUL << FLASH_WRP2_WRP2_Pos) /*!< 0x000000FF */
#define FLASH_WRP2_WRP2 FLASH_WRP2_WRP2_Msk                 /*!< Flash memory write protection option bytes */
#define FLASH_WRP2_nWRP2_Pos (8U)
#define FLASH_WRP2_nWRP2_Msk (0xFFUL << FLASH_WRP2_nWRP2_Pos) /*!< 0x0000FF00 */
#define FLASH_WRP2_nWRP2 FLASH_WRP2_nWRP2_Msk                 /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP3 register  ******************/
#define FLASH_WRP3_WRP3_Pos (16U)
#define FLASH_WRP3_WRP3_Msk (0xFFUL << FLASH_WRP3_WRP3_Pos) /*!< 0x00FF0000 */
#define FLASH_WRP3_WRP3 FLASH_WRP3_WRP3_Msk                 /*!< Flash memory write protection option bytes */
#define FLASH_WRP3_nWRP3_Pos (24U)
#define FLASH_WRP3_nWRP3_Msk (0xFFUL << FLASH_WRP3_nWRP3_Pos) /*!< 0xFF000000 */
#define FLASH_WRP3_nWRP3 FLASH_WRP3_nWRP3_Msk                 /*!< Flash memory write protection complemented option bytes */

/******************************************************************************/
/*                Ethernet MAC Registers bits definitions                     */
/******************************************************************************/
/* Bit definition for Ethernet MAC Control Register register */
#define ETH_MACCR_WD_Pos (23U)
#define ETH_MACCR_WD_Msk (0x1UL << ETH_MACCR_WD_Pos) /*!< 0x00800000 */
#define ETH_MACCR_WD ETH_MACCR_WD_Msk                /* Watchdog disable */
#define ETH_MACCR_JD_Pos (22U)
#define ETH_MACCR_JD_Msk (0x1UL << ETH_MACCR_JD_Pos) /*!< 0x00400000 */
#define ETH_MACCR_JD ETH_MACCR_JD_Msk                /* Jabber disable */
#define ETH_MACCR_IFG_Pos (17U)
#define ETH_MACCR_IFG_Msk (0x7UL << ETH_MACCR_IFG_Pos) /*!< 0x000E0000 */
#define ETH_MACCR_IFG ETH_MACCR_IFG_Msk                /* Inter-frame gap */
#define ETH_MACCR_IFG_96Bit 0x00000000U                /* Minimum IFG between frames during transmission is 96Bit */
#define ETH_MACCR_IFG_88Bit 0x00020000U                /* Minimum IFG between frames during transmission is 88Bit */
#define ETH_MACCR_IFG_80Bit 0x00040000U                /* Minimum IFG between frames during transmission is 80Bit */
#define ETH_MACCR_IFG_72Bit 0x00060000U                /* Minimum IFG between frames during transmission is 72Bit */
#define ETH_MACCR_IFG_64Bit 0x00080000U                /* Minimum IFG between frames during transmission is 64Bit */
#define ETH_MACCR_IFG_56Bit 0x000A0000U                /* Minimum IFG between frames during transmission is 56Bit */
#define ETH_MACCR_IFG_48Bit 0x000C0000U                /* Minimum IFG between frames during transmission is 48Bit */
#define ETH_MACCR_IFG_40Bit 0x000E0000U                /* Minimum IFG between frames during transmission is 40Bit */
#define ETH_MACCR_CSD_Pos (16U)
#define ETH_MACCR_CSD_Msk (0x1UL << ETH_MACCR_CSD_Pos) /*!< 0x00010000 */
#define ETH_MACCR_CSD ETH_MACCR_CSD_Msk                /* Carrier sense disable (during transmission) */
#define ETH_MACCR_FES_Pos (14U)
#define ETH_MACCR_FES_Msk (0x1UL << ETH_MACCR_FES_Pos) /*!< 0x00004000 */
#define ETH_MACCR_FES ETH_MACCR_FES_Msk                /* Fast ethernet speed */
#define ETH_MACCR_ROD_Pos (13U)
#define ETH_MACCR_ROD_Msk (0x1UL << ETH_MACCR_ROD_Pos) /*!< 0x00002000 */
#define ETH_MACCR_ROD ETH_MACCR_ROD_Msk                /* Receive own disable */
#define ETH_MACCR_LM_Pos (12U)
#define ETH_MACCR_LM_Msk (0x1UL << ETH_MACCR_LM_Pos) /*!< 0x00001000 */
#define ETH_MACCR_LM ETH_MACCR_LM_Msk                /* loopback mode */
#define ETH_MACCR_DM_Pos (11U)
#define ETH_MACCR_DM_Msk (0x1UL << ETH_MACCR_DM_Pos) /*!< 0x00000800 */
#define ETH_MACCR_DM ETH_MACCR_DM_Msk                /* Duplex mode */
#define ETH_MACCR_IPCO_Pos (10U)
#define ETH_MACCR_IPCO_Msk (0x1UL << ETH_MACCR_IPCO_Pos) /*!< 0x00000400 */
#define ETH_MACCR_IPCO ETH_MACCR_IPCO_Msk                /* IP Checksum offload */
#define ETH_MACCR_RD_Pos (9U)
#define ETH_MACCR_RD_Msk (0x1UL << ETH_MACCR_RD_Pos) /*!< 0x00000200 */
#define ETH_MACCR_RD ETH_MACCR_RD_Msk                /* Retry disable */
#define ETH_MACCR_APCS_Pos (7U)
#define ETH_MACCR_APCS_Msk (0x1UL << ETH_MACCR_APCS_Pos) /*!< 0x00000080 */
#define ETH_MACCR_APCS ETH_MACCR_APCS_Msk                /* Automatic Pad/CRC stripping */
#define ETH_MACCR_BL_Pos (5U)
#define ETH_MACCR_BL_Msk (0x3UL << ETH_MACCR_BL_Pos) /*!< 0x00000060 */
#define ETH_MACCR_BL                                                                                                     \
    ETH_MACCR_BL_Msk                /* Back-off limit: random integer number (r) of slot time delays before rescheduling \
               a transmission attempt during retries after a collision: 0 =< r <2^k */
#define ETH_MACCR_BL_10 0x00000000U /* k = min (n, 10) */
#define ETH_MACCR_BL_8 0x00000020U  /* k = min (n, 8) */
#define ETH_MACCR_BL_4 0x00000040U  /* k = min (n, 4) */
#define ETH_MACCR_BL_1 0x00000060U  /* k = min (n, 1) */
#define ETH_MACCR_DC_Pos (4U)
#define ETH_MACCR_DC_Msk (0x1UL << ETH_MACCR_DC_Pos) /*!< 0x00000010 */
#define ETH_MACCR_DC ETH_MACCR_DC_Msk                /* Defferal check */
#define ETH_MACCR_TE_Pos (3U)
#define ETH_MACCR_TE_Msk (0x1UL << ETH_MACCR_TE_Pos) /*!< 0x00000008 */
#define ETH_MACCR_TE ETH_MACCR_TE_Msk                /* Transmitter enable */
#define ETH_MACCR_RE_Pos (2U)
#define ETH_MACCR_RE_Msk (0x1UL << ETH_MACCR_RE_Pos) /*!< 0x00000004 */
#define ETH_MACCR_RE ETH_MACCR_RE_Msk                /* Receiver enable */

/* Bit definition for Ethernet MAC Frame Filter Register */
#define ETH_MACFFR_RA_Pos (31U)
#define ETH_MACFFR_RA_Msk (0x1UL << ETH_MACFFR_RA_Pos) /*!< 0x80000000 */
#define ETH_MACFFR_RA ETH_MACFFR_RA_Msk                /* Receive all */
#define ETH_MACFFR_HPF_Pos (10U)
#define ETH_MACFFR_HPF_Msk (0x1UL << ETH_MACFFR_HPF_Pos) /*!< 0x00000400 */
#define ETH_MACFFR_HPF ETH_MACFFR_HPF_Msk                /* Hash or perfect filter */
#define ETH_MACFFR_SAF_Pos (9U)
#define ETH_MACFFR_SAF_Msk (0x1UL << ETH_MACFFR_SAF_Pos) /*!< 0x00000200 */
#define ETH_MACFFR_SAF ETH_MACFFR_SAF_Msk                /* Source address filter enable */
#define ETH_MACFFR_SAIF_Pos (8U)
#define ETH_MACFFR_SAIF_Msk (0x1UL << ETH_MACFFR_SAIF_Pos) /*!< 0x00000100 */
#define ETH_MACFFR_SAIF ETH_MACFFR_SAIF_Msk                /* SA inverse filtering */
#define ETH_MACFFR_PCF_Pos (6U)
#define ETH_MACFFR_PCF_Msk (0x3UL << ETH_MACFFR_PCF_Pos) /*!< 0x000000C0 */
#define ETH_MACFFR_PCF ETH_MACFFR_PCF_Msk                /* Pass control frames: 3 cases */
#define ETH_MACFFR_PCF_BlockAll_Pos (6U)
#define ETH_MACFFR_PCF_BlockAll_Msk (0x1UL << ETH_MACFFR_PCF_BlockAll_Pos) /*!< 0x00000040 */
#define ETH_MACFFR_PCF_BlockAll ETH_MACFFR_PCF_BlockAll_Msk                /* MAC filters all control frames from reaching the application */
#define ETH_MACFFR_PCF_ForwardAll_Pos (7U)
#define ETH_MACFFR_PCF_ForwardAll_Msk (0x1UL << ETH_MACFFR_PCF_ForwardAll_Pos) /*!< 0x00000080 */
#define ETH_MACFFR_PCF_ForwardAll                                                                                 \
    ETH_MACFFR_PCF_ForwardAll_Msk /* MAC forwards all control frames to application even if they fail the Address \
                                     Filter */
#define ETH_MACFFR_PCF_ForwardPassedAddrFilter_Pos (6U)
#define ETH_MACFFR_PCF_ForwardPassedAddrFilter_Msk (0x3UL << ETH_MACFFR_PCF_ForwardPassedAddrFilter_Pos) /*!< 0x000000C0 */
#define ETH_MACFFR_PCF_ForwardPassedAddrFilter \
    ETH_MACFFR_PCF_ForwardPassedAddrFilter_Msk /* MAC forwards control frames that pass the Address Filter. */
#define ETH_MACFFR_BFD_Pos (5U)
#define ETH_MACFFR_BFD_Msk (0x1UL << ETH_MACFFR_BFD_Pos) /*!< 0x00000020 */
#define ETH_MACFFR_BFD ETH_MACFFR_BFD_Msk                /* Broadcast frame disable */
#define ETH_MACFFR_PAM_Pos (4U)
#define ETH_MACFFR_PAM_Msk (0x1UL << ETH_MACFFR_PAM_Pos) /*!< 0x00000010 */
#define ETH_MACFFR_PAM ETH_MACFFR_PAM_Msk                /* Pass all mutlicast */
#define ETH_MACFFR_DAIF_Pos (3U)
#define ETH_MACFFR_DAIF_Msk (0x1UL << ETH_MACFFR_DAIF_Pos) /*!< 0x00000008 */
#define ETH_MACFFR_DAIF ETH_MACFFR_DAIF_Msk                /* DA Inverse filtering */
#define ETH_MACFFR_HM_Pos (2U)
#define ETH_MACFFR_HM_Msk (0x1UL << ETH_MACFFR_HM_Pos) /*!< 0x00000004 */
#define ETH_MACFFR_HM ETH_MACFFR_HM_Msk                /* Hash multicast */
#define ETH_MACFFR_HU_Pos (1U)
#define ETH_MACFFR_HU_Msk (0x1UL << ETH_MACFFR_HU_Pos) /*!< 0x00000002 */
#define ETH_MACFFR_HU ETH_MACFFR_HU_Msk                /* Hash unicast */
#define ETH_MACFFR_PM_Pos (0U)
#define ETH_MACFFR_PM_Msk (0x1UL << ETH_MACFFR_PM_Pos) /*!< 0x00000001 */
#define ETH_MACFFR_PM ETH_MACFFR_PM_Msk                /* Promiscuous mode */

/* Bit definition for Ethernet MAC Hash Table High Register */
#define ETH_MACHTHR_HTH_Pos (0U)
#define ETH_MACHTHR_HTH_Msk (0xFFFFFFFFUL << ETH_MACHTHR_HTH_Pos) /*!< 0xFFFFFFFF */
#define ETH_MACHTHR_HTH ETH_MACHTHR_HTH_Msk                       /* Hash table high */

/* Bit definition for Ethernet MAC Hash Table Low Register */
#define ETH_MACHTLR_HTL_Pos (0U)
#define ETH_MACHTLR_HTL_Msk (0xFFFFFFFFUL << ETH_MACHTLR_HTL_Pos) /*!< 0xFFFFFFFF */
#define ETH_MACHTLR_HTL ETH_MACHTLR_HTL_Msk                       /* Hash table low */

/* Bit definition for Ethernet MAC MII Address Register */
#define ETH_MACMIIAR_PA_Pos (11U)
#define ETH_MACMIIAR_PA_Msk (0x1FUL << ETH_MACMIIAR_PA_Pos) /*!< 0x0000F800 */
#define ETH_MACMIIAR_PA ETH_MACMIIAR_PA_Msk                 /* Physical layer address */
#define ETH_MACMIIAR_MR_Pos (6U)
#define ETH_MACMIIAR_MR_Msk (0x1FUL << ETH_MACMIIAR_MR_Pos) /*!< 0x000007C0 */
#define ETH_MACMIIAR_MR ETH_MACMIIAR_MR_Msk                 /* MII register in the selected PHY */
#define ETH_MACMIIAR_CR_Pos (2U)
#define ETH_MACMIIAR_CR_Msk (0x7UL << ETH_MACMIIAR_CR_Pos) /*!< 0x0000001C */
#define ETH_MACMIIAR_CR ETH_MACMIIAR_CR_Msk                /* CR clock range: 6 cases */
#define ETH_MACMIIAR_CR_DIV42 0x00000000U                  /* HCLK:60-72 MHz; MDC clock= HCLK/42 */
#define ETH_MACMIIAR_CR_DIV16_Pos (3U)
#define ETH_MACMIIAR_CR_DIV16_Msk (0x1UL << ETH_MACMIIAR_CR_DIV16_Pos) /*!< 0x00000008 */
#define ETH_MACMIIAR_CR_DIV16 ETH_MACMIIAR_CR_DIV16_Msk                /* HCLK:20-35 MHz; MDC clock= HCLK/16 */
#define ETH_MACMIIAR_CR_DIV26_Pos (2U)
#define ETH_MACMIIAR_CR_DIV26_Msk (0x3UL << ETH_MACMIIAR_CR_DIV26_Pos) /*!< 0x0000000C */
#define ETH_MACMIIAR_CR_DIV26 ETH_MACMIIAR_CR_DIV26_Msk                /* HCLK:35-60 MHz; MDC clock= HCLK/26 */
#define ETH_MACMIIAR_MW_Pos (1U)
#define ETH_MACMIIAR_MW_Msk (0x1UL << ETH_MACMIIAR_MW_Pos) /*!< 0x00000002 */
#define ETH_MACMIIAR_MW ETH_MACMIIAR_MW_Msk                /* MII write */
#define ETH_MACMIIAR_MB_Pos (0U)
#define ETH_MACMIIAR_MB_Msk (0x1UL << ETH_MACMIIAR_MB_Pos) /*!< 0x00000001 */
#define ETH_MACMIIAR_MB ETH_MACMIIAR_MB_Msk                /* MII busy */

/* Bit definition for Ethernet MAC MII Data Register */
#define ETH_MACMIIDR_MD_Pos (0U)
#define ETH_MACMIIDR_MD_Msk (0xFFFFUL << ETH_MACMIIDR_MD_Pos) /*!< 0x0000FFFF */
#define ETH_MACMIIDR_MD ETH_MACMIIDR_MD_Msk                   /* MII data: read/write data from/to PHY */

/* Bit definition for Ethernet MAC Flow Control Register */
#define ETH_MACFCR_PT_Pos (16U)
#define ETH_MACFCR_PT_Msk (0xFFFFUL << ETH_MACFCR_PT_Pos) /*!< 0xFFFF0000 */
#define ETH_MACFCR_PT ETH_MACFCR_PT_Msk                   /* Pause time */
#define ETH_MACFCR_ZQPD_Pos (7U)
#define ETH_MACFCR_ZQPD_Msk (0x1UL << ETH_MACFCR_ZQPD_Pos) /*!< 0x00000080 */
#define ETH_MACFCR_ZQPD ETH_MACFCR_ZQPD_Msk                /* Zero-quanta pause disable */
#define ETH_MACFCR_PLT_Pos (4U)
#define ETH_MACFCR_PLT_Msk (0x3UL << ETH_MACFCR_PLT_Pos) /*!< 0x00000030 */
#define ETH_MACFCR_PLT ETH_MACFCR_PLT_Msk                /* Pause low threshold: 4 cases */
#define ETH_MACFCR_PLT_Minus4 0x00000000U                /* Pause time minus 4 slot times */
#define ETH_MACFCR_PLT_Minus28_Pos (4U)
#define ETH_MACFCR_PLT_Minus28_Msk (0x1UL << ETH_MACFCR_PLT_Minus28_Pos) /*!< 0x00000010 */
#define ETH_MACFCR_PLT_Minus28 ETH_MACFCR_PLT_Minus28_Msk                /* Pause time minus 28 slot times */
#define ETH_MACFCR_PLT_Minus144_Pos (5U)
#define ETH_MACFCR_PLT_Minus144_Msk (0x1UL << ETH_MACFCR_PLT_Minus144_Pos) /*!< 0x00000020 */
#define ETH_MACFCR_PLT_Minus144 ETH_MACFCR_PLT_Minus144_Msk                /* Pause time minus 144 slot times */
#define ETH_MACFCR_PLT_Minus256_Pos (4U)
#define ETH_MACFCR_PLT_Minus256_Msk (0x3UL << ETH_MACFCR_PLT_Minus256_Pos) /*!< 0x00000030 */
#define ETH_MACFCR_PLT_Minus256 ETH_MACFCR_PLT_Minus256_Msk                /* Pause time minus 256 slot times */
#define ETH_MACFCR_UPFD_Pos (3U)
#define ETH_MACFCR_UPFD_Msk (0x1UL << ETH_MACFCR_UPFD_Pos) /*!< 0x00000008 */
#define ETH_MACFCR_UPFD ETH_MACFCR_UPFD_Msk                /* Unicast pause frame detect */
#define ETH_MACFCR_RFCE_Pos (2U)
#define ETH_MACFCR_RFCE_Msk (0x1UL << ETH_MACFCR_RFCE_Pos) /*!< 0x00000004 */
#define ETH_MACFCR_RFCE ETH_MACFCR_RFCE_Msk                /* Receive flow control enable */
#define ETH_MACFCR_TFCE_Pos (1U)
#define ETH_MACFCR_TFCE_Msk (0x1UL << ETH_MACFCR_TFCE_Pos) /*!< 0x00000002 */
#define ETH_MACFCR_TFCE ETH_MACFCR_TFCE_Msk                /* Transmit flow control enable */
#define ETH_MACFCR_FCBBPA_Pos (0U)
#define ETH_MACFCR_FCBBPA_Msk (0x1UL << ETH_MACFCR_FCBBPA_Pos) /*!< 0x00000001 */
#define ETH_MACFCR_FCBBPA ETH_MACFCR_FCBBPA_Msk                /* Flow control busy/backpressure activate */

/* Bit definition for Ethernet MAC VLAN Tag Register */
#define ETH_MACVLANTR_VLANTC_Pos (16U)
#define ETH_MACVLANTR_VLANTC_Msk (0x1UL << ETH_MACVLANTR_VLANTC_Pos) /*!< 0x00010000 */
#define ETH_MACVLANTR_VLANTC ETH_MACVLANTR_VLANTC_Msk                /* 12-bit VLAN tag comparison */
#define ETH_MACVLANTR_VLANTI_Pos (0U)
#define ETH_MACVLANTR_VLANTI_Msk (0xFFFFUL << ETH_MACVLANTR_VLANTI_Pos) /*!< 0x0000FFFF */
#define ETH_MACVLANTR_VLANTI ETH_MACVLANTR_VLANTI_Msk                   /* VLAN tag identifier (for receive frames) */

/* Bit definition for Ethernet MAC Remote Wake-UpFrame Filter Register */
#define ETH_MACRWUFFR_D_Pos (0U)
#define ETH_MACRWUFFR_D_Msk (0xFFFFFFFFUL << ETH_MACRWUFFR_D_Pos) /*!< 0xFFFFFFFF */
#define ETH_MACRWUFFR_D ETH_MACRWUFFR_D_Msk                       /* Wake-up frame filter register data */
/* Eight sequential Writes to this address (offset 0x28) will write all Wake-UpFrame Filter Registers.
   Eight sequential Reads from this address (offset 0x28) will read all Wake-UpFrame Filter Registers. */
/* Wake-UpFrame Filter Reg0 : Filter 0 Byte Mask
   Wake-UpFrame Filter Reg1 : Filter 1 Byte Mask
   Wake-UpFrame Filter Reg2 : Filter 2 Byte Mask
   Wake-UpFrame Filter Reg3 : Filter 3 Byte Mask
   Wake-UpFrame Filter Reg4 : RSVD - Filter3 Command - RSVD - Filter2 Command -
                              RSVD - Filter1 Command - RSVD - Filter0 Command
   Wake-UpFrame Filter Re5 : Filter3 Offset - Filter2 Offset - Filter1 Offset - Filter0 Offset
   Wake-UpFrame Filter Re6 : Filter1 CRC16 - Filter0 CRC16
   Wake-UpFrame Filter Re7 : Filter3 CRC16 - Filter2 CRC16 */

/* Bit definition for Ethernet MAC PMT Control and Status Register */
#define ETH_MACPMTCSR_WFFRPR_Pos (31U)
#define ETH_MACPMTCSR_WFFRPR_Msk (0x1UL << ETH_MACPMTCSR_WFFRPR_Pos) /*!< 0x80000000 */
#define ETH_MACPMTCSR_WFFRPR ETH_MACPMTCSR_WFFRPR_Msk                /* Wake-Up Frame Filter Register Pointer Reset */
#define ETH_MACPMTCSR_GU_Pos (9U)
#define ETH_MACPMTCSR_GU_Msk (0x1UL << ETH_MACPMTCSR_GU_Pos) /*!< 0x00000200 */
#define ETH_MACPMTCSR_GU ETH_MACPMTCSR_GU_Msk                /* Global Unicast */
#define ETH_MACPMTCSR_WFR_Pos (6U)
#define ETH_MACPMTCSR_WFR_Msk (0x1UL << ETH_MACPMTCSR_WFR_Pos) /*!< 0x00000040 */
#define ETH_MACPMTCSR_WFR ETH_MACPMTCSR_WFR_Msk                /* Wake-Up Frame Received */
#define ETH_MACPMTCSR_MPR_Pos (5U)
#define ETH_MACPMTCSR_MPR_Msk (0x1UL << ETH_MACPMTCSR_MPR_Pos) /*!< 0x00000020 */
#define ETH_MACPMTCSR_MPR ETH_MACPMTCSR_MPR_Msk                /* Magic Packet Received */
#define ETH_MACPMTCSR_WFE_Pos (2U)
#define ETH_MACPMTCSR_WFE_Msk (0x1UL << ETH_MACPMTCSR_WFE_Pos) /*!< 0x00000004 */
#define ETH_MACPMTCSR_WFE ETH_MACPMTCSR_WFE_Msk                /* Wake-Up Frame Enable */
#define ETH_MACPMTCSR_MPE_Pos (1U)
#define ETH_MACPMTCSR_MPE_Msk (0x1UL << ETH_MACPMTCSR_MPE_Pos) /*!< 0x00000002 */
#define ETH_MACPMTCSR_MPE ETH_MACPMTCSR_MPE_Msk                /* Magic Packet Enable */
#define ETH_MACPMTCSR_PD_Pos (0U)
#define ETH_MACPMTCSR_PD_Msk (0x1UL << ETH_MACPMTCSR_PD_Pos) /*!< 0x00000001 */
#define ETH_MACPMTCSR_PD ETH_MACPMTCSR_PD_Msk                /* Power Down */

/* Bit definition for Ethernet MAC Status Register */
#define ETH_MACSR_TSTS_Pos (9U)
#define ETH_MACSR_TSTS_Msk (0x1UL << ETH_MACSR_TSTS_Pos) /*!< 0x00000200 */
#define ETH_MACSR_TSTS ETH_MACSR_TSTS_Msk                /* Time stamp trigger status */
#define ETH_MACSR_MMCTS_Pos (6U)
#define ETH_MACSR_MMCTS_Msk (0x1UL << ETH_MACSR_MMCTS_Pos) /*!< 0x00000040 */
#define ETH_MACSR_MMCTS ETH_MACSR_MMCTS_Msk                /* MMC transmit status */
#define ETH_MACSR_MMMCRS_Pos (5U)
#define ETH_MACSR_MMMCRS_Msk (0x1UL << ETH_MACSR_MMMCRS_Pos) /*!< 0x00000020 */
#define ETH_MACSR_MMMCRS ETH_MACSR_MMMCRS_Msk                /* MMC receive status */
#define ETH_MACSR_MMCS_Pos (4U)
#define ETH_MACSR_MMCS_Msk (0x1UL << ETH_MACSR_MMCS_Pos) /*!< 0x00000010 */
#define ETH_MACSR_MMCS ETH_MACSR_MMCS_Msk                /* MMC status */
#define ETH_MACSR_PMTS_Pos (3U)
#define ETH_MACSR_PMTS_Msk (0x1UL << ETH_MACSR_PMTS_Pos) /*!< 0x00000008 */
#define ETH_MACSR_PMTS ETH_MACSR_PMTS_Msk                /* PMT status */

/* Bit definition for Ethernet MAC Interrupt Mask Register */
#define ETH_MACIMR_TSTIM_Pos (9U)
#define ETH_MACIMR_TSTIM_Msk (0x1UL << ETH_MACIMR_TSTIM_Pos) /*!< 0x00000200 */
#define ETH_MACIMR_TSTIM ETH_MACIMR_TSTIM_Msk                /* Time stamp trigger interrupt mask */
#define ETH_MACIMR_PMTIM_Pos (3U)
#define ETH_MACIMR_PMTIM_Msk (0x1UL << ETH_MACIMR_PMTIM_Pos) /*!< 0x00000008 */
#define ETH_MACIMR_PMTIM ETH_MACIMR_PMTIM_Msk                /* PMT interrupt mask */

/* Bit definition for Ethernet MAC Address0 High Register */
#define ETH_MACA0HR_MACA0H_Pos (0U)
#define ETH_MACA0HR_MACA0H_Msk (0xFFFFUL << ETH_MACA0HR_MACA0H_Pos) /*!< 0x0000FFFF */
#define ETH_MACA0HR_MACA0H ETH_MACA0HR_MACA0H_Msk                   /* MAC address0 high */

/* Bit definition for Ethernet MAC Address0 Low Register */
#define ETH_MACA0LR_MACA0L_Pos (0U)
#define ETH_MACA0LR_MACA0L_Msk (0xFFFFFFFFUL << ETH_MACA0LR_MACA0L_Pos) /*!< 0xFFFFFFFF */
#define ETH_MACA0LR_MACA0L ETH_MACA0LR_MACA0L_Msk                       /* MAC address0 low */

/* Bit definition for Ethernet MAC Address1 High Register */
#define ETH_MACA1HR_AE_Pos (31U)
#define ETH_MACA1HR_AE_Msk (0x1UL << ETH_MACA1HR_AE_Pos) /*!< 0x80000000 */
#define ETH_MACA1HR_AE ETH_MACA1HR_AE_Msk                /* Address enable */
#define ETH_MACA1HR_SA_Pos (30U)
#define ETH_MACA1HR_SA_Msk (0x1UL << ETH_MACA1HR_SA_Pos) /*!< 0x40000000 */
#define ETH_MACA1HR_SA ETH_MACA1HR_SA_Msk                /* Source address */
#define ETH_MACA1HR_MBC_Pos (24U)
#define ETH_MACA1HR_MBC_Msk (0x3FUL << ETH_MACA1HR_MBC_Pos) /*!< 0x3F000000 */
#define ETH_MACA1HR_MBC ETH_MACA1HR_MBC_Msk                 /* Mask byte control: bits to mask for comparison of the MAC Address bytes */
#define ETH_MACA1HR_MBC_HBits15_8 0x20000000U               /* Mask MAC Address high reg bits [15:8] */
#define ETH_MACA1HR_MBC_HBits7_0 0x10000000U                /* Mask MAC Address high reg bits [7:0] */
#define ETH_MACA1HR_MBC_LBits31_24 0x08000000U              /* Mask MAC Address low reg bits [31:24] */
#define ETH_MACA1HR_MBC_LBits23_16 0x04000000U              /* Mask MAC Address low reg bits [23:16] */
#define ETH_MACA1HR_MBC_LBits15_8 0x02000000U               /* Mask MAC Address low reg bits [15:8] */
#define ETH_MACA1HR_MBC_LBits7_0 0x01000000U                /* Mask MAC Address low reg bits [7:0] */
#define ETH_MACA1HR_MACA1H_Pos (0U)
#define ETH_MACA1HR_MACA1H_Msk (0xFFFFUL << ETH_MACA1HR_MACA1H_Pos) /*!< 0x0000FFFF */
#define ETH_MACA1HR_MACA1H ETH_MACA1HR_MACA1H_Msk                   /* MAC address1 high */

/* Bit definition for Ethernet MAC Address1 Low Register */
#define ETH_MACA1LR_MACA1L_Pos (0U)
#define ETH_MACA1LR_MACA1L_Msk (0xFFFFFFFFUL << ETH_MACA1LR_MACA1L_Pos) /*!< 0xFFFFFFFF */
#define ETH_MACA1LR_MACA1L ETH_MACA1LR_MACA1L_Msk                       /* MAC address1 low */

/* Bit definition for Ethernet MAC Address2 High Register */
#define ETH_MACA2HR_AE_Pos (31U)
#define ETH_MACA2HR_AE_Msk (0x1UL << ETH_MACA2HR_AE_Pos) /*!< 0x80000000 */
#define ETH_MACA2HR_AE ETH_MACA2HR_AE_Msk                /* Address enable */
#define ETH_MACA2HR_SA_Pos (30U)
#define ETH_MACA2HR_SA_Msk (0x1UL << ETH_MACA2HR_SA_Pos) /*!< 0x40000000 */
#define ETH_MACA2HR_SA ETH_MACA2HR_SA_Msk                /* Source address */
#define ETH_MACA2HR_MBC_Pos (24U)
#define ETH_MACA2HR_MBC_Msk (0x3FUL << ETH_MACA2HR_MBC_Pos) /*!< 0x3F000000 */
#define ETH_MACA2HR_MBC ETH_MACA2HR_MBC_Msk                 /* Mask byte control */
#define ETH_MACA2HR_MBC_HBits15_8 0x20000000U               /* Mask MAC Address high reg bits [15:8] */
#define ETH_MACA2HR_MBC_HBits7_0 0x10000000U                /* Mask MAC Address high reg bits [7:0] */
#define ETH_MACA2HR_MBC_LBits31_24 0x08000000U              /* Mask MAC Address low reg bits [31:24] */
#define ETH_MACA2HR_MBC_LBits23_16 0x04000000U              /* Mask MAC Address low reg bits [23:16] */
#define ETH_MACA2HR_MBC_LBits15_8 0x02000000U               /* Mask MAC Address low reg bits [15:8] */
#define ETH_MACA2HR_MBC_LBits7_0 0x01000000U                /* Mask MAC Address low reg bits [70] */
#define ETH_MACA2HR_MACA2H_Pos (0U)
#define ETH_MACA2HR_MACA2H_Msk (0xFFFFUL << ETH_MACA2HR_MACA2H_Pos) /*!< 0x0000FFFF */
#define ETH_MACA2HR_MACA2H ETH_MACA2HR_MACA2H_Msk                   /* MAC address1 high */

/* Bit definition for Ethernet MAC Address2 Low Register */
#define ETH_MACA2LR_MACA2L_Pos (0U)
#define ETH_MACA2LR_MACA2L_Msk (0xFFFFFFFFUL << ETH_MACA2LR_MACA2L_Pos) /*!< 0xFFFFFFFF */
#define ETH_MACA2LR_MACA2L ETH_MACA2LR_MACA2L_Msk                       /* MAC address2 low */

/* Bit definition for Ethernet MAC Address3 High Register */
#define ETH_MACA3HR_AE_Pos (31U)
#define ETH_MACA3HR_AE_Msk (0x1UL << ETH_MACA3HR_AE_Pos) /*!< 0x80000000 */
#define ETH_MACA3HR_AE ETH_MACA3HR_AE_Msk                /* Address enable */
#define ETH_MACA3HR_SA_Pos (30U)
#define ETH_MACA3HR_SA_Msk (0x1UL << ETH_MACA3HR_SA_Pos) /*!< 0x40000000 */
#define ETH_MACA3HR_SA ETH_MACA3HR_SA_Msk                /* Source address */
#define ETH_MACA3HR_MBC_Pos (24U)
#define ETH_MACA3HR_MBC_Msk (0x3FUL << ETH_MACA3HR_MBC_Pos) /*!< 0x3F000000 */
#define ETH_MACA3HR_MBC ETH_MACA3HR_MBC_Msk                 /* Mask byte control */
#define ETH_MACA3HR_MBC_HBits15_8 0x20000000U               /* Mask MAC Address high reg bits [15:8] */
#define ETH_MACA3HR_MBC_HBits7_0 0x10000000U                /* Mask MAC Address high reg bits [7:0] */
#define ETH_MACA3HR_MBC_LBits31_24 0x08000000U              /* Mask MAC Address low reg bits [31:24] */
#define ETH_MACA3HR_MBC_LBits23_16 0x04000000U              /* Mask MAC Address low reg bits [23:16] */
#define ETH_MACA3HR_MBC_LBits15_8 0x02000000U               /* Mask MAC Address low reg bits [15:8] */
#define ETH_MACA3HR_MBC_LBits7_0 0x01000000U                /* Mask MAC Address low reg bits [70] */
#define ETH_MACA3HR_MACA3H_Pos (0U)
#define ETH_MACA3HR_MACA3H_Msk (0xFFFFUL << ETH_MACA3HR_MACA3H_Pos) /*!< 0x0000FFFF */
#define ETH_MACA3HR_MACA3H ETH_MACA3HR_MACA3H_Msk                   /* MAC address3 high */

/* Bit definition for Ethernet MAC Address3 Low Register */
#define ETH_MACA3LR_MACA3L_Pos (0U)
#define ETH_MACA3LR_MACA3L_Msk (0xFFFFFFFFUL << ETH_MACA3LR_MACA3L_Pos) /*!< 0xFFFFFFFF */
#define ETH_MACA3LR_MACA3L ETH_MACA3LR_MACA3L_Msk                       /* MAC address3 low */

/******************************************************************************/
/*                Ethernet MMC Registers bits definition                      */
/******************************************************************************/

/* Bit definition for Ethernet MMC Contol Register */
#define ETH_MMCCR_MCF_Pos (3U)
#define ETH_MMCCR_MCF_Msk (0x1UL << ETH_MMCCR_MCF_Pos) /*!< 0x00000008 */
#define ETH_MMCCR_MCF ETH_MMCCR_MCF_Msk                /* MMC Counter Freeze */
#define ETH_MMCCR_ROR_Pos (2U)
#define ETH_MMCCR_ROR_Msk (0x1UL << ETH_MMCCR_ROR_Pos) /*!< 0x00000004 */
#define ETH_MMCCR_ROR ETH_MMCCR_ROR_Msk                /* Reset on Read */
#define ETH_MMCCR_CSR_Pos (1U)
#define ETH_MMCCR_CSR_Msk (0x1UL << ETH_MMCCR_CSR_Pos) /*!< 0x00000002 */
#define ETH_MMCCR_CSR ETH_MMCCR_CSR_Msk                /* Counter Stop Rollover */
#define ETH_MMCCR_CR_Pos (0U)
#define ETH_MMCCR_CR_Msk (0x1UL << ETH_MMCCR_CR_Pos) /*!< 0x00000001 */
#define ETH_MMCCR_CR ETH_MMCCR_CR_Msk                /* Counters Reset */

/* Bit definition for Ethernet MMC Receive Interrupt Register */
#define ETH_MMCRIR_RGUFS_Pos (17U)
#define ETH_MMCRIR_RGUFS_Msk (0x1UL << ETH_MMCRIR_RGUFS_Pos) /*!< 0x00020000 */
#define ETH_MMCRIR_RGUFS ETH_MMCRIR_RGUFS_Msk                /* Set when Rx good unicast frames counter reaches half the maximum value */
#define ETH_MMCRIR_RFAES_Pos (6U)
#define ETH_MMCRIR_RFAES_Msk (0x1UL << ETH_MMCRIR_RFAES_Pos) /*!< 0x00000040 */
#define ETH_MMCRIR_RFAES ETH_MMCRIR_RFAES_Msk                /* Set when Rx alignment error counter reaches half the maximum value */
#define ETH_MMCRIR_RFCES_Pos (5U)
#define ETH_MMCRIR_RFCES_Msk (0x1UL << ETH_MMCRIR_RFCES_Pos) /*!< 0x00000020 */
#define ETH_MMCRIR_RFCES ETH_MMCRIR_RFCES_Msk                /* Set when Rx crc error counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmit Interrupt Register */
#define ETH_MMCTIR_TGFS_Pos (21U)
#define ETH_MMCTIR_TGFS_Msk (0x1UL << ETH_MMCTIR_TGFS_Pos) /*!< 0x00200000 */
#define ETH_MMCTIR_TGFS ETH_MMCTIR_TGFS_Msk                /* Set when Tx good frame count counter reaches half the maximum value */
#define ETH_MMCTIR_TGFMSCS_Pos (15U)
#define ETH_MMCTIR_TGFMSCS_Msk (0x1UL << ETH_MMCTIR_TGFMSCS_Pos) /*!< 0x00008000 */
#define ETH_MMCTIR_TGFMSCS ETH_MMCTIR_TGFMSCS_Msk                /* Set when Tx good multi col counter reaches half the maximum value */
#define ETH_MMCTIR_TGFSCS_Pos (14U)
#define ETH_MMCTIR_TGFSCS_Msk (0x1UL << ETH_MMCTIR_TGFSCS_Pos) /*!< 0x00004000 */
#define ETH_MMCTIR_TGFSCS                                                                       \
    ETH_MMCTIR_TGFSCS_Msk /* Set when Tx good single col counter reaches half the maximum value \
                           */

/* Bit definition for Ethernet MMC Receive Interrupt Mask Register */
#define ETH_MMCRIMR_RGUFM_Pos (17U)
#define ETH_MMCRIMR_RGUFM_Msk (0x1UL << ETH_MMCRIMR_RGUFM_Pos) /*!< 0x00020000 */
#define ETH_MMCRIMR_RGUFM ETH_MMCRIMR_RGUFM_Msk /* Mask the interrupt when Rx good unicast frames counter reaches half the maximum value */
#define ETH_MMCRIMR_RFAEM_Pos (6U)
#define ETH_MMCRIMR_RFAEM_Msk (0x1UL << ETH_MMCRIMR_RFAEM_Pos) /*!< 0x00000040 */
#define ETH_MMCRIMR_RFAEM ETH_MMCRIMR_RFAEM_Msk /* Mask the interrupt when when Rx alignment error counter reaches half the maximum value */
#define ETH_MMCRIMR_RFCEM_Pos (5U)
#define ETH_MMCRIMR_RFCEM_Msk (0x1UL << ETH_MMCRIMR_RFCEM_Pos) /*!< 0x00000020 */
#define ETH_MMCRIMR_RFCEM ETH_MMCRIMR_RFCEM_Msk                /* Mask the interrupt when Rx crc error counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmit Interrupt Mask Register */
#define ETH_MMCTIMR_TGFM_Pos (21U)
#define ETH_MMCTIMR_TGFM_Msk (0x1UL << ETH_MMCTIMR_TGFM_Pos) /*!< 0x00200000 */
#define ETH_MMCTIMR_TGFM ETH_MMCTIMR_TGFM_Msk                /* Mask the interrupt when Tx good frame count counter reaches half the maximum value */
#define ETH_MMCTIMR_TGFMSCM_Pos (15U)
#define ETH_MMCTIMR_TGFMSCM_Msk (0x1UL << ETH_MMCTIMR_TGFMSCM_Pos) /*!< 0x00008000 */
#define ETH_MMCTIMR_TGFMSCM ETH_MMCTIMR_TGFMSCM_Msk /* Mask the interrupt when Tx good multi col counter reaches half the maximum value */
#define ETH_MMCTIMR_TGFSCM_Pos (14U)
#define ETH_MMCTIMR_TGFSCM_Msk (0x1UL << ETH_MMCTIMR_TGFSCM_Pos) /*!< 0x00004000 */
#define ETH_MMCTIMR_TGFSCM ETH_MMCTIMR_TGFSCM_Msk /* Mask the interrupt when Tx good single col counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmitted Good Frames after Single Collision Counter Register */
#define ETH_MMCTGFSCCR_TGFSCC_Pos (0U)
#define ETH_MMCTGFSCCR_TGFSCC_Msk (0xFFFFFFFFUL << ETH_MMCTGFSCCR_TGFSCC_Pos) /*!< 0xFFFFFFFF */
#define ETH_MMCTGFSCCR_TGFSCC                                                                                      \
    ETH_MMCTGFSCCR_TGFSCC_Msk /* Number of successfully transmitted frames after a single collision in Half-duplex \
                                 mode. */

/* Bit definition for Ethernet MMC Transmitted Good Frames after More than a Single Collision Counter Register */
#define ETH_MMCTGFMSCCR_TGFMSCC_Pos (0U)
#define ETH_MMCTGFMSCCR_TGFMSCC_Msk (0xFFFFFFFFUL << ETH_MMCTGFMSCCR_TGFMSCC_Pos) /*!< 0xFFFFFFFF */
#define ETH_MMCTGFMSCCR_TGFMSCC                                                                                    \
    ETH_MMCTGFMSCCR_TGFMSCC_Msk /* Number of successfully transmitted frames after more than a single collision in \
                                   Half-duplex mode. */

/* Bit definition for Ethernet MMC Transmitted Good Frames Counter Register */
#define ETH_MMCTGFCR_TGFC_Pos (0U)
#define ETH_MMCTGFCR_TGFC_Msk (0xFFFFFFFFUL << ETH_MMCTGFCR_TGFC_Pos) /*!< 0xFFFFFFFF */
#define ETH_MMCTGFCR_TGFC ETH_MMCTGFCR_TGFC_Msk                       /* Number of good frames transmitted. */

/* Bit definition for Ethernet MMC Received Frames with CRC Error Counter Register */
#define ETH_MMCRFCECR_RFCEC_Pos (0U)
#define ETH_MMCRFCECR_RFCEC_Msk (0xFFFFFFFFUL << ETH_MMCRFCECR_RFCEC_Pos) /*!< 0xFFFFFFFF */
#define ETH_MMCRFCECR_RFCEC ETH_MMCRFCECR_RFCEC_Msk                       /* Number of frames received with CRC error. */

/* Bit definition for Ethernet MMC Received Frames with Alignement Error Counter Register */
#define ETH_MMCRFAECR_RFAEC_Pos (0U)
#define ETH_MMCRFAECR_RFAEC_Msk (0xFFFFFFFFUL << ETH_MMCRFAECR_RFAEC_Pos) /*!< 0xFFFFFFFF */
#define ETH_MMCRFAECR_RFAEC ETH_MMCRFAECR_RFAEC_Msk                       /* Number of frames received with alignment (dribble) error */

/* Bit definition for Ethernet MMC Received Good Unicast Frames Counter Register */
#define ETH_MMCRGUFCR_RGUFC_Pos (0U)
#define ETH_MMCRGUFCR_RGUFC_Msk (0xFFFFFFFFUL << ETH_MMCRGUFCR_RGUFC_Pos) /*!< 0xFFFFFFFF */
#define ETH_MMCRGUFCR_RGUFC ETH_MMCRGUFCR_RGUFC_Msk                       /* Number of good unicast frames received. */

/******************************************************************************/
/*               Ethernet PTP Registers bits definition                       */
/******************************************************************************/

/* Bit definition for Ethernet PTP Time Stamp Contol Register */
#define ETH_PTPTSCR_TSARU_Pos (5U)
#define ETH_PTPTSCR_TSARU_Msk (0x1UL << ETH_PTPTSCR_TSARU_Pos) /*!< 0x00000020 */
#define ETH_PTPTSCR_TSARU ETH_PTPTSCR_TSARU_Msk                /* Addend register update */
#define ETH_PTPTSCR_TSITE_Pos (4U)
#define ETH_PTPTSCR_TSITE_Msk (0x1UL << ETH_PTPTSCR_TSITE_Pos) /*!< 0x00000010 */
#define ETH_PTPTSCR_TSITE ETH_PTPTSCR_TSITE_Msk                /* Time stamp interrupt trigger enable */
#define ETH_PTPTSCR_TSSTU_Pos (3U)
#define ETH_PTPTSCR_TSSTU_Msk (0x1UL << ETH_PTPTSCR_TSSTU_Pos) /*!< 0x00000008 */
#define ETH_PTPTSCR_TSSTU ETH_PTPTSCR_TSSTU_Msk                /* Time stamp update */
#define ETH_PTPTSCR_TSSTI_Pos (2U)
#define ETH_PTPTSCR_TSSTI_Msk (0x1UL << ETH_PTPTSCR_TSSTI_Pos) /*!< 0x00000004 */
#define ETH_PTPTSCR_TSSTI ETH_PTPTSCR_TSSTI_Msk                /* Time stamp initialize */
#define ETH_PTPTSCR_TSFCU_Pos (1U)
#define ETH_PTPTSCR_TSFCU_Msk (0x1UL << ETH_PTPTSCR_TSFCU_Pos) /*!< 0x00000002 */
#define ETH_PTPTSCR_TSFCU ETH_PTPTSCR_TSFCU_Msk                /* Time stamp fine or coarse update */
#define ETH_PTPTSCR_TSE_Pos (0U)
#define ETH_PTPTSCR_TSE_Msk (0x1UL << ETH_PTPTSCR_TSE_Pos) /*!< 0x00000001 */
#define ETH_PTPTSCR_TSE ETH_PTPTSCR_TSE_Msk                /* Time stamp enable */

/* Bit definition for Ethernet PTP Sub-Second Increment Register */
#define ETH_PTPSSIR_STSSI_Pos (0U)
#define ETH_PTPSSIR_STSSI_Msk (0xFFUL << ETH_PTPSSIR_STSSI_Pos) /*!< 0x000000FF */
#define ETH_PTPSSIR_STSSI ETH_PTPSSIR_STSSI_Msk                 /* System time Sub-second increment value */

/* Bit definition for Ethernet PTP Time Stamp High Register */
#define ETH_PTPTSHR_STS_Pos (0U)
#define ETH_PTPTSHR_STS_Msk (0xFFFFFFFFUL << ETH_PTPTSHR_STS_Pos) /*!< 0xFFFFFFFF */
#define ETH_PTPTSHR_STS ETH_PTPTSHR_STS_Msk                       /* System Time second */

/* Bit definition for Ethernet PTP Time Stamp Low Register */
#define ETH_PTPTSLR_STPNS_Pos (31U)
#define ETH_PTPTSLR_STPNS_Msk (0x1UL << ETH_PTPTSLR_STPNS_Pos) /*!< 0x80000000 */
#define ETH_PTPTSLR_STPNS ETH_PTPTSLR_STPNS_Msk                /* System Time Positive or negative time */
#define ETH_PTPTSLR_STSS_Pos (0U)
#define ETH_PTPTSLR_STSS_Msk (0x7FFFFFFFUL << ETH_PTPTSLR_STSS_Pos) /*!< 0x7FFFFFFF */
#define ETH_PTPTSLR_STSS ETH_PTPTSLR_STSS_Msk                       /* System Time sub-seconds */

/* Bit definition for Ethernet PTP Time Stamp High Update Register */
#define ETH_PTPTSHUR_TSUS_Pos (0U)
#define ETH_PTPTSHUR_TSUS_Msk (0xFFFFFFFFUL << ETH_PTPTSHUR_TSUS_Pos) /*!< 0xFFFFFFFF */
#define ETH_PTPTSHUR_TSUS ETH_PTPTSHUR_TSUS_Msk                       /* Time stamp update seconds */

/* Bit definition for Ethernet PTP Time Stamp Low Update Register */
#define ETH_PTPTSLUR_TSUPNS_Pos (31U)
#define ETH_PTPTSLUR_TSUPNS_Msk (0x1UL << ETH_PTPTSLUR_TSUPNS_Pos) /*!< 0x80000000 */
#define ETH_PTPTSLUR_TSUPNS ETH_PTPTSLUR_TSUPNS_Msk                /* Time stamp update Positive or negative time */
#define ETH_PTPTSLUR_TSUSS_Pos (0U)
#define ETH_PTPTSLUR_TSUSS_Msk (0x7FFFFFFFUL << ETH_PTPTSLUR_TSUSS_Pos) /*!< 0x7FFFFFFF */
#define ETH_PTPTSLUR_TSUSS ETH_PTPTSLUR_TSUSS_Msk                       /* Time stamp update sub-seconds */

/* Bit definition for Ethernet PTP Time Stamp Addend Register */
#define ETH_PTPTSAR_TSA_Pos (0U)
#define ETH_PTPTSAR_TSA_Msk (0xFFFFFFFFUL << ETH_PTPTSAR_TSA_Pos) /*!< 0xFFFFFFFF */
#define ETH_PTPTSAR_TSA ETH_PTPTSAR_TSA_Msk                       /* Time stamp addend */

/* Bit definition for Ethernet PTP Target Time High Register */
#define ETH_PTPTTHR_TTSH_Pos (0U)
#define ETH_PTPTTHR_TTSH_Msk (0xFFFFFFFFUL << ETH_PTPTTHR_TTSH_Pos) /*!< 0xFFFFFFFF */
#define ETH_PTPTTHR_TTSH ETH_PTPTTHR_TTSH_Msk                       /* Target time stamp high */

/* Bit definition for Ethernet PTP Target Time Low Register */
#define ETH_PTPTTLR_TTSL_Pos (0U)
#define ETH_PTPTTLR_TTSL_Msk (0xFFFFFFFFUL << ETH_PTPTTLR_TTSL_Pos) /*!< 0xFFFFFFFF */
#define ETH_PTPTTLR_TTSL ETH_PTPTTLR_TTSL_Msk                       /* Target time stamp low */

/******************************************************************************/
/*                 Ethernet DMA Registers bits definition                     */
/******************************************************************************/

/* Bit definition for Ethernet DMA Bus Mode Register */
#define ETH_DMABMR_AAB_Pos (25U)
#define ETH_DMABMR_AAB_Msk (0x1UL << ETH_DMABMR_AAB_Pos) /*!< 0x02000000 */
#define ETH_DMABMR_AAB ETH_DMABMR_AAB_Msk                /* Address-Aligned beats */
#define ETH_DMABMR_FPM_Pos (24U)
#define ETH_DMABMR_FPM_Msk (0x1UL << ETH_DMABMR_FPM_Pos) /*!< 0x01000000 */
#define ETH_DMABMR_FPM ETH_DMABMR_FPM_Msk                /* 4xPBL mode */
#define ETH_DMABMR_USP_Pos (23U)
#define ETH_DMABMR_USP_Msk (0x1UL << ETH_DMABMR_USP_Pos) /*!< 0x00800000 */
#define ETH_DMABMR_USP ETH_DMABMR_USP_Msk                /* Use separate PBL */
#define ETH_DMABMR_RDP_Pos (17U)
#define ETH_DMABMR_RDP_Msk (0x3FUL << ETH_DMABMR_RDP_Pos) /*!< 0x007E0000 */
#define ETH_DMABMR_RDP ETH_DMABMR_RDP_Msk                 /* RxDMA PBL */
#define ETH_DMABMR_RDP_1Beat 0x00020000U                  /* maximum number of beats to be transferred in one RxDMA transaction is 1 */
#define ETH_DMABMR_RDP_2Beat 0x00040000U                  /* maximum number of beats to be transferred in one RxDMA transaction is 2 */
#define ETH_DMABMR_RDP_4Beat 0x00080000U                  /* maximum number of beats to be transferred in one RxDMA transaction is 4 */
#define ETH_DMABMR_RDP_8Beat 0x00100000U                  /* maximum number of beats to be transferred in one RxDMA transaction is 8 */
#define ETH_DMABMR_RDP_16Beat                                                               \
    0x00200000U /* maximum number of beats to be transferred in one RxDMA transaction is 16 \
                 */
#define ETH_DMABMR_RDP_32Beat                                                                                                \
    0x00400000U                                  /* maximum number of beats to be transferred in one RxDMA transaction is 32 \
                                                  */
#define ETH_DMABMR_RDP_4xPBL_4Beat 0x01020000U   /* maximum number of beats to be transferred in one RxDMA transaction is 4 */
#define ETH_DMABMR_RDP_4xPBL_8Beat 0x01040000U   /* maximum number of beats to be transferred in one RxDMA transaction is 8 */
#define ETH_DMABMR_RDP_4xPBL_16Beat 0x01080000U  /* maximum number of beats to be transferred in one RxDMA transaction is 16 */
#define ETH_DMABMR_RDP_4xPBL_32Beat 0x01100000U  /* maximum number of beats to be transferred in one RxDMA transaction is 32 */
#define ETH_DMABMR_RDP_4xPBL_64Beat 0x01200000U  /* maximum number of beats to be transferred in one RxDMA transaction is 64 */
#define ETH_DMABMR_RDP_4xPBL_128Beat 0x01400000U /* maximum number of beats to be transferred in one RxDMA transaction is 128 */
#define ETH_DMABMR_FB_Pos (16U)
#define ETH_DMABMR_FB_Msk (0x1UL << ETH_DMABMR_FB_Pos) /*!< 0x00010000 */
#define ETH_DMABMR_FB ETH_DMABMR_FB_Msk                /* Fixed Burst */
#define ETH_DMABMR_RTPR_Pos (14U)
#define ETH_DMABMR_RTPR_Msk (0x3UL << ETH_DMABMR_RTPR_Pos) /*!< 0x0000C000 */
#define ETH_DMABMR_RTPR ETH_DMABMR_RTPR_Msk                /* Rx Tx priority ratio */
#define ETH_DMABMR_RTPR_1_1 0x00000000U                    /* Rx Tx priority ratio */
#define ETH_DMABMR_RTPR_2_1 0x00004000U                    /* Rx Tx priority ratio */
#define ETH_DMABMR_RTPR_3_1 0x00008000U                    /* Rx Tx priority ratio */
#define ETH_DMABMR_RTPR_4_1 0x0000C000U                    /* Rx Tx priority ratio */
#define ETH_DMABMR_PBL_Pos (8U)
#define ETH_DMABMR_PBL_Msk (0x3FUL << ETH_DMABMR_PBL_Pos) /*!< 0x00003F00 */
#define ETH_DMABMR_PBL ETH_DMABMR_PBL_Msk                 /* Programmable burst length */
#define ETH_DMABMR_PBL_1Beat 0x00000100U                  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 1 */
#define ETH_DMABMR_PBL_2Beat 0x00000200U                  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 2 */
#define ETH_DMABMR_PBL_4Beat 0x00000400U                  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 4 */
#define ETH_DMABMR_PBL_8Beat 0x00000800U                  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 8 */
#define ETH_DMABMR_PBL_16Beat 0x00001000U                 /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 16 */
#define ETH_DMABMR_PBL_32Beat 0x00002000U                 /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 32 */
#define ETH_DMABMR_PBL_4xPBL_4Beat 0x01000100U            /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 4 */
#define ETH_DMABMR_PBL_4xPBL_8Beat 0x01000200U            /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 8 */
#define ETH_DMABMR_PBL_4xPBL_16Beat 0x01000400U           /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 16 */
#define ETH_DMABMR_PBL_4xPBL_32Beat 0x01000800U           /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 32 */
#define ETH_DMABMR_PBL_4xPBL_64Beat 0x01001000U           /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 64 */
#define ETH_DMABMR_PBL_4xPBL_128Beat 0x01002000U          /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 128 */
#define ETH_DMABMR_DSL_Pos (2U)
#define ETH_DMABMR_DSL_Msk (0x1FUL << ETH_DMABMR_DSL_Pos) /*!< 0x0000007C */
#define ETH_DMABMR_DSL ETH_DMABMR_DSL_Msk                 /* Descriptor Skip Length */
#define ETH_DMABMR_DA_Pos (1U)
#define ETH_DMABMR_DA_Msk (0x1UL << ETH_DMABMR_DA_Pos) /*!< 0x00000002 */
#define ETH_DMABMR_DA ETH_DMABMR_DA_Msk                /* DMA arbitration scheme */
#define ETH_DMABMR_SR_Pos (0U)
#define ETH_DMABMR_SR_Msk (0x1UL << ETH_DMABMR_SR_Pos) /*!< 0x00000001 */
#define ETH_DMABMR_SR ETH_DMABMR_SR_Msk                /* Software reset */

/* Bit definition for Ethernet DMA Transmit Poll Demand Register */
#define ETH_DMATPDR_TPD_Pos (0U)
#define ETH_DMATPDR_TPD_Msk (0xFFFFFFFFUL << ETH_DMATPDR_TPD_Pos) /*!< 0xFFFFFFFF */
#define ETH_DMATPDR_TPD ETH_DMATPDR_TPD_Msk                       /* Transmit poll demand */

/* Bit definition for Ethernet DMA Receive Poll Demand Register */
#define ETH_DMARPDR_RPD_Pos (0U)
#define ETH_DMARPDR_RPD_Msk (0xFFFFFFFFUL << ETH_DMARPDR_RPD_Pos) /*!< 0xFFFFFFFF */
#define ETH_DMARPDR_RPD ETH_DMARPDR_RPD_Msk                       /* Receive poll demand  */

/* Bit definition for Ethernet DMA Receive Descriptor List Address Register */
#define ETH_DMARDLAR_SRL_Pos (0U)
#define ETH_DMARDLAR_SRL_Msk (0xFFFFFFFFUL << ETH_DMARDLAR_SRL_Pos) /*!< 0xFFFFFFFF */
#define ETH_DMARDLAR_SRL ETH_DMARDLAR_SRL_Msk                       /* Start of receive list */

/* Bit definition for Ethernet DMA Transmit Descriptor List Address Register */
#define ETH_DMATDLAR_STL_Pos (0U)
#define ETH_DMATDLAR_STL_Msk (0xFFFFFFFFUL << ETH_DMATDLAR_STL_Pos) /*!< 0xFFFFFFFF */
#define ETH_DMATDLAR_STL ETH_DMATDLAR_STL_Msk                       /* Start of transmit list */

/* Bit definition for Ethernet DMA Status Register */
#define ETH_DMASR_TSTS_Pos (29U)
#define ETH_DMASR_TSTS_Msk (0x1UL << ETH_DMASR_TSTS_Pos) /*!< 0x20000000 */
#define ETH_DMASR_TSTS ETH_DMASR_TSTS_Msk                /* Time-stamp trigger status */
#define ETH_DMASR_PMTS_Pos (28U)
#define ETH_DMASR_PMTS_Msk (0x1UL << ETH_DMASR_PMTS_Pos) /*!< 0x10000000 */
#define ETH_DMASR_PMTS ETH_DMASR_PMTS_Msk                /* PMT status */
#define ETH_DMASR_MMCS_Pos (27U)
#define ETH_DMASR_MMCS_Msk (0x1UL << ETH_DMASR_MMCS_Pos) /*!< 0x08000000 */
#define ETH_DMASR_MMCS ETH_DMASR_MMCS_Msk                /* MMC status */
#define ETH_DMASR_EBS_Pos (23U)
#define ETH_DMASR_EBS_Msk (0x7UL << ETH_DMASR_EBS_Pos) /*!< 0x03800000 */
#define ETH_DMASR_EBS ETH_DMASR_EBS_Msk                /* Error bits status */
                                                       /* combination with EBS[2:0] for GetFlagStatus function */
#define ETH_DMASR_EBS_DescAccess_Pos (25U)
#define ETH_DMASR_EBS_DescAccess_Msk (0x1UL << ETH_DMASR_EBS_DescAccess_Pos) /*!< 0x02000000 */
#define ETH_DMASR_EBS_DescAccess ETH_DMASR_EBS_DescAccess_Msk                /* Error bits 0-data buffer, 1-desc. access */
#define ETH_DMASR_EBS_ReadTransf_Pos (24U)
#define ETH_DMASR_EBS_ReadTransf_Msk (0x1UL << ETH_DMASR_EBS_ReadTransf_Pos) /*!< 0x01000000 */
#define ETH_DMASR_EBS_ReadTransf ETH_DMASR_EBS_ReadTransf_Msk                /* Error bits 0-write trnsf, 1-read transfr */
#define ETH_DMASR_EBS_DataTransfTx_Pos (23U)
#define ETH_DMASR_EBS_DataTransfTx_Msk (0x1UL << ETH_DMASR_EBS_DataTransfTx_Pos) /*!< 0x00800000 */
#define ETH_DMASR_EBS_DataTransfTx ETH_DMASR_EBS_DataTransfTx_Msk                /* Error bits 0-Rx DMA, 1-Tx DMA */
#define ETH_DMASR_TPS_Pos (20U)
#define ETH_DMASR_TPS_Msk (0x7UL << ETH_DMASR_TPS_Pos) /*!< 0x00700000 */
#define ETH_DMASR_TPS ETH_DMASR_TPS_Msk                /* Transmit process state */
#define ETH_DMASR_TPS_Stopped 0x00000000U              /* Stopped - Reset or Stop Tx Command issued  */
#define ETH_DMASR_TPS_Fetching_Pos (20U)
#define ETH_DMASR_TPS_Fetching_Msk (0x1UL << ETH_DMASR_TPS_Fetching_Pos) /*!< 0x00100000 */
#define ETH_DMASR_TPS_Fetching ETH_DMASR_TPS_Fetching_Msk                /* Running - fetching the Tx descriptor */
#define ETH_DMASR_TPS_Waiting_Pos (21U)
#define ETH_DMASR_TPS_Waiting_Msk (0x1UL << ETH_DMASR_TPS_Waiting_Pos) /*!< 0x00200000 */
#define ETH_DMASR_TPS_Waiting ETH_DMASR_TPS_Waiting_Msk                /* Running - waiting for status */
#define ETH_DMASR_TPS_Reading_Pos (20U)
#define ETH_DMASR_TPS_Reading_Msk (0x3UL << ETH_DMASR_TPS_Reading_Pos) /*!< 0x00300000 */
#define ETH_DMASR_TPS_Reading ETH_DMASR_TPS_Reading_Msk                /* Running - reading the data from host memory */
#define ETH_DMASR_TPS_Suspended_Pos (21U)
#define ETH_DMASR_TPS_Suspended_Msk (0x3UL << ETH_DMASR_TPS_Suspended_Pos) /*!< 0x00600000 */
#define ETH_DMASR_TPS_Suspended ETH_DMASR_TPS_Suspended_Msk                /* Suspended - Tx Descriptor unavailabe */
#define ETH_DMASR_TPS_Closing_Pos (20U)
#define ETH_DMASR_TPS_Closing_Msk (0x7UL << ETH_DMASR_TPS_Closing_Pos) /*!< 0x00700000 */
#define ETH_DMASR_TPS_Closing ETH_DMASR_TPS_Closing_Msk                /* Running - closing Rx descriptor */
#define ETH_DMASR_RPS_Pos (17U)
#define ETH_DMASR_RPS_Msk (0x7UL << ETH_DMASR_RPS_Pos) /*!< 0x000E0000 */
#define ETH_DMASR_RPS ETH_DMASR_RPS_Msk                /* Receive process state */
#define ETH_DMASR_RPS_Stopped 0x00000000U              /* Stopped - Reset or Stop Rx Command issued */
#define ETH_DMASR_RPS_Fetching_Pos (17U)
#define ETH_DMASR_RPS_Fetching_Msk (0x1UL << ETH_DMASR_RPS_Fetching_Pos) /*!< 0x00020000 */
#define ETH_DMASR_RPS_Fetching ETH_DMASR_RPS_Fetching_Msk                /* Running - fetching the Rx descriptor */
#define ETH_DMASR_RPS_Waiting_Pos (17U)
#define ETH_DMASR_RPS_Waiting_Msk (0x3UL << ETH_DMASR_RPS_Waiting_Pos) /*!< 0x00060000 */
#define ETH_DMASR_RPS_Waiting ETH_DMASR_RPS_Waiting_Msk                /* Running - waiting for packet */
#define ETH_DMASR_RPS_Suspended_Pos (19U)
#define ETH_DMASR_RPS_Suspended_Msk (0x1UL << ETH_DMASR_RPS_Suspended_Pos) /*!< 0x00080000 */
#define ETH_DMASR_RPS_Suspended ETH_DMASR_RPS_Suspended_Msk                /* Suspended - Rx Descriptor unavailable */
#define ETH_DMASR_RPS_Closing_Pos (17U)
#define ETH_DMASR_RPS_Closing_Msk (0x5UL << ETH_DMASR_RPS_Closing_Pos) /*!< 0x000A0000 */
#define ETH_DMASR_RPS_Closing ETH_DMASR_RPS_Closing_Msk                /* Running - closing descriptor */
#define ETH_DMASR_RPS_Queuing_Pos (17U)
#define ETH_DMASR_RPS_Queuing_Msk (0x7UL << ETH_DMASR_RPS_Queuing_Pos) /*!< 0x000E0000 */
#define ETH_DMASR_RPS_Queuing ETH_DMASR_RPS_Queuing_Msk                /* Running - queuing the recieve frame into host memory */
#define ETH_DMASR_NIS_Pos (16U)
#define ETH_DMASR_NIS_Msk (0x1UL << ETH_DMASR_NIS_Pos) /*!< 0x00010000 */
#define ETH_DMASR_NIS ETH_DMASR_NIS_Msk                /* Normal interrupt summary */
#define ETH_DMASR_AIS_Pos (15U)
#define ETH_DMASR_AIS_Msk (0x1UL << ETH_DMASR_AIS_Pos) /*!< 0x00008000 */
#define ETH_DMASR_AIS ETH_DMASR_AIS_Msk                /* Abnormal interrupt summary */
#define ETH_DMASR_ERS_Pos (14U)
#define ETH_DMASR_ERS_Msk (0x1UL << ETH_DMASR_ERS_Pos) /*!< 0x00004000 */
#define ETH_DMASR_ERS ETH_DMASR_ERS_Msk                /* Early receive status */
#define ETH_DMASR_FBES_Pos (13U)
#define ETH_DMASR_FBES_Msk (0x1UL << ETH_DMASR_FBES_Pos) /*!< 0x00002000 */
#define ETH_DMASR_FBES ETH_DMASR_FBES_Msk                /* Fatal bus error status */
#define ETH_DMASR_ETS_Pos (10U)
#define ETH_DMASR_ETS_Msk (0x1UL << ETH_DMASR_ETS_Pos) /*!< 0x00000400 */
#define ETH_DMASR_ETS ETH_DMASR_ETS_Msk                /* Early transmit status */
#define ETH_DMASR_RWTS_Pos (9U)
#define ETH_DMASR_RWTS_Msk (0x1UL << ETH_DMASR_RWTS_Pos) /*!< 0x00000200 */
#define ETH_DMASR_RWTS ETH_DMASR_RWTS_Msk                /* Receive watchdog timeout status */
#define ETH_DMASR_RPSS_Pos (8U)
#define ETH_DMASR_RPSS_Msk (0x1UL << ETH_DMASR_RPSS_Pos) /*!< 0x00000100 */
#define ETH_DMASR_RPSS ETH_DMASR_RPSS_Msk                /* Receive process stopped status */
#define ETH_DMASR_RBUS_Pos (7U)
#define ETH_DMASR_RBUS_Msk (0x1UL << ETH_DMASR_RBUS_Pos) /*!< 0x00000080 */
#define ETH_DMASR_RBUS ETH_DMASR_RBUS_Msk                /* Receive buffer unavailable status */
#define ETH_DMASR_RS_Pos (6U)
#define ETH_DMASR_RS_Msk (0x1UL << ETH_DMASR_RS_Pos) /*!< 0x00000040 */
#define ETH_DMASR_RS ETH_DMASR_RS_Msk                /* Receive status */
#define ETH_DMASR_TUS_Pos (5U)
#define ETH_DMASR_TUS_Msk (0x1UL << ETH_DMASR_TUS_Pos) /*!< 0x00000020 */
#define ETH_DMASR_TUS ETH_DMASR_TUS_Msk                /* Transmit underflow status */
#define ETH_DMASR_ROS_Pos (4U)
#define ETH_DMASR_ROS_Msk (0x1UL << ETH_DMASR_ROS_Pos) /*!< 0x00000010 */
#define ETH_DMASR_ROS ETH_DMASR_ROS_Msk                /* Receive overflow status */
#define ETH_DMASR_TJTS_Pos (3U)
#define ETH_DMASR_TJTS_Msk (0x1UL << ETH_DMASR_TJTS_Pos) /*!< 0x00000008 */
#define ETH_DMASR_TJTS ETH_DMASR_TJTS_Msk                /* Transmit jabber timeout status */
#define ETH_DMASR_TBUS_Pos (2U)
#define ETH_DMASR_TBUS_Msk (0x1UL << ETH_DMASR_TBUS_Pos) /*!< 0x00000004 */
#define ETH_DMASR_TBUS ETH_DMASR_TBUS_Msk                /* Transmit buffer unavailable status */
#define ETH_DMASR_TPSS_Pos (1U)
#define ETH_DMASR_TPSS_Msk (0x1UL << ETH_DMASR_TPSS_Pos) /*!< 0x00000002 */
#define ETH_DMASR_TPSS ETH_DMASR_TPSS_Msk                /* Transmit process stopped status */
#define ETH_DMASR_TS_Pos (0U)
#define ETH_DMASR_TS_Msk (0x1UL << ETH_DMASR_TS_Pos) /*!< 0x00000001 */
#define ETH_DMASR_TS ETH_DMASR_TS_Msk                /* Transmit status */

/* Bit definition for Ethernet DMA Operation Mode Register */
#define ETH_DMAOMR_DTCEFD_Pos (26U)
#define ETH_DMAOMR_DTCEFD_Msk (0x1UL << ETH_DMAOMR_DTCEFD_Pos) /*!< 0x04000000 */
#define ETH_DMAOMR_DTCEFD ETH_DMAOMR_DTCEFD_Msk                /* Disable Dropping of TCP/IP checksum error frames */
#define ETH_DMAOMR_RSF_Pos (25U)
#define ETH_DMAOMR_RSF_Msk (0x1UL << ETH_DMAOMR_RSF_Pos) /*!< 0x02000000 */
#define ETH_DMAOMR_RSF ETH_DMAOMR_RSF_Msk                /* Receive store and forward */
#define ETH_DMAOMR_DFRF_Pos (24U)
#define ETH_DMAOMR_DFRF_Msk (0x1UL << ETH_DMAOMR_DFRF_Pos) /*!< 0x01000000 */
#define ETH_DMAOMR_DFRF ETH_DMAOMR_DFRF_Msk                /* Disable flushing of received frames */
#define ETH_DMAOMR_TSF_Pos (21U)
#define ETH_DMAOMR_TSF_Msk (0x1UL << ETH_DMAOMR_TSF_Pos) /*!< 0x00200000 */
#define ETH_DMAOMR_TSF ETH_DMAOMR_TSF_Msk                /* Transmit store and forward */
#define ETH_DMAOMR_FTF_Pos (20U)
#define ETH_DMAOMR_FTF_Msk (0x1UL << ETH_DMAOMR_FTF_Pos) /*!< 0x00100000 */
#define ETH_DMAOMR_FTF ETH_DMAOMR_FTF_Msk                /* Flush transmit FIFO */
#define ETH_DMAOMR_TTC_Pos (14U)
#define ETH_DMAOMR_TTC_Msk (0x7UL << ETH_DMAOMR_TTC_Pos) /*!< 0x0001C000 */
#define ETH_DMAOMR_TTC ETH_DMAOMR_TTC_Msk                /* Transmit threshold control */
#define ETH_DMAOMR_TTC_64Bytes 0x00000000U               /* threshold level of the MTL Transmit FIFO is 64 Bytes */
#define ETH_DMAOMR_TTC_128Bytes 0x00004000U              /* threshold level of the MTL Transmit FIFO is 128 Bytes */
#define ETH_DMAOMR_TTC_192Bytes 0x00008000U              /* threshold level of the MTL Transmit FIFO is 192 Bytes */
#define ETH_DMAOMR_TTC_256Bytes 0x0000C000U              /* threshold level of the MTL Transmit FIFO is 256 Bytes */
#define ETH_DMAOMR_TTC_40Bytes 0x00010000U               /* threshold level of the MTL Transmit FIFO is 40 Bytes */
#define ETH_DMAOMR_TTC_32Bytes 0x00014000U               /* threshold level of the MTL Transmit FIFO is 32 Bytes */
#define ETH_DMAOMR_TTC_24Bytes 0x00018000U               /* threshold level of the MTL Transmit FIFO is 24 Bytes */
#define ETH_DMAOMR_TTC_16Bytes 0x0001C000U               /* threshold level of the MTL Transmit FIFO is 16 Bytes */
#define ETH_DMAOMR_ST_Pos (13U)
#define ETH_DMAOMR_ST_Msk (0x1UL << ETH_DMAOMR_ST_Pos) /*!< 0x00002000 */
#define ETH_DMAOMR_ST ETH_DMAOMR_ST_Msk                /* Start/stop transmission command */
#define ETH_DMAOMR_FEF_Pos (7U)
#define ETH_DMAOMR_FEF_Msk (0x1UL << ETH_DMAOMR_FEF_Pos) /*!< 0x00000080 */
#define ETH_DMAOMR_FEF ETH_DMAOMR_FEF_Msk                /* Forward error frames */
#define ETH_DMAOMR_FUGF_Pos (6U)
#define ETH_DMAOMR_FUGF_Msk (0x1UL << ETH_DMAOMR_FUGF_Pos) /*!< 0x00000040 */
#define ETH_DMAOMR_FUGF ETH_DMAOMR_FUGF_Msk                /* Forward undersized good frames */
#define ETH_DMAOMR_RTC_Pos (3U)
#define ETH_DMAOMR_RTC_Msk (0x3UL << ETH_DMAOMR_RTC_Pos) /*!< 0x00000018 */
#define ETH_DMAOMR_RTC ETH_DMAOMR_RTC_Msk                /* receive threshold control */
#define ETH_DMAOMR_RTC_64Bytes 0x00000000U               /* threshold level of the MTL Receive FIFO is 64 Bytes */
#define ETH_DMAOMR_RTC_32Bytes 0x00000008U               /* threshold level of the MTL Receive FIFO is 32 Bytes */
#define ETH_DMAOMR_RTC_96Bytes 0x00000010U               /* threshold level of the MTL Receive FIFO is 96 Bytes */
#define ETH_DMAOMR_RTC_128Bytes 0x00000018U              /* threshold level of the MTL Receive FIFO is 128 Bytes */
#define ETH_DMAOMR_OSF_Pos (2U)
#define ETH_DMAOMR_OSF_Msk (0x1UL << ETH_DMAOMR_OSF_Pos) /*!< 0x00000004 */
#define ETH_DMAOMR_OSF ETH_DMAOMR_OSF_Msk                /* operate on second frame */
#define ETH_DMAOMR_SR_Pos (1U)
#define ETH_DMAOMR_SR_Msk (0x1UL << ETH_DMAOMR_SR_Pos) /*!< 0x00000002 */
#define ETH_DMAOMR_SR ETH_DMAOMR_SR_Msk                /* Start/stop receive */

/* Bit definition for Ethernet DMA Interrupt Enable Register */
#define ETH_DMAIER_NISE_Pos (16U)
#define ETH_DMAIER_NISE_Msk (0x1UL << ETH_DMAIER_NISE_Pos) /*!< 0x00010000 */
#define ETH_DMAIER_NISE ETH_DMAIER_NISE_Msk                /* Normal interrupt summary enable */
#define ETH_DMAIER_AISE_Pos (15U)
#define ETH_DMAIER_AISE_Msk (0x1UL << ETH_DMAIER_AISE_Pos) /*!< 0x00008000 */
#define ETH_DMAIER_AISE ETH_DMAIER_AISE_Msk                /* Abnormal interrupt summary enable */
#define ETH_DMAIER_ERIE_Pos (14U)
#define ETH_DMAIER_ERIE_Msk (0x1UL << ETH_DMAIER_ERIE_Pos) /*!< 0x00004000 */
#define ETH_DMAIER_ERIE ETH_DMAIER_ERIE_Msk                /* Early receive interrupt enable */
#define ETH_DMAIER_FBEIE_Pos (13U)
#define ETH_DMAIER_FBEIE_Msk (0x1UL << ETH_DMAIER_FBEIE_Pos) /*!< 0x00002000 */
#define ETH_DMAIER_FBEIE ETH_DMAIER_FBEIE_Msk                /* Fatal bus error interrupt enable */
#define ETH_DMAIER_ETIE_Pos (10U)
#define ETH_DMAIER_ETIE_Msk (0x1UL << ETH_DMAIER_ETIE_Pos) /*!< 0x00000400 */
#define ETH_DMAIER_ETIE ETH_DMAIER_ETIE_Msk                /* Early transmit interrupt enable */
#define ETH_DMAIER_RWTIE_Pos (9U)
#define ETH_DMAIER_RWTIE_Msk (0x1UL << ETH_DMAIER_RWTIE_Pos) /*!< 0x00000200 */
#define ETH_DMAIER_RWTIE ETH_DMAIER_RWTIE_Msk                /* Receive watchdog timeout interrupt enable */
#define ETH_DMAIER_RPSIE_Pos (8U)
#define ETH_DMAIER_RPSIE_Msk (0x1UL << ETH_DMAIER_RPSIE_Pos) /*!< 0x00000100 */
#define ETH_DMAIER_RPSIE ETH_DMAIER_RPSIE_Msk                /* Receive process stopped interrupt enable */
#define ETH_DMAIER_RBUIE_Pos (7U)
#define ETH_DMAIER_RBUIE_Msk (0x1UL << ETH_DMAIER_RBUIE_Pos) /*!< 0x00000080 */
#define ETH_DMAIER_RBUIE ETH_DMAIER_RBUIE_Msk                /* Receive buffer unavailable interrupt enable */
#define ETH_DMAIER_RIE_Pos (6U)
#define ETH_DMAIER_RIE_Msk (0x1UL << ETH_DMAIER_RIE_Pos) /*!< 0x00000040 */
#define ETH_DMAIER_RIE ETH_DMAIER_RIE_Msk                /* Receive interrupt enable */
#define ETH_DMAIER_TUIE_Pos (5U)
#define ETH_DMAIER_TUIE_Msk (0x1UL << ETH_DMAIER_TUIE_Pos) /*!< 0x00000020 */
#define ETH_DMAIER_TUIE ETH_DMAIER_TUIE_Msk                /* Transmit Underflow interrupt enable */
#define ETH_DMAIER_ROIE_Pos (4U)
#define ETH_DMAIER_ROIE_Msk (0x1UL << ETH_DMAIER_ROIE_Pos) /*!< 0x00000010 */
#define ETH_DMAIER_ROIE ETH_DMAIER_ROIE_Msk                /* Receive Overflow interrupt enable */
#define ETH_DMAIER_TJTIE_Pos (3U)
#define ETH_DMAIER_TJTIE_Msk (0x1UL << ETH_DMAIER_TJTIE_Pos) /*!< 0x00000008 */
#define ETH_DMAIER_TJTIE ETH_DMAIER_TJTIE_Msk                /* Transmit jabber timeout interrupt enable */
#define ETH_DMAIER_TBUIE_Pos (2U)
#define ETH_DMAIER_TBUIE_Msk (0x1UL << ETH_DMAIER_TBUIE_Pos) /*!< 0x00000004 */
#define ETH_DMAIER_TBUIE ETH_DMAIER_TBUIE_Msk                /* Transmit buffer unavailable interrupt enable */
#define ETH_DMAIER_TPSIE_Pos (1U)
#define ETH_DMAIER_TPSIE_Msk (0x1UL << ETH_DMAIER_TPSIE_Pos) /*!< 0x00000002 */
#define ETH_DMAIER_TPSIE ETH_DMAIER_TPSIE_Msk                /* Transmit process stopped interrupt enable */
#define ETH_DMAIER_TIE_Pos (0U)
#define ETH_DMAIER_TIE_Msk (0x1UL << ETH_DMAIER_TIE_Pos) /*!< 0x00000001 */
#define ETH_DMAIER_TIE ETH_DMAIER_TIE_Msk                /* Transmit interrupt enable */

/* Bit definition for Ethernet DMA Missed Frame and Buffer Overflow Counter Register */
#define ETH_DMAMFBOCR_OFOC_Pos (28U)
#define ETH_DMAMFBOCR_OFOC_Msk (0x1UL << ETH_DMAMFBOCR_OFOC_Pos) /*!< 0x10000000 */
#define ETH_DMAMFBOCR_OFOC ETH_DMAMFBOCR_OFOC_Msk                /* Overflow bit for FIFO overflow counter */
#define ETH_DMAMFBOCR_MFA_Pos (17U)
#define ETH_DMAMFBOCR_MFA_Msk (0x7FFUL << ETH_DMAMFBOCR_MFA_Pos) /*!< 0x0FFE0000 */
#define ETH_DMAMFBOCR_MFA ETH_DMAMFBOCR_MFA_Msk                  /* Number of frames missed by the application */
#define ETH_DMAMFBOCR_OMFC_Pos (16U)
#define ETH_DMAMFBOCR_OMFC_Msk (0x1UL << ETH_DMAMFBOCR_OMFC_Pos) /*!< 0x00010000 */
#define ETH_DMAMFBOCR_OMFC ETH_DMAMFBOCR_OMFC_Msk                /* Overflow bit for missed frame counter */
#define ETH_DMAMFBOCR_MFC_Pos (0U)
#define ETH_DMAMFBOCR_MFC_Msk (0xFFFFUL << ETH_DMAMFBOCR_MFC_Pos) /*!< 0x0000FFFF */
#define ETH_DMAMFBOCR_MFC ETH_DMAMFBOCR_MFC_Msk                   /* Number of frames missed by the controller */

/* Bit definition for Ethernet DMA Current Host Transmit Descriptor Register */
#define ETH_DMACHTDR_HTDAP_Pos (0U)
#define ETH_DMACHTDR_HTDAP_Msk (0xFFFFFFFFUL << ETH_DMACHTDR_HTDAP_Pos) /*!< 0xFFFFFFFF */
#define ETH_DMACHTDR_HTDAP ETH_DMACHTDR_HTDAP_Msk                       /* Host transmit descriptor address pointer */

/* Bit definition for Ethernet DMA Current Host Receive Descriptor Register */
#define ETH_DMACHRDR_HRDAP_Pos (0U)
#define ETH_DMACHRDR_HRDAP_Msk (0xFFFFFFFFUL << ETH_DMACHRDR_HRDAP_Pos) /*!< 0xFFFFFFFF */
#define ETH_DMACHRDR_HRDAP ETH_DMACHRDR_HRDAP_Msk                       /* Host receive descriptor address pointer */

/* Bit definition for Ethernet DMA Current Host Transmit Buffer Address Register */
#define ETH_DMACHTBAR_HTBAP_Pos (0U)
#define ETH_DMACHTBAR_HTBAP_Msk (0xFFFFFFFFUL << ETH_DMACHTBAR_HTBAP_Pos) /*!< 0xFFFFFFFF */
#define ETH_DMACHTBAR_HTBAP ETH_DMACHTBAR_HTBAP_Msk                       /* Host transmit buffer address pointer */

/* Bit definition for Ethernet DMA Current Host Receive Buffer Address Register */
#define ETH_DMACHRBAR_HRBAP_Pos (0U)
#define ETH_DMACHRBAR_HRBAP_Msk (0xFFFFFFFFUL << ETH_DMACHRBAR_HRBAP_Pos) /*!< 0xFFFFFFFF */
#define ETH_DMACHRBAR_HRBAP ETH_DMACHRBAR_HRBAP_Msk                       /* Host receive buffer address pointer */

/******************************************************************************/
/*                                                                            */
/*                                 USB_OTG                                    */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for USB_OTG_GOTGCTL register  ***********/
#define USB_OTG_GOTGCTL_SRQSCS_Pos (0U)
#define USB_OTG_GOTGCTL_SRQSCS_Msk (0x1UL << USB_OTG_GOTGCTL_SRQSCS_Pos) /*!< 0x00000001 */
#define USB_OTG_GOTGCTL_SRQSCS USB_OTG_GOTGCTL_SRQSCS_Msk                /*!< Session request success */
#define USB_OTG_GOTGCTL_SRQ_Pos (1U)
#define USB_OTG_GOTGCTL_SRQ_Msk (0x1UL << USB_OTG_GOTGCTL_SRQ_Pos) /*!< 0x00000002 */
#define USB_OTG_GOTGCTL_SRQ USB_OTG_GOTGCTL_SRQ_Msk                /*!< Session request */
#define USB_OTG_GOTGCTL_HNGSCS_Pos (8U)
#define USB_OTG_GOTGCTL_HNGSCS_Msk (0x1UL << USB_OTG_GOTGCTL_HNGSCS_Pos) /*!< 0x00000100 */
#define USB_OTG_GOTGCTL_HNGSCS USB_OTG_GOTGCTL_HNGSCS_Msk                /*!< Host set HNP enable */
#define USB_OTG_GOTGCTL_HNPRQ_Pos (9U)
#define USB_OTG_GOTGCTL_HNPRQ_Msk (0x1UL << USB_OTG_GOTGCTL_HNPRQ_Pos) /*!< 0x00000200 */
#define USB_OTG_GOTGCTL_HNPRQ USB_OTG_GOTGCTL_HNPRQ_Msk                /*!< HNP request */
#define USB_OTG_GOTGCTL_HSHNPEN_Pos (10U)
#define USB_OTG_GOTGCTL_HSHNPEN_Msk (0x1UL << USB_OTG_GOTGCTL_HSHNPEN_Pos) /*!< 0x00000400 */
#define USB_OTG_GOTGCTL_HSHNPEN USB_OTG_GOTGCTL_HSHNPEN_Msk                /*!< Host set HNP enable */
#define USB_OTG_GOTGCTL_DHNPEN_Pos (11U)
#define USB_OTG_GOTGCTL_DHNPEN_Msk (0x1UL << USB_OTG_GOTGCTL_DHNPEN_Pos) /*!< 0x00000800 */
#define USB_OTG_GOTGCTL_DHNPEN USB_OTG_GOTGCTL_DHNPEN_Msk                /*!< Device HNP enabled */
#define USB_OTG_GOTGCTL_CIDSTS_Pos (16U)
#define USB_OTG_GOTGCTL_CIDSTS_Msk (0x1UL << USB_OTG_GOTGCTL_CIDSTS_Pos) /*!< 0x00010000 */
#define USB_OTG_GOTGCTL_CIDSTS USB_OTG_GOTGCTL_CIDSTS_Msk                /*!< Connector ID status */
#define USB_OTG_GOTGCTL_DBCT_Pos (17U)
#define USB_OTG_GOTGCTL_DBCT_Msk (0x1UL << USB_OTG_GOTGCTL_DBCT_Pos) /*!< 0x00020000 */
#define USB_OTG_GOTGCTL_DBCT USB_OTG_GOTGCTL_DBCT_Msk                /*!< Long/short debounce time */
#define USB_OTG_GOTGCTL_ASVLD_Pos (18U)
#define USB_OTG_GOTGCTL_ASVLD_Msk (0x1UL << USB_OTG_GOTGCTL_ASVLD_Pos) /*!< 0x00040000 */
#define USB_OTG_GOTGCTL_ASVLD USB_OTG_GOTGCTL_ASVLD_Msk                /*!< A-session valid */
#define USB_OTG_GOTGCTL_BSVLD_Pos (19U)
#define USB_OTG_GOTGCTL_BSVLD_Msk (0x1UL << USB_OTG_GOTGCTL_BSVLD_Pos) /*!< 0x00080000 */
#define USB_OTG_GOTGCTL_BSVLD USB_OTG_GOTGCTL_BSVLD_Msk                /*!< B-session valid */

/********************  Bit definition for USB_OTG_HCFG register  ********************/

#define USB_OTG_HCFG_FSLSPCS_Pos (0U)
#define USB_OTG_HCFG_FSLSPCS_Msk (0x3UL << USB_OTG_HCFG_FSLSPCS_Pos) /*!< 0x00000003 */
#define USB_OTG_HCFG_FSLSPCS USB_OTG_HCFG_FSLSPCS_Msk                /*!< FS/LS PHY clock select */
#define USB_OTG_HCFG_FSLSPCS_0 (0x1UL << USB_OTG_HCFG_FSLSPCS_Pos)   /*!< 0x00000001 */
#define USB_OTG_HCFG_FSLSPCS_1 (0x2UL << USB_OTG_HCFG_FSLSPCS_Pos)   /*!< 0x00000002 */
#define USB_OTG_HCFG_FSLSS_Pos (2U)
#define USB_OTG_HCFG_FSLSS_Msk (0x1UL << USB_OTG_HCFG_FSLSS_Pos) /*!< 0x00000004 */
#define USB_OTG_HCFG_FSLSS USB_OTG_HCFG_FSLSS_Msk                /*!< FS- and LS-only support */

/********************  Bit definition for USB_OTG_DCFG register  ********************/

#define USB_OTG_DCFG_DSPD_Pos (0U)
#define USB_OTG_DCFG_DSPD_Msk (0x3UL << USB_OTG_DCFG_DSPD_Pos) /*!< 0x00000003 */
#define USB_OTG_DCFG_DSPD USB_OTG_DCFG_DSPD_Msk                /*!< Device speed */
#define USB_OTG_DCFG_DSPD_0 (0x1UL << USB_OTG_DCFG_DSPD_Pos)   /*!< 0x00000001 */
#define USB_OTG_DCFG_DSPD_1 (0x2UL << USB_OTG_DCFG_DSPD_Pos)   /*!< 0x00000002 */
#define USB_OTG_DCFG_NZLSOHSK_Pos (2U)
#define USB_OTG_DCFG_NZLSOHSK_Msk (0x1UL << USB_OTG_DCFG_NZLSOHSK_Pos) /*!< 0x00000004 */
#define USB_OTG_DCFG_NZLSOHSK USB_OTG_DCFG_NZLSOHSK_Msk                /*!< Nonzero-length status OUT handshake */

#define USB_OTG_DCFG_DAD_Pos (4U)
#define USB_OTG_DCFG_DAD_Msk (0x7FUL << USB_OTG_DCFG_DAD_Pos) /*!< 0x000007F0 */
#define USB_OTG_DCFG_DAD USB_OTG_DCFG_DAD_Msk                 /*!< Device address */
#define USB_OTG_DCFG_DAD_0 (0x01UL << USB_OTG_DCFG_DAD_Pos)   /*!< 0x00000010 */
#define USB_OTG_DCFG_DAD_1 (0x02UL << USB_OTG_DCFG_DAD_Pos)   /*!< 0x00000020 */
#define USB_OTG_DCFG_DAD_2 (0x04UL << USB_OTG_DCFG_DAD_Pos)   /*!< 0x00000040 */
#define USB_OTG_DCFG_DAD_3 (0x08UL << USB_OTG_DCFG_DAD_Pos)   /*!< 0x00000080 */
#define USB_OTG_DCFG_DAD_4 (0x10UL << USB_OTG_DCFG_DAD_Pos)   /*!< 0x00000100 */
#define USB_OTG_DCFG_DAD_5 (0x20UL << USB_OTG_DCFG_DAD_Pos)   /*!< 0x00000200 */
#define USB_OTG_DCFG_DAD_6 (0x40UL << USB_OTG_DCFG_DAD_Pos)   /*!< 0x00000400 */

#define USB_OTG_DCFG_PFIVL_Pos (11U)
#define USB_OTG_DCFG_PFIVL_Msk (0x3UL << USB_OTG_DCFG_PFIVL_Pos) /*!< 0x00001800 */
#define USB_OTG_DCFG_PFIVL USB_OTG_DCFG_PFIVL_Msk                /*!< Periodic (micro)frame interval */
#define USB_OTG_DCFG_PFIVL_0 (0x1UL << USB_OTG_DCFG_PFIVL_Pos)   /*!< 0x00000800 */
#define USB_OTG_DCFG_PFIVL_1 (0x2UL << USB_OTG_DCFG_PFIVL_Pos)   /*!< 0x00001000 */

#define USB_OTG_DCFG_PERSCHIVL_Pos (24U)
#define USB_OTG_DCFG_PERSCHIVL_Msk (0x3UL << USB_OTG_DCFG_PERSCHIVL_Pos) /*!< 0x03000000 */
#define USB_OTG_DCFG_PERSCHIVL USB_OTG_DCFG_PERSCHIVL_Msk                /*!< Periodic scheduling interval */
#define USB_OTG_DCFG_PERSCHIVL_0 (0x1UL << USB_OTG_DCFG_PERSCHIVL_Pos)   /*!< 0x01000000 */
#define USB_OTG_DCFG_PERSCHIVL_1 (0x2UL << USB_OTG_DCFG_PERSCHIVL_Pos)   /*!< 0x02000000 */

/********************  Bit definition for USB_OTG_PCGCR register  ********************/
#define USB_OTG_PCGCR_STPPCLK_Pos (0U)
#define USB_OTG_PCGCR_STPPCLK_Msk (0x1UL << USB_OTG_PCGCR_STPPCLK_Pos) /*!< 0x00000001 */
#define USB_OTG_PCGCR_STPPCLK USB_OTG_PCGCR_STPPCLK_Msk                /*!< Stop PHY clock */
#define USB_OTG_PCGCR_GATEHCLK_Pos (1U)
#define USB_OTG_PCGCR_GATEHCLK_Msk (0x1UL << USB_OTG_PCGCR_GATEHCLK_Pos) /*!< 0x00000002 */
#define USB_OTG_PCGCR_GATEHCLK USB_OTG_PCGCR_GATEHCLK_Msk                /*!< Gate HCLK */
#define USB_OTG_PCGCR_PHYSUSP_Pos (4U)
#define USB_OTG_PCGCR_PHYSUSP_Msk (0x1UL << USB_OTG_PCGCR_PHYSUSP_Pos) /*!< 0x00000010 */
#define USB_OTG_PCGCR_PHYSUSP USB_OTG_PCGCR_PHYSUSP_Msk                /*!< PHY suspended */

/********************  Bit definition for USB_OTG_GOTGINT register  ********************/
#define USB_OTG_GOTGINT_SEDET_Pos (2U)
#define USB_OTG_GOTGINT_SEDET_Msk (0x1UL << USB_OTG_GOTGINT_SEDET_Pos) /*!< 0x00000004 */
#define USB_OTG_GOTGINT_SEDET USB_OTG_GOTGINT_SEDET_Msk                /*!< Session end detected */
#define USB_OTG_GOTGINT_SRSSCHG_Pos (8U)
#define USB_OTG_GOTGINT_SRSSCHG_Msk (0x1UL << USB_OTG_GOTGINT_SRSSCHG_Pos) /*!< 0x00000100 */
#define USB_OTG_GOTGINT_SRSSCHG USB_OTG_GOTGINT_SRSSCHG_Msk                /*!< Session request success status change */
#define USB_OTG_GOTGINT_HNSSCHG_Pos (9U)
#define USB_OTG_GOTGINT_HNSSCHG_Msk (0x1UL << USB_OTG_GOTGINT_HNSSCHG_Pos) /*!< 0x00000200 */
#define USB_OTG_GOTGINT_HNSSCHG USB_OTG_GOTGINT_HNSSCHG_Msk                /*!< Host negotiation success status change */
#define USB_OTG_GOTGINT_HNGDET_Pos (17U)
#define USB_OTG_GOTGINT_HNGDET_Msk (0x1UL << USB_OTG_GOTGINT_HNGDET_Pos) /*!< 0x00020000 */
#define USB_OTG_GOTGINT_HNGDET USB_OTG_GOTGINT_HNGDET_Msk                /*!< Host negotiation detected */
#define USB_OTG_GOTGINT_ADTOCHG_Pos (18U)
#define USB_OTG_GOTGINT_ADTOCHG_Msk (0x1UL << USB_OTG_GOTGINT_ADTOCHG_Pos) /*!< 0x00040000 */
#define USB_OTG_GOTGINT_ADTOCHG USB_OTG_GOTGINT_ADTOCHG_Msk                /*!< A-device timeout change */
#define USB_OTG_GOTGINT_DBCDNE_Pos (19U)
#define USB_OTG_GOTGINT_DBCDNE_Msk (0x1UL << USB_OTG_GOTGINT_DBCDNE_Pos) /*!< 0x00080000 */
#define USB_OTG_GOTGINT_DBCDNE USB_OTG_GOTGINT_DBCDNE_Msk                /*!< Debounce done */

/********************  Bit definition for USB_OTG_DCTL register  ********************/
#define USB_OTG_DCTL_RWUSIG_Pos (0U)
#define USB_OTG_DCTL_RWUSIG_Msk (0x1UL << USB_OTG_DCTL_RWUSIG_Pos) /*!< 0x00000001 */
#define USB_OTG_DCTL_RWUSIG USB_OTG_DCTL_RWUSIG_Msk                /*!< Remote wakeup signaling */
#define USB_OTG_DCTL_SDIS_Pos (1U)
#define USB_OTG_DCTL_SDIS_Msk (0x1UL << USB_OTG_DCTL_SDIS_Pos) /*!< 0x00000002 */
#define USB_OTG_DCTL_SDIS USB_OTG_DCTL_SDIS_Msk                /*!< Soft disconnect */
#define USB_OTG_DCTL_GINSTS_Pos (2U)
#define USB_OTG_DCTL_GINSTS_Msk (0x1UL << USB_OTG_DCTL_GINSTS_Pos) /*!< 0x00000004 */
#define USB_OTG_DCTL_GINSTS USB_OTG_DCTL_GINSTS_Msk                /*!< Global IN NAK status */
#define USB_OTG_DCTL_GONSTS_Pos (3U)
#define USB_OTG_DCTL_GONSTS_Msk (0x1UL << USB_OTG_DCTL_GONSTS_Pos) /*!< 0x00000008 */
#define USB_OTG_DCTL_GONSTS USB_OTG_DCTL_GONSTS_Msk                /*!< Global OUT NAK status */

#define USB_OTG_DCTL_TCTL_Pos (4U)
#define USB_OTG_DCTL_TCTL_Msk (0x7UL << USB_OTG_DCTL_TCTL_Pos) /*!< 0x00000070 */
#define USB_OTG_DCTL_TCTL USB_OTG_DCTL_TCTL_Msk                /*!< Test control */
#define USB_OTG_DCTL_TCTL_0 (0x1UL << USB_OTG_DCTL_TCTL_Pos)   /*!< 0x00000010 */
#define USB_OTG_DCTL_TCTL_1 (0x2UL << USB_OTG_DCTL_TCTL_Pos)   /*!< 0x00000020 */
#define USB_OTG_DCTL_TCTL_2 (0x4UL << USB_OTG_DCTL_TCTL_Pos)   /*!< 0x00000040 */
#define USB_OTG_DCTL_SGINAK_Pos (7U)
#define USB_OTG_DCTL_SGINAK_Msk (0x1UL << USB_OTG_DCTL_SGINAK_Pos) /*!< 0x00000080 */
#define USB_OTG_DCTL_SGINAK USB_OTG_DCTL_SGINAK_Msk                /*!< Set global IN NAK */
#define USB_OTG_DCTL_CGINAK_Pos (8U)
#define USB_OTG_DCTL_CGINAK_Msk (0x1UL << USB_OTG_DCTL_CGINAK_Pos) /*!< 0x00000100 */
#define USB_OTG_DCTL_CGINAK USB_OTG_DCTL_CGINAK_Msk                /*!< Clear global IN NAK */
#define USB_OTG_DCTL_SGONAK_Pos (9U)
#define USB_OTG_DCTL_SGONAK_Msk (0x1UL << USB_OTG_DCTL_SGONAK_Pos) /*!< 0x00000200 */
#define USB_OTG_DCTL_SGONAK USB_OTG_DCTL_SGONAK_Msk                /*!< Set global OUT NAK */
#define USB_OTG_DCTL_CGONAK_Pos (10U)
#define USB_OTG_DCTL_CGONAK_Msk (0x1UL << USB_OTG_DCTL_CGONAK_Pos) /*!< 0x00000400 */
#define USB_OTG_DCTL_CGONAK USB_OTG_DCTL_CGONAK_Msk                /*!< Clear global OUT NAK */
#define USB_OTG_DCTL_POPRGDNE_Pos (11U)
#define USB_OTG_DCTL_POPRGDNE_Msk (0x1UL << USB_OTG_DCTL_POPRGDNE_Pos) /*!< 0x00000800 */
#define USB_OTG_DCTL_POPRGDNE USB_OTG_DCTL_POPRGDNE_Msk                /*!< Power-on programming done */

/********************  Bit definition for USB_OTG_HFIR register  ********************/
#define USB_OTG_HFIR_FRIVL_Pos (0U)
#define USB_OTG_HFIR_FRIVL_Msk (0xFFFFUL << USB_OTG_HFIR_FRIVL_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HFIR_FRIVL USB_OTG_HFIR_FRIVL_Msk                   /*!< Frame interval */

/********************  Bit definition for USB_OTG_HFNUM register  ********************/
#define USB_OTG_HFNUM_FRNUM_Pos (0U)
#define USB_OTG_HFNUM_FRNUM_Msk (0xFFFFUL << USB_OTG_HFNUM_FRNUM_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HFNUM_FRNUM USB_OTG_HFNUM_FRNUM_Msk                   /*!< Frame number */
#define USB_OTG_HFNUM_FTREM_Pos (16U)
#define USB_OTG_HFNUM_FTREM_Msk (0xFFFFUL << USB_OTG_HFNUM_FTREM_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_HFNUM_FTREM USB_OTG_HFNUM_FTREM_Msk                   /*!< Frame time remaining */

/********************  Bit definition for USB_OTG_DSTS register  ********************/
#define USB_OTG_DSTS_SUSPSTS_Pos (0U)
#define USB_OTG_DSTS_SUSPSTS_Msk (0x1UL << USB_OTG_DSTS_SUSPSTS_Pos) /*!< 0x00000001 */
#define USB_OTG_DSTS_SUSPSTS USB_OTG_DSTS_SUSPSTS_Msk                /*!< Suspend status */

#define USB_OTG_DSTS_ENUMSPD_Pos (1U)
#define USB_OTG_DSTS_ENUMSPD_Msk (0x3UL << USB_OTG_DSTS_ENUMSPD_Pos) /*!< 0x00000006 */
#define USB_OTG_DSTS_ENUMSPD USB_OTG_DSTS_ENUMSPD_Msk                /*!< Enumerated speed */
#define USB_OTG_DSTS_ENUMSPD_0 (0x1UL << USB_OTG_DSTS_ENUMSPD_Pos)   /*!< 0x00000002 */
#define USB_OTG_DSTS_ENUMSPD_1 (0x2UL << USB_OTG_DSTS_ENUMSPD_Pos)   /*!< 0x00000004 */
#define USB_OTG_DSTS_EERR_Pos (3U)
#define USB_OTG_DSTS_EERR_Msk (0x1UL << USB_OTG_DSTS_EERR_Pos) /*!< 0x00000008 */
#define USB_OTG_DSTS_EERR USB_OTG_DSTS_EERR_Msk                /*!< Erratic error */
#define USB_OTG_DSTS_FNSOF_Pos (8U)
#define USB_OTG_DSTS_FNSOF_Msk (0x3FFFUL << USB_OTG_DSTS_FNSOF_Pos) /*!< 0x003FFF00 */
#define USB_OTG_DSTS_FNSOF USB_OTG_DSTS_FNSOF_Msk                   /*!< Frame number of the received SOF */

/********************  Bit definition for USB_OTG_GAHBCFG register  ********************/
#define USB_OTG_GAHBCFG_GINT_Pos (0U)
#define USB_OTG_GAHBCFG_GINT_Msk (0x1UL << USB_OTG_GAHBCFG_GINT_Pos) /*!< 0x00000001 */
#define USB_OTG_GAHBCFG_GINT USB_OTG_GAHBCFG_GINT_Msk                /*!< Global interrupt mask */
#define USB_OTG_GAHBCFG_HBSTLEN_Pos (1U)
#define USB_OTG_GAHBCFG_HBSTLEN_Msk (0xFUL << USB_OTG_GAHBCFG_HBSTLEN_Pos) /*!< 0x0000001E */
#define USB_OTG_GAHBCFG_HBSTLEN USB_OTG_GAHBCFG_HBSTLEN_Msk                /*!< Burst length/type */
#define USB_OTG_GAHBCFG_HBSTLEN_0 (0x0UL << USB_OTG_GAHBCFG_HBSTLEN_Pos)   /*!< Single */
#define USB_OTG_GAHBCFG_HBSTLEN_1 (0x1UL << USB_OTG_GAHBCFG_HBSTLEN_Pos)   /*!< INCR */
#define USB_OTG_GAHBCFG_HBSTLEN_2 (0x3UL << USB_OTG_GAHBCFG_HBSTLEN_Pos)   /*!< INCR4 */
#define USB_OTG_GAHBCFG_HBSTLEN_3 (0x5UL << USB_OTG_GAHBCFG_HBSTLEN_Pos)   /*!< INCR8 */
#define USB_OTG_GAHBCFG_HBSTLEN_4 (0x7UL << USB_OTG_GAHBCFG_HBSTLEN_Pos)   /*!< INCR16 */
#define USB_OTG_GAHBCFG_DMAEN_Pos (5U)
#define USB_OTG_GAHBCFG_DMAEN_Msk (0x1UL << USB_OTG_GAHBCFG_DMAEN_Pos) /*!< 0x00000020 */
#define USB_OTG_GAHBCFG_DMAEN USB_OTG_GAHBCFG_DMAEN_Msk                /*!< DMA enable */
#define USB_OTG_GAHBCFG_TXFELVL_Pos (7U)
#define USB_OTG_GAHBCFG_TXFELVL_Msk (0x1UL << USB_OTG_GAHBCFG_TXFELVL_Pos) /*!< 0x00000080 */
#define USB_OTG_GAHBCFG_TXFELVL USB_OTG_GAHBCFG_TXFELVL_Msk                /*!< TxFIFO empty level */
#define USB_OTG_GAHBCFG_PTXFELVL_Pos (8U)
#define USB_OTG_GAHBCFG_PTXFELVL_Msk (0x1UL << USB_OTG_GAHBCFG_PTXFELVL_Pos) /*!< 0x00000100 */
#define USB_OTG_GAHBCFG_PTXFELVL USB_OTG_GAHBCFG_PTXFELVL_Msk                /*!< Periodic TxFIFO empty level */

/********************  Bit definition for USB_OTG_GUSBCFG register  ********************/

#define USB_OTG_GUSBCFG_TOCAL_Pos (0U)
#define USB_OTG_GUSBCFG_TOCAL_Msk (0x7UL << USB_OTG_GUSBCFG_TOCAL_Pos) /*!< 0x00000007 */
#define USB_OTG_GUSBCFG_TOCAL USB_OTG_GUSBCFG_TOCAL_Msk                /*!< FS timeout calibration */
#define USB_OTG_GUSBCFG_TOCAL_0 (0x1UL << USB_OTG_GUSBCFG_TOCAL_Pos)   /*!< 0x00000001 */
#define USB_OTG_GUSBCFG_TOCAL_1 (0x2UL << USB_OTG_GUSBCFG_TOCAL_Pos)   /*!< 0x00000002 */
#define USB_OTG_GUSBCFG_TOCAL_2 (0x4UL << USB_OTG_GUSBCFG_TOCAL_Pos)   /*!< 0x00000004 */
#define USB_OTG_GUSBCFG_PHYSEL_Pos (6U)
#define USB_OTG_GUSBCFG_PHYSEL_Msk (0x1UL << USB_OTG_GUSBCFG_PHYSEL_Pos) /*!< 0x00000040 */
#define USB_OTG_GUSBCFG_PHYSEL USB_OTG_GUSBCFG_PHYSEL_Msk /*!< USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select */
#define USB_OTG_GUSBCFG_SRPCAP_Pos (8U)
#define USB_OTG_GUSBCFG_SRPCAP_Msk (0x1UL << USB_OTG_GUSBCFG_SRPCAP_Pos) /*!< 0x00000100 */
#define USB_OTG_GUSBCFG_SRPCAP USB_OTG_GUSBCFG_SRPCAP_Msk                /*!< SRP-capable */
#define USB_OTG_GUSBCFG_HNPCAP_Pos (9U)
#define USB_OTG_GUSBCFG_HNPCAP_Msk (0x1UL << USB_OTG_GUSBCFG_HNPCAP_Pos) /*!< 0x00000200 */
#define USB_OTG_GUSBCFG_HNPCAP USB_OTG_GUSBCFG_HNPCAP_Msk                /*!< HNP-capable */
#define USB_OTG_GUSBCFG_TRDT_Pos (10U)
#define USB_OTG_GUSBCFG_TRDT_Msk (0xFUL << USB_OTG_GUSBCFG_TRDT_Pos) /*!< 0x00003C00 */
#define USB_OTG_GUSBCFG_TRDT USB_OTG_GUSBCFG_TRDT_Msk                /*!< USB turnaround time */
#define USB_OTG_GUSBCFG_TRDT_0 (0x1UL << USB_OTG_GUSBCFG_TRDT_Pos)   /*!< 0x00000400 */
#define USB_OTG_GUSBCFG_TRDT_1 (0x2UL << USB_OTG_GUSBCFG_TRDT_Pos)   /*!< 0x00000800 */
#define USB_OTG_GUSBCFG_TRDT_2 (0x4UL << USB_OTG_GUSBCFG_TRDT_Pos)   /*!< 0x00001000 */
#define USB_OTG_GUSBCFG_TRDT_3 (0x8UL << USB_OTG_GUSBCFG_TRDT_Pos)   /*!< 0x00002000 */
#define USB_OTG_GUSBCFG_PHYLPCS_Pos (15U)
#define USB_OTG_GUSBCFG_PHYLPCS_Msk (0x1UL << USB_OTG_GUSBCFG_PHYLPCS_Pos) /*!< 0x00008000 */
#define USB_OTG_GUSBCFG_PHYLPCS USB_OTG_GUSBCFG_PHYLPCS_Msk                /*!< PHY Low-power clock select */
#define USB_OTG_GUSBCFG_ULPIFSLS_Pos (17U)
#define USB_OTG_GUSBCFG_ULPIFSLS_Msk (0x1UL << USB_OTG_GUSBCFG_ULPIFSLS_Pos) /*!< 0x00020000 */
#define USB_OTG_GUSBCFG_ULPIFSLS USB_OTG_GUSBCFG_ULPIFSLS_Msk                /*!< ULPI FS/LS select */
#define USB_OTG_GUSBCFG_ULPIAR_Pos (18U)
#define USB_OTG_GUSBCFG_ULPIAR_Msk (0x1UL << USB_OTG_GUSBCFG_ULPIAR_Pos) /*!< 0x00040000 */
#define USB_OTG_GUSBCFG_ULPIAR USB_OTG_GUSBCFG_ULPIAR_Msk                /*!< ULPI Auto-resume */
#define USB_OTG_GUSBCFG_ULPICSM_Pos (19U)
#define USB_OTG_GUSBCFG_ULPICSM_Msk (0x1UL << USB_OTG_GUSBCFG_ULPICSM_Pos) /*!< 0x00080000 */
#define USB_OTG_GUSBCFG_ULPICSM USB_OTG_GUSBCFG_ULPICSM_Msk                /*!< ULPI Clock SuspendM */
#define USB_OTG_GUSBCFG_ULPIEVBUSD_Pos (20U)
#define USB_OTG_GUSBCFG_ULPIEVBUSD_Msk (0x1UL << USB_OTG_GUSBCFG_ULPIEVBUSD_Pos) /*!< 0x00100000 */
#define USB_OTG_GUSBCFG_ULPIEVBUSD USB_OTG_GUSBCFG_ULPIEVBUSD_Msk                /*!< ULPI External VBUS Drive */
#define USB_OTG_GUSBCFG_ULPIEVBUSI_Pos (21U)
#define USB_OTG_GUSBCFG_ULPIEVBUSI_Msk (0x1UL << USB_OTG_GUSBCFG_ULPIEVBUSI_Pos) /*!< 0x00200000 */
#define USB_OTG_GUSBCFG_ULPIEVBUSI USB_OTG_GUSBCFG_ULPIEVBUSI_Msk                /*!< ULPI external VBUS indicator */
#define USB_OTG_GUSBCFG_TSDPS_Pos (22U)
#define USB_OTG_GUSBCFG_TSDPS_Msk (0x1UL << USB_OTG_GUSBCFG_TSDPS_Pos) /*!< 0x00400000 */
#define USB_OTG_GUSBCFG_TSDPS USB_OTG_GUSBCFG_TSDPS_Msk                /*!< TermSel DLine pulsing selection */
#define USB_OTG_GUSBCFG_PCCI_Pos (23U)
#define USB_OTG_GUSBCFG_PCCI_Msk (0x1UL << USB_OTG_GUSBCFG_PCCI_Pos) /*!< 0x00800000 */
#define USB_OTG_GUSBCFG_PCCI USB_OTG_GUSBCFG_PCCI_Msk                /*!< Indicator complement */
#define USB_OTG_GUSBCFG_PTCI_Pos (24U)
#define USB_OTG_GUSBCFG_PTCI_Msk (0x1UL << USB_OTG_GUSBCFG_PTCI_Pos) /*!< 0x01000000 */
#define USB_OTG_GUSBCFG_PTCI USB_OTG_GUSBCFG_PTCI_Msk                /*!< Indicator pass through */
#define USB_OTG_GUSBCFG_ULPIIPD_Pos (25U)
#define USB_OTG_GUSBCFG_ULPIIPD_Msk (0x1UL << USB_OTG_GUSBCFG_ULPIIPD_Pos) /*!< 0x02000000 */
#define USB_OTG_GUSBCFG_ULPIIPD USB_OTG_GUSBCFG_ULPIIPD_Msk                /*!< ULPI interface protect disable */
#define USB_OTG_GUSBCFG_FHMOD_Pos (29U)
#define USB_OTG_GUSBCFG_FHMOD_Msk (0x1UL << USB_OTG_GUSBCFG_FHMOD_Pos) /*!< 0x20000000 */
#define USB_OTG_GUSBCFG_FHMOD USB_OTG_GUSBCFG_FHMOD_Msk                /*!< Forced host mode */
#define USB_OTG_GUSBCFG_FDMOD_Pos (30U)
#define USB_OTG_GUSBCFG_FDMOD_Msk (0x1UL << USB_OTG_GUSBCFG_FDMOD_Pos) /*!< 0x40000000 */
#define USB_OTG_GUSBCFG_FDMOD USB_OTG_GUSBCFG_FDMOD_Msk                /*!< Forced peripheral mode */
#define USB_OTG_GUSBCFG_CTXPKT_Pos (31U)
#define USB_OTG_GUSBCFG_CTXPKT_Msk (0x1UL << USB_OTG_GUSBCFG_CTXPKT_Pos) /*!< 0x80000000 */
#define USB_OTG_GUSBCFG_CTXPKT USB_OTG_GUSBCFG_CTXPKT_Msk                /*!< Corrupt Tx packet */

/********************  Bit definition for USB_OTG_GRSTCTL register  ********************/
#define USB_OTG_GRSTCTL_CSRST_Pos (0U)
#define USB_OTG_GRSTCTL_CSRST_Msk (0x1UL << USB_OTG_GRSTCTL_CSRST_Pos) /*!< 0x00000001 */
#define USB_OTG_GRSTCTL_CSRST USB_OTG_GRSTCTL_CSRST_Msk                /*!< Core soft reset */
#define USB_OTG_GRSTCTL_HSRST_Pos (1U)
#define USB_OTG_GRSTCTL_HSRST_Msk (0x1UL << USB_OTG_GRSTCTL_HSRST_Pos) /*!< 0x00000002 */
#define USB_OTG_GRSTCTL_HSRST USB_OTG_GRSTCTL_HSRST_Msk                /*!< HCLK soft reset */
#define USB_OTG_GRSTCTL_FCRST_Pos (2U)
#define USB_OTG_GRSTCTL_FCRST_Msk (0x1UL << USB_OTG_GRSTCTL_FCRST_Pos) /*!< 0x00000004 */
#define USB_OTG_GRSTCTL_FCRST USB_OTG_GRSTCTL_FCRST_Msk                /*!< Host frame counter reset */
#define USB_OTG_GRSTCTL_RXFFLSH_Pos (4U)
#define USB_OTG_GRSTCTL_RXFFLSH_Msk (0x1UL << USB_OTG_GRSTCTL_RXFFLSH_Pos) /*!< 0x00000010 */
#define USB_OTG_GRSTCTL_RXFFLSH USB_OTG_GRSTCTL_RXFFLSH_Msk                /*!< RxFIFO flush */
#define USB_OTG_GRSTCTL_TXFFLSH_Pos (5U)
#define USB_OTG_GRSTCTL_TXFFLSH_Msk (0x1UL << USB_OTG_GRSTCTL_TXFFLSH_Pos) /*!< 0x00000020 */
#define USB_OTG_GRSTCTL_TXFFLSH USB_OTG_GRSTCTL_TXFFLSH_Msk                /*!< TxFIFO flush */

#define USB_OTG_GRSTCTL_TXFNUM_Pos (6U)
#define USB_OTG_GRSTCTL_TXFNUM_Msk (0x1FUL << USB_OTG_GRSTCTL_TXFNUM_Pos) /*!< 0x000007C0 */
#define USB_OTG_GRSTCTL_TXFNUM USB_OTG_GRSTCTL_TXFNUM_Msk                 /*!< TxFIFO number */
#define USB_OTG_GRSTCTL_TXFNUM_0 (0x01UL << USB_OTG_GRSTCTL_TXFNUM_Pos)   /*!< 0x00000040 */
#define USB_OTG_GRSTCTL_TXFNUM_1 (0x02UL << USB_OTG_GRSTCTL_TXFNUM_Pos)   /*!< 0x00000080 */
#define USB_OTG_GRSTCTL_TXFNUM_2 (0x04UL << USB_OTG_GRSTCTL_TXFNUM_Pos)   /*!< 0x00000100 */
#define USB_OTG_GRSTCTL_TXFNUM_3 (0x08UL << USB_OTG_GRSTCTL_TXFNUM_Pos)   /*!< 0x00000200 */
#define USB_OTG_GRSTCTL_TXFNUM_4 (0x10UL << USB_OTG_GRSTCTL_TXFNUM_Pos)   /*!< 0x00000400 */
#define USB_OTG_GRSTCTL_DMAREQ_Pos (30U)
#define USB_OTG_GRSTCTL_DMAREQ_Msk (0x1UL << USB_OTG_GRSTCTL_DMAREQ_Pos) /*!< 0x40000000 */
#define USB_OTG_GRSTCTL_DMAREQ USB_OTG_GRSTCTL_DMAREQ_Msk                /*!< DMA request signal */
#define USB_OTG_GRSTCTL_AHBIDL_Pos (31U)
#define USB_OTG_GRSTCTL_AHBIDL_Msk (0x1UL << USB_OTG_GRSTCTL_AHBIDL_Pos) /*!< 0x80000000 */
#define USB_OTG_GRSTCTL_AHBIDL USB_OTG_GRSTCTL_AHBIDL_Msk                /*!< AHB master idle */

/********************  Bit definition for USB_OTG_DIEPMSK register  ********************/
#define USB_OTG_DIEPMSK_XFRCM_Pos (0U)
#define USB_OTG_DIEPMSK_XFRCM_Msk (0x1UL << USB_OTG_DIEPMSK_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_DIEPMSK_XFRCM USB_OTG_DIEPMSK_XFRCM_Msk                /*!< Transfer completed interrupt mask */
#define USB_OTG_DIEPMSK_EPDM_Pos (1U)
#define USB_OTG_DIEPMSK_EPDM_Msk (0x1UL << USB_OTG_DIEPMSK_EPDM_Pos) /*!< 0x00000002 */
#define USB_OTG_DIEPMSK_EPDM USB_OTG_DIEPMSK_EPDM_Msk                /*!< Endpoint disabled interrupt mask */
#define USB_OTG_DIEPMSK_TOM_Pos (3U)
#define USB_OTG_DIEPMSK_TOM_Msk (0x1UL << USB_OTG_DIEPMSK_TOM_Pos) /*!< 0x00000008 */
#define USB_OTG_DIEPMSK_TOM USB_OTG_DIEPMSK_TOM_Msk                /*!< Timeout condition mask (nonisochronous endpoints) */
#define USB_OTG_DIEPMSK_ITTXFEMSK_Pos (4U)
#define USB_OTG_DIEPMSK_ITTXFEMSK_Msk (0x1UL << USB_OTG_DIEPMSK_ITTXFEMSK_Pos) /*!< 0x00000010 */
#define USB_OTG_DIEPMSK_ITTXFEMSK USB_OTG_DIEPMSK_ITTXFEMSK_Msk                /*!< IN token received when TxFIFO empty mask */
#define USB_OTG_DIEPMSK_INEPNMM_Pos (5U)
#define USB_OTG_DIEPMSK_INEPNMM_Msk (0x1UL << USB_OTG_DIEPMSK_INEPNMM_Pos) /*!< 0x00000020 */
#define USB_OTG_DIEPMSK_INEPNMM USB_OTG_DIEPMSK_INEPNMM_Msk                /*!< IN token received with EP mismatch mask */
#define USB_OTG_DIEPMSK_INEPNEM_Pos (6U)
#define USB_OTG_DIEPMSK_INEPNEM_Msk (0x1UL << USB_OTG_DIEPMSK_INEPNEM_Pos) /*!< 0x00000040 */
#define USB_OTG_DIEPMSK_INEPNEM USB_OTG_DIEPMSK_INEPNEM_Msk                /*!< IN endpoint NAK effective mask */
#define USB_OTG_DIEPMSK_TXFURM_Pos (8U)
#define USB_OTG_DIEPMSK_TXFURM_Msk (0x1UL << USB_OTG_DIEPMSK_TXFURM_Pos) /*!< 0x00000100 */
#define USB_OTG_DIEPMSK_TXFURM USB_OTG_DIEPMSK_TXFURM_Msk                /*!< FIFO underrun mask */
#define USB_OTG_DIEPMSK_BIM_Pos (9U)
#define USB_OTG_DIEPMSK_BIM_Msk (0x1UL << USB_OTG_DIEPMSK_BIM_Pos) /*!< 0x00000200 */
#define USB_OTG_DIEPMSK_BIM USB_OTG_DIEPMSK_BIM_Msk                /*!< BNA interrupt mask */

/********************  Bit definition for USB_OTG_HPTXSTS register  ********************/
#define USB_OTG_HPTXSTS_PTXFSAVL_Pos (0U)
#define USB_OTG_HPTXSTS_PTXFSAVL_Msk (0xFFFFUL << USB_OTG_HPTXSTS_PTXFSAVL_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HPTXSTS_PTXFSAVL USB_OTG_HPTXSTS_PTXFSAVL_Msk                   /*!< Periodic transmit data FIFO space available */
#define USB_OTG_HPTXSTS_PTXQSAV_Pos (16U)
#define USB_OTG_HPTXSTS_PTXQSAV_Msk (0xFFUL << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00FF0000 */
#define USB_OTG_HPTXSTS_PTXQSAV USB_OTG_HPTXSTS_PTXQSAV_Msk                 /*!< Periodic transmit request queue space available */
#define USB_OTG_HPTXSTS_PTXQSAV_0 (0x01UL << USB_OTG_HPTXSTS_PTXQSAV_Pos)   /*!< 0x00010000 */
#define USB_OTG_HPTXSTS_PTXQSAV_1 (0x02UL << USB_OTG_HPTXSTS_PTXQSAV_Pos)   /*!< 0x00020000 */
#define USB_OTG_HPTXSTS_PTXQSAV_2 (0x04UL << USB_OTG_HPTXSTS_PTXQSAV_Pos)   /*!< 0x00040000 */
#define USB_OTG_HPTXSTS_PTXQSAV_3 (0x08UL << USB_OTG_HPTXSTS_PTXQSAV_Pos)   /*!< 0x00080000 */
#define USB_OTG_HPTXSTS_PTXQSAV_4 (0x10UL << USB_OTG_HPTXSTS_PTXQSAV_Pos)   /*!< 0x00100000 */
#define USB_OTG_HPTXSTS_PTXQSAV_5 (0x20UL << USB_OTG_HPTXSTS_PTXQSAV_Pos)   /*!< 0x00200000 */
#define USB_OTG_HPTXSTS_PTXQSAV_6 (0x40UL << USB_OTG_HPTXSTS_PTXQSAV_Pos)   /*!< 0x00400000 */
#define USB_OTG_HPTXSTS_PTXQSAV_7 (0x80UL << USB_OTG_HPTXSTS_PTXQSAV_Pos)   /*!< 0x00800000 */

#define USB_OTG_HPTXSTS_PTXQTOP_Pos (24U)
#define USB_OTG_HPTXSTS_PTXQTOP_Msk (0xFFUL << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0xFF000000 */
#define USB_OTG_HPTXSTS_PTXQTOP USB_OTG_HPTXSTS_PTXQTOP_Msk                 /*!< Top of the periodic transmit request queue */
#define USB_OTG_HPTXSTS_PTXQTOP_0 (0x01UL << USB_OTG_HPTXSTS_PTXQTOP_Pos)   /*!< 0x01000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_1 (0x02UL << USB_OTG_HPTXSTS_PTXQTOP_Pos)   /*!< 0x02000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_2 (0x04UL << USB_OTG_HPTXSTS_PTXQTOP_Pos)   /*!< 0x04000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_3 (0x08UL << USB_OTG_HPTXSTS_PTXQTOP_Pos)   /*!< 0x08000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_4 (0x10UL << USB_OTG_HPTXSTS_PTXQTOP_Pos)   /*!< 0x10000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_5 (0x20UL << USB_OTG_HPTXSTS_PTXQTOP_Pos)   /*!< 0x20000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_6 (0x40UL << USB_OTG_HPTXSTS_PTXQTOP_Pos)   /*!< 0x40000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_7 (0x80UL << USB_OTG_HPTXSTS_PTXQTOP_Pos)   /*!< 0x80000000 */

/********************  Bit definition for USB_OTG_HAINT register  ********************/
#define USB_OTG_HAINT_HAINT_Pos (0U)
#define USB_OTG_HAINT_HAINT_Msk (0xFFFFUL << USB_OTG_HAINT_HAINT_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HAINT_HAINT USB_OTG_HAINT_HAINT_Msk                   /*!< Channel interrupts */

/********************  Bit definition for USB_OTG_DOEPMSK register  ********************/
#define USB_OTG_DOEPMSK_XFRCM_Pos (0U)
#define USB_OTG_DOEPMSK_XFRCM_Msk (0x1UL << USB_OTG_DOEPMSK_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_DOEPMSK_XFRCM USB_OTG_DOEPMSK_XFRCM_Msk                /*!< Transfer completed interrupt mask */
#define USB_OTG_DOEPMSK_EPDM_Pos (1U)
#define USB_OTG_DOEPMSK_EPDM_Msk (0x1UL << USB_OTG_DOEPMSK_EPDM_Pos) /*!< 0x00000002 */
#define USB_OTG_DOEPMSK_EPDM USB_OTG_DOEPMSK_EPDM_Msk                /*!< Endpoint disabled interrupt mask */
#define USB_OTG_DOEPMSK_AHBERRM_Pos (2U)
#define USB_OTG_DOEPMSK_AHBERRM_Msk (0x1UL << USB_OTG_DOEPMSK_AHBERRM_Pos) /*!< 0x00000004 */
#define USB_OTG_DOEPMSK_AHBERRM USB_OTG_DOEPMSK_AHBERRM_Msk                /*!< OUT transaction AHB Error interrupt mask       */
#define USB_OTG_DOEPMSK_STUPM_Pos (3U)
#define USB_OTG_DOEPMSK_STUPM_Msk (0x1UL << USB_OTG_DOEPMSK_STUPM_Pos) /*!< 0x00000008 */
#define USB_OTG_DOEPMSK_STUPM USB_OTG_DOEPMSK_STUPM_Msk                /*!< SETUP phase done mask */
#define USB_OTG_DOEPMSK_OTEPDM_Pos (4U)
#define USB_OTG_DOEPMSK_OTEPDM_Msk (0x1UL << USB_OTG_DOEPMSK_OTEPDM_Pos) /*!< 0x00000010 */
#define USB_OTG_DOEPMSK_OTEPDM USB_OTG_DOEPMSK_OTEPDM_Msk                /*!< OUT token received when endpoint disabled mask */
#define USB_OTG_DOEPMSK_OTEPSPRM_Pos (5U)
#define USB_OTG_DOEPMSK_OTEPSPRM_Msk (0x1UL << USB_OTG_DOEPMSK_OTEPSPRM_Pos) /*!< 0x00000020 */
#define USB_OTG_DOEPMSK_OTEPSPRM USB_OTG_DOEPMSK_OTEPSPRM_Msk                /*!< Status Phase Received mask                     */
#define USB_OTG_DOEPMSK_B2BSTUP_Pos (6U)
#define USB_OTG_DOEPMSK_B2BSTUP_Msk (0x1UL << USB_OTG_DOEPMSK_B2BSTUP_Pos) /*!< 0x00000040 */
#define USB_OTG_DOEPMSK_B2BSTUP USB_OTG_DOEPMSK_B2BSTUP_Msk                /*!< Back-to-back SETUP packets received mask */
#define USB_OTG_DOEPMSK_OPEM_Pos (8U)
#define USB_OTG_DOEPMSK_OPEM_Msk (0x1UL << USB_OTG_DOEPMSK_OPEM_Pos) /*!< 0x00000100 */
#define USB_OTG_DOEPMSK_OPEM USB_OTG_DOEPMSK_OPEM_Msk                /*!< OUT packet error mask */
#define USB_OTG_DOEPMSK_BOIM_Pos (9U)
#define USB_OTG_DOEPMSK_BOIM_Msk (0x1UL << USB_OTG_DOEPMSK_BOIM_Pos) /*!< 0x00000200 */
#define USB_OTG_DOEPMSK_BOIM USB_OTG_DOEPMSK_BOIM_Msk                /*!< BNA interrupt mask */
#define USB_OTG_DOEPMSK_BERRM_Pos (12U)
#define USB_OTG_DOEPMSK_BERRM_Msk (0x1UL << USB_OTG_DOEPMSK_BERRM_Pos) /*!< 0x00001000 */
#define USB_OTG_DOEPMSK_BERRM USB_OTG_DOEPMSK_BERRM_Msk                /*!< Babble error interrupt mask                   */
#define USB_OTG_DOEPMSK_NAKM_Pos (13U)
#define USB_OTG_DOEPMSK_NAKM_Msk (0x1UL << USB_OTG_DOEPMSK_NAKM_Pos) /*!< 0x00002000 */
#define USB_OTG_DOEPMSK_NAKM USB_OTG_DOEPMSK_NAKM_Msk                /*!< OUT Packet NAK interrupt mask                  */
#define USB_OTG_DOEPMSK_NYETM_Pos (14U)
#define USB_OTG_DOEPMSK_NYETM_Msk (0x1UL << USB_OTG_DOEPMSK_NYETM_Pos) /*!< 0x00004000 */
#define USB_OTG_DOEPMSK_NYETM USB_OTG_DOEPMSK_NYETM_Msk                /*!< NYET interrupt mask                            */
/********************  Bit definition for USB_OTG_GINTSTS register  ********************/
#define USB_OTG_GINTSTS_CMOD_Pos (0U)
#define USB_OTG_GINTSTS_CMOD_Msk (0x1UL << USB_OTG_GINTSTS_CMOD_Pos) /*!< 0x00000001 */
#define USB_OTG_GINTSTS_CMOD USB_OTG_GINTSTS_CMOD_Msk                /*!< Current mode of operation */
#define USB_OTG_GINTSTS_MMIS_Pos (1U)
#define USB_OTG_GINTSTS_MMIS_Msk (0x1UL << USB_OTG_GINTSTS_MMIS_Pos) /*!< 0x00000002 */
#define USB_OTG_GINTSTS_MMIS USB_OTG_GINTSTS_MMIS_Msk                /*!< Mode mismatch interrupt */
#define USB_OTG_GINTSTS_OTGINT_Pos (2U)
#define USB_OTG_GINTSTS_OTGINT_Msk (0x1UL << USB_OTG_GINTSTS_OTGINT_Pos) /*!< 0x00000004 */
#define USB_OTG_GINTSTS_OTGINT USB_OTG_GINTSTS_OTGINT_Msk                /*!< OTG interrupt */
#define USB_OTG_GINTSTS_SOF_Pos (3U)
#define USB_OTG_GINTSTS_SOF_Msk (0x1UL << USB_OTG_GINTSTS_SOF_Pos) /*!< 0x00000008 */
#define USB_OTG_GINTSTS_SOF USB_OTG_GINTSTS_SOF_Msk                /*!< Start of frame */
#define USB_OTG_GINTSTS_RXFLVL_Pos (4U)
#define USB_OTG_GINTSTS_RXFLVL_Msk (0x1UL << USB_OTG_GINTSTS_RXFLVL_Pos) /*!< 0x00000010 */
#define USB_OTG_GINTSTS_RXFLVL USB_OTG_GINTSTS_RXFLVL_Msk                /*!< RxFIFO nonempty */
#define USB_OTG_GINTSTS_NPTXFE_Pos (5U)
#define USB_OTG_GINTSTS_NPTXFE_Msk (0x1UL << USB_OTG_GINTSTS_NPTXFE_Pos) /*!< 0x00000020 */
#define USB_OTG_GINTSTS_NPTXFE USB_OTG_GINTSTS_NPTXFE_Msk                /*!< Nonperiodic TxFIFO empty */
#define USB_OTG_GINTSTS_GINAKEFF_Pos (6U)
#define USB_OTG_GINTSTS_GINAKEFF_Msk (0x1UL << USB_OTG_GINTSTS_GINAKEFF_Pos) /*!< 0x00000040 */
#define USB_OTG_GINTSTS_GINAKEFF USB_OTG_GINTSTS_GINAKEFF_Msk                /*!< Global IN nonperiodic NAK effective */
#define USB_OTG_GINTSTS_BOUTNAKEFF_Pos (7U)
#define USB_OTG_GINTSTS_BOUTNAKEFF_Msk (0x1UL << USB_OTG_GINTSTS_BOUTNAKEFF_Pos) /*!< 0x00000080 */
#define USB_OTG_GINTSTS_BOUTNAKEFF USB_OTG_GINTSTS_BOUTNAKEFF_Msk                /*!< Global OUT NAK effective */
#define USB_OTG_GINTSTS_ESUSP_Pos (10U)
#define USB_OTG_GINTSTS_ESUSP_Msk (0x1UL << USB_OTG_GINTSTS_ESUSP_Pos) /*!< 0x00000400 */
#define USB_OTG_GINTSTS_ESUSP USB_OTG_GINTSTS_ESUSP_Msk                /*!< Early suspend */
#define USB_OTG_GINTSTS_USBSUSP_Pos (11U)
#define USB_OTG_GINTSTS_USBSUSP_Msk (0x1UL << USB_OTG_GINTSTS_USBSUSP_Pos) /*!< 0x00000800 */
#define USB_OTG_GINTSTS_USBSUSP USB_OTG_GINTSTS_USBSUSP_Msk                /*!< USB suspend */
#define USB_OTG_GINTSTS_USBRST_Pos (12U)
#define USB_OTG_GINTSTS_USBRST_Msk (0x1UL << USB_OTG_GINTSTS_USBRST_Pos) /*!< 0x00001000 */
#define USB_OTG_GINTSTS_USBRST USB_OTG_GINTSTS_USBRST_Msk                /*!< USB reset */
#define USB_OTG_GINTSTS_ENUMDNE_Pos (13U)
#define USB_OTG_GINTSTS_ENUMDNE_Msk (0x1UL << USB_OTG_GINTSTS_ENUMDNE_Pos) /*!< 0x00002000 */
#define USB_OTG_GINTSTS_ENUMDNE USB_OTG_GINTSTS_ENUMDNE_Msk                /*!< Enumeration done */
#define USB_OTG_GINTSTS_ISOODRP_Pos (14U)
#define USB_OTG_GINTSTS_ISOODRP_Msk (0x1UL << USB_OTG_GINTSTS_ISOODRP_Pos) /*!< 0x00004000 */
#define USB_OTG_GINTSTS_ISOODRP USB_OTG_GINTSTS_ISOODRP_Msk                /*!< Isochronous OUT packet dropped interrupt */
#define USB_OTG_GINTSTS_EOPF_Pos (15U)
#define USB_OTG_GINTSTS_EOPF_Msk (0x1UL << USB_OTG_GINTSTS_EOPF_Pos) /*!< 0x00008000 */
#define USB_OTG_GINTSTS_EOPF USB_OTG_GINTSTS_EOPF_Msk                /*!< End of periodic frame interrupt */
#define USB_OTG_GINTSTS_IEPINT_Pos (18U)
#define USB_OTG_GINTSTS_IEPINT_Msk (0x1UL << USB_OTG_GINTSTS_IEPINT_Pos) /*!< 0x00040000 */
#define USB_OTG_GINTSTS_IEPINT USB_OTG_GINTSTS_IEPINT_Msk                /*!< IN endpoint interrupt */
#define USB_OTG_GINTSTS_OEPINT_Pos (19U)
#define USB_OTG_GINTSTS_OEPINT_Msk (0x1UL << USB_OTG_GINTSTS_OEPINT_Pos) /*!< 0x00080000 */
#define USB_OTG_GINTSTS_OEPINT USB_OTG_GINTSTS_OEPINT_Msk                /*!< OUT endpoint interrupt */
#define USB_OTG_GINTSTS_IISOIXFR_Pos (20U)
#define USB_OTG_GINTSTS_IISOIXFR_Msk (0x1UL << USB_OTG_GINTSTS_IISOIXFR_Pos) /*!< 0x00100000 */
#define USB_OTG_GINTSTS_IISOIXFR USB_OTG_GINTSTS_IISOIXFR_Msk                /*!< Incomplete isochronous IN transfer */
#define USB_OTG_GINTSTS_PXFR_INCOMPISOOUT_Pos (21U)
#define USB_OTG_GINTSTS_PXFR_INCOMPISOOUT_Msk (0x1UL << USB_OTG_GINTSTS_PXFR_INCOMPISOOUT_Pos) /*!< 0x00200000 */
#define USB_OTG_GINTSTS_PXFR_INCOMPISOOUT USB_OTG_GINTSTS_PXFR_INCOMPISOOUT_Msk                /*!< Incomplete periodic transfer */
#define USB_OTG_GINTSTS_DATAFSUSP_Pos (22U)
#define USB_OTG_GINTSTS_DATAFSUSP_Msk (0x1UL << USB_OTG_GINTSTS_DATAFSUSP_Pos) /*!< 0x00400000 */
#define USB_OTG_GINTSTS_DATAFSUSP USB_OTG_GINTSTS_DATAFSUSP_Msk                /*!< Data fetch suspended */
#define USB_OTG_GINTSTS_HPRTINT_Pos (24U)
#define USB_OTG_GINTSTS_HPRTINT_Msk (0x1UL << USB_OTG_GINTSTS_HPRTINT_Pos) /*!< 0x01000000 */
#define USB_OTG_GINTSTS_HPRTINT USB_OTG_GINTSTS_HPRTINT_Msk                /*!< Host port interrupt */
#define USB_OTG_GINTSTS_HCINT_Pos (25U)
#define USB_OTG_GINTSTS_HCINT_Msk (0x1UL << USB_OTG_GINTSTS_HCINT_Pos) /*!< 0x02000000 */
#define USB_OTG_GINTSTS_HCINT USB_OTG_GINTSTS_HCINT_Msk                /*!< Host channels interrupt */
#define USB_OTG_GINTSTS_PTXFE_Pos (26U)
#define USB_OTG_GINTSTS_PTXFE_Msk (0x1UL << USB_OTG_GINTSTS_PTXFE_Pos) /*!< 0x04000000 */
#define USB_OTG_GINTSTS_PTXFE USB_OTG_GINTSTS_PTXFE_Msk                /*!< Periodic TxFIFO empty */
#define USB_OTG_GINTSTS_CIDSCHG_Pos (28U)
#define USB_OTG_GINTSTS_CIDSCHG_Msk (0x1UL << USB_OTG_GINTSTS_CIDSCHG_Pos) /*!< 0x10000000 */
#define USB_OTG_GINTSTS_CIDSCHG USB_OTG_GINTSTS_CIDSCHG_Msk                /*!< Connector ID status change */
#define USB_OTG_GINTSTS_DISCINT_Pos (29U)
#define USB_OTG_GINTSTS_DISCINT_Msk (0x1UL << USB_OTG_GINTSTS_DISCINT_Pos) /*!< 0x20000000 */
#define USB_OTG_GINTSTS_DISCINT USB_OTG_GINTSTS_DISCINT_Msk                /*!< Disconnect detected interrupt */
#define USB_OTG_GINTSTS_SRQINT_Pos (30U)
#define USB_OTG_GINTSTS_SRQINT_Msk (0x1UL << USB_OTG_GINTSTS_SRQINT_Pos) /*!< 0x40000000 */
#define USB_OTG_GINTSTS_SRQINT USB_OTG_GINTSTS_SRQINT_Msk                /*!< Session request/new session detected interrupt */
#define USB_OTG_GINTSTS_WKUINT_Pos (31U)
#define USB_OTG_GINTSTS_WKUINT_Msk (0x1UL << USB_OTG_GINTSTS_WKUINT_Pos) /*!< 0x80000000 */
#define USB_OTG_GINTSTS_WKUINT USB_OTG_GINTSTS_WKUINT_Msk                /*!< Resume/remote wakeup detected interrupt */

/********************  Bit definition for USB_OTG_GINTMSK register  ********************/
#define USB_OTG_GINTMSK_MMISM_Pos (1U)
#define USB_OTG_GINTMSK_MMISM_Msk (0x1UL << USB_OTG_GINTMSK_MMISM_Pos) /*!< 0x00000002 */
#define USB_OTG_GINTMSK_MMISM USB_OTG_GINTMSK_MMISM_Msk                /*!< Mode mismatch interrupt mask */
#define USB_OTG_GINTMSK_OTGINT_Pos (2U)
#define USB_OTG_GINTMSK_OTGINT_Msk (0x1UL << USB_OTG_GINTMSK_OTGINT_Pos) /*!< 0x00000004 */
#define USB_OTG_GINTMSK_OTGINT USB_OTG_GINTMSK_OTGINT_Msk                /*!< OTG interrupt mask */
#define USB_OTG_GINTMSK_SOFM_Pos (3U)
#define USB_OTG_GINTMSK_SOFM_Msk (0x1UL << USB_OTG_GINTMSK_SOFM_Pos) /*!< 0x00000008 */
#define USB_OTG_GINTMSK_SOFM USB_OTG_GINTMSK_SOFM_Msk                /*!< Start of frame mask */
#define USB_OTG_GINTMSK_RXFLVLM_Pos (4U)
#define USB_OTG_GINTMSK_RXFLVLM_Msk (0x1UL << USB_OTG_GINTMSK_RXFLVLM_Pos) /*!< 0x00000010 */
#define USB_OTG_GINTMSK_RXFLVLM USB_OTG_GINTMSK_RXFLVLM_Msk                /*!< Receive FIFO nonempty mask */
#define USB_OTG_GINTMSK_NPTXFEM_Pos (5U)
#define USB_OTG_GINTMSK_NPTXFEM_Msk (0x1UL << USB_OTG_GINTMSK_NPTXFEM_Pos) /*!< 0x00000020 */
#define USB_OTG_GINTMSK_NPTXFEM USB_OTG_GINTMSK_NPTXFEM_Msk                /*!< Nonperiodic TxFIFO empty mask */
#define USB_OTG_GINTMSK_GINAKEFFM_Pos (6U)
#define USB_OTG_GINTMSK_GINAKEFFM_Msk (0x1UL << USB_OTG_GINTMSK_GINAKEFFM_Pos) /*!< 0x00000040 */
#define USB_OTG_GINTMSK_GINAKEFFM USB_OTG_GINTMSK_GINAKEFFM_Msk                /*!< Global nonperiodic IN NAK effective mask */
#define USB_OTG_GINTMSK_GONAKEFFM_Pos (7U)
#define USB_OTG_GINTMSK_GONAKEFFM_Msk (0x1UL << USB_OTG_GINTMSK_GONAKEFFM_Pos) /*!< 0x00000080 */
#define USB_OTG_GINTMSK_GONAKEFFM USB_OTG_GINTMSK_GONAKEFFM_Msk                /*!< Global OUT NAK effective mask */
#define USB_OTG_GINTMSK_ESUSPM_Pos (10U)
#define USB_OTG_GINTMSK_ESUSPM_Msk (0x1UL << USB_OTG_GINTMSK_ESUSPM_Pos) /*!< 0x00000400 */
#define USB_OTG_GINTMSK_ESUSPM USB_OTG_GINTMSK_ESUSPM_Msk                /*!< Early suspend mask */
#define USB_OTG_GINTMSK_USBSUSPM_Pos (11U)
#define USB_OTG_GINTMSK_USBSUSPM_Msk (0x1UL << USB_OTG_GINTMSK_USBSUSPM_Pos) /*!< 0x00000800 */
#define USB_OTG_GINTMSK_USBSUSPM USB_OTG_GINTMSK_USBSUSPM_Msk                /*!< USB suspend mask */
#define USB_OTG_GINTMSK_USBRST_Pos (12U)
#define USB_OTG_GINTMSK_USBRST_Msk (0x1UL << USB_OTG_GINTMSK_USBRST_Pos) /*!< 0x00001000 */
#define USB_OTG_GINTMSK_USBRST USB_OTG_GINTMSK_USBRST_Msk                /*!< USB reset mask */
#define USB_OTG_GINTMSK_ENUMDNEM_Pos (13U)
#define USB_OTG_GINTMSK_ENUMDNEM_Msk (0x1UL << USB_OTG_GINTMSK_ENUMDNEM_Pos) /*!< 0x00002000 */
#define USB_OTG_GINTMSK_ENUMDNEM USB_OTG_GINTMSK_ENUMDNEM_Msk                /*!< Enumeration done mask */
#define USB_OTG_GINTMSK_ISOODRPM_Pos (14U)
#define USB_OTG_GINTMSK_ISOODRPM_Msk (0x1UL << USB_OTG_GINTMSK_ISOODRPM_Pos) /*!< 0x00004000 */
#define USB_OTG_GINTMSK_ISOODRPM USB_OTG_GINTMSK_ISOODRPM_Msk                /*!< Isochronous OUT packet dropped interrupt mask */
#define USB_OTG_GINTMSK_EOPFM_Pos (15U)
#define USB_OTG_GINTMSK_EOPFM_Msk (0x1UL << USB_OTG_GINTMSK_EOPFM_Pos) /*!< 0x00008000 */
#define USB_OTG_GINTMSK_EOPFM USB_OTG_GINTMSK_EOPFM_Msk                /*!< End of periodic frame interrupt mask */
#define USB_OTG_GINTMSK_EPMISM_Pos (17U)
#define USB_OTG_GINTMSK_EPMISM_Msk (0x1UL << USB_OTG_GINTMSK_EPMISM_Pos) /*!< 0x00020000 */
#define USB_OTG_GINTMSK_EPMISM USB_OTG_GINTMSK_EPMISM_Msk                /*!< Endpoint mismatch interrupt mask */
#define USB_OTG_GINTMSK_IEPINT_Pos (18U)
#define USB_OTG_GINTMSK_IEPINT_Msk (0x1UL << USB_OTG_GINTMSK_IEPINT_Pos) /*!< 0x00040000 */
#define USB_OTG_GINTMSK_IEPINT USB_OTG_GINTMSK_IEPINT_Msk                /*!< IN endpoints interrupt mask */
#define USB_OTG_GINTMSK_OEPINT_Pos (19U)
#define USB_OTG_GINTMSK_OEPINT_Msk (0x1UL << USB_OTG_GINTMSK_OEPINT_Pos) /*!< 0x00080000 */
#define USB_OTG_GINTMSK_OEPINT USB_OTG_GINTMSK_OEPINT_Msk                /*!< OUT endpoints interrupt mask */
#define USB_OTG_GINTMSK_IISOIXFRM_Pos (20U)
#define USB_OTG_GINTMSK_IISOIXFRM_Msk (0x1UL << USB_OTG_GINTMSK_IISOIXFRM_Pos) /*!< 0x00100000 */
#define USB_OTG_GINTMSK_IISOIXFRM USB_OTG_GINTMSK_IISOIXFRM_Msk                /*!< Incomplete isochronous IN transfer mask */
#define USB_OTG_GINTMSK_PXFRM_IISOOXFRM_Pos (21U)
#define USB_OTG_GINTMSK_PXFRM_IISOOXFRM_Msk (0x1UL << USB_OTG_GINTMSK_PXFRM_IISOOXFRM_Pos) /*!< 0x00200000 */
#define USB_OTG_GINTMSK_PXFRM_IISOOXFRM USB_OTG_GINTMSK_PXFRM_IISOOXFRM_Msk                /*!< Incomplete periodic transfer mask */
#define USB_OTG_GINTMSK_FSUSPM_Pos (22U)
#define USB_OTG_GINTMSK_FSUSPM_Msk (0x1UL << USB_OTG_GINTMSK_FSUSPM_Pos) /*!< 0x00400000 */
#define USB_OTG_GINTMSK_FSUSPM USB_OTG_GINTMSK_FSUSPM_Msk                /*!< Data fetch suspended mask */
#define USB_OTG_GINTMSK_PRTIM_Pos (24U)
#define USB_OTG_GINTMSK_PRTIM_Msk (0x1UL << USB_OTG_GINTMSK_PRTIM_Pos) /*!< 0x01000000 */
#define USB_OTG_GINTMSK_PRTIM USB_OTG_GINTMSK_PRTIM_Msk                /*!< Host port interrupt mask */
#define USB_OTG_GINTMSK_HCIM_Pos (25U)
#define USB_OTG_GINTMSK_HCIM_Msk (0x1UL << USB_OTG_GINTMSK_HCIM_Pos) /*!< 0x02000000 */
#define USB_OTG_GINTMSK_HCIM USB_OTG_GINTMSK_HCIM_Msk                /*!< Host channels interrupt mask */
#define USB_OTG_GINTMSK_PTXFEM_Pos (26U)
#define USB_OTG_GINTMSK_PTXFEM_Msk (0x1UL << USB_OTG_GINTMSK_PTXFEM_Pos) /*!< 0x04000000 */
#define USB_OTG_GINTMSK_PTXFEM USB_OTG_GINTMSK_PTXFEM_Msk                /*!< Periodic TxFIFO empty mask */
#define USB_OTG_GINTMSK_CIDSCHGM_Pos (28U)
#define USB_OTG_GINTMSK_CIDSCHGM_Msk (0x1UL << USB_OTG_GINTMSK_CIDSCHGM_Pos) /*!< 0x10000000 */
#define USB_OTG_GINTMSK_CIDSCHGM USB_OTG_GINTMSK_CIDSCHGM_Msk                /*!< Connector ID status change mask */
#define USB_OTG_GINTMSK_DISCINT_Pos (29U)
#define USB_OTG_GINTMSK_DISCINT_Msk (0x1UL << USB_OTG_GINTMSK_DISCINT_Pos) /*!< 0x20000000 */
#define USB_OTG_GINTMSK_DISCINT USB_OTG_GINTMSK_DISCINT_Msk                /*!< Disconnect detected interrupt mask */
#define USB_OTG_GINTMSK_SRQIM_Pos (30U)
#define USB_OTG_GINTMSK_SRQIM_Msk (0x1UL << USB_OTG_GINTMSK_SRQIM_Pos) /*!< 0x40000000 */
#define USB_OTG_GINTMSK_SRQIM USB_OTG_GINTMSK_SRQIM_Msk                /*!< Session request/new session detected interrupt mask */
#define USB_OTG_GINTMSK_WUIM_Pos (31U)
#define USB_OTG_GINTMSK_WUIM_Msk (0x1UL << USB_OTG_GINTMSK_WUIM_Pos) /*!< 0x80000000 */
#define USB_OTG_GINTMSK_WUIM USB_OTG_GINTMSK_WUIM_Msk                /*!< Resume/remote wakeup detected interrupt mask */

/********************  Bit definition for USB_OTG_DAINT register  ********************/
#define USB_OTG_DAINT_IEPINT_Pos (0U)
#define USB_OTG_DAINT_IEPINT_Msk (0xFFFFUL << USB_OTG_DAINT_IEPINT_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DAINT_IEPINT USB_OTG_DAINT_IEPINT_Msk                   /*!< IN endpoint interrupt bits */
#define USB_OTG_DAINT_OEPINT_Pos (16U)
#define USB_OTG_DAINT_OEPINT_Msk (0xFFFFUL << USB_OTG_DAINT_OEPINT_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_DAINT_OEPINT USB_OTG_DAINT_OEPINT_Msk                   /*!< OUT endpoint interrupt bits */

/********************  Bit definition for USB_OTG_HAINTMSK register  ********************/
#define USB_OTG_HAINTMSK_HAINTM_Pos (0U)
#define USB_OTG_HAINTMSK_HAINTM_Msk (0xFFFFUL << USB_OTG_HAINTMSK_HAINTM_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HAINTMSK_HAINTM USB_OTG_HAINTMSK_HAINTM_Msk                   /*!< Channel interrupt mask */

/********************  Bit definition for USB_OTG_GRXSTSP register  ********************/
#define USB_OTG_GRXSTSP_EPNUM_Pos (0U)
#define USB_OTG_GRXSTSP_EPNUM_Msk (0xFUL << USB_OTG_GRXSTSP_EPNUM_Pos) /*!< 0x0000000F */
#define USB_OTG_GRXSTSP_EPNUM USB_OTG_GRXSTSP_EPNUM_Msk                /*!< IN EP interrupt mask bits */
#define USB_OTG_GRXSTSP_BCNT_Pos (4U)
#define USB_OTG_GRXSTSP_BCNT_Msk (0x7FFUL << USB_OTG_GRXSTSP_BCNT_Pos) /*!< 0x00007FF0 */
#define USB_OTG_GRXSTSP_BCNT USB_OTG_GRXSTSP_BCNT_Msk                  /*!< OUT EP interrupt mask bits */
#define USB_OTG_GRXSTSP_DPID_Pos (15U)
#define USB_OTG_GRXSTSP_DPID_Msk (0x3UL << USB_OTG_GRXSTSP_DPID_Pos) /*!< 0x00018000 */
#define USB_OTG_GRXSTSP_DPID USB_OTG_GRXSTSP_DPID_Msk                /*!< OUT EP interrupt mask bits */
#define USB_OTG_GRXSTSP_PKTSTS_Pos (17U)
#define USB_OTG_GRXSTSP_PKTSTS_Msk (0xFUL << USB_OTG_GRXSTSP_PKTSTS_Pos) /*!< 0x001E0000 */
#define USB_OTG_GRXSTSP_PKTSTS USB_OTG_GRXSTSP_PKTSTS_Msk                /*!< OUT EP interrupt mask bits */

/********************  Bit definition for USB_OTG_DAINTMSK register  ********************/
#define USB_OTG_DAINTMSK_IEPM_Pos (0U)
#define USB_OTG_DAINTMSK_IEPM_Msk (0xFFFFUL << USB_OTG_DAINTMSK_IEPM_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DAINTMSK_IEPM USB_OTG_DAINTMSK_IEPM_Msk                   /*!< IN EP interrupt mask bits */
#define USB_OTG_DAINTMSK_OEPM_Pos (16U)
#define USB_OTG_DAINTMSK_OEPM_Msk (0xFFFFUL << USB_OTG_DAINTMSK_OEPM_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_DAINTMSK_OEPM USB_OTG_DAINTMSK_OEPM_Msk                   /*!< OUT EP interrupt mask bits */

/********************  Bit definition for USB_OTG_GRXFSIZ register  ********************/
#define USB_OTG_GRXFSIZ_RXFD_Pos (0U)
#define USB_OTG_GRXFSIZ_RXFD_Msk (0xFFFFUL << USB_OTG_GRXFSIZ_RXFD_Pos) /*!< 0x0000FFFF */
#define USB_OTG_GRXFSIZ_RXFD USB_OTG_GRXFSIZ_RXFD_Msk                   /*!< RxFIFO depth */

/********************  Bit definition for USB_OTG_DVBUSDIS register  ********************/
#define USB_OTG_DVBUSDIS_VBUSDT_Pos (0U)
#define USB_OTG_DVBUSDIS_VBUSDT_Msk (0xFFFFUL << USB_OTG_DVBUSDIS_VBUSDT_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DVBUSDIS_VBUSDT USB_OTG_DVBUSDIS_VBUSDT_Msk                   /*!< Device VBUS discharge time */

/********************  Bit definition for OTG register  ********************/
#define USB_OTG_NPTXFSA_Pos (0U)
#define USB_OTG_NPTXFSA_Msk (0xFFFFUL << USB_OTG_NPTXFSA_Pos) /*!< 0x0000FFFF */
#define USB_OTG_NPTXFSA USB_OTG_NPTXFSA_Msk                   /*!< Nonperiodic transmit RAM start address */
#define USB_OTG_NPTXFD_Pos (16U)
#define USB_OTG_NPTXFD_Msk (0xFFFFUL << USB_OTG_NPTXFD_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_NPTXFD USB_OTG_NPTXFD_Msk                   /*!< Nonperiodic TxFIFO depth */
#define USB_OTG_TX0FSA_Pos (0U)
#define USB_OTG_TX0FSA_Msk (0xFFFFUL << USB_OTG_TX0FSA_Pos) /*!< 0x0000FFFF */
#define USB_OTG_TX0FSA USB_OTG_TX0FSA_Msk                   /*!< Endpoint 0 transmit RAM start address */
#define USB_OTG_TX0FD_Pos (16U)
#define USB_OTG_TX0FD_Msk (0xFFFFUL << USB_OTG_TX0FD_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_TX0FD USB_OTG_TX0FD_Msk                   /*!< Endpoint 0 TxFIFO depth */

/********************  Bit definition for USB_OTG_DVBUSPULSE register  ********************/
#define USB_OTG_DVBUSPULSE_DVBUSP_Pos (0U)
#define USB_OTG_DVBUSPULSE_DVBUSP_Msk (0xFFFUL << USB_OTG_DVBUSPULSE_DVBUSP_Pos) /*!< 0x00000FFF */
#define USB_OTG_DVBUSPULSE_DVBUSP USB_OTG_DVBUSPULSE_DVBUSP_Msk                  /*!< Device VBUS pulsing time */

/********************  Bit definition for USB_OTG_GNPTXSTS register  ********************/
#define USB_OTG_GNPTXSTS_NPTXFSAV_Pos (0U)
#define USB_OTG_GNPTXSTS_NPTXFSAV_Msk (0xFFFFUL << USB_OTG_GNPTXSTS_NPTXFSAV_Pos) /*!< 0x0000FFFF */
#define USB_OTG_GNPTXSTS_NPTXFSAV USB_OTG_GNPTXSTS_NPTXFSAV_Msk                   /*!< Nonperiodic TxFIFO space available */

#define USB_OTG_GNPTXSTS_NPTQXSAV_Pos (16U)
#define USB_OTG_GNPTXSTS_NPTQXSAV_Msk (0xFFUL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00FF0000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV USB_OTG_GNPTXSTS_NPTQXSAV_Msk                 /*!< Nonperiodic transmit request queue space available */
#define USB_OTG_GNPTXSTS_NPTQXSAV_0 (0x01UL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos)   /*!< 0x00010000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_1 (0x02UL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos)   /*!< 0x00020000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_2 (0x04UL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos)   /*!< 0x00040000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_3 (0x08UL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos)   /*!< 0x00080000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_4 (0x10UL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos)   /*!< 0x00100000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_5 (0x20UL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos)   /*!< 0x00200000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_6 (0x40UL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos)   /*!< 0x00400000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_7 (0x80UL << USB_OTG_GNPTXSTS_NPTQXSAV_Pos)   /*!< 0x00800000 */

#define USB_OTG_GNPTXSTS_NPTXQTOP_Pos (24U)
#define USB_OTG_GNPTXSTS_NPTXQTOP_Msk (0x7FUL << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x7F000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP USB_OTG_GNPTXSTS_NPTXQTOP_Msk                 /*!< Top of the nonperiodic transmit request queue */
#define USB_OTG_GNPTXSTS_NPTXQTOP_0 (0x01UL << USB_OTG_GNPTXSTS_NPTXQTOP_Pos)   /*!< 0x01000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_1 (0x02UL << USB_OTG_GNPTXSTS_NPTXQTOP_Pos)   /*!< 0x02000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_2 (0x04UL << USB_OTG_GNPTXSTS_NPTXQTOP_Pos)   /*!< 0x04000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_3 (0x08UL << USB_OTG_GNPTXSTS_NPTXQTOP_Pos)   /*!< 0x08000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_4 (0x10UL << USB_OTG_GNPTXSTS_NPTXQTOP_Pos)   /*!< 0x10000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_5 (0x20UL << USB_OTG_GNPTXSTS_NPTXQTOP_Pos)   /*!< 0x20000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_6 (0x40UL << USB_OTG_GNPTXSTS_NPTXQTOP_Pos)   /*!< 0x40000000 */

/********************  Bit definition for USB_OTG_DTHRCTL register  ********************/
#define USB_OTG_DTHRCTL_NONISOTHREN_Pos (0U)
#define USB_OTG_DTHRCTL_NONISOTHREN_Msk (0x1UL << USB_OTG_DTHRCTL_NONISOTHREN_Pos) /*!< 0x00000001 */
#define USB_OTG_DTHRCTL_NONISOTHREN                                                   \
    USB_OTG_DTHRCTL_NONISOTHREN_Msk /*!< Nonisochronous IN endpoints threshold enable \
                                     */
#define USB_OTG_DTHRCTL_ISOTHREN_Pos (1U)
#define USB_OTG_DTHRCTL_ISOTHREN_Msk (0x1UL << USB_OTG_DTHRCTL_ISOTHREN_Pos) /*!< 0x00000002 */
#define USB_OTG_DTHRCTL_ISOTHREN USB_OTG_DTHRCTL_ISOTHREN_Msk                /*!< ISO IN endpoint threshold enable */

#define USB_OTG_DTHRCTL_TXTHRLEN_Pos (2U)
#define USB_OTG_DTHRCTL_TXTHRLEN_Msk (0x1FFUL << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x000007FC */
#define USB_OTG_DTHRCTL_TXTHRLEN USB_OTG_DTHRCTL_TXTHRLEN_Msk                  /*!< Transmit threshold length */
#define USB_OTG_DTHRCTL_TXTHRLEN_0 (0x001UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000004 */
#define USB_OTG_DTHRCTL_TXTHRLEN_1 (0x002UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000008 */
#define USB_OTG_DTHRCTL_TXTHRLEN_2 (0x004UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000010 */
#define USB_OTG_DTHRCTL_TXTHRLEN_3 (0x008UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000020 */
#define USB_OTG_DTHRCTL_TXTHRLEN_4 (0x010UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000040 */
#define USB_OTG_DTHRCTL_TXTHRLEN_5 (0x020UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000080 */
#define USB_OTG_DTHRCTL_TXTHRLEN_6 (0x040UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000100 */
#define USB_OTG_DTHRCTL_TXTHRLEN_7 (0x080UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000200 */
#define USB_OTG_DTHRCTL_TXTHRLEN_8 (0x100UL << USB_OTG_DTHRCTL_TXTHRLEN_Pos)   /*!< 0x00000400 */
#define USB_OTG_DTHRCTL_RXTHREN_Pos (16U)
#define USB_OTG_DTHRCTL_RXTHREN_Msk (0x1UL << USB_OTG_DTHRCTL_RXTHREN_Pos) /*!< 0x00010000 */
#define USB_OTG_DTHRCTL_RXTHREN USB_OTG_DTHRCTL_RXTHREN_Msk                /*!< Receive threshold enable */

#define USB_OTG_DTHRCTL_RXTHRLEN_Pos (17U)
#define USB_OTG_DTHRCTL_RXTHRLEN_Msk (0x1FFUL << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x03FE0000 */
#define USB_OTG_DTHRCTL_RXTHRLEN USB_OTG_DTHRCTL_RXTHRLEN_Msk                  /*!< Receive threshold length */
#define USB_OTG_DTHRCTL_RXTHRLEN_0 (0x001UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x00020000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_1 (0x002UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x00040000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_2 (0x004UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x00080000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_3 (0x008UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x00100000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_4 (0x010UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x00200000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_5 (0x020UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x00400000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_6 (0x040UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x00800000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_7 (0x080UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x01000000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_8 (0x100UL << USB_OTG_DTHRCTL_RXTHRLEN_Pos)   /*!< 0x02000000 */
#define USB_OTG_DTHRCTL_ARPEN_Pos (27U)
#define USB_OTG_DTHRCTL_ARPEN_Msk (0x1UL << USB_OTG_DTHRCTL_ARPEN_Pos) /*!< 0x08000000 */
#define USB_OTG_DTHRCTL_ARPEN USB_OTG_DTHRCTL_ARPEN_Msk                /*!< Arbiter parking enable */

/********************  Bit definition for USB_OTG_DIEPEMPMSK register  ********************/
#define USB_OTG_DIEPEMPMSK_INEPTXFEM_Pos (0U)
#define USB_OTG_DIEPEMPMSK_INEPTXFEM_Msk (0xFFFFUL << USB_OTG_DIEPEMPMSK_INEPTXFEM_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DIEPEMPMSK_INEPTXFEM USB_OTG_DIEPEMPMSK_INEPTXFEM_Msk                   /*!< IN EP Tx FIFO empty interrupt mask bits */

/********************  Bit definition for USB_OTG_DEACHINT register  ********************/
#define USB_OTG_DEACHINT_IEP1INT_Pos (1U)
#define USB_OTG_DEACHINT_IEP1INT_Msk (0x1UL << USB_OTG_DEACHINT_IEP1INT_Pos) /*!< 0x00000002 */
#define USB_OTG_DEACHINT_IEP1INT USB_OTG_DEACHINT_IEP1INT_Msk                /*!< IN endpoint 1interrupt bit */
#define USB_OTG_DEACHINT_OEP1INT_Pos (17U)
#define USB_OTG_DEACHINT_OEP1INT_Msk (0x1UL << USB_OTG_DEACHINT_OEP1INT_Pos) /*!< 0x00020000 */
#define USB_OTG_DEACHINT_OEP1INT USB_OTG_DEACHINT_OEP1INT_Msk                /*!< OUT endpoint 1 interrupt bit */

/********************  Bit definition for USB_OTG_GCCFG register  ********************/
#define USB_OTG_GCCFG_PWRDWN_Pos (16U)
#define USB_OTG_GCCFG_PWRDWN_Msk (0x1UL << USB_OTG_GCCFG_PWRDWN_Pos) /*!< 0x00010000 */
#define USB_OTG_GCCFG_PWRDWN USB_OTG_GCCFG_PWRDWN_Msk                /*!< Power down */
#define USB_OTG_GCCFG_VBUSASEN_Pos (18U)
#define USB_OTG_GCCFG_VBUSASEN_Msk (0x1UL << USB_OTG_GCCFG_VBUSASEN_Pos) /*!< 0x00040000 */
#define USB_OTG_GCCFG_VBUSASEN USB_OTG_GCCFG_VBUSASEN_Msk                /*!< Enable the VBUS sensing device */
#define USB_OTG_GCCFG_VBUSBSEN_Pos (19U)
#define USB_OTG_GCCFG_VBUSBSEN_Msk (0x1UL << USB_OTG_GCCFG_VBUSBSEN_Pos) /*!< 0x00080000 */
#define USB_OTG_GCCFG_VBUSBSEN USB_OTG_GCCFG_VBUSBSEN_Msk                /*!< Enable the VBUS sensing device */
#define USB_OTG_GCCFG_SOFOUTEN_Pos (20U)
#define USB_OTG_GCCFG_SOFOUTEN_Msk (0x1UL << USB_OTG_GCCFG_SOFOUTEN_Pos) /*!< 0x00100000 */
#define USB_OTG_GCCFG_SOFOUTEN USB_OTG_GCCFG_SOFOUTEN_Msk                /*!< SOF output enable */

/********************  Bit definition for USB_OTG_DEACHINTMSK register  ********************/
#define USB_OTG_DEACHINTMSK_IEP1INTM_Pos (1U)
#define USB_OTG_DEACHINTMSK_IEP1INTM_Msk (0x1UL << USB_OTG_DEACHINTMSK_IEP1INTM_Pos) /*!< 0x00000002 */
#define USB_OTG_DEACHINTMSK_IEP1INTM USB_OTG_DEACHINTMSK_IEP1INTM_Msk                /*!< IN Endpoint 1 interrupt mask bit */
#define USB_OTG_DEACHINTMSK_OEP1INTM_Pos (17U)
#define USB_OTG_DEACHINTMSK_OEP1INTM_Msk (0x1UL << USB_OTG_DEACHINTMSK_OEP1INTM_Pos) /*!< 0x00020000 */
#define USB_OTG_DEACHINTMSK_OEP1INTM USB_OTG_DEACHINTMSK_OEP1INTM_Msk                /*!< OUT Endpoint 1 interrupt mask bit */

/********************  Bit definition for USB_OTG_CID register  ********************/
#define USB_OTG_CID_PRODUCT_ID_Pos (0U)
#define USB_OTG_CID_PRODUCT_ID_Msk (0xFFFFFFFFUL << USB_OTG_CID_PRODUCT_ID_Pos) /*!< 0xFFFFFFFF */
#define USB_OTG_CID_PRODUCT_ID USB_OTG_CID_PRODUCT_ID_Msk                       /*!< Product ID field */

/********************  Bit definition for USB_OTG_DIEPEACHMSK1 register  ********************/
#define USB_OTG_DIEPEACHMSK1_XFRCM_Pos (0U)
#define USB_OTG_DIEPEACHMSK1_XFRCM_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_DIEPEACHMSK1_XFRCM USB_OTG_DIEPEACHMSK1_XFRCM_Msk                /*!< Transfer completed interrupt mask */
#define USB_OTG_DIEPEACHMSK1_EPDM_Pos (1U)
#define USB_OTG_DIEPEACHMSK1_EPDM_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_EPDM_Pos) /*!< 0x00000002 */
#define USB_OTG_DIEPEACHMSK1_EPDM USB_OTG_DIEPEACHMSK1_EPDM_Msk                /*!< Endpoint disabled interrupt mask */
#define USB_OTG_DIEPEACHMSK1_TOM_Pos (3U)
#define USB_OTG_DIEPEACHMSK1_TOM_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_TOM_Pos) /*!< 0x00000008 */
#define USB_OTG_DIEPEACHMSK1_TOM                                                        \
    USB_OTG_DIEPEACHMSK1_TOM_Msk /*!< Timeout condition mask (nonisochronous endpoints) \
                                  */
#define USB_OTG_DIEPEACHMSK1_ITTXFEMSK_Pos (4U)
#define USB_OTG_DIEPEACHMSK1_ITTXFEMSK_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_ITTXFEMSK_Pos) /*!< 0x00000010 */
#define USB_OTG_DIEPEACHMSK1_ITTXFEMSK USB_OTG_DIEPEACHMSK1_ITTXFEMSK_Msk                /*!< IN token received when TxFIFO empty mask */
#define USB_OTG_DIEPEACHMSK1_INEPNMM_Pos (5U)
#define USB_OTG_DIEPEACHMSK1_INEPNMM_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_INEPNMM_Pos) /*!< 0x00000020 */
#define USB_OTG_DIEPEACHMSK1_INEPNMM USB_OTG_DIEPEACHMSK1_INEPNMM_Msk                /*!< IN token received with EP mismatch mask */
#define USB_OTG_DIEPEACHMSK1_INEPNEM_Pos (6U)
#define USB_OTG_DIEPEACHMSK1_INEPNEM_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_INEPNEM_Pos) /*!< 0x00000040 */
#define USB_OTG_DIEPEACHMSK1_INEPNEM USB_OTG_DIEPEACHMSK1_INEPNEM_Msk                /*!< IN endpoint NAK effective mask */
#define USB_OTG_DIEPEACHMSK1_TXFURM_Pos (8U)
#define USB_OTG_DIEPEACHMSK1_TXFURM_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_TXFURM_Pos) /*!< 0x00000100 */
#define USB_OTG_DIEPEACHMSK1_TXFURM USB_OTG_DIEPEACHMSK1_TXFURM_Msk                /*!< FIFO underrun mask */
#define USB_OTG_DIEPEACHMSK1_BIM_Pos (9U)
#define USB_OTG_DIEPEACHMSK1_BIM_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_BIM_Pos) /*!< 0x00000200 */
#define USB_OTG_DIEPEACHMSK1_BIM USB_OTG_DIEPEACHMSK1_BIM_Msk                /*!< BNA interrupt mask */
#define USB_OTG_DIEPEACHMSK1_NAKM_Pos (13U)
#define USB_OTG_DIEPEACHMSK1_NAKM_Msk (0x1UL << USB_OTG_DIEPEACHMSK1_NAKM_Pos) /*!< 0x00002000 */
#define USB_OTG_DIEPEACHMSK1_NAKM USB_OTG_DIEPEACHMSK1_NAKM_Msk                /*!< NAK interrupt mask */

/********************  Bit definition for USB_OTG_HPRT register  ********************/
#define USB_OTG_HPRT_PCSTS_Pos (0U)
#define USB_OTG_HPRT_PCSTS_Msk (0x1UL << USB_OTG_HPRT_PCSTS_Pos) /*!< 0x00000001 */
#define USB_OTG_HPRT_PCSTS USB_OTG_HPRT_PCSTS_Msk                /*!< Port connect status */
#define USB_OTG_HPRT_PCDET_Pos (1U)
#define USB_OTG_HPRT_PCDET_Msk (0x1UL << USB_OTG_HPRT_PCDET_Pos) /*!< 0x00000002 */
#define USB_OTG_HPRT_PCDET USB_OTG_HPRT_PCDET_Msk                /*!< Port connect detected */
#define USB_OTG_HPRT_PENA_Pos (2U)
#define USB_OTG_HPRT_PENA_Msk (0x1UL << USB_OTG_HPRT_PENA_Pos) /*!< 0x00000004 */
#define USB_OTG_HPRT_PENA USB_OTG_HPRT_PENA_Msk                /*!< Port enable */
#define USB_OTG_HPRT_PENCHNG_Pos (3U)
#define USB_OTG_HPRT_PENCHNG_Msk (0x1UL << USB_OTG_HPRT_PENCHNG_Pos) /*!< 0x00000008 */
#define USB_OTG_HPRT_PENCHNG USB_OTG_HPRT_PENCHNG_Msk                /*!< Port enable/disable change */
#define USB_OTG_HPRT_POCA_Pos (4U)
#define USB_OTG_HPRT_POCA_Msk (0x1UL << USB_OTG_HPRT_POCA_Pos) /*!< 0x00000010 */
#define USB_OTG_HPRT_POCA USB_OTG_HPRT_POCA_Msk                /*!< Port overcurrent active */
#define USB_OTG_HPRT_POCCHNG_Pos (5U)
#define USB_OTG_HPRT_POCCHNG_Msk (0x1UL << USB_OTG_HPRT_POCCHNG_Pos) /*!< 0x00000020 */
#define USB_OTG_HPRT_POCCHNG USB_OTG_HPRT_POCCHNG_Msk                /*!< Port overcurrent change */
#define USB_OTG_HPRT_PRES_Pos (6U)
#define USB_OTG_HPRT_PRES_Msk (0x1UL << USB_OTG_HPRT_PRES_Pos) /*!< 0x00000040 */
#define USB_OTG_HPRT_PRES USB_OTG_HPRT_PRES_Msk                /*!< Port resume */
#define USB_OTG_HPRT_PSUSP_Pos (7U)
#define USB_OTG_HPRT_PSUSP_Msk (0x1UL << USB_OTG_HPRT_PSUSP_Pos) /*!< 0x00000080 */
#define USB_OTG_HPRT_PSUSP USB_OTG_HPRT_PSUSP_Msk                /*!< Port suspend */
#define USB_OTG_HPRT_PRST_Pos (8U)
#define USB_OTG_HPRT_PRST_Msk (0x1UL << USB_OTG_HPRT_PRST_Pos) /*!< 0x00000100 */
#define USB_OTG_HPRT_PRST USB_OTG_HPRT_PRST_Msk                /*!< Port reset */

#define USB_OTG_HPRT_PLSTS_Pos (10U)
#define USB_OTG_HPRT_PLSTS_Msk (0x3UL << USB_OTG_HPRT_PLSTS_Pos) /*!< 0x00000C00 */
#define USB_OTG_HPRT_PLSTS USB_OTG_HPRT_PLSTS_Msk                /*!< Port line status */
#define USB_OTG_HPRT_PLSTS_0 (0x1UL << USB_OTG_HPRT_PLSTS_Pos)   /*!< 0x00000400 */
#define USB_OTG_HPRT_PLSTS_1 (0x2UL << USB_OTG_HPRT_PLSTS_Pos)   /*!< 0x00000800 */
#define USB_OTG_HPRT_PPWR_Pos (12U)
#define USB_OTG_HPRT_PPWR_Msk (0x1UL << USB_OTG_HPRT_PPWR_Pos) /*!< 0x00001000 */
#define USB_OTG_HPRT_PPWR USB_OTG_HPRT_PPWR_Msk                /*!< Port power */

#define USB_OTG_HPRT_PTCTL_Pos (13U)
#define USB_OTG_HPRT_PTCTL_Msk (0xFUL << USB_OTG_HPRT_PTCTL_Pos) /*!< 0x0001E000 */
#define USB_OTG_HPRT_PTCTL USB_OTG_HPRT_PTCTL_Msk                /*!< Port test control */
#define USB_OTG_HPRT_PTCTL_0 (0x1UL << USB_OTG_HPRT_PTCTL_Pos)   /*!< 0x00002000 */
#define USB_OTG_HPRT_PTCTL_1 (0x2UL << USB_OTG_HPRT_PTCTL_Pos)   /*!< 0x00004000 */
#define USB_OTG_HPRT_PTCTL_2 (0x4UL << USB_OTG_HPRT_PTCTL_Pos)   /*!< 0x00008000 */
#define USB_OTG_HPRT_PTCTL_3 (0x8UL << USB_OTG_HPRT_PTCTL_Pos)   /*!< 0x00010000 */

#define USB_OTG_HPRT_PSPD_Pos (17U)
#define USB_OTG_HPRT_PSPD_Msk (0x3UL << USB_OTG_HPRT_PSPD_Pos) /*!< 0x00060000 */
#define USB_OTG_HPRT_PSPD USB_OTG_HPRT_PSPD_Msk                /*!< Port speed */
#define USB_OTG_HPRT_PSPD_0 (0x1UL << USB_OTG_HPRT_PSPD_Pos)   /*!< 0x00020000 */
#define USB_OTG_HPRT_PSPD_1 (0x2UL << USB_OTG_HPRT_PSPD_Pos)   /*!< 0x00040000 */

/********************  Bit definition for USB_OTG_DOEPEACHMSK1 register  ********************/
#define USB_OTG_DOEPEACHMSK1_XFRCM_Pos (0U)
#define USB_OTG_DOEPEACHMSK1_XFRCM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_DOEPEACHMSK1_XFRCM USB_OTG_DOEPEACHMSK1_XFRCM_Msk                /*!< Transfer completed interrupt mask */
#define USB_OTG_DOEPEACHMSK1_EPDM_Pos (1U)
#define USB_OTG_DOEPEACHMSK1_EPDM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_EPDM_Pos) /*!< 0x00000002 */
#define USB_OTG_DOEPEACHMSK1_EPDM USB_OTG_DOEPEACHMSK1_EPDM_Msk                /*!< Endpoint disabled interrupt mask */
#define USB_OTG_DOEPEACHMSK1_TOM_Pos (3U)
#define USB_OTG_DOEPEACHMSK1_TOM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_TOM_Pos) /*!< 0x00000008 */
#define USB_OTG_DOEPEACHMSK1_TOM USB_OTG_DOEPEACHMSK1_TOM_Msk                /*!< Timeout condition mask */
#define USB_OTG_DOEPEACHMSK1_ITTXFEMSK_Pos (4U)
#define USB_OTG_DOEPEACHMSK1_ITTXFEMSK_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_ITTXFEMSK_Pos) /*!< 0x00000010 */
#define USB_OTG_DOEPEACHMSK1_ITTXFEMSK USB_OTG_DOEPEACHMSK1_ITTXFEMSK_Msk                /*!< IN token received when TxFIFO empty mask */
#define USB_OTG_DOEPEACHMSK1_INEPNMM_Pos (5U)
#define USB_OTG_DOEPEACHMSK1_INEPNMM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_INEPNMM_Pos) /*!< 0x00000020 */
#define USB_OTG_DOEPEACHMSK1_INEPNMM USB_OTG_DOEPEACHMSK1_INEPNMM_Msk                /*!< IN token received with EP mismatch mask */
#define USB_OTG_DOEPEACHMSK1_INEPNEM_Pos (6U)
#define USB_OTG_DOEPEACHMSK1_INEPNEM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_INEPNEM_Pos) /*!< 0x00000040 */
#define USB_OTG_DOEPEACHMSK1_INEPNEM USB_OTG_DOEPEACHMSK1_INEPNEM_Msk                /*!< IN endpoint NAK effective mask */
#define USB_OTG_DOEPEACHMSK1_TXFURM_Pos (8U)
#define USB_OTG_DOEPEACHMSK1_TXFURM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_TXFURM_Pos) /*!< 0x00000100 */
#define USB_OTG_DOEPEACHMSK1_TXFURM USB_OTG_DOEPEACHMSK1_TXFURM_Msk                /*!< OUT packet error mask */
#define USB_OTG_DOEPEACHMSK1_BIM_Pos (9U)
#define USB_OTG_DOEPEACHMSK1_BIM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_BIM_Pos) /*!< 0x00000200 */
#define USB_OTG_DOEPEACHMSK1_BIM USB_OTG_DOEPEACHMSK1_BIM_Msk                /*!< BNA interrupt mask */
#define USB_OTG_DOEPEACHMSK1_BERRM_Pos (12U)
#define USB_OTG_DOEPEACHMSK1_BERRM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_BERRM_Pos) /*!< 0x00001000 */
#define USB_OTG_DOEPEACHMSK1_BERRM USB_OTG_DOEPEACHMSK1_BERRM_Msk                /*!< Bubble error interrupt mask */
#define USB_OTG_DOEPEACHMSK1_NAKM_Pos (13U)
#define USB_OTG_DOEPEACHMSK1_NAKM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_NAKM_Pos) /*!< 0x00002000 */
#define USB_OTG_DOEPEACHMSK1_NAKM USB_OTG_DOEPEACHMSK1_NAKM_Msk                /*!< NAK interrupt mask */
#define USB_OTG_DOEPEACHMSK1_NYETM_Pos (14U)
#define USB_OTG_DOEPEACHMSK1_NYETM_Msk (0x1UL << USB_OTG_DOEPEACHMSK1_NYETM_Pos) /*!< 0x00004000 */
#define USB_OTG_DOEPEACHMSK1_NYETM USB_OTG_DOEPEACHMSK1_NYETM_Msk                /*!< NYET interrupt mask */

/********************  Bit definition for USB_OTG_HPTXFSIZ register  ********************/
#define USB_OTG_HPTXFSIZ_PTXSA_Pos (0U)
#define USB_OTG_HPTXFSIZ_PTXSA_Msk (0xFFFFUL << USB_OTG_HPTXFSIZ_PTXSA_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HPTXFSIZ_PTXSA USB_OTG_HPTXFSIZ_PTXSA_Msk                   /*!< Host periodic TxFIFO start address */
#define USB_OTG_HPTXFSIZ_PTXFD_Pos (16U)
#define USB_OTG_HPTXFSIZ_PTXFD_Msk (0xFFFFUL << USB_OTG_HPTXFSIZ_PTXFD_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_HPTXFSIZ_PTXFD USB_OTG_HPTXFSIZ_PTXFD_Msk                   /*!< Host periodic TxFIFO depth */

/********************  Bit definition for USB_OTG_DIEPCTL register  ********************/
#define USB_OTG_DIEPCTL_MPSIZ_Pos (0U)
#define USB_OTG_DIEPCTL_MPSIZ_Msk (0x7FFUL << USB_OTG_DIEPCTL_MPSIZ_Pos) /*!< 0x000007FF */
#define USB_OTG_DIEPCTL_MPSIZ USB_OTG_DIEPCTL_MPSIZ_Msk                  /*!< Maximum packet size */
#define USB_OTG_DIEPCTL_USBAEP_Pos (15U)
#define USB_OTG_DIEPCTL_USBAEP_Msk (0x1UL << USB_OTG_DIEPCTL_USBAEP_Pos) /*!< 0x00008000 */
#define USB_OTG_DIEPCTL_USBAEP USB_OTG_DIEPCTL_USBAEP_Msk                /*!< USB active endpoint */
#define USB_OTG_DIEPCTL_EONUM_DPID_Pos (16U)
#define USB_OTG_DIEPCTL_EONUM_DPID_Msk (0x1UL << USB_OTG_DIEPCTL_EONUM_DPID_Pos) /*!< 0x00010000 */
#define USB_OTG_DIEPCTL_EONUM_DPID USB_OTG_DIEPCTL_EONUM_DPID_Msk                /*!< Even/odd frame */
#define USB_OTG_DIEPCTL_NAKSTS_Pos (17U)
#define USB_OTG_DIEPCTL_NAKSTS_Msk (0x1UL << USB_OTG_DIEPCTL_NAKSTS_Pos) /*!< 0x00020000 */
#define USB_OTG_DIEPCTL_NAKSTS USB_OTG_DIEPCTL_NAKSTS_Msk                /*!< NAK status */

#define USB_OTG_DIEPCTL_EPTYP_Pos (18U)
#define USB_OTG_DIEPCTL_EPTYP_Msk (0x3UL << USB_OTG_DIEPCTL_EPTYP_Pos) /*!< 0x000C0000 */
#define USB_OTG_DIEPCTL_EPTYP USB_OTG_DIEPCTL_EPTYP_Msk                /*!< Endpoint type */
#define USB_OTG_DIEPCTL_EPTYP_0 (0x1UL << USB_OTG_DIEPCTL_EPTYP_Pos)   /*!< 0x00040000 */
#define USB_OTG_DIEPCTL_EPTYP_1 (0x2UL << USB_OTG_DIEPCTL_EPTYP_Pos)   /*!< 0x00080000 */
#define USB_OTG_DIEPCTL_STALL_Pos (21U)
#define USB_OTG_DIEPCTL_STALL_Msk (0x1UL << USB_OTG_DIEPCTL_STALL_Pos) /*!< 0x00200000 */
#define USB_OTG_DIEPCTL_STALL USB_OTG_DIEPCTL_STALL_Msk                /*!< STALL handshake */

#define USB_OTG_DIEPCTL_TXFNUM_Pos (22U)
#define USB_OTG_DIEPCTL_TXFNUM_Msk (0xFUL << USB_OTG_DIEPCTL_TXFNUM_Pos) /*!< 0x03C00000 */
#define USB_OTG_DIEPCTL_TXFNUM USB_OTG_DIEPCTL_TXFNUM_Msk                /*!< TxFIFO number */
#define USB_OTG_DIEPCTL_TXFNUM_0 (0x1UL << USB_OTG_DIEPCTL_TXFNUM_Pos)   /*!< 0x00400000 */
#define USB_OTG_DIEPCTL_TXFNUM_1 (0x2UL << USB_OTG_DIEPCTL_TXFNUM_Pos)   /*!< 0x00800000 */
#define USB_OTG_DIEPCTL_TXFNUM_2 (0x4UL << USB_OTG_DIEPCTL_TXFNUM_Pos)   /*!< 0x01000000 */
#define USB_OTG_DIEPCTL_TXFNUM_3 (0x8UL << USB_OTG_DIEPCTL_TXFNUM_Pos)   /*!< 0x02000000 */
#define USB_OTG_DIEPCTL_CNAK_Pos (26U)
#define USB_OTG_DIEPCTL_CNAK_Msk (0x1UL << USB_OTG_DIEPCTL_CNAK_Pos) /*!< 0x04000000 */
#define USB_OTG_DIEPCTL_CNAK USB_OTG_DIEPCTL_CNAK_Msk                /*!< Clear NAK */
#define USB_OTG_DIEPCTL_SNAK_Pos (27U)
#define USB_OTG_DIEPCTL_SNAK_Msk (0x1UL << USB_OTG_DIEPCTL_SNAK_Pos) /*!< 0x08000000 */
#define USB_OTG_DIEPCTL_SNAK USB_OTG_DIEPCTL_SNAK_Msk                /*!< Set NAK */
#define USB_OTG_DIEPCTL_SD0PID_SEVNFRM_Pos (28U)
#define USB_OTG_DIEPCTL_SD0PID_SEVNFRM_Msk (0x1UL << USB_OTG_DIEPCTL_SD0PID_SEVNFRM_Pos) /*!< 0x10000000 */
#define USB_OTG_DIEPCTL_SD0PID_SEVNFRM USB_OTG_DIEPCTL_SD0PID_SEVNFRM_Msk                /*!< Set DATA0 PID */
#define USB_OTG_DIEPCTL_SODDFRM_Pos (29U)
#define USB_OTG_DIEPCTL_SODDFRM_Msk (0x1UL << USB_OTG_DIEPCTL_SODDFRM_Pos) /*!< 0x20000000 */
#define USB_OTG_DIEPCTL_SODDFRM USB_OTG_DIEPCTL_SODDFRM_Msk                /*!< Set odd frame */
#define USB_OTG_DIEPCTL_EPDIS_Pos (30U)
#define USB_OTG_DIEPCTL_EPDIS_Msk (0x1UL << USB_OTG_DIEPCTL_EPDIS_Pos) /*!< 0x40000000 */
#define USB_OTG_DIEPCTL_EPDIS USB_OTG_DIEPCTL_EPDIS_Msk                /*!< Endpoint disable */
#define USB_OTG_DIEPCTL_EPENA_Pos (31U)
#define USB_OTG_DIEPCTL_EPENA_Msk (0x1UL << USB_OTG_DIEPCTL_EPENA_Pos) /*!< 0x80000000 */
#define USB_OTG_DIEPCTL_EPENA USB_OTG_DIEPCTL_EPENA_Msk                /*!< Endpoint enable */

/********************  Bit definition for USB_OTG_HCCHAR register  ********************/
#define USB_OTG_HCCHAR_MPSIZ_Pos (0U)
#define USB_OTG_HCCHAR_MPSIZ_Msk (0x7FFUL << USB_OTG_HCCHAR_MPSIZ_Pos) /*!< 0x000007FF */
#define USB_OTG_HCCHAR_MPSIZ USB_OTG_HCCHAR_MPSIZ_Msk                  /*!< Maximum packet size */

#define USB_OTG_HCCHAR_EPNUM_Pos (11U)
#define USB_OTG_HCCHAR_EPNUM_Msk (0xFUL << USB_OTG_HCCHAR_EPNUM_Pos) /*!< 0x00007800 */
#define USB_OTG_HCCHAR_EPNUM USB_OTG_HCCHAR_EPNUM_Msk                /*!< Endpoint number */
#define USB_OTG_HCCHAR_EPNUM_0 (0x1UL << USB_OTG_HCCHAR_EPNUM_Pos)   /*!< 0x00000800 */
#define USB_OTG_HCCHAR_EPNUM_1 (0x2UL << USB_OTG_HCCHAR_EPNUM_Pos)   /*!< 0x00001000 */
#define USB_OTG_HCCHAR_EPNUM_2 (0x4UL << USB_OTG_HCCHAR_EPNUM_Pos)   /*!< 0x00002000 */
#define USB_OTG_HCCHAR_EPNUM_3 (0x8UL << USB_OTG_HCCHAR_EPNUM_Pos)   /*!< 0x00004000 */
#define USB_OTG_HCCHAR_EPDIR_Pos (15U)
#define USB_OTG_HCCHAR_EPDIR_Msk (0x1UL << USB_OTG_HCCHAR_EPDIR_Pos) /*!< 0x00008000 */
#define USB_OTG_HCCHAR_EPDIR USB_OTG_HCCHAR_EPDIR_Msk                /*!< Endpoint direction */
#define USB_OTG_HCCHAR_LSDEV_Pos (17U)
#define USB_OTG_HCCHAR_LSDEV_Msk (0x1UL << USB_OTG_HCCHAR_LSDEV_Pos) /*!< 0x00020000 */
#define USB_OTG_HCCHAR_LSDEV USB_OTG_HCCHAR_LSDEV_Msk                /*!< Low-speed device */

#define USB_OTG_HCCHAR_EPTYP_Pos (18U)
#define USB_OTG_HCCHAR_EPTYP_Msk (0x3UL << USB_OTG_HCCHAR_EPTYP_Pos) /*!< 0x000C0000 */
#define USB_OTG_HCCHAR_EPTYP USB_OTG_HCCHAR_EPTYP_Msk                /*!< Endpoint type */
#define USB_OTG_HCCHAR_EPTYP_0 (0x1UL << USB_OTG_HCCHAR_EPTYP_Pos)   /*!< 0x00040000 */
#define USB_OTG_HCCHAR_EPTYP_1 (0x2UL << USB_OTG_HCCHAR_EPTYP_Pos)   /*!< 0x00080000 */

#define USB_OTG_HCCHAR_MC_Pos (20U)
#define USB_OTG_HCCHAR_MC_Msk (0x3UL << USB_OTG_HCCHAR_MC_Pos) /*!< 0x00300000 */
#define USB_OTG_HCCHAR_MC USB_OTG_HCCHAR_MC_Msk                /*!< Multi Count (MC) / Error Count (EC) */
#define USB_OTG_HCCHAR_MC_0 (0x1UL << USB_OTG_HCCHAR_MC_Pos)   /*!< 0x00100000 */
#define USB_OTG_HCCHAR_MC_1 (0x2UL << USB_OTG_HCCHAR_MC_Pos)   /*!< 0x00200000 */

#define USB_OTG_HCCHAR_DAD_Pos (22U)
#define USB_OTG_HCCHAR_DAD_Msk (0x7FUL << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x1FC00000 */
#define USB_OTG_HCCHAR_DAD USB_OTG_HCCHAR_DAD_Msk                 /*!< Device address */
#define USB_OTG_HCCHAR_DAD_0 (0x01UL << USB_OTG_HCCHAR_DAD_Pos)   /*!< 0x00400000 */
#define USB_OTG_HCCHAR_DAD_1 (0x02UL << USB_OTG_HCCHAR_DAD_Pos)   /*!< 0x00800000 */
#define USB_OTG_HCCHAR_DAD_2 (0x04UL << USB_OTG_HCCHAR_DAD_Pos)   /*!< 0x01000000 */
#define USB_OTG_HCCHAR_DAD_3 (0x08UL << USB_OTG_HCCHAR_DAD_Pos)   /*!< 0x02000000 */
#define USB_OTG_HCCHAR_DAD_4 (0x10UL << USB_OTG_HCCHAR_DAD_Pos)   /*!< 0x04000000 */
#define USB_OTG_HCCHAR_DAD_5 (0x20UL << USB_OTG_HCCHAR_DAD_Pos)   /*!< 0x08000000 */
#define USB_OTG_HCCHAR_DAD_6 (0x40UL << USB_OTG_HCCHAR_DAD_Pos)   /*!< 0x10000000 */
#define USB_OTG_HCCHAR_ODDFRM_Pos (29U)
#define USB_OTG_HCCHAR_ODDFRM_Msk (0x1UL << USB_OTG_HCCHAR_ODDFRM_Pos) /*!< 0x20000000 */
#define USB_OTG_HCCHAR_ODDFRM USB_OTG_HCCHAR_ODDFRM_Msk                /*!< Odd frame */
#define USB_OTG_HCCHAR_CHDIS_Pos (30U)
#define USB_OTG_HCCHAR_CHDIS_Msk (0x1UL << USB_OTG_HCCHAR_CHDIS_Pos) /*!< 0x40000000 */
#define USB_OTG_HCCHAR_CHDIS USB_OTG_HCCHAR_CHDIS_Msk                /*!< Channel disable */
#define USB_OTG_HCCHAR_CHENA_Pos (31U)
#define USB_OTG_HCCHAR_CHENA_Msk (0x1UL << USB_OTG_HCCHAR_CHENA_Pos) /*!< 0x80000000 */
#define USB_OTG_HCCHAR_CHENA USB_OTG_HCCHAR_CHENA_Msk                /*!< Channel enable */

/********************  Bit definition for USB_OTG_HCSPLT register  ********************/

#define USB_OTG_HCSPLT_PRTADDR_Pos (0U)
#define USB_OTG_HCSPLT_PRTADDR_Msk (0x7FUL << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x0000007F */
#define USB_OTG_HCSPLT_PRTADDR USB_OTG_HCSPLT_PRTADDR_Msk                 /*!< Port address */
#define USB_OTG_HCSPLT_PRTADDR_0 (0x01UL << USB_OTG_HCSPLT_PRTADDR_Pos)   /*!< 0x00000001 */
#define USB_OTG_HCSPLT_PRTADDR_1 (0x02UL << USB_OTG_HCSPLT_PRTADDR_Pos)   /*!< 0x00000002 */
#define USB_OTG_HCSPLT_PRTADDR_2 (0x04UL << USB_OTG_HCSPLT_PRTADDR_Pos)   /*!< 0x00000004 */
#define USB_OTG_HCSPLT_PRTADDR_3 (0x08UL << USB_OTG_HCSPLT_PRTADDR_Pos)   /*!< 0x00000008 */
#define USB_OTG_HCSPLT_PRTADDR_4 (0x10UL << USB_OTG_HCSPLT_PRTADDR_Pos)   /*!< 0x00000010 */
#define USB_OTG_HCSPLT_PRTADDR_5 (0x20UL << USB_OTG_HCSPLT_PRTADDR_Pos)   /*!< 0x00000020 */
#define USB_OTG_HCSPLT_PRTADDR_6 (0x40UL << USB_OTG_HCSPLT_PRTADDR_Pos)   /*!< 0x00000040 */

#define USB_OTG_HCSPLT_HUBADDR_Pos (7U)
#define USB_OTG_HCSPLT_HUBADDR_Msk (0x7FUL << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00003F80 */
#define USB_OTG_HCSPLT_HUBADDR USB_OTG_HCSPLT_HUBADDR_Msk                 /*!< Hub address */
#define USB_OTG_HCSPLT_HUBADDR_0 (0x01UL << USB_OTG_HCSPLT_HUBADDR_Pos)   /*!< 0x00000080 */
#define USB_OTG_HCSPLT_HUBADDR_1 (0x02UL << USB_OTG_HCSPLT_HUBADDR_Pos)   /*!< 0x00000100 */
#define USB_OTG_HCSPLT_HUBADDR_2 (0x04UL << USB_OTG_HCSPLT_HUBADDR_Pos)   /*!< 0x00000200 */
#define USB_OTG_HCSPLT_HUBADDR_3 (0x08UL << USB_OTG_HCSPLT_HUBADDR_Pos)   /*!< 0x00000400 */
#define USB_OTG_HCSPLT_HUBADDR_4 (0x10UL << USB_OTG_HCSPLT_HUBADDR_Pos)   /*!< 0x00000800 */
#define USB_OTG_HCSPLT_HUBADDR_5 (0x20UL << USB_OTG_HCSPLT_HUBADDR_Pos)   /*!< 0x00001000 */
#define USB_OTG_HCSPLT_HUBADDR_6 (0x40UL << USB_OTG_HCSPLT_HUBADDR_Pos)   /*!< 0x00002000 */

#define USB_OTG_HCSPLT_XACTPOS_Pos (14U)
#define USB_OTG_HCSPLT_XACTPOS_Msk (0x3UL << USB_OTG_HCSPLT_XACTPOS_Pos) /*!< 0x0000C000 */
#define USB_OTG_HCSPLT_XACTPOS USB_OTG_HCSPLT_XACTPOS_Msk                /*!< XACTPOS */
#define USB_OTG_HCSPLT_XACTPOS_0 (0x1UL << USB_OTG_HCSPLT_XACTPOS_Pos)   /*!< 0x00004000 */
#define USB_OTG_HCSPLT_XACTPOS_1 (0x2UL << USB_OTG_HCSPLT_XACTPOS_Pos)   /*!< 0x00008000 */
#define USB_OTG_HCSPLT_COMPLSPLT_Pos (16U)
#define USB_OTG_HCSPLT_COMPLSPLT_Msk (0x1UL << USB_OTG_HCSPLT_COMPLSPLT_Pos) /*!< 0x00010000 */
#define USB_OTG_HCSPLT_COMPLSPLT USB_OTG_HCSPLT_COMPLSPLT_Msk                /*!< Do complete split */
#define USB_OTG_HCSPLT_SPLITEN_Pos (31U)
#define USB_OTG_HCSPLT_SPLITEN_Msk (0x1UL << USB_OTG_HCSPLT_SPLITEN_Pos) /*!< 0x80000000 */
#define USB_OTG_HCSPLT_SPLITEN USB_OTG_HCSPLT_SPLITEN_Msk                /*!< Split enable */

/********************  Bit definition for USB_OTG_HCINT register  ********************/
#define USB_OTG_HCINT_XFRC_Pos (0U)
#define USB_OTG_HCINT_XFRC_Msk (0x1UL << USB_OTG_HCINT_XFRC_Pos) /*!< 0x00000001 */
#define USB_OTG_HCINT_XFRC USB_OTG_HCINT_XFRC_Msk                /*!< Transfer completed */
#define USB_OTG_HCINT_CHH_Pos (1U)
#define USB_OTG_HCINT_CHH_Msk (0x1UL << USB_OTG_HCINT_CHH_Pos) /*!< 0x00000002 */
#define USB_OTG_HCINT_CHH USB_OTG_HCINT_CHH_Msk                /*!< Channel halted */
#define USB_OTG_HCINT_AHBERR_Pos (2U)
#define USB_OTG_HCINT_AHBERR_Msk (0x1UL << USB_OTG_HCINT_AHBERR_Pos) /*!< 0x00000004 */
#define USB_OTG_HCINT_AHBERR USB_OTG_HCINT_AHBERR_Msk                /*!< AHB error */
#define USB_OTG_HCINT_STALL_Pos (3U)
#define USB_OTG_HCINT_STALL_Msk (0x1UL << USB_OTG_HCINT_STALL_Pos) /*!< 0x00000008 */
#define USB_OTG_HCINT_STALL USB_OTG_HCINT_STALL_Msk                /*!< STALL response received interrupt */
#define USB_OTG_HCINT_NAK_Pos (4U)
#define USB_OTG_HCINT_NAK_Msk (0x1UL << USB_OTG_HCINT_NAK_Pos) /*!< 0x00000010 */
#define USB_OTG_HCINT_NAK USB_OTG_HCINT_NAK_Msk                /*!< NAK response received interrupt */
#define USB_OTG_HCINT_ACK_Pos (5U)
#define USB_OTG_HCINT_ACK_Msk (0x1UL << USB_OTG_HCINT_ACK_Pos) /*!< 0x00000020 */
#define USB_OTG_HCINT_ACK USB_OTG_HCINT_ACK_Msk                /*!< ACK response received/transmitted interrupt */
#define USB_OTG_HCINT_NYET_Pos (6U)
#define USB_OTG_HCINT_NYET_Msk (0x1UL << USB_OTG_HCINT_NYET_Pos) /*!< 0x00000040 */
#define USB_OTG_HCINT_NYET USB_OTG_HCINT_NYET_Msk                /*!< Response received interrupt */
#define USB_OTG_HCINT_TXERR_Pos (7U)
#define USB_OTG_HCINT_TXERR_Msk (0x1UL << USB_OTG_HCINT_TXERR_Pos) /*!< 0x00000080 */
#define USB_OTG_HCINT_TXERR USB_OTG_HCINT_TXERR_Msk                /*!< Transaction error */
#define USB_OTG_HCINT_BBERR_Pos (8U)
#define USB_OTG_HCINT_BBERR_Msk (0x1UL << USB_OTG_HCINT_BBERR_Pos) /*!< 0x00000100 */
#define USB_OTG_HCINT_BBERR USB_OTG_HCINT_BBERR_Msk                /*!< Babble error */
#define USB_OTG_HCINT_FRMOR_Pos (9U)
#define USB_OTG_HCINT_FRMOR_Msk (0x1UL << USB_OTG_HCINT_FRMOR_Pos) /*!< 0x00000200 */
#define USB_OTG_HCINT_FRMOR USB_OTG_HCINT_FRMOR_Msk                /*!< Frame overrun */
#define USB_OTG_HCINT_DTERR_Pos (10U)
#define USB_OTG_HCINT_DTERR_Msk (0x1UL << USB_OTG_HCINT_DTERR_Pos) /*!< 0x00000400 */
#define USB_OTG_HCINT_DTERR USB_OTG_HCINT_DTERR_Msk                /*!< Data toggle error */

/********************  Bit definition for USB_OTG_DIEPINT register  ********************/
#define USB_OTG_DIEPINT_XFRC_Pos (0U)
#define USB_OTG_DIEPINT_XFRC_Msk (0x1UL << USB_OTG_DIEPINT_XFRC_Pos) /*!< 0x00000001 */
#define USB_OTG_DIEPINT_XFRC USB_OTG_DIEPINT_XFRC_Msk                /*!< Transfer completed interrupt */
#define USB_OTG_DIEPINT_EPDISD_Pos (1U)
#define USB_OTG_DIEPINT_EPDISD_Msk (0x1UL << USB_OTG_DIEPINT_EPDISD_Pos) /*!< 0x00000002 */
#define USB_OTG_DIEPINT_EPDISD USB_OTG_DIEPINT_EPDISD_Msk                /*!< Endpoint disabled interrupt */
#define USB_OTG_DIEPINT_AHBERR_Pos (2U)
#define USB_OTG_DIEPINT_AHBERR_Msk (0x1UL << USB_OTG_DIEPINT_AHBERR_Pos) /*!< 0x00000004 */
#define USB_OTG_DIEPINT_AHBERR USB_OTG_DIEPINT_AHBERR_Msk                /*!< AHB Error (AHBErr) during an IN transaction */
#define USB_OTG_DIEPINT_TOC_Pos (3U)
#define USB_OTG_DIEPINT_TOC_Msk (0x1UL << USB_OTG_DIEPINT_TOC_Pos) /*!< 0x00000008 */
#define USB_OTG_DIEPINT_TOC USB_OTG_DIEPINT_TOC_Msk                /*!< Timeout condition */
#define USB_OTG_DIEPINT_ITTXFE_Pos (4U)
#define USB_OTG_DIEPINT_ITTXFE_Msk (0x1UL << USB_OTG_DIEPINT_ITTXFE_Pos) /*!< 0x00000010 */
#define USB_OTG_DIEPINT_ITTXFE USB_OTG_DIEPINT_ITTXFE_Msk                /*!< IN token received when TxFIFO is empty */
#define USB_OTG_DIEPINT_INEPNM_Pos (5U)
#define USB_OTG_DIEPINT_INEPNM_Msk (0x1UL << USB_OTG_DIEPINT_INEPNM_Pos) /*!< 0x00000004 */
#define USB_OTG_DIEPINT_INEPNM USB_OTG_DIEPINT_INEPNM_Msk                /*!< IN token received with EP mismatch */
#define USB_OTG_DIEPINT_INEPNE_Pos (6U)
#define USB_OTG_DIEPINT_INEPNE_Msk (0x1UL << USB_OTG_DIEPINT_INEPNE_Pos) /*!< 0x00000040 */
#define USB_OTG_DIEPINT_INEPNE USB_OTG_DIEPINT_INEPNE_Msk                /*!< IN endpoint NAK effective */
#define USB_OTG_DIEPINT_TXFE_Pos (7U)
#define USB_OTG_DIEPINT_TXFE_Msk (0x1UL << USB_OTG_DIEPINT_TXFE_Pos) /*!< 0x00000080 */
#define USB_OTG_DIEPINT_TXFE USB_OTG_DIEPINT_TXFE_Msk                /*!< Transmit FIFO empty */
#define USB_OTG_DIEPINT_TXFIFOUDRN_Pos (8U)
#define USB_OTG_DIEPINT_TXFIFOUDRN_Msk (0x1UL << USB_OTG_DIEPINT_TXFIFOUDRN_Pos) /*!< 0x00000100 */
#define USB_OTG_DIEPINT_TXFIFOUDRN USB_OTG_DIEPINT_TXFIFOUDRN_Msk                /*!< Transmit Fifo Underrun */
#define USB_OTG_DIEPINT_BNA_Pos (9U)
#define USB_OTG_DIEPINT_BNA_Msk (0x1UL << USB_OTG_DIEPINT_BNA_Pos) /*!< 0x00000200 */
#define USB_OTG_DIEPINT_BNA USB_OTG_DIEPINT_BNA_Msk                /*!< Buffer not available interrupt */
#define USB_OTG_DIEPINT_PKTDRPSTS_Pos (11U)
#define USB_OTG_DIEPINT_PKTDRPSTS_Msk (0x1UL << USB_OTG_DIEPINT_PKTDRPSTS_Pos) /*!< 0x00000800 */
#define USB_OTG_DIEPINT_PKTDRPSTS USB_OTG_DIEPINT_PKTDRPSTS_Msk                /*!< Packet dropped status */
#define USB_OTG_DIEPINT_BERR_Pos (12U)
#define USB_OTG_DIEPINT_BERR_Msk (0x1UL << USB_OTG_DIEPINT_BERR_Pos) /*!< 0x00001000 */
#define USB_OTG_DIEPINT_BERR USB_OTG_DIEPINT_BERR_Msk                /*!< Babble error interrupt */
#define USB_OTG_DIEPINT_NAK_Pos (13U)
#define USB_OTG_DIEPINT_NAK_Msk (0x1UL << USB_OTG_DIEPINT_NAK_Pos) /*!< 0x00002000 */
#define USB_OTG_DIEPINT_NAK USB_OTG_DIEPINT_NAK_Msk                /*!< NAK interrupt */

/********************  Bit definition for USB_OTG_HCINTMSK register  ********************/
#define USB_OTG_HCINTMSK_XFRCM_Pos (0U)
#define USB_OTG_HCINTMSK_XFRCM_Msk (0x1UL << USB_OTG_HCINTMSK_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_HCINTMSK_XFRCM USB_OTG_HCINTMSK_XFRCM_Msk                /*!< Transfer completed mask */
#define USB_OTG_HCINTMSK_CHHM_Pos (1U)
#define USB_OTG_HCINTMSK_CHHM_Msk (0x1UL << USB_OTG_HCINTMSK_CHHM_Pos) /*!< 0x00000002 */
#define USB_OTG_HCINTMSK_CHHM USB_OTG_HCINTMSK_CHHM_Msk                /*!< Channel halted mask */
#define USB_OTG_HCINTMSK_AHBERR_Pos (2U)
#define USB_OTG_HCINTMSK_AHBERR_Msk (0x1UL << USB_OTG_HCINTMSK_AHBERR_Pos) /*!< 0x00000004 */
#define USB_OTG_HCINTMSK_AHBERR USB_OTG_HCINTMSK_AHBERR_Msk                /*!< AHB error */
#define USB_OTG_HCINTMSK_STALLM_Pos (3U)
#define USB_OTG_HCINTMSK_STALLM_Msk (0x1UL << USB_OTG_HCINTMSK_STALLM_Pos) /*!< 0x00000008 */
#define USB_OTG_HCINTMSK_STALLM USB_OTG_HCINTMSK_STALLM_Msk                /*!< STALL response received interrupt mask */
#define USB_OTG_HCINTMSK_NAKM_Pos (4U)
#define USB_OTG_HCINTMSK_NAKM_Msk (0x1UL << USB_OTG_HCINTMSK_NAKM_Pos) /*!< 0x00000010 */
#define USB_OTG_HCINTMSK_NAKM USB_OTG_HCINTMSK_NAKM_Msk                /*!< NAK response received interrupt mask */
#define USB_OTG_HCINTMSK_ACKM_Pos (5U)
#define USB_OTG_HCINTMSK_ACKM_Msk (0x1UL << USB_OTG_HCINTMSK_ACKM_Pos) /*!< 0x00000020 */
#define USB_OTG_HCINTMSK_ACKM USB_OTG_HCINTMSK_ACKM_Msk                /*!< ACK response received/transmitted interrupt mask */
#define USB_OTG_HCINTMSK_NYET_Pos (6U)
#define USB_OTG_HCINTMSK_NYET_Msk (0x1UL << USB_OTG_HCINTMSK_NYET_Pos) /*!< 0x00000040 */
#define USB_OTG_HCINTMSK_NYET USB_OTG_HCINTMSK_NYET_Msk                /*!< response received interrupt mask */
#define USB_OTG_HCINTMSK_TXERRM_Pos (7U)
#define USB_OTG_HCINTMSK_TXERRM_Msk (0x1UL << USB_OTG_HCINTMSK_TXERRM_Pos) /*!< 0x00000080 */
#define USB_OTG_HCINTMSK_TXERRM USB_OTG_HCINTMSK_TXERRM_Msk                /*!< Transaction error mask */
#define USB_OTG_HCINTMSK_BBERRM_Pos (8U)
#define USB_OTG_HCINTMSK_BBERRM_Msk (0x1UL << USB_OTG_HCINTMSK_BBERRM_Pos) /*!< 0x00000100 */
#define USB_OTG_HCINTMSK_BBERRM USB_OTG_HCINTMSK_BBERRM_Msk                /*!< Babble error mask */
#define USB_OTG_HCINTMSK_FRMORM_Pos (9U)
#define USB_OTG_HCINTMSK_FRMORM_Msk (0x1UL << USB_OTG_HCINTMSK_FRMORM_Pos) /*!< 0x00000200 */
#define USB_OTG_HCINTMSK_FRMORM USB_OTG_HCINTMSK_FRMORM_Msk                /*!< Frame overrun mask */
#define USB_OTG_HCINTMSK_DTERRM_Pos (10U)
#define USB_OTG_HCINTMSK_DTERRM_Msk (0x1UL << USB_OTG_HCINTMSK_DTERRM_Pos) /*!< 0x00000400 */
#define USB_OTG_HCINTMSK_DTERRM USB_OTG_HCINTMSK_DTERRM_Msk                /*!< Data toggle error mask */

/********************  Bit definition for USB_OTG_DIEPTSIZ register  ********************/

#define USB_OTG_DIEPTSIZ_XFRSIZ_Pos (0U)
#define USB_OTG_DIEPTSIZ_XFRSIZ_Msk (0x7FFFFUL << USB_OTG_DIEPTSIZ_XFRSIZ_Pos) /*!< 0x0007FFFF */
#define USB_OTG_DIEPTSIZ_XFRSIZ USB_OTG_DIEPTSIZ_XFRSIZ_Msk                    /*!< Transfer size */
#define USB_OTG_DIEPTSIZ_PKTCNT_Pos (19U)
#define USB_OTG_DIEPTSIZ_PKTCNT_Msk (0x3FFUL << USB_OTG_DIEPTSIZ_PKTCNT_Pos) /*!< 0x1FF80000 */
#define USB_OTG_DIEPTSIZ_PKTCNT USB_OTG_DIEPTSIZ_PKTCNT_Msk                  /*!< Packet count */
#define USB_OTG_DIEPTSIZ_MULCNT_Pos (29U)
#define USB_OTG_DIEPTSIZ_MULCNT_Msk (0x3UL << USB_OTG_DIEPTSIZ_MULCNT_Pos) /*!< 0x60000000 */
#define USB_OTG_DIEPTSIZ_MULCNT USB_OTG_DIEPTSIZ_MULCNT_Msk                /*!< Packet count */
/********************  Bit definition for USB_OTG_HCTSIZ register  ********************/
#define USB_OTG_HCTSIZ_XFRSIZ_Pos (0U)
#define USB_OTG_HCTSIZ_XFRSIZ_Msk (0x7FFFFUL << USB_OTG_HCTSIZ_XFRSIZ_Pos) /*!< 0x0007FFFF */
#define USB_OTG_HCTSIZ_XFRSIZ USB_OTG_HCTSIZ_XFRSIZ_Msk                    /*!< Transfer size */
#define USB_OTG_HCTSIZ_PKTCNT_Pos (19U)
#define USB_OTG_HCTSIZ_PKTCNT_Msk (0x3FFUL << USB_OTG_HCTSIZ_PKTCNT_Pos) /*!< 0x1FF80000 */
#define USB_OTG_HCTSIZ_PKTCNT USB_OTG_HCTSIZ_PKTCNT_Msk                  /*!< Packet count */
#define USB_OTG_HCTSIZ_DOPING_Pos (31U)
#define USB_OTG_HCTSIZ_DOPING_Msk (0x1UL << USB_OTG_HCTSIZ_DOPING_Pos) /*!< 0x80000000 */
#define USB_OTG_HCTSIZ_DOPING USB_OTG_HCTSIZ_DOPING_Msk                /*!< Do PING */
#define USB_OTG_HCTSIZ_DPID_Pos (29U)
#define USB_OTG_HCTSIZ_DPID_Msk (0x3UL << USB_OTG_HCTSIZ_DPID_Pos) /*!< 0x60000000 */
#define USB_OTG_HCTSIZ_DPID USB_OTG_HCTSIZ_DPID_Msk                /*!< Data PID */
#define USB_OTG_HCTSIZ_DPID_0 (0x1UL << USB_OTG_HCTSIZ_DPID_Pos)   /*!< 0x20000000 */
#define USB_OTG_HCTSIZ_DPID_1 (0x2UL << USB_OTG_HCTSIZ_DPID_Pos)   /*!< 0x40000000 */

/********************  Bit definition for USB_OTG_DIEPDMA register  ********************/
#define USB_OTG_DIEPDMA_DMAADDR_Pos (0U)
#define USB_OTG_DIEPDMA_DMAADDR_Msk (0xFFFFFFFFUL << USB_OTG_DIEPDMA_DMAADDR_Pos) /*!< 0xFFFFFFFF */
#define USB_OTG_DIEPDMA_DMAADDR USB_OTG_DIEPDMA_DMAADDR_Msk                       /*!< DMA address */

/********************  Bit definition for USB_OTG_HCDMA register  ********************/
#define USB_OTG_HCDMA_DMAADDR_Pos (0U)
#define USB_OTG_HCDMA_DMAADDR_Msk (0xFFFFFFFFUL << USB_OTG_HCDMA_DMAADDR_Pos) /*!< 0xFFFFFFFF */
#define USB_OTG_HCDMA_DMAADDR USB_OTG_HCDMA_DMAADDR_Msk                       /*!< DMA address */

/********************  Bit definition for USB_OTG_DTXFSTS register  ********************/
#define USB_OTG_DTXFSTS_INEPTFSAV_Pos (0U)
#define USB_OTG_DTXFSTS_INEPTFSAV_Msk (0xFFFFUL << USB_OTG_DTXFSTS_INEPTFSAV_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DTXFSTS_INEPTFSAV USB_OTG_DTXFSTS_INEPTFSAV_Msk                   /*!< IN endpoint TxFIFO space available */

/********************  Bit definition for USB_OTG_DIEPTXF register  ********************/
#define USB_OTG_DIEPTXF_INEPTXSA_Pos (0U)
#define USB_OTG_DIEPTXF_INEPTXSA_Msk (0xFFFFUL << USB_OTG_DIEPTXF_INEPTXSA_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DIEPTXF_INEPTXSA USB_OTG_DIEPTXF_INEPTXSA_Msk                   /*!< IN endpoint FIFOx transmit RAM start address */
#define USB_OTG_DIEPTXF_INEPTXFD_Pos (16U)
#define USB_OTG_DIEPTXF_INEPTXFD_Msk (0xFFFFUL << USB_OTG_DIEPTXF_INEPTXFD_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_DIEPTXF_INEPTXFD USB_OTG_DIEPTXF_INEPTXFD_Msk                   /*!< IN endpoint TxFIFO depth */

/********************  Bit definition for USB_OTG_DOEPCTL register  ********************/

#define USB_OTG_DOEPCTL_MPSIZ_Pos (0U)
#define USB_OTG_DOEPCTL_MPSIZ_Msk (0x7FFUL << USB_OTG_DOEPCTL_MPSIZ_Pos)            /*!< 0x000007FF */
#define USB_OTG_DOEPCTL_MPSIZ USB_OTG_DOEPCTL_MPSIZ_Msk /*!< Maximum packet size */ /*!<Bit 1 */
#define USB_OTG_DOEPCTL_USBAEP_Pos (15U)
#define USB_OTG_DOEPCTL_USBAEP_Msk (0x1UL << USB_OTG_DOEPCTL_USBAEP_Pos) /*!< 0x00008000 */
#define USB_OTG_DOEPCTL_USBAEP USB_OTG_DOEPCTL_USBAEP_Msk                /*!< USB active endpoint */
#define USB_OTG_DOEPCTL_NAKSTS_Pos (17U)
#define USB_OTG_DOEPCTL_NAKSTS_Msk (0x1UL << USB_OTG_DOEPCTL_NAKSTS_Pos) /*!< 0x00020000 */
#define USB_OTG_DOEPCTL_NAKSTS USB_OTG_DOEPCTL_NAKSTS_Msk                /*!< NAK status */
#define USB_OTG_DOEPCTL_SD0PID_SEVNFRM_Pos (28U)
#define USB_OTG_DOEPCTL_SD0PID_SEVNFRM_Msk (0x1UL << USB_OTG_DOEPCTL_SD0PID_SEVNFRM_Pos) /*!< 0x10000000 */
#define USB_OTG_DOEPCTL_SD0PID_SEVNFRM USB_OTG_DOEPCTL_SD0PID_SEVNFRM_Msk                /*!< Set DATA0 PID */
#define USB_OTG_DOEPCTL_SODDFRM_Pos (29U)
#define USB_OTG_DOEPCTL_SODDFRM_Msk (0x1UL << USB_OTG_DOEPCTL_SODDFRM_Pos) /*!< 0x20000000 */
#define USB_OTG_DOEPCTL_SODDFRM USB_OTG_DOEPCTL_SODDFRM_Msk                /*!< Set odd frame */
#define USB_OTG_DOEPCTL_EPTYP_Pos (18U)
#define USB_OTG_DOEPCTL_EPTYP_Msk (0x3UL << USB_OTG_DOEPCTL_EPTYP_Pos) /*!< 0x000C0000 */
#define USB_OTG_DOEPCTL_EPTYP USB_OTG_DOEPCTL_EPTYP_Msk                /*!< Endpoint type */
#define USB_OTG_DOEPCTL_EPTYP_0 (0x1UL << USB_OTG_DOEPCTL_EPTYP_Pos)   /*!< 0x00040000 */
#define USB_OTG_DOEPCTL_EPTYP_1 (0x2UL << USB_OTG_DOEPCTL_EPTYP_Pos)   /*!< 0x00080000 */
#define USB_OTG_DOEPCTL_SNPM_Pos (20U)
#define USB_OTG_DOEPCTL_SNPM_Msk (0x1UL << USB_OTG_DOEPCTL_SNPM_Pos) /*!< 0x00100000 */
#define USB_OTG_DOEPCTL_SNPM USB_OTG_DOEPCTL_SNPM_Msk                /*!< Snoop mode */
#define USB_OTG_DOEPCTL_STALL_Pos (21U)
#define USB_OTG_DOEPCTL_STALL_Msk (0x1UL << USB_OTG_DOEPCTL_STALL_Pos) /*!< 0x00200000 */
#define USB_OTG_DOEPCTL_STALL USB_OTG_DOEPCTL_STALL_Msk                /*!< STALL handshake */
#define USB_OTG_DOEPCTL_CNAK_Pos (26U)
#define USB_OTG_DOEPCTL_CNAK_Msk (0x1UL << USB_OTG_DOEPCTL_CNAK_Pos) /*!< 0x04000000 */
#define USB_OTG_DOEPCTL_CNAK USB_OTG_DOEPCTL_CNAK_Msk                /*!< Clear NAK */
#define USB_OTG_DOEPCTL_SNAK_Pos (27U)
#define USB_OTG_DOEPCTL_SNAK_Msk (0x1UL << USB_OTG_DOEPCTL_SNAK_Pos) /*!< 0x08000000 */
#define USB_OTG_DOEPCTL_SNAK USB_OTG_DOEPCTL_SNAK_Msk                /*!< Set NAK */
#define USB_OTG_DOEPCTL_EPDIS_Pos (30U)
#define USB_OTG_DOEPCTL_EPDIS_Msk (0x1UL << USB_OTG_DOEPCTL_EPDIS_Pos) /*!< 0x40000000 */
#define USB_OTG_DOEPCTL_EPDIS USB_OTG_DOEPCTL_EPDIS_Msk                /*!< Endpoint disable */
#define USB_OTG_DOEPCTL_EPENA_Pos (31U)
#define USB_OTG_DOEPCTL_EPENA_Msk (0x1UL << USB_OTG_DOEPCTL_EPENA_Pos) /*!< 0x80000000 */
#define USB_OTG_DOEPCTL_EPENA USB_OTG_DOEPCTL_EPENA_Msk                /*!< Endpoint enable */

/********************  Bit definition for USB_OTG_DOEPINT register  ********************/
#define USB_OTG_DOEPINT_XFRC_Pos (0U)
#define USB_OTG_DOEPINT_XFRC_Msk (0x1UL << USB_OTG_DOEPINT_XFRC_Pos) /*!< 0x00000001 */
#define USB_OTG_DOEPINT_XFRC USB_OTG_DOEPINT_XFRC_Msk                /*!< Transfer completed interrupt */
#define USB_OTG_DOEPINT_EPDISD_Pos (1U)
#define USB_OTG_DOEPINT_EPDISD_Msk (0x1UL << USB_OTG_DOEPINT_EPDISD_Pos) /*!< 0x00000002 */
#define USB_OTG_DOEPINT_EPDISD USB_OTG_DOEPINT_EPDISD_Msk                /*!< Endpoint disabled interrupt */
#define USB_OTG_DOEPINT_AHBERR_Pos (2U)
#define USB_OTG_DOEPINT_AHBERR_Msk (0x1UL << USB_OTG_DOEPINT_AHBERR_Pos) /*!< 0x00000004 */
#define USB_OTG_DOEPINT_AHBERR USB_OTG_DOEPINT_AHBERR_Msk                /*!< AHB Error (AHBErr) during an OUT transaction */
#define USB_OTG_DOEPINT_STUP_Pos (3U)
#define USB_OTG_DOEPINT_STUP_Msk (0x1UL << USB_OTG_DOEPINT_STUP_Pos) /*!< 0x00000008 */
#define USB_OTG_DOEPINT_STUP USB_OTG_DOEPINT_STUP_Msk                /*!< SETUP phase done */
#define USB_OTG_DOEPINT_OTEPDIS_Pos (4U)
#define USB_OTG_DOEPINT_OTEPDIS_Msk (0x1UL << USB_OTG_DOEPINT_OTEPDIS_Pos) /*!< 0x00000010 */
#define USB_OTG_DOEPINT_OTEPDIS USB_OTG_DOEPINT_OTEPDIS_Msk                /*!< OUT token received when endpoint disabled */
#define USB_OTG_DOEPINT_OTEPSPR_Pos (5U)
#define USB_OTG_DOEPINT_OTEPSPR_Msk (0x1UL << USB_OTG_DOEPINT_OTEPSPR_Pos) /*!< 0x00000020 */
#define USB_OTG_DOEPINT_OTEPSPR USB_OTG_DOEPINT_OTEPSPR_Msk                /*!< Status Phase Received For Control Write */
#define USB_OTG_DOEPINT_B2BSTUP_Pos (6U)
#define USB_OTG_DOEPINT_B2BSTUP_Msk (0x1UL << USB_OTG_DOEPINT_B2BSTUP_Pos) /*!< 0x00000040 */
#define USB_OTG_DOEPINT_B2BSTUP USB_OTG_DOEPINT_B2BSTUP_Msk                /*!< Back-to-back SETUP packets received */
#define USB_OTG_DOEPINT_OUTPKTERR_Pos (8U)
#define USB_OTG_DOEPINT_OUTPKTERR_Msk (0x1UL << USB_OTG_DOEPINT_OUTPKTERR_Pos) /*!< 0x00000100 */
#define USB_OTG_DOEPINT_OUTPKTERR USB_OTG_DOEPINT_OUTPKTERR_Msk                /*!< OUT packet error */
#define USB_OTG_DOEPINT_NAK_Pos (13U)
#define USB_OTG_DOEPINT_NAK_Msk (0x1UL << USB_OTG_DOEPINT_NAK_Pos) /*!< 0x00002000 */
#define USB_OTG_DOEPINT_NAK USB_OTG_DOEPINT_NAK_Msk                /*!< NAK Packet is transmitted by the device */
#define USB_OTG_DOEPINT_NYET_Pos (14U)
#define USB_OTG_DOEPINT_NYET_Msk (0x1UL << USB_OTG_DOEPINT_NYET_Pos) /*!< 0x00004000 */
#define USB_OTG_DOEPINT_NYET USB_OTG_DOEPINT_NYET_Msk                /*!< NYET interrupt */
#define USB_OTG_DOEPINT_STPKTRX_Pos (15U)
#define USB_OTG_DOEPINT_STPKTRX_Msk (0x1UL << USB_OTG_DOEPINT_STPKTRX_Pos) /*!< 0x00008000 */
#define USB_OTG_DOEPINT_STPKTRX USB_OTG_DOEPINT_STPKTRX_Msk                /*!< Setup Packet Received */
/********************  Bit definition for USB_OTG_DOEPTSIZ register  ********************/

#define USB_OTG_DOEPTSIZ_XFRSIZ_Pos (0U)
#define USB_OTG_DOEPTSIZ_XFRSIZ_Msk (0x7FFFFUL << USB_OTG_DOEPTSIZ_XFRSIZ_Pos) /*!< 0x0007FFFF */
#define USB_OTG_DOEPTSIZ_XFRSIZ USB_OTG_DOEPTSIZ_XFRSIZ_Msk                    /*!< Transfer size */
#define USB_OTG_DOEPTSIZ_PKTCNT_Pos (19U)
#define USB_OTG_DOEPTSIZ_PKTCNT_Msk (0x3FFUL << USB_OTG_DOEPTSIZ_PKTCNT_Pos) /*!< 0x1FF80000 */
#define USB_OTG_DOEPTSIZ_PKTCNT USB_OTG_DOEPTSIZ_PKTCNT_Msk                  /*!< Packet count */

#define USB_OTG_DOEPTSIZ_STUPCNT_Pos (29U)
#define USB_OTG_DOEPTSIZ_STUPCNT_Msk (0x3UL << USB_OTG_DOEPTSIZ_STUPCNT_Pos) /*!< 0x60000000 */
#define USB_OTG_DOEPTSIZ_STUPCNT USB_OTG_DOEPTSIZ_STUPCNT_Msk                /*!< SETUP packet count */
#define USB_OTG_DOEPTSIZ_STUPCNT_0 (0x1UL << USB_OTG_DOEPTSIZ_STUPCNT_Pos)   /*!< 0x20000000 */
#define USB_OTG_DOEPTSIZ_STUPCNT_1 (0x2UL << USB_OTG_DOEPTSIZ_STUPCNT_Pos)   /*!< 0x40000000 */

/********************  Bit definition for PCGCCTL register  ********************/
#define USB_OTG_PCGCCTL_STOPCLK_Pos (0U)
#define USB_OTG_PCGCCTL_STOPCLK_Msk (0x1UL << USB_OTG_PCGCCTL_STOPCLK_Pos) /*!< 0x00000001 */
#define USB_OTG_PCGCCTL_STOPCLK USB_OTG_PCGCCTL_STOPCLK_Msk                /*!< SETUP packet count */
#define USB_OTG_PCGCCTL_GATECLK_Pos (1U)
#define USB_OTG_PCGCCTL_GATECLK_Msk (0x1UL << USB_OTG_PCGCCTL_GATECLK_Pos) /*!< 0x00000002 */
#define USB_OTG_PCGCCTL_GATECLK USB_OTG_PCGCCTL_GATECLK_Msk                /*!<Bit 0 */
#define USB_OTG_PCGCCTL_PHYSUSP_Pos (4U)
#define USB_OTG_PCGCCTL_PHYSUSP_Msk (0x1UL << USB_OTG_PCGCCTL_PHYSUSP_Pos) /*!< 0x00000010 */
#define USB_OTG_PCGCCTL_PHYSUSP USB_OTG_PCGCCTL_PHYSUSP_Msk                /*!<Bit 1 */

/* Legacy define */
/********************  Bit definition for OTG register  ********************/
#define USB_OTG_CHNUM_Pos (0U)
#define USB_OTG_CHNUM_Msk (0xFUL << USB_OTG_CHNUM_Pos) /*!< 0x0000000F */
#define USB_OTG_CHNUM USB_OTG_CHNUM_Msk                /*!< Channel number */
#define USB_OTG_CHNUM_0 (0x1UL << USB_OTG_CHNUM_Pos)   /*!< 0x00000001 */
#define USB_OTG_CHNUM_1 (0x2UL << USB_OTG_CHNUM_Pos)   /*!< 0x00000002 */
#define USB_OTG_CHNUM_2 (0x4UL << USB_OTG_CHNUM_Pos)   /*!< 0x00000004 */
#define USB_OTG_CHNUM_3 (0x8UL << USB_OTG_CHNUM_Pos)   /*!< 0x00000008 */
#define USB_OTG_BCNT_Pos (4U)
#define USB_OTG_BCNT_Msk (0x7FFUL << USB_OTG_BCNT_Pos) /*!< 0x00007FF0 */
#define USB_OTG_BCNT USB_OTG_BCNT_Msk                  /*!< Byte count */

#define USB_OTG_DPID_Pos (15U)
#define USB_OTG_DPID_Msk (0x3UL << USB_OTG_DPID_Pos) /*!< 0x00018000 */
#define USB_OTG_DPID USB_OTG_DPID_Msk                /*!< Data PID */
#define USB_OTG_DPID_0 (0x1UL << USB_OTG_DPID_Pos)   /*!< 0x00008000 */
#define USB_OTG_DPID_1 (0x2UL << USB_OTG_DPID_Pos)   /*!< 0x00010000 */

#define USB_OTG_PKTSTS_Pos (17U)
#define USB_OTG_PKTSTS_Msk (0xFUL << USB_OTG_PKTSTS_Pos) /*!< 0x001E0000 */
#define USB_OTG_PKTSTS USB_OTG_PKTSTS_Msk                /*!< Packet status */
#define USB_OTG_PKTSTS_0 (0x1UL << USB_OTG_PKTSTS_Pos)   /*!< 0x00020000 */
#define USB_OTG_PKTSTS_1 (0x2UL << USB_OTG_PKTSTS_Pos)   /*!< 0x00040000 */
#define USB_OTG_PKTSTS_2 (0x4UL << USB_OTG_PKTSTS_Pos)   /*!< 0x00080000 */
#define USB_OTG_PKTSTS_3 (0x8UL << USB_OTG_PKTSTS_Pos)   /*!< 0x00100000 */

#define USB_OTG_EPNUM_Pos (0U)
#define USB_OTG_EPNUM_Msk (0xFUL << USB_OTG_EPNUM_Pos) /*!< 0x0000000F */
#define USB_OTG_EPNUM USB_OTG_EPNUM_Msk                /*!< Endpoint number */
#define USB_OTG_EPNUM_0 (0x1UL << USB_OTG_EPNUM_Pos)   /*!< 0x00000001 */
#define USB_OTG_EPNUM_1 (0x2UL << USB_OTG_EPNUM_Pos)   /*!< 0x00000002 */
#define USB_OTG_EPNUM_2 (0x4UL << USB_OTG_EPNUM_Pos)   /*!< 0x00000004 */
#define USB_OTG_EPNUM_3 (0x8UL << USB_OTG_EPNUM_Pos)   /*!< 0x00000008 */

#define USB_OTG_FRMNUM_Pos (21U)
#define USB_OTG_FRMNUM_Msk (0xFUL << USB_OTG_FRMNUM_Pos) /*!< 0x01E00000 */
#define USB_OTG_FRMNUM USB_OTG_FRMNUM_Msk                /*!< Frame number */
#define USB_OTG_FRMNUM_0 (0x1UL << USB_OTG_FRMNUM_Pos)   /*!< 0x00200000 */
#define USB_OTG_FRMNUM_1 (0x2UL << USB_OTG_FRMNUM_Pos)   /*!< 0x00400000 */
#define USB_OTG_FRMNUM_2 (0x4UL << USB_OTG_FRMNUM_Pos)   /*!< 0x00800000 */
#define USB_OTG_FRMNUM_3 (0x8UL << USB_OTG_FRMNUM_Pos)   /*!< 0x01000000 */

/**
 * @}
 */

/**
 * @}
 */

/** @addtogroup Exported_macro
 * @{
 */

/****************************** ADC Instances *********************************/
#define IS_ADC_ALL_INSTANCE(INSTANCE) (((INSTANCE) == ADC1) || ((INSTANCE) == ADC2))

#define IS_ADC_COMMON_INSTANCE(INSTANCE) ((INSTANCE) == ADC12_COMMON)

#define IS_ADC_MULTIMODE_MASTER_INSTANCE(INSTANCE) ((INSTANCE) == ADC1)

#define IS_ADC_DMA_CAPABILITY_INSTANCE(INSTANCE) ((INSTANCE) == ADC1)

/****************************** CAN Instances *********************************/
#define IS_CAN_ALL_INSTANCE(INSTANCE) (((INSTANCE) == CAN1) || ((INSTANCE) == CAN2))

/****************************** CRC Instances *********************************/
#define IS_CRC_ALL_INSTANCE(INSTANCE) ((INSTANCE) == CRC)

/****************************** DAC Instances *********************************/
#define IS_DAC_ALL_INSTANCE(INSTANCE) ((INSTANCE) == DAC1)

/****************************** DMA Instances *********************************/
#define IS_DMA_ALL_INSTANCE(INSTANCE)                                                                                                    \
    (((INSTANCE) == DMA1_Channel1) || ((INSTANCE) == DMA1_Channel2) || ((INSTANCE) == DMA1_Channel3) || ((INSTANCE) == DMA1_Channel4) || \
     ((INSTANCE) == DMA1_Channel5) || ((INSTANCE) == DMA1_Channel6) || ((INSTANCE) == DMA1_Channel7) || ((INSTANCE) == DMA2_Channel1) || \
     ((INSTANCE) == DMA2_Channel2) || ((INSTANCE) == DMA2_Channel3) || ((INSTANCE) == DMA2_Channel4) || ((INSTANCE) == DMA2_Channel5))

/******************************* GPIO Instances *******************************/
#define IS_GPIO_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == GPIOA) || ((INSTANCE) == GPIOB) || ((INSTANCE) == GPIOC) || ((INSTANCE) == GPIOD) || ((INSTANCE) == GPIOE))

/**************************** GPIO Alternate Function Instances ***************/
#define IS_GPIO_AF_INSTANCE(INSTANCE) IS_GPIO_ALL_INSTANCE(INSTANCE)

/**************************** GPIO Lock Instances *****************************/
#define IS_GPIO_LOCK_INSTANCE(INSTANCE) IS_GPIO_ALL_INSTANCE(INSTANCE)

/******************************** I2C Instances *******************************/
#define IS_I2C_ALL_INSTANCE(INSTANCE) (((INSTANCE) == I2C1) || ((INSTANCE) == I2C2))

/******************************* SMBUS Instances ******************************/
#define IS_SMBUS_ALL_INSTANCE IS_I2C_ALL_INSTANCE

/******************************** I2S Instances *******************************/
#define IS_I2S_ALL_INSTANCE(INSTANCE) (((INSTANCE) == SPI2) || ((INSTANCE) == SPI3))

/****************************** IWDG Instances ********************************/
#define IS_IWDG_ALL_INSTANCE(INSTANCE) ((INSTANCE) == IWDG)

/******************************** SPI Instances *******************************/
#define IS_SPI_ALL_INSTANCE(INSTANCE) (((INSTANCE) == SPI1) || ((INSTANCE) == SPI2) || ((INSTANCE) == SPI3))

/****************************** START TIM Instances ***************************/
/****************************** TIM Instances *********************************/
#define IS_TIM_INSTANCE(INSTANCE)                                                                                                                    \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5) || ((INSTANCE) == TIM6) || \
     ((INSTANCE) == TIM7))

#define IS_TIM_ADVANCED_INSTANCE(INSTANCE) ((INSTANCE) == TIM1)

#define IS_TIM_CC1_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_CC2_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_CC3_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_CC4_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_CLOCKSOURCE_ETRMODE1_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_CLOCKSOURCE_ETRMODE2_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_CLOCKSOURCE_TIX_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_CLOCKSOURCE_ITRX_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_OCXREF_CLEAR_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_ENCODER_INTERFACE_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_XOR_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_MASTER_INSTANCE(INSTANCE)                                                                                                             \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5) || ((INSTANCE) == TIM6) || \
     ((INSTANCE) == TIM7))

#define IS_TIM_SLAVE_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_SYNCHRO_INSTANCE(INSTANCE) IS_TIM_MASTER_INSTANCE(INSTANCE)

#define IS_TIM_DMABURST_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_BREAK_INSTANCE(INSTANCE) ((INSTANCE) == TIM1)

#define IS_TIM_CCX_INSTANCE(INSTANCE, CHANNEL)                                                                                           \
    ((((INSTANCE) == TIM1) &&                                                                                                            \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) || ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4))) || \
     (((INSTANCE) == TIM2) &&                                                                                                            \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) || ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4))) || \
     (((INSTANCE) == TIM3) &&                                                                                                            \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) || ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4))) || \
     (((INSTANCE) == TIM4) &&                                                                                                            \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) || ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4))) || \
     (((INSTANCE) == TIM5) &&                                                                                                            \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) || ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4))))

#define IS_TIM_CCXN_INSTANCE(INSTANCE, CHANNEL) \
    (((INSTANCE) == TIM1) && (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) || ((CHANNEL) == TIM_CHANNEL_3)))

#define IS_TIM_COUNTER_MODE_SELECT_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_REPETITION_COUNTER_INSTANCE(INSTANCE) ((INSTANCE) == TIM1)

#define IS_TIM_CLOCK_DIVISION_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_DMA_INSTANCE(INSTANCE)                                                                                                                \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5) || ((INSTANCE) == TIM6) || \
     ((INSTANCE) == TIM7))

#define IS_TIM_DMA_CC_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_COMMUTATION_EVENT_INSTANCE(INSTANCE) ((INSTANCE) == TIM1)

#define IS_TIM_ETR_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_HALL_SENSOR_INTERFACE_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || ((INSTANCE) == TIM2) || ((INSTANCE) == TIM3) || ((INSTANCE) == TIM4) || ((INSTANCE) == TIM5))

#define IS_TIM_32B_COUNTER_INSTANCE(INSTANCE) 0U

/****************************** END TIM Instances *****************************/

/******************** USART Instances : Synchronous mode **********************/
#define IS_USART_INSTANCE(INSTANCE) (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3))

/******************** UART Instances : Asynchronous mode **********************/
#define IS_UART_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3) || ((INSTANCE) == UART4) || ((INSTANCE) == UART5))

/******************** UART Instances : Half-Duplex mode **********************/
#define IS_UART_HALFDUPLEX_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3) || ((INSTANCE) == UART4) || ((INSTANCE) == UART5))

/******************** UART Instances : LIN mode **********************/
#define IS_UART_LIN_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3) || ((INSTANCE) == UART4) || ((INSTANCE) == UART5))

/****************** UART Instances : Hardware Flow control ********************/
#define IS_UART_HWFLOW_INSTANCE(INSTANCE) (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3))

/********************* UART Instances : Smard card mode ***********************/
#define IS_SMARTCARD_INSTANCE(INSTANCE) (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3))

/*********************** UART Instances : IRDA mode ***************************/
#define IS_IRDA_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3) || ((INSTANCE) == UART4) || ((INSTANCE) == UART5))

/***************** UART Instances : Multi-Processor mode **********************/
#define IS_UART_MULTIPROCESSOR_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3) || ((INSTANCE) == UART4) || ((INSTANCE) == UART5))

/***************** UART Instances : DMA mode available **********************/
#define IS_UART_DMA_INSTANCE(INSTANCE) (((INSTANCE) == USART1) || ((INSTANCE) == USART2) || ((INSTANCE) == USART3) || ((INSTANCE) == UART4))

/****************************** RTC Instances *********************************/
#define IS_RTC_ALL_INSTANCE(INSTANCE) ((INSTANCE) == RTC)

/**************************** WWDG Instances *****************************/
#define IS_WWDG_ALL_INSTANCE(INSTANCE) ((INSTANCE) == WWDG)

/*********************** PCD Instances ****************************************/
#define IS_PCD_ALL_INSTANCE(INSTANCE) ((INSTANCE) == USB_OTG_FS)

/*********************** HCD Instances ****************************************/
#define IS_HCD_ALL_INSTANCE(INSTANCE) ((INSTANCE) == USB_OTG_FS)

/****************************** ETH Instances ********************************/
#define IS_ETH_ALL_INSTANCE(INSTANCE) ((INSTANCE) == ETH)

#define RCC_HSE_MIN 3000000U
#define RCC_HSE_MAX 25000000U

#define RCC_MAX_FREQUENCY 72000000U

/**
 * @}
 */
/******************************************************************************/
/*  For a painless codes migration between the STM32F1xx device product       */
/*  lines, the aliases defined below are put in place to overcome the         */
/*  differences in the interrupt handlers and IRQn definitions.               */
/*  No need to update developed interrupt code when moving across             */
/*  product lines within the same STM32F1 Family                              */
/******************************************************************************/

/* Aliases for __IRQn */
#define ADC1_IRQn ADC1_2_IRQn
#define USB_LP_CAN1_RX0_IRQn CAN1_RX0_IRQn
#define USB_LP_IRQn CAN1_RX0_IRQn
#define USB_HP_CAN1_TX_IRQn CAN1_TX_IRQn
#define USB_HP_IRQn CAN1_TX_IRQn
#define DMA2_Channel4_5_IRQn DMA2_Channel4_IRQn
#define USBWakeUp_IRQn OTG_FS_WKUP_IRQn
#define CEC_IRQn OTG_FS_WKUP_IRQn
#define TIM1_BRK_TIM15_IRQn TIM1_BRK_IRQn
#define TIM9_IRQn TIM1_BRK_IRQn
#define TIM1_BRK_TIM9_IRQn TIM1_BRK_IRQn
#define TIM1_TRG_COM_TIM17_IRQn TIM1_TRG_COM_IRQn
#define TIM1_TRG_COM_TIM11_IRQn TIM1_TRG_COM_IRQn
#define TIM11_IRQn TIM1_TRG_COM_IRQn
#define TIM1_UP_TIM10_IRQn TIM1_UP_IRQn
#define TIM1_UP_TIM16_IRQn TIM1_UP_IRQn
#define TIM10_IRQn TIM1_UP_IRQn
#define TIM6_DAC_IRQn TIM6_IRQn

/* Aliases for __IRQHandler */
#define ADC1_IRQHandler ADC1_2_IRQHandler
#define USB_LP_CAN1_RX0_IRQHandler CAN1_RX0_IRQHandler
#define USB_LP_IRQHandler CAN1_RX0_IRQHandler
#define USB_HP_CAN1_TX_IRQHandler CAN1_TX_IRQHandler
#define USB_HP_IRQHandler CAN1_TX_IRQHandler
#define DMA2_Channel4_5_IRQHandler DMA2_Channel4_IRQHandler
#define USBWakeUp_IRQHandler OTG_FS_WKUP_IRQHandler
#define CEC_IRQHandler OTG_FS_WKUP_IRQHandler
#define TIM1_BRK_TIM15_IRQHandler TIM1_BRK_IRQHandler
#define TIM9_IRQHandler TIM1_BRK_IRQHandler
#define TIM1_BRK_TIM9_IRQHandler TIM1_BRK_IRQHandler
#define TIM1_TRG_COM_TIM17_IRQHandler TIM1_TRG_COM_IRQHandler
#define TIM1_TRG_COM_TIM11_IRQHandler TIM1_TRG_COM_IRQHandler
#define TIM11_IRQHandler TIM1_TRG_COM_IRQHandler
#define TIM1_UP_TIM10_IRQHandler TIM1_UP_IRQHandler
#define TIM1_UP_TIM16_IRQHandler TIM1_UP_IRQHandler
#define TIM10_IRQHandler TIM1_UP_IRQHandler
#define TIM6_DAC_IRQHandler TIM6_IRQHandler

/**
 * @}
 */

/**
 * @}
 */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __STM32F107xC_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
