#include "stm32f4xx.h"
int main()
{
  RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN;
  for(int a=0; a<10000000; a++)
  {
  GPIOF->MODER &= ~GPIO_MODER_MODER12; 
  GPIOF->MODER |= GPIO_MODER_MODER12_0; 
  GPIOF->BSRRL = GPIO_BSRR_BS_12; 
  for(int a=0; a<10000; a++); 
  GPIOF->BSRRH = GPIO_BSRR_BS_12;
  for(int a=0; a<10000; a++);
  }
  return 0;
}
