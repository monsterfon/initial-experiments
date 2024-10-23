#include <stdio.h>
#include <stdlib.h>

int main()
{
    //gg naravno večmestno število, SPRAviš v Arrey

    //sCANF THE NUMBER

    int a;
    printf("Enter the a number:");
    scanf("%d", &a);




    //gg calculate number of digits
    int count = 0;
    int n = a;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    int A[count];

    //storing count
    int b;
    b = count; // saves count
    n = a; //saves the real ENTERED number





// DOESNT WORK, ostalo dela
//stores inside an arrey al of the numbers
while (n != 0)
    {
A[count] = n % 10; //145896
           n /= 10;
           count--;}







//GG Prints out arrey A. Count is number of elements
  for(int loop = 1; loop <= b; loop++)
      printf("%d ", A[loop] *  A[loop]);

//SQRT DIGITS-+-+-+-+-+-+-+-+-+-+-+


    return 0;
}
