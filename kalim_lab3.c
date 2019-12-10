//#include <targets/AT91SAM7.h>
//
//void time(int ms)
//{
//  // Variable
//  volatile int a,b;
//
//  // Delay
//  for (a = 0; a <= ms; a++)
//    for (b=0; b <= 3000; b++)
//      __asm__("NOP");
//}
//void main(){
//  PMC_PCER = 1<<2 | 1<<3;
//  PIOA_PER = 1<<7;                  // PA7 line 7 the left side of the joystick
//  PIOA_ODR = 1<<7;                  // 
//
//  PIOB_PER = 1<<20;
//  PIOB_OER = 1<<20;
//  PIOB_OWER = 1<<20;
//
//while(1)
//  if ((PIOA_PDSR & (1<<7)) == 0)    // WHEN PRESS PIOA_PDSR is 0
//  {
//    PIOB_ODSR ^= 1<<20;
//    time(200);
//  }
//
//}