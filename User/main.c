#include "delay.h"
#include "usart.h"
#include "bsp_i2c.h"


int main(void)
{	
	delay_init();     //延时函数初始化	  
	uart_init(115200);	 //串口波特率115200
	IIC_Init();				//IIC初始化
		while(1)
	{
		printf("温度湿度显示");
		read_AHT20_once();
		delay_ms(1500);
  }
}
