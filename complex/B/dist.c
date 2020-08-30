#include <stdio.h>
#include <math.h>

int xi = 0;
int yi = 0;
int dabs = 0;

void add( char c )
{
	if(c == 'C')
	{
		yi = yi + 1;
	}
	if(c == 'B')
	{
		yi = yi - 1;
	}
	if(c == 'E')
	{
		xi = xi - 1;
	}
	if(c == 'D')
	{
		xi = xi + 1;
	}
	
	dabs = dabs + 1;
}

int distancia( int xi, int yi, int xf, int yf )
{
	return( sqrt( pow(xf - xi, 2) + pow(yf - yi, 2)));
}

int result( int n, int k, int xf, int yf  )
{
	int i, dist, stop = 0, lstop = 0;
	char c;
	for(i = 0; i < n; i++)
	{
		fflush(stdin);
		scanf("%c", &c);
		add(c);
		dist = distancia(xi, yi, xf, yf);
		
		if((dist > k) && (stop == 0) && (dabs <= k))
		{
			stop = i;
		}
		
		if(dabs == k)
		{
			lstop = i;
		}						
	}
	
	if((xi == xf) && (yi == yf))
	{
		if(lstop == 0)
		{
			return 0;
		}
				
		return lstop;
	}
	else
	{
		if(stop == 0)
		{
			return dabs;
		}
		
		return stop;		
	}	
}

int main(void)
{
	int n, k, xf, yf, p;
	scanf("%d  %d  %d  %d", &n, &k, &xf, &yf);
	p = result(n, k, xf, yf);
	switch(p)
	{
		case 0:
			printf("Success\n");
			break;		
			
		default:
			printf("Trap %d\n", p);
			break;
	}
	return 0;
}



