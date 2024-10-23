/******************************************************************************



*******************************************************************************/
#include <stdio.h>

int main()
{
    int g, favednum = 4;
    do{
    printf("Guess num");
    scanf("%d", &g);
    }
    while(g != favednum);
    printf("Yes, it was 4 all allong");
   

    return 0;
}