#include <targets/AT91SAM7.h>
#include <PCF8833U8_lcd.h>

#include <stdio.h>
#include <stdlib.h>
void time(int ms)
{

  // Variable
  volatile int a,b;

  // Delay
  for (a = 0; a <= ms; a++)
    for (b=0; b <= 3000; b++)
      __asm__("NOP");
}

void drawGraph();

int a = 0;
int main(){

  InitLCD();
  LCDClearScreen();

  PMC_PCER = 1<<2 | 1<<3;
  PIOB_PER = 1<<20 | 1<<24;                  
  PIOB_OER = 1<<20;  
  PIOB_ODR = 1<<24;  
          
  PIOA_PER = 1<<6;                  
  PIOA_ODR = 1<<6; 

  ADC_CR = 1<<0;
  ADC_MR = ( ( 23 << ADC_MR_PRESCAL_BIT ) | (1 << ADC_MR_SHTIM_BIT ) | (2 << ADC_MR_STARTUP_BIT));
  ADC_CHER = 1<<6;
  ADC_CR = 1<<1;

while(1){
  if ((ADC_SR & (1<<6)) != 0){
    ADC_CR = 1<<1;
    char buffer [33];
    itoa (ADC_CDR6,buffer,10);
    LCDPutStr(buffer, 60, 64, LARGE,0xFFF, 0x0);

    if((PIOB_PDSR&(1<<24))==0){
      LCDClearScreen();
    time(200);
    }
   }
  }
  return 0;
}

void drawGraph(){

}