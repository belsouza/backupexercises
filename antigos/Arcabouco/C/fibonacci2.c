#include <stdio.h>
#include <math.h>

int fib(int n, int *cont)
{
	*cont = *cont + 1;
		
	if(n > 1)
	{
		
		return (fib(n-1, cont) + fib(n-2, cont));		
	}
	else
	{				
		return n;
	}
}

int fibx(int n, int *cont)
{
	*cont = *cont + 1;
		
	if(n > 1)	{
				
		return (fibx(n-1, cont) + fibx(n-2, cont));		
	}
	else
	{				
		return n;
	}
}

int fibonacci( int n )
{
	int v, cont = 0;
	v = fib(n, &cont);
	return (cont - 1);	
}

void duofibonacci( int n, int *x, int *cont )
{
	int v, ncont = 0;
	v = fib(n, &ncont);
	*x = v;
	*cont = ncont - 1;	
}

void duofibonaccix( int n, int *x, int *cont )
{
	int v, ncont = 0;
	v = fibx(n, &ncont);
	*x = v;
	*cont = ncont;	
}



int foo(){
	
	int a, b, c ,d, n;
	scanf("%d", &b);
	
	while(b > 0)
	{
		scanf("%d  %d", &a,  &b);
		duofibonaccix(a, &c, &d);
		printf("fib(%d) = %d calls = %d\n", a, d, c);
		b--;
	}	
	return 0;	
}



int main(void)
{	
	int n, b, i;			
	i = 1;
	do
	{
		scanf("%d %d", &n, &b);
		if(n != 0 || b != 0){
			
			
			
		}
		
	}
	while(n != 0 || b != 0);
	
	return 0;
}

