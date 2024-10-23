#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    //generira 100 celih števil OD 1 DO 10
    //prešteje in ti pove koliko je katerih

    int bal[100];
    int y=0;

    //shrani 100 RANDOM ŠTEVIL V ARREY
    for (int f = 0; f < 100 ;f++) {
    bal[f] = (rand() % 10);
    }

    //10 x LOOP
    for(int x=0; x<10;x++)
    {
            //prešteje koliko enk, dvojk, trojk npr je
            for(int i = 0; i<100;i++)
            {
                if(bal[i] == x)
                {
                    y++;
                }
            }

            //pove koliko enk, dvojk, trojk je je
            printf("\n %d jih je toliko = %d",x,y);
            y=0;
    }
}