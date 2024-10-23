#include <stdio.h>
#include <stdlib.h>

int main()
{
    //vnešeno 8 mestno število obrni
    //Print out character arrey in reverse numbers
    printf("Vnesi 8 mestno stevilo!\n");
    int osem[8];

    //save everything inside an arrey
    int x;
    for (int i = 0, x; i <= 8; i++)
      {

        scanf("%d", &osem[i]);

      }


    //LOOPING THROUGH ARREY IN REVERSE ORDER
     //Calculate length of array arr
    int length = sizeof(osem)/sizeof(osem[0]);

    printf("Original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", osem[i]);
    }

    printf("\n");

    printf("Array in reverse order: \n");
    //Loop through the array in reverse order
    for (int i = length-1; i >= 0; i--) {
        printf("%d ", osem[i]);
    }
    return 0;
}
