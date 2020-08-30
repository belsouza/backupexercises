#include <stdio.h>

double calcularea(double raio);

int main(){
	
    double rad, area;
    scanf("%lf", &rad);
    area = calcularea(rad);
    printf("A=%.4lf\n", area);
    return 0;
}

double calcularea(double raio)
{
    double pi = 3.14159;
    return (pi * raio * raio);    
}
