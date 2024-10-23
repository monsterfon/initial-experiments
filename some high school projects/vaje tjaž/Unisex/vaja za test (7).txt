#include <stdio.h>
#include <stdlib.h>

int main()
{
    //vnešeno 8 mestno število obrni
    //izpiše obratno
    //rev je reverse, remainder je MODULUS
    int n, rev = 0, remainder;

    printf("Enter an 8 number integer: ");
    scanf("%d", &n);

    //PRimer 123
    while (n != 0) {
            
        remainder = n % 10; //ostanek 3
        //ostanek 2
        //ostanek 1
    
        rev = rev * 10 + remainder;//(rev * 10 je najprej 0 )+ 3 je reverse je 3
        //3*10 + 2
        //32*10+1
        
        n /= 10; //n = 12
        //1
        //0,1
    }
    printf("Reversed number = %d", rev);
    return 0;
}
