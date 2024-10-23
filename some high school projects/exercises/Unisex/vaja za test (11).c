#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //milisekunde v ure:minute:sekunde


    printf ("Vnesi velik DOUBLE milisekund: ");
    double milisekunde;
    scanf ("%lf", &milisekunde);


   //modulus double round down
    double ure = milisekunde/3600000;
    double ureFinal = floor(ure);

    double minute = (ure - ureFinal) * 60;
    double minuteFinal = floor(minute);

    double sekunde = (minute - minuteFinal) * 60;
    double sekundeFinal = floor(sekunde);

    printf("Ure:minute:sekunde \n");
    printf("%f : %f : %f", ureFinal, minuteFinal, sekundeFinal);

    return 0;
}
