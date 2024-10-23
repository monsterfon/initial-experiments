/******************************************************************************

a simple void usage to help me with my difficult void usage
uporaba voida za manj ponavljanja kode in  do while, da ti ti ni treba niti x()ponavljat

*******************************************************************************/
#include <stdio.h>
//defining void so the porgram knows it exists
void x ();


int
main ()
{
  //puting void in main
  int z = 5;
  do{
    x ();
    z = z - 1;
      
  } while(z>=3); //vstavljeno številokrat se ponovi
  return (0);
  }




//putting void outside main
  void x ()
  {