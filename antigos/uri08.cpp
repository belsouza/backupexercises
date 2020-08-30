#include <stdio.h>
int main(void)
{
	int a, b;
	float val;
	scanf("%d", &a); //numero
	scanf("%d", &b); //numero horas
	scanf("%f", &val);
	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %.2f\n", b * val);
	return 0;
}
