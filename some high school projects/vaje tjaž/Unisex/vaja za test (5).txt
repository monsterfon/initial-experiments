#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Glede na vneseno število IZRAČUNA ZASLUŽEK
    In ob večjih zneskih da popust 10% in 15%
    */
    printf("Stevilo artiklov: \n");
    double KolikoARTIKLOV;
    scanf ("%lf", &KolikoARTIKLOV);

    printf("Cena artiklov: \n");
    double KolikoCena;
    scanf ("%lf", &KolikoCena);

    double cena = KolikoARTIKLOV*KolikoCena;
    printf("Cena je: %f\n", cena );


    if ( cena < 100)
    {
        printf( "Hvala za vaš skromen nakup!");
    }
    else if (cena < 200)
    {
        printf("Imate 10 procentni kolicinski popust. Placajte %f", cena * 0.9);
    }
    else
    {
        printf("Imate 15 procentni kolicinski popust. Placajte %f", cena * 0.85);
    }

    return 0;
}