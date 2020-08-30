#include <stdio.h>

void quest1002()
{
	double n, r;
    n = 3.14159;
    scanf("%lf", &r);
    printf("A=%.4lf\n",n * r * r );
    //return 0;
}

void quest1005()
{
	double a, b, pa, pb, media;
	pa = 3.5;
	pb = 7.5;
    scanf("%lf", &a);
    scanf("%lf", &b);
    media = ((a * pa) + (b * pb)) / (pa + pb);
    printf("MEDIA = %.5lf\n", media ); 
    //return 0;
}

void quest1006()
{
	float A, B, C, media;
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	media = ((A * 2) + (B * 3) + (C * 5))/ (2 + 3 + 5);
	printf("MEDIA = %.1f\n", media);
}

void quest1007()
{
	int A, B, C, D, diferenca;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	diferenca = ((A * B) - (C * D));
	printf("DIFERENCA = %d\n", diferenca);
}

void quest1008()
{
	int num;
	float work, amount;
	scanf("%d", &num);
	scanf("%f", &work);
	scanf("%f", &amount);
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", work * amount);
	return 0;
}

void quest1009()
{
	char nome[10];
	double salary, total;
	scanf("%s", nome);
	scanf("%lf", &salary);
	scanf("%lf", &total);
	printf("TOTAL = R$ %.2lf\n", (total * 0.15) + salary );
	return 0;
}

void quest1010()
{
	int code1, nunits1, code2, nunits2;
	float price1, price2;
	scanf("%d %d %f", &code1, &nunits1, &price1);
	scanf("%d %d %f", &code2, &nunits2, &price2);
	printf("VALOR A PAGAR: R$ %.2f\n", (nunits1 * price1) +(nunits2 * price2));
	return 0;
}

void quest1011()
{
	int i;
	double radius, pi, spherearea, r3 = 1;
	pi = 3.14159;
	scanf("%lf", &radius);
	for(i = 0; i < 3; i++)
	{
		r3 = r3 * radius;
	}
	spherearea = (4/3.0) * pi * r3;
	printf("VOLUME = %.3lf\n", spherearea);
	return 0;
}

void quest1012()
{
	double A, B, C, pi;
	pi = 3.14159;
	scanf("%lf %lf %lf",&A, &B, &C);
	printf("TRIANGULO: %.3lf\n", (A * C) / 2.0);
	printf("CIRCULO: %.3lf\n", C * C * pi );
	printf("TRAPEZIO: %.3lf\n", ((A + B) * C ) / 2);
	printf("QUADRADO: %.3lf\n", B * B);
	printf("RETANGULO: %.3lf\n", A * B);
	return 0;	
}

void quest1013()
{
	int a, b, c, maior, maiorAB, maiorAC;
	scanf("%d %d %d", &a, &b, &c);
	maiorAB = (a + b + abs(a - b)) / 2;
	maiorAC = (a + c + abs(a - c)) / 2;
	maior = (maiorAB + maiorAC + abs(maiorAB - maiorAC)) / 2;	
	
	printf("%i eh o maior\n", maior);
	
}

void quest1014()
{
	int X;
	float Y;
	scanf("%d", &X);
	scanf("%f", &Y);
	printf("%.3f km/l\n", X / Y);
	return 0;
}

void quest1015()
{
	int main(void)
{
	double x1, y1, x2, y2, distance, num, temp = 0;
	scanf("%lf  %lf", &x1, &y1);
	scanf("%lf  %lf", &x2, &y2);
	num = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
	distance  = num / 2;
	while( distance != temp )
	{
		temp = distance;
		distance = (num/temp + temp)/2;
	}
	printf("%.4lf\n", distance);
	return 0;

}


int main(void)
{
	quest1005();
}
