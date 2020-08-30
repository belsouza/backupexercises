#include <stdio.h>
#include <math.h>


void invertevetor(int *vet, int size )
{
	int j, l, meio, temp;
	meio = size / 2;
	l = size-1;
	for(j = 0; j < meio; j++ )
	{
		temp = vet[j];
		vet[j] = vet[l];
		vet[l] = temp;			
		l--;
	}	
	
}

int convertlongnumber( int n, int b, int *vet, int *add ){
	
	int i = *add;
	
	if(n == 0)
	{
		invertevetor(vet, i);	
	}	
	else
	{
		vet[i] = n % b;
		*add = *add + 1;
		convertlongnumber( n / b, b, vet, add);
	}
}

int lastone( int n, int b ){
	
	if(n == 0)
	{
		return(n / b);
	}
	else
	{
		return (lastone(n / b, b));
	}
}

int convert(int n, int b, int nc, int add )
{
	if(n == 0)
	{
		return nc;
	}
	else
	{		
		nc = ((n % b) * pow(10 , add)) + nc;		
		return convert(n/b, b, nc, add + 1);
	}
}

int last_foo_main()
{
	int a, b, res;
	scanf("%d  %d", &a, &b);
	res = lastone(a, b);
	printf("%d", res);
}

int main_simple()
{
	int vet[16], i;	
	int n, m, nc = 0, add = 0, b, nadd = 0;
	scanf("%d  %d", &n, &b);
	m = convert(n, b, nc, add);	
	convertlongnumber(n, b, vet, &nadd);
	
	printf("%d", m);
	printf("%d\n\n", nadd);
	
	for(i = 0; i < nadd; i++)
	{
		printf("%d", vet[i]);
	}
	return 0;
}

void foomain()
{
	int n, b, x;
	scanf("%d  %d", &n, &b);
	x = lastone(n, b);
	printf("%d", x);
}



int main(void)
{
    foomain();
	return 0;
}
