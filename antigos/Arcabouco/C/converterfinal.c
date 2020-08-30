#include <stdio.h>
#include <math.h>

int cont = 0;

int fib(int n)
{
	int x;
	cont = cont + 1;
	if(cont == 10)
	{
		cont = 0;
	}
		
	if(n <= 1)
	{
		return 1;
	}	
	else{
		
		return fib(n-1) + fib(n-2);
	}	
}

//0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584
int fibtwo(int n)
{
	int pos = 1, anterior, atual, cont;
	
	while(pos < n)
	{
		if(pos == 1) // inicialização
		{
			atual = 1;
			anterior = 0;
			cont = 3;
		}
		
		anterior = atual;
		atual = pos;
		pos = anterior + atual;
		printf("%d ", pos);	
		cont+=1;	
	}
	
	return cont;
}


int convert( int n, int b )
{
	if(n < b)
	{
		return (n % b);
	}
	else
	{				
		return convert(n / b, b);
	}
}






int main(void)
{
	int n, b, m, x;
	scanf("%d", &n);	
	

	m = fib(n);
	
			
	printf("%d ", cont);
	return 0;
}
