#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, y1, x2, y2, distance, num, temp = 0;
	scanf("%lf  %lf", &x1, &y1);
	scanf("%lf  %lf", &x2, &y2);
	num = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
	distance  = num / 2;
	while( distance != temp )
	{
		temp = distance;
		distance = (num/temp + temp)/2;
	}
	printf("%.4lf\n", distance);
	return 0;

}
