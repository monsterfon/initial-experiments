#include <stdio.h>
#include <stdlib.h>

void fuck(int x);

int main() {
	int i, x, n = 7;
	printf("insert number to repeat(n)");
	scanf("%d",&n);
	printf("insert number of repeats(x)");
	scanf("%d",&x);
	for(i=0; i<x; i++){
  fuck(n);}
    return 0;
}

void fuck(int x) {
printf("%d",x );
	}