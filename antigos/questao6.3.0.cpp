/*
Dado o programa abaixo, fornecer os valores que serão exibidos quando o mesmo for executado:
*/
//Resultado: 

#include <stdio.h>

int main ()
{
	int A, B, C, i;
	A = 0;
	B = 10;
	C = B - A; // c = 10
	i = 1;
	while (i <= 10)
	{
		if (C > A) //10 > 0 ? sim!
		{
			C = C - 2; // c = 8 e i = 2
			i++;
		}
		else
		{
			i += 2;
			B = C % i;
		}
		A = A + i;
		printf ("B = %d\n", B);
		printf ("C = %d\n", C);
		printf ("i =%d\n", i);
		printf("\n***************\n");
	}
}


