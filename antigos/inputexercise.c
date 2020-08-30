#include <stdio.h>
#define TAM 5

void recursivo( int origem[], int *num )
{
	int i = num;
	if (num < TAM)
	{
		
		recursivo( origem, i+=1);
		*num = i;
	}
}



int main(void)
{
	int num;
	printf("Entre com o numero:");
	scanf("%i",&num);
	racha(num);

}


