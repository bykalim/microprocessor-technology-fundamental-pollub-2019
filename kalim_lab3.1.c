#include <targets/AT91SAM7.h>

void delay(int ms)
{
  volatile int a, b;
  for(a=0;a<=ms;a++)
    for(b=0;b<=3000;b++)
      __asm__("NOP");
}

void main()
{  
  
  PMC_PCER = 1<<3;

  /// Configuration of PB20
  PIOB_PER = 1<<20;
  PIOB_OER = 1<<20;
  PIOB_OWER = 1<<20;

  // Configuration of Timer clock
 TC0_CCR = 1<<1;
 TC0_CMR = 1<<2;
 TC0_SR;
 TC0_CCR = 1<<0 | 1<<2;

  if((TC0_SR&1<<0)!= 0){
      PIOB_ODSR ^= 1<<20;
  }
}

