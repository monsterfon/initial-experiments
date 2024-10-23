#include <stdio.h>

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


int main()
{
    // f(x) = !x1 * (!x2 + x3) + x1 * x2
    
    int x1,x2,x3;

    //works 
    printf("Type a value of x1: ");
    scanf("%d",&x1);
    printf("\nType a value of x2: ");
    scanf("%d",&x2);
    printf("\nType a value of x3: ");
    scanf("%d",&x3);

    //and *
    //or +
    //not !
    //Xor ^   X1*!X2 + !X1*X2 = X1^X2 

    return(0);
}