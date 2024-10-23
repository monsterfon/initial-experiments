/******************************************************************************

una igra k smo se jo igrali kot otroci samo ne znam več
 njenega imena

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

float convert (float f);

int
main ()
{
  //ti definira sprermenljivke lol
  float x;
  char word1[20], word3[20], word2[20];


  printf ("Slovenska otroška igra. Vstavi negativen integer:   ");
  scanf ("%f", &x);

  printf ("Vstavi ime osebe 1:   ");
  scanf ("%s", word1);
  printf ("Vstavi ime osebe 2:   ");
  scanf ("%s", word2);
  printf ("Vstavi ime osebe 3:   ");
  scanf ("%s", word3);
  printf ("\n");
  
  
  printf ("Ti bos osebo %s pofukal. ", word1);
  printf ("Ti bos imel z osebo %s %.1f otrok. ", word2, convert (x));
  printf ("Ampak poročil se bos z osebo %s, ker bo imela puhno denarja. ", word3);


   return (0);
}


//funcija ki vrne ABS vrednost
float
convert (float x)
{
  return abs (x);
}
