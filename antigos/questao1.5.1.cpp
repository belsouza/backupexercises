#include <stdio.h>
 
int main() {
    int n;
	int n100, n50, n20, n10, n5, n2, n1;
	scanf ("%d", &n);
	n100 = n/100;
	printf ("%d nota(s) de R$ 100,00\n", n100);
	n50 = (n - (n100 * 100))/50;
	printf ("%d nota(s) de R$ 50,00\n", n50);
	n20 = (n - ((n100 * 100)+(n50 * 50)))/20;
	printf ("%d nota(s) de R$ 20,00\n", n20);
	n10 = (n - ((n100 * 100)+(n50 * 50)+(n20 * 20)))/10;
	printf ("%d nota(s) de R$ 10,00\n", n10);
    n5 = (n - ((n100 * 100)+(n50 * 50)+(n20 * 20)+(n10 * 10)))/5;
    printf ("%d nota(s) de R$ 5,00\n", n5);
	n2 = (n - ((n100 * 100)+(n50 * 50)+(n20 * 20)+(n10 * 10)+(n5 * 5)))/2;
	printf ("%d nota(s) de R$ 2,00\n", n2);
	n1 = (n- ((n100 * 100)+(n50 * 50)+(n20 * 20)+(n10 * 10)+(n5 * 5)+(n2 * 2)));
	printf ("%d nota(s) de R$ 1,00\n", n1);
    return 0;
}
