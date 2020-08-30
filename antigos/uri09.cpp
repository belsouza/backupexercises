#include <stdio.h>
int main(void)
{
	char nome[11];
	double sal, mont;
	scanf("%s", &nome);
	scanf("%lf", &sal);
	scanf("%lf", &mont);
	printf("TOTAL = R$ %.2lf\n", sal + (mont * 0.15));	
	return 0;
}
