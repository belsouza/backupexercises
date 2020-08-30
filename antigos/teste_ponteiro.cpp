/*

*/

#include <stdio.h>

int main(void)
{
	int a = 256;
	int b = 379;
	int c;
	int *p;  // p é um ponteiro para um inteiro
	int *q; 
	p = &a;  // o valor de p é o endereço de a
	q = &b;  // q aponta para b
	c = *p + *q;
	printf("%d", c );
	return 0;
}
