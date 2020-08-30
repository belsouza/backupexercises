#include <stdio.h>

int pri = 0;
int seg = 0;

void tb_campo(int xi, int yi, int hi, int n, int m){
	

}

void campo(int n, int m){
	
	int i, j, k;
	k = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(k == j)
			{
				printf("%c ", 176);
				k++;
			}
			else
			{
				printf("%d%d ", i, j);
			}
			
		}
		printf("\n");
	}
}

int main(void){
	
	int n, m, s, i, xi, yi, hi;
	FILE *fp;
	fp = fopen("str.txt", "r");
	fscanf(fp,"%d  %d  %d", &n, &m, &s);
	
	campo(n, m);
	
	for(i = 0; i < s; i++)
	{
		fscanf(fp, "%d  %d  %d", &xi, &yi, &hi);
		tb_campo(xi, yi, hi, n, m);
	}
	
	return 0;
}
