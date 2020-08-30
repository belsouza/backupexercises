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

void maioroumenor( int y, int a, int b, int c )
{

	
	if(y == 1)
	{
		printf("\nMaior: %d", oMaior(a, b, c));
	}
	
	else if(y == 2)
	{
		printf("\nMenor: %d", oMenor(a, b, c) );		
	}
	
	else
	{
		printf("Ops!");
	}
	
}

int main(void)
{
	int x, y, z, num;	
	
	printf("\nEntre com tres numeros para comparacao:");
	scanf("%d  %d  %d", &x, &y, &z);
	
	printf("\nDefina a ordenacao: 1 para o maior ou 2 para o menor: ");
	scanf("%d", &num);
	
    maioroumenor(num, x, y, z);
    
}
