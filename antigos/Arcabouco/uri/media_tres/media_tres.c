#include <stdio.h>

double pesoA = 2.0;
double pesoB = 3.0;
double pesoC = 5.0;

double media( double notaA, double notaB, double notaC )
{
    double resposta;
    resposta = ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);
    return resposta;
}

int main(int argc, char **argv )
{
    double notaA, notaB, notaC;
    scanf("%lf", &notaA);
    scanf("%lf", &notaB);
    scanf("%lf", &notaC);
    printf("MEDIA = %.1lf\n", media(notaA, notaB, notaC));
    return 0;
}
