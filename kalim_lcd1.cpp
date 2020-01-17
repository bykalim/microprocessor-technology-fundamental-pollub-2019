//#include <targets/AT91SAM7.h>
//#include <PCF8833U8_lcd.h>
//void time(int ms)
//{
//
//  // Variable
//  volatile int a,b;
//
//  // Delay
//  for (a = 0; a <= ms; a++)
//    for (b=0; b <= 3000; b++)
//      __asm__("NOP");
//}
//
//void drawGraph();
//
//int main(){
//  InitLCD();
//  Backlight(BL_ON);
//  SetContrast(5);
//  LCDClearScreen();
//  drawGraph();
//  PMC_PCER = 1<<2;
//  PIOA_PER = 1<<7;                  // PA7 line 7 the left side of the joystick
//  PIOA_ODR = 1<<7;                  // 
//
//
//while(1)
//  if ((PIOA_PDSR & (1<<7)) == 0)    // WHEN PRESS PIOA_PDSR is 0
//  {
//    for(int i = 0; i < 128; i += 4){ 
////      LCDClearScreen();
//      LCDSetLine(i, 64, 64, i, 0x0F0);
//      drawGraph();
//      LCDSetLine(i+2, i+2, i+2, i+2, 0x0F0);
//      LCDSetLine(60, i, 68, i, 0xFFF);
//      LCDSetLine(i, 60, i, 68, 0xFFF);
//      time(250);
//    };
//    LCDSetCircle(64,64,64,0x0F0);
//  }
//  return 0;
//}
//
//void drawGraph(){
//
//  LCDSetLine(64, 128,64, 0, 0xFFF);
//  LCDSetLine(0, 64,128, 64, 0xFFF);
//  LCDPutChar('A', 28, 28, MEDIUM,0xFFF, 0x0);
//  LCDPutChar('B', 28, 92, MEDIUM,0xFFF, 0x0);
//  LCDPutChar('C', 92, 28, MEDIUM,0xFFF, 0x0);
//  LCDPutChar('D', 92, 92, MEDIUM,0xFFF, 0x0);
//}