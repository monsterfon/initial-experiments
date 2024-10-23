#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j;
int arrey[2][4] = {{0,3,7,5},{2,3,6,9}};
	
for(int i = 0; i <= 1; i++) 
	{
		for(int j = 0; j <= 3; j++)
{
	printf("%d\n", arrey[i][j] );
	}
		}
return 0;
}