/**
  ******************************************************************************
  * @file    py32f0xx_bsp_clock.h
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef PY32F003_BSP_CLOCK_H
#define PY32F003_BSP_CLOCK_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "py32f0xx_ll_rcc.h"
#include "py32f0xx_ll_bus.h"
#include "py32f0xx_ll_system.h"
#include "py32f0xx_ll_exti.h"
#include "py32f0xx_ll_cortex.h"
#include "py32f0xx_ll_utils.h"
#include "py32f0xx_ll_pwr.h"
#include "py32f0xx_ll_dma.h"
#include "py32f0xx_ll_gpio.h"
#include "py32f0xx_ll_usart.h"

void BSP_HSI_48MConfig(void);

#ifdef __cplusplus
}
#endif

#endif /* PY32F003_BSP_CLOCK_H */
