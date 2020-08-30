#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
    int maiorAB, maiorBC, maior;   
    
	scanf("%d %d %d", &a, &b, &c);
	
	maiorAB = (a + b + abs(a - b)) / 2;
	maiorBC = (b + c + abs(b - c)) / 2;
	maior = (maiorAB + maiorBC + abs(maiorAB - maiorBC)) / 2;
		
	printf("%d eh o maior\n", maior);
	
	return 0;
}
