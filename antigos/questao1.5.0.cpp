/*
Lista 1 exercicio 5
*/

#include <stdio.h>

int main(void)
{
	int r;
	int n100, n50, n20, n10, n5, n2, n1;
	
	printf("Entre com a quantia a ser decomposta: ");
	scanf ("%d", &r);
	
	n100 = r/100;
	printf ("Notas de 100: %d\n", n100);
	
	n50 = (r - (n100 * 100))/50;
	printf ("Notas de 50: %d\n", n50);
	
	n20 = (r - ((n100 * 100)+(n50 * 50)))/20;
	printf ("Notas de 20: %d\n", n20);
	
	n10 = (r - ((n100 * 100)+(n50 * 50)+(n20 * 20)))/10;
	printf ("Notas de 10: %d\n", n10);
	
    n5 = (r - ((n100 * 100)+(n50 * 50)+(n20 * 20)+(n10 * 10)))/5;
    printf ("Notas de 5: %d\n", n5);
    
	n2 = (r - ((n100 * 100)+(n50 * 50)+(n20 * 20)+(n10 * 10)+(n5 * 5)))/2;
	printf ("Notas de 2: %d\n", n2);
	
	n1 = (r - ((n100 * 100)+(n50 * 50)+(n20 * 20)+(n10 * 10)+(n5 * 5)+(n2 * 2)));
	printf ("Moedinha de 1real: %d\n", n1);
	
	
	return 0;
}
