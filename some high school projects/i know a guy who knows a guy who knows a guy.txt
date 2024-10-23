#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	int *pi = &i;
	//pp ddd
	printf("%p, %p, %d, %d, %d \n \n", pi, &i, *pi, i, *&i);
	//pp dd
	printf("%p, %p, %d, %d", &*pi, &*&i, *&i, *&*pi);
	return 0;
}