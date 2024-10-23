/*
my fav sources program
*/
#include <stdio.h>

int main ()
{
  printf ("Hello Dvoprimcni Tilen \n");

    char code;
  printf ("What language do you prefer\n");
  printf("A is for Javascript(the first language you shall learn at the FE academy in Ljubljana)\n");
  printf("B is for C(the second language you shall learn at the FE academy\n");
  printf("C is for C++(the language you shall not learn at the FE academy\n");
  printf ("Enter the chosen letter (A, B, C): ");
  scanf ("%c", &code);
  printf ("These are my favorite youtobe channels and sources from your\n\n");

  switch (code)
    {
    case 'A':
      puts ("https://www.youtube.com/watch?v=fju9ii8YsGs\n");
      break;
    case 'B':
      puts ("https://c-for-dummies.com/begc4d/exercises/\n");
      break;
    case 'C':
      puts ("https://www.youtube.com/watch?v=Rub-JsjMhWY\n");
      puts ("https://www.youtube.com/watch?v=6y0bp-mnYU0\n");
      break;
    default:
      puts ("That's not A, B, or C, bastard!!! If you typed c instead of C, you should know C is a case sensitive language");
    }
    
  return (0);

}