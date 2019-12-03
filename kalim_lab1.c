///*
//  Written By    : Kalim BY
//  Created Date  : 26/Nov/2019
//*/
//
//#include <targets/AT91SAM7.h>
//
///*
//  ----------------------------------
//  In file: SAM7-EX256_Rev_C-sch.pdf
//  In File: AtmelSAM7 datasheet.pdf
//  ----------------------------------
//  PMC_PCER =   1<<3   |  1<<2
//               01000 OR  000100
//               8     OR  4
//  ----------------------------------
//  PB20/PWM1 = 1<<20
//  ----------------------------------
//*/
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
//    // Enable the LCD
//    PMC_PCER = 1<<3;  // set clock peripheral enable:: PID3 [Parallel I/O Controller B]
//    PIOB_PER = 1<<20; // set peripheral enable      :: pin 65 LCD_BL
//    PIOB_OER = 1<<20; // set output enable          :: PB20
//
//    // Infinite Loop
//    while(1){
//      PIOB_SODR = 1<<20;// Set Output Data Register   :: PB20
//      time(200);        // Delay 200ms
//      PIOB_CODR = 1<<20;// Clear Output Data Register :: PB20
//      time(200);        // Delay 200ms
//  }
//}
//
