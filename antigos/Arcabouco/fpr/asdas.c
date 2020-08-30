#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, n, a, *v;
	printf("Entre com a quantidade de elementos do vetor v: ");
	scanf("%d", &n);
	printf("Entre com a amplitude do intervalo de elementos: ");
	scanf("%d", &a);
	
	v = (int *) malloc(n * sizeof(int));
	srand(time(NULL));
	
	for(i = 0; i < n; i++){
		v[i] = (rand()% (a -1));
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d ",v[i] );
	}
	return 0;
	
}
