/******************************************************************************

(Bonus) We have an embedded system with 32-bit register SYS_CTRL, that has following structure:
So, to change:
- MCUCTL bits, we need to change bits 8-11 in SYS_CTRL register
How would you define a structure in C that would change exactly and only MCUCTL bits when one
would write following code:
SYS_CTRL.MCUCTL = 0x1;

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>


#define NASLOV_REGISTRA 0x1234ABCD

typedef struct {
    uint32_t OCTP : 8;
    uint32_t MCUEN : 4;
    uint32_t MCUCTL : 4;
    uint32_t PLLCTL : 8;
    uint32_t PLLEN : 8;
} SYS_CTRL1;







int main()
{   
    SYS_CTRL1 SYS_CTRL = (*(SYS_CTRL1*)(NASLOV_REGISTRA));
    SYS_CTRL.MCUCTL = 0x1;
    
    //clears
    //allRegBytes & ~(0x100)
    //writes
    //allRegBytes |(data))
    

    
    
    return 0;
}