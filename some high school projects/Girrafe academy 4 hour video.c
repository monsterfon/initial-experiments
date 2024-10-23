#include <stdio.h>
#include <stdlib.h>
#include <math.h> //math functions
#include <string.h> //structs string copy, files

// good teaching means simplifying and giving in byte sized pieces



void         // This is the return type (void means no value is computed and returned by the function!)
print_happy_birthday( int age )
{
   printf("Congratulations on your %d th Birthday\n", age);
   return;  // you can "terminate" a void function by using return.
   // HERE it is REDUNDANT because the function is over anyway.
}

double
kratTri( double num )
{
   return num * 3.0;
}

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main()
{

    //create variables
    //variable values can change, but their names cant
    //const = constant
    int const numOfEarth = 46;
    double bigFloat = 4.123456 + 1 / 2 * 2;
    char planet [] = "earth";
    char abc = 'a';

    //print variables
    printf("Hello %s,%c, \n", planet, abc);
    printf("Hello world %d, %f!\n",numOfEarth, bigFloat);

    //functions
    //round down, ceiling, sqare root, to the power of
    //must include math.h
    printf("functions %f %f  %f %f\n",floor(9.01), ceil(9.01), sqrt(2), pow(3,4));

    //SCANF DELA ZA INT, DOUBLE VSE, MA SAMO DO SPACE OR ENTER
    //FGETS DELA DO ENTER, MA BERE SAMO STRING
    char x[10]; //
    printf("fgets");
    fgets(x, 20, stdin);
    printf("%s", x);

    // scan f
    char age[20];
    printf("give age");
    scanf ("%s", age); //& pointer for numbers
    printf("%s", age);
    //%d = InT:
    //%lf = double
    //%c = char
    //%s = string, treba tudi char  name [20], vpisat velikost
    //Scanf mora bit vedno zadnji, kerdaje new line v buffer. ali pa vsaj malo text umes scanf in drugo

    char Arjun[] = "green";
    printf("ya %s", Arjun);


    //arreys, prvo mesto je nula
    int xyz [3] = {1,2,3};
    xyz[2] = 2;
    printf("%d, %d, %d", xyz[0],xyz[1],xyz[2]);


    //a box to put stuff in
    print_happy_birthday( 10 );

    // a box where stuff comes out
    printf("%f", kratTri( 2.5674 ));

    int k = 4;
    if ( k == 3)
    {
        printf( "k je 3");
    }
    else
    {
        printf("k ni 3");
    }



    char character = 'a';
    switch (character)
    {
    case 'a':
     printf("https://c-for-dummies.com/begc4d/exercises/");
     break;
    default: ;
    }


    //While do while
    int h = 3;
    while (h != 4)
    {
    printf("%d", h);
    h++;
    }

    do {
    printf ("%d", h);
    h--;
    }
    while (h >= 1);


    //FOR REPEATING THINGS
    for (int i = 1; i <= 5; i++)
	{
    printf("%d",i );
		}


    //multi dim arreys
    int cigan[2][6] = {{0,1,2,3},{0,11,22,33}};
    printf("%d",cigan [1][2]);

    struct Books Book1;        /* Declare Book1 of type Book */
   struct Books Book2;        /* Declare Book2 of type Book */

   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali");
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;

   /* print Book1 info */
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

   /* print Book2 info */
   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

    //files open, WRITE,  close
    FILE *adressvariable_name;
    adressvariable_name = fopen("file.c", "w");
    fprintf(adressvariable_name, "%s", "hello world" );
    fclose (adressvariable_name);

    //files open, READ,  close
    char hellosaver[100];
    adressvariable_name = fopen("file.c", "r");
    printf("%s", fgets (hellosaver,50,adressvariable_name));
    //getc reads a character, getx x an integer,fgets reads string of characters
    fclose (adressvariable_name);
    
    
    return 0;
}