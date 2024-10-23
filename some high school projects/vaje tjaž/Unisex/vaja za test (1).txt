#include <stdio.h>
#include <stdlib.h>

int divisors(int x) {
    int limit = x;
    int numberOfDivisors = 0;

    if (x == 1) return 1;

    //finds number of DEVISORS, DELITELJI
    for (int i = 1; i < limit; ++i) { //ponavljaš z vsakim številom nad ena
        if (x % i == 0) { //če je deljivo MODUL potem je number of divisors ++
            limit = x / i;
            if (limit != i) {
                numberOfDivisors++;
            }
            numberOfDivisors++;
        }
    }
    return numberOfDivisors;
}
//BOLJ EFFICIENT ALGORITEM BI POGLEDAL KOLKO PRAŠTEVIL LAHKO DELI TO ŠTEVILO IN DODAL DVA

int main()
{
    printf("%d",divisors(60));
    return 0;
}
