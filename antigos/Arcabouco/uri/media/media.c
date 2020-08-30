#include <stdio.h>

double pesoA = 3.5;
double pesoB = 7.5;

double media( double notaA, double notaB )
{
    double resposta;
    resposta = ((notaA * pesoA) + (notaB * pesoB)) / (pesoA + pesoB);
    return resposta;
}

int main(int argc, char **argv )
{
    double notaA, notaB;
    scanf("%lf", &notaA);
    scanf("%lf", &notaB);
    printf("MEDIA = %.5lf\n", media(notaA, notaB));
    return 0;
}