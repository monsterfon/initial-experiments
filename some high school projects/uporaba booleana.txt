/******************************************************************************

WAIT THATS ILLEGAL!!
using boolean in C

*******************************************************************************/
#include <stdbool.h> 
#include <stdio.h>
int main() 
{ 
    
    bool b;
    int btrans;
    
    printf("GIMME THE ANSWER:\n");
    // scanf ne zna brat boolean, zato rabiš prevest. če je 0 je false, v vseh drugih primerih je true
    scanf("%d", &btrans);
    b = btrans;
    
    //dva načina prikaza
    // če je 0 je false, v vseh drugih primerih je true
    printf(b ? "true\n" : "false\n");
    
    // spodnji if stavki imajo enako funkcijo kot zgornji if
    // če je 0 je false, v vseh drugih primerih je true
    if(b == 1)
        printf("Its TRUE\n");
    else if(b == 0)
        printf("B is FALSE\n");
    else
        printf("Did not work!\n");
        
    // tko se uporablja bolean v C
    return 0; 
} 