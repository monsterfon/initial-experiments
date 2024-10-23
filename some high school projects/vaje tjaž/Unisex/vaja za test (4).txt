#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*

    Glede na vneseno število IZRIŠE KVADRAT ZVEZDIC
    */

    int KolikoZvezd;
    scanf ("%d", &KolikoZvezd);


    printf("\n");

 //ZGORNJI ROB
    for (int i = 1; i <= KolikoZvezd; i++)
	{
    printf("*");
		}

	printf("\n");

		//UMESNE STRANICE
    for (int i = 1; i <= (KolikoZvezd - 2); i++)
	{
    printf("*");
    for (int i = 1; i <= (KolikoZvezd - 2); i++)
	{
    printf (" ");
    }
    printf("*");
    printf("\n");
    }


//SPODNJI ROB
    for (int i = 1; i <= KolikoZvezd; i++)
	{
    printf("*");
		}


    return 0;
}
