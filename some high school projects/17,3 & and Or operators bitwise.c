#include <stdio.h>
#define SET 32 //constants

char *binbin(int n);

int main()
{
    int bor,result;

    printf("Type a value from 0 to 255: ");
    scanf("%d",&bor); //bor je resault
    result = bor | SET; //or dela na vsak bit posebi, more bit vsaj eden da gre skozi
 
    printf("\t%s\t%d\n",binbin(bor),bor); // \T je tab
    printf("|\t%s\t%d\n",binbin(SET),SET);
    printf("=\t%s\t%d\n",binbin(result),result);
    
    result = bor & SET; //& na vsak bit posebi dela, Morasta bit oba da bo 1
    //exkluzivna or vrata ^,  eno ali drugo, ne pa obe 
	//!not 23 is 0 and 0 is 1
	//~ reverses each individual bit
	// shift << and >> right 
	//premik za eno mesto x = x << 1;

    printf("\t%s\t%d\n",binbin(bor),bor); // \T je tab
    printf("&\t%s\t%d\n",binbin(SET),SET);
    printf("=\t%s\t%d\n",binbin(result),result);
    return(0);
}

char *binbin(int n)
{
    static char bin[9];
    int x;

    for(x=0;x<8;x++)
    {
        bin[x] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}