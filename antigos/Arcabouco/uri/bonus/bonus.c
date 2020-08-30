#include <stdio.h>
#include <string.h>

double salariocombonus( double salariofixo, double totaldevendas)
{
    double temp =((totaldevendas * 15 )/100);    
    return( salariofixo + temp );
}

int main(void){

    char nome[20];
    double salariofixo, totaldevendas, resultado;

    fgets(nome, 128, stdin);
    scanf("%lf", &salariofixo);
    scanf("%lf", &totaldevendas);
    resultado = salariocombonus(salariofixo, totaldevendas);
    printf("TOTAL = R$ %.2lf\n", resultado);
    return 0;
}