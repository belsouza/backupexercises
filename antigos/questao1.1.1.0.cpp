#include <stdio.h>

int main ()
{
	int i, j, k, N=4;
	for (i=1;i<N;i++)
	{
		for (j=1;j<N;j++)
		{
			for (k=1;k<N;k++)
			{
				if ((i!=j) && (j!=k))
				{
					printf ("(%d %d %d)\n", i, j, k);
				}
			}
		}
	}
}
