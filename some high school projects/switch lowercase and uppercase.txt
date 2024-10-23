#include <stdio.h>
#include <ctype.h> 

int main()
 {
	
   
   char x;

 
printf("Give me a character, all caps or lowercase, your choice:");
   scanf("%c", &x);
 	
 //puts it to lowercase if needed
   if (isalpha(x) )
   {  
     x = tolower(x); 
  }

switch(x) {

   case 'a'  :
      printf("allejuah");
      break; 
	
   case 'b'  :
      printf("ballejuah");
      break;
  
   
   default : 
   printf("defaultelujuah");
}

return 0;
}