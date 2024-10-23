#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stevilo = 2;
    int min = 2147483647;
    int max = -2147483648;
    float average = 0;

    while ( stevilo != 0)

    {


        printf("Vnesi celo stevilo\n");
        scanf ("%d", &stevilo);

        if (stevilo < min)
        {
            min = stevilo;
        }

        if (stevilo > max)
        {
            max = stevilo;
        }




        if (average == 0)
        {
            average = stevilo;
        }

        average = (average + stevilo) / 2 ;

    printf("\n Min = %d,Max = %d, povprecje = %f \n", min, max, average);

    }


    return 0;
}
