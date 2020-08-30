#include <stdio.h>

int iccv( int x, int y )
{	
	return x += y;
}

int iccx( int &x, int y )
{
	return x += y;
}
//int iccd( int *x, int y ) nao eh possivel
int iccd( int x, int y = 10 )
{
	return x += y;
}

int main(void)
{
	int a = 12;
	int b = 25;
	
	printf("\nIccv: %d", iccv(a, b));
	printf("\nIccx: %d", iccx(a, b));
	printf("\nIccd: %d", iccd(a, b));
}

