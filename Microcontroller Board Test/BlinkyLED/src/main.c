#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

GPIO_InitTypeDef TestePA0;
GPIO_InitTypeDef TestePA1;
GPIO_InitTypeDef TestePA2;
GPIO_InitTypeDef TestePA4;
GPIO_InitTypeDef TestePA5;
GPIO_InitTypeDef TestePA6;
GPIO_InitTypeDef TestePA7;
GPIO_InitTypeDef TestePB0;
GPIO_InitTypeDef TestePB1;
GPIO_InitTypeDef TestePC4;
GPIO_InitTypeDef TestePC13;
GPIO_InitTypeDef TestePC14;
GPIO_InitTypeDef TestePC15;
GPIO_InitTypeDef TestePE6;
GPIO_InitTypeDef TestePE9;
GPIO_InitTypeDef TestePE11;
GPIO_InitTypeDef TestePE13;
GPIO_InitTypeDef TestePE14;
GPIO_InitTypeDef TestePE15;

GPIO_InitTypeDef TesteLED;

void delay(__IO uint32_t nCount){while(nCount--){}}

int main(void)
{
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOA, ENABLE);
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOB, ENABLE);
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOC, ENABLE);
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOD, ENABLE);
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOE, ENABLE);
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOH, ENABLE);

	TestePA0.GPIO_Pin = GPIO_Pin_0;
	TestePA1.GPIO_Pin = GPIO_Pin_1;
	TestePA2.GPIO_Pin = GPIO_Pin_2;
	TestePA4.GPIO_Pin = GPIO_Pin_4;
	TestePA5.GPIO_Pin = GPIO_Pin_5;
	TestePA6.GPIO_Pin = GPIO_Pin_6;
	TestePA7.GPIO_Pin = GPIO_Pin_7;
	TestePB0.GPIO_Pin = GPIO_Pin_0;
	TestePB1.GPIO_Pin = GPIO_Pin_1;
	TestePC13.GPIO_Pin = GPIO_Pin_13;
	TestePC14.GPIO_Pin = GPIO_Pin_14;
	TestePC15.GPIO_Pin = GPIO_Pin_15;
	TesteLED.GPIO_Pin = GPIO_Pin_12;
	TestePE6.GPIO_Pin = GPIO_Pin_6;
	TestePE9.GPIO_Pin = GPIO_Pin_9;
	TestePE11.GPIO_Pin = GPIO_Pin_11;
	TestePE13.GPIO_Pin = GPIO_Pin_13;
	TestePE14.GPIO_Pin = GPIO_Pin_14;
	TestePE15.GPIO_Pin = GPIO_Pin_15;

	TestePA0.GPIO_Mode = GPIO_Mode_OUT;
	TestePA1.GPIO_Mode = GPIO_Mode_OUT;
	TestePA2.GPIO_Mode = GPIO_Mode_OUT;
	TestePA4.GPIO_Mode = GPIO_Mode_OUT;
	TestePA5.GPIO_Mode = GPIO_Mode_OUT;
	TestePA6.GPIO_Mode = GPIO_Mode_OUT;
	TestePA7.GPIO_Mode = GPIO_Mode_OUT;
	TestePB0.GPIO_Mode = GPIO_Mode_OUT;
	TestePB1.GPIO_Mode = GPIO_Mode_OUT;
	TestePC13.GPIO_Mode = GPIO_Mode_OUT;
	TestePC14.GPIO_Mode = GPIO_Mode_OUT;
	TestePC15.GPIO_Mode = GPIO_Mode_OUT;
	TestePE6.GPIO_Mode = GPIO_Mode_OUT;
	TestePE9.GPIO_Mode = GPIO_Mode_OUT;
	TestePE11.GPIO_Mode = GPIO_Mode_OUT;
	TestePE13.GPIO_Mode = GPIO_Mode_OUT;
	TestePE14.GPIO_Mode = GPIO_Mode_OUT;
	TestePE15.GPIO_Mode = GPIO_Mode_OUT;
	TesteLED.GPIO_Mode = GPIO_Mode_OUT;

	TestePA0.GPIO_OType = GPIO_OType_PP;
	TestePA1.GPIO_OType = GPIO_OType_PP;
	TestePA2.GPIO_OType = GPIO_OType_PP;
	TestePA4.GPIO_OType = GPIO_OType_PP;
	TestePA5.GPIO_OType = GPIO_OType_PP;
	TestePA6.GPIO_OType = GPIO_OType_PP;
	TestePA7.GPIO_OType = GPIO_OType_PP;
	TestePB0.GPIO_OType = GPIO_OType_PP;
	TestePB1.GPIO_OType = GPIO_OType_PP;
	TestePC13.GPIO_OType = GPIO_OType_PP;
	TestePC14.GPIO_OType = GPIO_OType_PP;
	TestePC15.GPIO_OType = GPIO_OType_PP;
	TestePE6.GPIO_OType = GPIO_OType_PP;
	TestePE9.GPIO_OType = GPIO_OType_PP;
	TestePE11.GPIO_OType = GPIO_OType_PP;
	TestePE13.GPIO_OType = GPIO_OType_PP;
	TestePE14.GPIO_OType = GPIO_OType_PP;
	TestePE15.GPIO_OType = GPIO_OType_PP;
	TesteLED.GPIO_OType = GPIO_OType_PP;

	TestePA0.GPIO_Speed = GPIO_Speed_50MHz;
	TestePA1.GPIO_Speed = GPIO_Speed_50MHz;
	TestePA2.GPIO_Speed = GPIO_Speed_50MHz;
	TestePA4.GPIO_Speed = GPIO_Speed_50MHz;
	TestePA5.GPIO_Speed = GPIO_Speed_50MHz;
	TestePA6.GPIO_Speed = GPIO_Speed_50MHz;
	TestePA7.GPIO_Speed = GPIO_Speed_50MHz;
	TestePB0.GPIO_Speed = GPIO_Speed_50MHz;
	TestePB1.GPIO_Speed = GPIO_Speed_50MHz;
	TestePC13.GPIO_Speed = GPIO_Speed_50MHz;
	TestePC14.GPIO_Speed = GPIO_Speed_50MHz;
	TestePC15.GPIO_Speed = GPIO_Speed_50MHz;
	TestePE6.GPIO_Speed = GPIO_Speed_50MHz;
	TestePE9.GPIO_Speed = GPIO_Speed_50MHz;
	TestePE11.GPIO_Speed = GPIO_Speed_50MHz;
	TestePE13.GPIO_Speed = GPIO_Speed_50MHz;
	TestePE14.GPIO_Speed = GPIO_Speed_50MHz;
	TestePE15.GPIO_Speed = GPIO_Speed_50MHz;
	TesteLED.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init (GPIOA, &TestePA0);
	GPIO_Init (GPIOA, &TestePA1);
	GPIO_Init (GPIOA, &TestePA2);
	GPIO_Init (GPIOA, &TestePA4);
	GPIO_Init (GPIOA, &TestePA5);
	GPIO_Init (GPIOA, &TestePA6);
	GPIO_Init (GPIOA, &TestePA7);
	GPIO_Init (GPIOB, &TestePB0);
	GPIO_Init (GPIOB, &TestePB1);
	GPIO_Init (GPIOC, &TestePC13);
	GPIO_Init (GPIOC, &TestePC14);
	GPIO_Init (GPIOC, &TestePC15);
	GPIO_Init (GPIOE, &TestePE6);
	GPIO_Init (GPIOE, &TestePE9);
	GPIO_Init (GPIOE, &TestePE11);
	GPIO_Init (GPIOE, &TestePE13);
	GPIO_Init (GPIOE, &TestePE14);
	GPIO_Init (GPIOE, &TestePE15);
	GPIO_Init (GPIOD, &TesteLED);

	while (1)
	{
			GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_1, Bit_SET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_2, Bit_SET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_4, Bit_SET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_5, Bit_SET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_6, Bit_SET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_7, Bit_SET);
			GPIO_WriteBit(GPIOB, GPIO_Pin_0, Bit_SET);
			GPIO_WriteBit(GPIOB, GPIO_Pin_1, Bit_SET);
			GPIO_WriteBit(GPIOC, GPIO_Pin_13, Bit_SET);
			GPIO_WriteBit(GPIOC, GPIO_Pin_14, Bit_SET);
			GPIO_WriteBit(GPIOC, GPIO_Pin_15, Bit_SET);
			GPIO_WriteBit(GPIOH, GPIO_Pin_0, Bit_SET);
			GPIO_WriteBit(GPIOH, GPIO_Pin_1, Bit_SET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_6, Bit_SET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_9, Bit_SET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_11, Bit_SET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_13, Bit_SET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_14, Bit_SET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_15, Bit_SET);

			GPIO_WriteBit(GPIOD, GPIO_Pin_12, Bit_SET);
			delay(10500000);

			GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_RESET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_1, Bit_RESET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_2, Bit_RESET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_4, Bit_RESET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_5, Bit_RESET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_6, Bit_RESET);
			GPIO_WriteBit(GPIOA, GPIO_Pin_7, Bit_RESET);
			GPIO_WriteBit(GPIOB, GPIO_Pin_0, Bit_RESET);
			GPIO_WriteBit(GPIOB, GPIO_Pin_1, Bit_RESET);
			GPIO_WriteBit(GPIOC, GPIO_Pin_13, Bit_RESET);
			GPIO_WriteBit(GPIOC, GPIO_Pin_14, Bit_RESET);
			GPIO_WriteBit(GPIOC, GPIO_Pin_15, Bit_RESET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_6, Bit_RESET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_9, Bit_RESET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_11, Bit_RESET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_13, Bit_RESET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_14, Bit_RESET);
			GPIO_WriteBit(GPIOE, GPIO_Pin_15, Bit_RESET);

			GPIO_WriteBit(GPIOD, GPIO_Pin_12, Bit_RESET);
			delay(10500000);
	}
}


/*
 * Callback used by stm32f4_discovery_audio_codec.c.
 * Refer to stm32f4_discovery_audio_codec.h for more info.
 */
void EVAL_AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size){
  /* TODO, implement your code here */
  return;
}

/*
 * Callback used by stm324xg_eval_audio_codec.c.
 * Refer to stm324xg_eval_audio_codec.h for more info.
 */
uint16_t EVAL_AUDIO_GetSampleCallBack(void){
  /* TODO, implement your code here */
  return -1;
}
