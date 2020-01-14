#include <targets/AT91SAM7.h>
#define PIOB 1<<3
#define PB20 1<<20
#define PITEN 1<<24
// MCK = 16MHz
// MCK / 16 = 3MHz = 299 999 + 1
int main(){
  PMC_PCER = PIOB;

  PIOB_PER = PB20;
  PIOB_OER = PB20;
  PIOB_OWER = PB20;

  PIT_MR = 299999 | PITEN;                    // 299 999 + 1 to reach 1 at 24th bit == 0.1 second
while(1){
  if( (PIT_PIIR & (50<<20) )== (50<<20)){     // 0.1sec multiply by 50
    PIT_PIVR;                                 // empty reading
    PIOB_ODSR ^= PB20;                       // BL on/off
  }
}
  return 0;
}