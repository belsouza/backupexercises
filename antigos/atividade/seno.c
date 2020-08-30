#include <stdio.h>
#include <stdlib.h>

typedef struct cart{
	int *x;
	int *y;
	int tam;
}pontos;

void exibePontos( pontos p );
int varrePontos( pontos p );


int main(void){
	
	int i, n;
	pontos p;
	FILE *fp;
	fp = fopen("seno.txt", "r");
	fscanf(fp, "%d",&p.tam);
	if(p.tam != 0){
		p.x = (int *) malloc(p.tam * sizeof(int));
		p.y = (int *) malloc(p.tam * sizeof(int));
		
		i = 0;
		do{
			fscanf(fp, "%d  %d", &p.x[i], &p.y[i]);
			i++;
		}
		while(i < p.tam);
	}
	
	//exibePontos(p);
	n = varrePontos(p);
	printf("%d", n);	
	
	free(p.x);
	free(p.y);
	
	return 0;
}


void exibePontos( pontos p ){
	int i;
	for(i = 0; i < p.tam; i++){
		printf("Px: %d  Py: %d\n", p.x[i], p.y[i]);
	}
}


int varrePontos( pontos p ){
	
	int i, critical, cont = 0, dif, ant = 0;
	for(i = 0; i < p.tam; ){
		
		if(p.y[i] == 0) 
		{
			critical = p.y[i];			
			cont++;
			ant = i;
			critical = critical * (-1);
			i++;
		}
		
		dif = p.x[i] - p.x[ant];
		printf("DIF: %d\n", dif);
		
		if((p.y[i] == critical) && (abs(dif) == 2))
		{
			cont++;
			ant = i;
			critical = critical * (-1);
		}
		
		i++;
	}
	
	return cont;	
}



