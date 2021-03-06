/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/* GPIO_AD_B0_07 (number 68), LPUART1_RXD */
#define BOARD_UART1_RXD_PERIPHERAL                                       LPUART1   /*!< Device name: LPUART1 */
#define BOARD_UART1_RXD_SIGNAL                                                RX   /*!< LPUART1 signal: RX */

/* GPIO_AD_B0_06 (number 72), LPUART1_TXD */
#define BOARD_UART1_TXD_PERIPHERAL                                       LPUART1   /*!< Device name: LPUART1 */
#define BOARD_UART1_TXD_SIGNAL                                                TX   /*!< LPUART1 signal: TX */

/* GPIO_AD_B0_15 (number 60), ADC12_2/J17[8] */
#define BOARD_ADC12_2_PERIPHERAL                                         LPUART3   /*!< Device name: LPUART3 */
#define BOARD_ADC12_2_SIGNAL                                                  RX   /*!< LPUART3 signal: RX */

/* GPIO_AD_B0_14 (number 61), ADC12_1/J18[2] */
#define BOARD_ADC12_1_PERIPHERAL                                         LPUART3   /*!< Device name: LPUART3 */
#define BOARD_ADC12_1_SIGNAL                                                  TX   /*!< LPUART3 signal: TX */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
