#include <stdio.h>
//fib(5) = 14 calls = 5

int cont = 0;

int fib(int n)
{
	cont = cont + 1;	
	if(n == 0)
	{
		return 0;
	}	
	if(n == 1)
	{		
		return 1;		
	}	
	else
	{				
		return (fib(n-1) + fib(n-2));
	}
}

int main(void)
{
	int n, f, alg;
	
	scanf("%d", &n);
	while(n > 0){		
		scanf("%d", &alg);
		f = fib(alg);
		printf("fib(%d) = %d calls = %d\n", alg, cont-1, f);
		n--;
		cont = 0;
	}	
	return 0;
}
