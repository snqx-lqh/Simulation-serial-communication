#include "stm32f10x.h"

#include "sys.h"
#include "delay.h"
#include "usart.h"

#include "led.h"
#include "exti.h"
#include "usart2.h"



int main(void)
{	
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	
  KEY_EXTI_Init();
  delay_init();
  usart2_config(115200);
  while(1)
  {
	
  }
}
