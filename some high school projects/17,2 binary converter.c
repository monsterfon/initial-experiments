/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

char *binbin(int n) //binary converter function
{
    static char bin[17]; //konst like
    int x;

    for(x=0;x<16;x++) //repeater 16 times
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    
    bin[x] = '\0';
    return(bin);
}

int main()
{
    int input;

    printf("Type a value 0 to 65535: ");
    scanf("%d",&input);
    printf("%d is binary %s\n",input,binbin(input));
    return(0);
}

