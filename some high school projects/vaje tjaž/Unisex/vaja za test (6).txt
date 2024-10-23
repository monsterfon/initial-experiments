#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pozove k vnosu števila
    //Izpiše vzorec  n(n-1)
    /*
    1****
    12***
    123**
    1234*
    12345
    ITD
    Glede na vneseno število
    */

    //SCANF število ponovitev
    int KolikoStevil = 0;
    scanf ("%d", &KolikoStevil);

    //for x times print num;;;;;; out of for loop \n
    for (int i = 1; i <= KolikoStevil; i++)
	{

    //NPR DEVETKRAT PONOVI
        //izpiše tolko števil Kolikor krogov smo že naredili
	    for (int b = 1; b <= i; b++)
        {
        printf("%d",b );
		}

        for (int c = 1; c <= (KolikoStevil-i); c++)
        {
        printf("*" );
		}

    printf("\n");
    }

    return 0;
}
