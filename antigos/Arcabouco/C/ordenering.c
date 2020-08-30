#include <stdio.h>

typedef struct foo{
	int moscova[10];
}Foo;


int main(void)
{
	int i, j, temp, tam, sol;
	int *p, *ant, *pos;
	
	int moscova[10] = { 366, 20, 30, 445, 156, 55, 1024, 64, 9, 0 }; // 0 9 20 30 55 64 156 366 445 1024
	tam =  (sizeof(moscova) / sizeof(int));
	p = &moscova[0];
	
	for(i = 0; i < tam; i++)
	{
		if(*(p+1) > (*p))
		{
			printf("%d > %d\n", *p, *(p+1));
			*p++;
		}
	}




	
	for(j = 0; j < tam; j++)
	{
		printf("%d  ", moscova[j]);
	}
	return 0;
}


