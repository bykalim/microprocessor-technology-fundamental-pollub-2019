//#include <targets/AT91SAM7.h>
//
//#define PIOB 1<<3
//#define PB20 1<<20
//#define PITEN 1<<24
//#define CLKDIS 1<<1;
//
//
//// Timer clock divider
//#define TIMER_CLOCK1 0<<0; //   MCK/2
//#define TIMER_CLOCK2 1<<0; //   MCK/8
//#define TIMER_CLOCK3 1<<1; //   MCK/32
//#define TIMER_CLOCK4 2<<1; //   MCK/128
//#define TIMER_CLOCK5 1<<2; //   MCK/1024
//
//#define CPCTRG 1<<14; //   MCK/1024
//
//#define CLKEN 1<<0;
//#define CLKDIS 1<<1;
//#define SWTRG 1<<2;
//
//#define COVFS 1<<0;
//
//#define TC0 1<<12;
//
//int main(){
//  PMC_PCER = PIOB | TC0;
//
//  PIOB_PER = PB20;
//  PIOB_OER = PB20;
//  PIOB_OWER = PB20;
//
////  TC0_CCR = CLKDIS;
////  TC0_CMR = TIMER_CLOCK4; 
////  TC0_CCR = CLKEN;
////  TC0_CCR |= SWTRG;
//
//  TC0_CMR = CPCTRG;
//  TC0_CMR |= TIMER_CLOCK4;
//  
//  TC0_RC = 37500;
//
//  TC0_CCR = CLKEN;
//  TC0_CCR |= SWTRG;
//
//while(1){
//  if((TC0_SR & (1<<4))!=0){
//      PIOB_ODSR ^= 1<<20;
//  }
//  
//}
//  return 0;
//}