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
	double d = sqrt( pow(xf - xi, 2) + pow(yf - yi, 2));
	return((int) d );
}

int result( int n, int k, int xf, int yf  )
{
	int i, dist, stop = 0, lstop = 0;
	char c;
	
	dist = distancia(xi, yi, xf, yf);
	if(dist > k)
	{
		return 1;
	}
	
	for(i = 0; i < n && lstop == 0; i++)
	{
		fflush(stdin);
		scanf("%c", &c);
		add(c);
		dist = distancia(xi, yi, xf, yf);
				
		if((dist > k) && (stop == 0))
		{
			stop = i;
		}						
	}
	
	
	if((xi == xf) && (yi == yf))
	{
		return 0;
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
	if(p == 0)
	{
		printf("Success\n");
	}
	else
	{
		printf("Trap %d\n", p);
	}
	return 0;
}



