#include <stdio.h>
int main()
{
	double x,y; char c;
	printf("Enter num1:\n");
	scanf("%lf",&x);
	printf("Enter operator:\n");
	scanf(" %c",&c);
	printf("Enter num1:\n");
	scanf("%lf",&y);
	
	if (c == '+'){
printf("%f", x + y);		
} else if (c == '-'){
printf("%f", x - y);
} else if (c == '/'){
printf("%f", x / y);
} else if (c == '*'){
printf("%f", x * y );
}else {
printf("ERROR. Probably the operator. IDK" );
}

return 0;
}