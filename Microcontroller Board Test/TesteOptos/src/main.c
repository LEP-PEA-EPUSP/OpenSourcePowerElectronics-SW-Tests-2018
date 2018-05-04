#include "stm32f4xx.h"
#include "stm32f4_discovery.h"


GPIO_InitTypeDef TestePA10;
GPIO_InitTypeDef TestePB6;
GPIO_InitTypeDef TesteLED;

void delay(__IO uint32_t nCount){while(nCount--){}}

int main(void)
{
	int contador = 0;
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOA, ENABLE);
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOB, ENABLE);
	RCC_AHB1PeriphClockCmd (RCC_AHB1Periph_GPIOD, ENABLE);

	TestePA10.GPIO_Pin = GPIO_Pin_10;
	TestePB6.GPIO_Pin = GPIO_Pin_6;
	TesteLED.GPIO_Pin = GPIO_Pin_12;

	TestePA10.GPIO_Mode = GPIO_Mode_OUT;
	TestePB6.GPIO_Mode = GPIO_Mode_IN;
	TesteLED.GPIO_Mode = GPIO_Mode_OUT;

	TestePA10.GPIO_OType = GPIO_OType_PP;
	TestePB6.GPIO_OType = GPIO_OType_PP;
	TesteLED.GPIO_OType = GPIO_OType_PP;

	TestePA10.GPIO_Speed = GPIO_Speed_50MHz;
	TestePB6.GPIO_OType = GPIO_Speed_50MHz;
	TesteLED.GPIO_Speed = GPIO_Speed_50MHz;

	TestePA10.GPIO_PuPd = GPIO_PuPd_NOPULL;
	TestePB6.GPIO_PuPd = GPIO_PuPd_UP;
	TesteLED.GPIO_PuPd = GPIO_PuPd_NOPULL;

	GPIO_Init (GPIOA, &TestePA10);
	GPIO_Init (GPIOB, &TestePB6);
	GPIO_Init (GPIOD, &TesteLED);

	while (1)
	{

		GPIO_WriteBit(GPIOD, GPIO_Pin_12, GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6));

		if(contador < 1050000)
		{
			GPIO_WriteBit(GPIOA, GPIO_Pin_10, Bit_SET);
		}
		else if(contador >= 1050000 && contador <= 2100000)
		{
			GPIO_WriteBit(GPIOA, GPIO_Pin_10, Bit_RESET);
		}
		else if(contador > 2100001)
		{
			contador = 0;
		}
		contador++;
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
