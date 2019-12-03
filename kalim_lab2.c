/*
  Written By    : Kalim BY
  Created Date  : 3/Dec/2019
*/

#include <targets/AT91SAM7.h>

void time(int ms)
{
  // Variable
  volatile int a,b;

  // Delay
  for (a = 0; a <= ms; a++)
    for (b=0; b <= 3000; b++)
      __asm__("NOP");
}

void main()
{
  PMC_PCER = 1<<3;            // set clock peripheral enable:: PID3 [Parallel I/O Controller B]
  PIOB_PER = 1<<20 | 1<<24;   // 
  PIOB_OER = 1<<20;
  PIOB_ODR = 1<<24;
  PIOB_SODR = 1<<20;

while(1)
 if((PIOB_PDSR&(1<<24))==0){
  PIOB_ODSR ^= (1<<20);
  time(20);

  while ( (PIOB_PDSR&(1<<24))==0 ) {}
  time(20);
  }
}
