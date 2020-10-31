#include "stm32f10x.h"

#include "sys.h"
#include "delay.h"
#include "usart.h"

#include "led.h"
#include "timer.h"
#include "usart2.h"

char led_mode=0;

int main(void)
{	
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	
  delay_init();
  led_config();
  usart2_config(115200);
  TIM2_Config(10000,7200);
  while(1)
  {
	if(led_mode==0)
	//点亮第一个，熄灭其他
	{
		GPIO_ResetBits(GPIOC,GPIO_Pin_0);
		GPIO_SetBits(GPIOC,GPIO_Pin_1);
		GPIO_SetBits(GPIOC,GPIO_Pin_2);
		GPIO_SetBits(GPIOC,GPIO_Pin_3);
	}
	else if(led_mode==1)
	//点亮第二个，熄灭其他
	{
		GPIO_SetBits(GPIOC,GPIO_Pin_0);
		GPIO_ResetBits(GPIOC,GPIO_Pin_1);
		GPIO_SetBits(GPIOC,GPIO_Pin_2);
		GPIO_SetBits(GPIOC,GPIO_Pin_3);
	}
	else if(led_mode==2)
	{
	//点亮第三个，熄灭其他
		GPIO_SetBits(GPIOC,GPIO_Pin_0);
		GPIO_SetBits(GPIOC,GPIO_Pin_1);
		GPIO_ResetBits(GPIOC,GPIO_Pin_2);
		GPIO_SetBits(GPIOC,GPIO_Pin_3);
	}
	else if(led_mode==3)
	{
	//点亮第四个，熄灭其他
		GPIO_SetBits(GPIOC,GPIO_Pin_0);
		GPIO_SetBits(GPIOC,GPIO_Pin_1);
		GPIO_SetBits(GPIOC,GPIO_Pin_2);
		GPIO_ResetBits(GPIOC,GPIO_Pin_3);
	}
  }
}
