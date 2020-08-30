#include <stdio.h>
#include <math.h>

int foo[10];

int fib(int n){
	
	if(n > 1){
		return ( fib(n-1) + fib(n-2));
	}
	else{
		return 1;
	}
}

int bin(int n){
	
	if(n >= 1){
		printf("%d", n%2);
		return(bin(n/2));
	}
	else
	{
		return 1;
	}
}



int binaprimorado( int n ){
	
	
	if(n >= 1)
	{
		*foo = n % 2;
		(*foo)++;
		return((bin (n / 2)));
	}
	else{
		return 1;
	}	
}

void exibirfoo( int *vetor ){
	int i;
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%d", vetor[i]);
	}
}



int main(void){
	int x, y, z, numfib, numbin, foobin;
	
	printf("Entre com numero para calcular fib: ");
	scanf("%d", &numfib);
	x = fib(numfib);
	printf("\n%d", x);
	
	printf("\nEntre com numero para calcular o binario: ");
	scanf("%d", &numbin);
	y = bin(numbin);
	
	z = binaprimorado( numbin );
	exibirfoo( foo );
	return 0;	
}
