#include <stdio.h>

int oMenor (int a, int b, int c)
{
	if ((a <= b) && (a <= c))
	{
		return a;
	}
	if(b <= c)
	{
		return b;
	}
	return c;
}


int oMaior (int a, int b, int c)
{
	if ((a >= b) && (a >= c))
	{
		return a;
	}
	if(b >= c)
	{
		return b;
	}
	return c;
}

int main(void)
{
	int x, y, z, maior, menor;
	scanf("%d  %d  %d", &x, &y, &z);
	maior = oMaior(x, y, z);
	menor = oMenor(x, y, z);
	printf("\nMaior: %d", maior);
	printf("\nMenor: %d", menor);
}
