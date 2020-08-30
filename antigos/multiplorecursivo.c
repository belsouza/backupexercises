#include <stdio.h>
/*
int multiplo(int x, int y)
{
	int mul;
	if(y > 1)
	{	
		mul = x*y;
		printf("%d\n",mul);		
		return multiplo(x, y-1);
	}
	else
	{
		return 0;
	}
}
*/

int decresead(int y)
{
	if(y > 0)
	{
		printf("%d", y);
		decresead(y-1);		
	}
	else
	{
		return 0;
	}
}

int multiplo(int x, int y)
{
	if(x < y)
	{
		printf("%d\n", x);
		if((x+1) % x == 0)
		{
			return multiplo(x+1, y);
		}
		else
		{
			x++;		
		}			
		
	}
	else
	{
		return 0;
	}
}



int main(void)
{
	int a, b;
	printf("Entre com o numero de base:");
	scanf("%d", &a);
	printf("Entre com o limite:");
	scanf("%d", &b);
	multiplo(a, b);
}
