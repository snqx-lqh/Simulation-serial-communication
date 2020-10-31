#ifndef _TIMER_H
#define _TIMER_H

#include "stm32f10x.h"
#include "sys.h"

#define LED PBout(5)

void TIM2_Config(u16 arr,u16 pre);

#endif


