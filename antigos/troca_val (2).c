/*
Trocar os valores a e b
*/

#include <stdio.h>

void troca(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\na = %d  e b = %d", a, b);
}

void main()
{
	int a, b;
	printf ("\na: ");
	scanf("%d", &a);
	printf ("\nb: ");
	scanf("%d", &b);
	troca(a, b);
}
