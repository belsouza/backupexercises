#include <stdio.h>

typedef struct salario{
    int num;
    int horastrabalhadas;
    double salarioporhora;
    double salario;
} Salario;

double salario( int horastrabalhadas, double salarioporhora  ){
    return ( horastrabalhadas * salarioporhora );
}

int main(void)
{    
    Salario func;

    scanf("%d", &func.num);
    scanf("%d", &func.horastrabalhadas);
    scanf("%lf", &func.salarioporhora);
    func.salario = salario( func.horastrabalhadas, func.salarioporhora );
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", func.num, func.salario );
    return 0;
}

