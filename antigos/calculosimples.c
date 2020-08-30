//Calculo simples - 1010

#include <stdio.h>
typedef struct cal{
    int cod;
    int npecas;
    float valor;
} Calculo;

float computar( Calculo x, Calculo y)
{
    float resultado;
    resultado = (x.npecas * x.valor) + (y.npecas * y.valor);
    return  resultado;
}

int main(void)
{
    Calculo x, y;
    float resultado;
    scanf("%d  %d  %f", &x.cod, &x.npecas, &x.valor);
    scanf("%d  %d  %f", &y.cod, &y.npecas, &y.valor);
    resultado = computar(x, y);    
    printf("VALOR A PAGAR: R$ %.2f\n", resultado );
    return 0;
}

