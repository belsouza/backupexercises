#include <stdio.h>

int potencia( int base, int expoente )
{	
	if(expoente > 1)
	{		
		return (base * (potencia(base, expoente - 1) ));
	}
	else
	{
		return base;
	}
}

int main(void)
{
	int base, expoente, resultado;
	printf("Entre com a base e o expoente: ");
	scanf("%d  %d", &base, &expoente);
	resultado = potencia(base, expoente);
	printf("%d\n", resultado);
	return 0;
}
