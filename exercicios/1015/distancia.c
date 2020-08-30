#include <stdio.h>
#include <math.h>

double distanciadp( double xp1, double yp1, double xp2, double yp2 )
{
    double base = pow((xp2 - xp1) ,2) + pow((yp2 - yp1), 2);
    return sqrt( base );
}

int main(void)
{
    double xp1, yp1, xp2, yp2;
    scanf("%lf  %lf", &xp1, &yp1);
    scanf("%lf  %lf", &xp2, &yp2);
    printf("%.4lf\n", distanciadp(xp1, yp1, xp2, yp2));
    return 0;
}