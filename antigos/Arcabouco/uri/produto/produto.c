#include <stdio.h>

int produto( int a, int b)
{
	return a * b;
}

int main( int argc, char *argv[] )
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("PROD = %d\n", produto(a, b));
	return 0;
}
