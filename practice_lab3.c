#include <targets/AT91SAM7.h>

void delay(int ms)
{
  volatile int a, b;
  for(a=0;a<=ms;a++)
    for(b=0;b<=3000;b++)
      __asm__("NOP");
}

int main()
{
  PMC_PCER = 1<<2 | 1<<3;
  PIOA_PER = 1<<7 | 1<<8 << 1<<9 | 1<<14 | 1<<15;
  PIOA_ODR = 1<<7 | 1<<8 << 1<<9 | 1<<14 | 1<<15;

  PIOB_PER = 1<<23 | 1<<24;
  PIOB_ODR = 1<<23 | 1<<24;

  PIOB_PER |=1<<20;
  PIOB_OER = 1<<20;
  PIOB_OWER = 1<<20;  
  
  while(1)
  {
    if((PIOB_PDSR&(1<<24))==0){
      PIOB_ODSR ^= 1<<20;
      delay(200);
    }
  }
  return 0;
}