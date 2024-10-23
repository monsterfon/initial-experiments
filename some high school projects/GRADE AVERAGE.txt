/******************************************************************************

GRADE AVERAGE

*******************************************************************************/
#include <stdio.h>

int main()
{
  int arr[1000];
  int i, n, b;
  printf ("Enter how many elements you want: \n");
  scanf ("%d", &n);

  b = n; //count = b

  printf ("Enter the numbers in the array: \n");
  for (i = 0; i < n; i++)
  {scanf ("%d", &arr[i]);}
  //devide sum of everything in array by count
 
  for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of all elements of array = %d", sum/b);

    return 0;
}