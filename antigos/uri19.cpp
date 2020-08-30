#include <stdio.h>
int main(void)
{
	int n, g, m;
	scanf("%d", &n);
	g = n/3600;
	n = n%3600;
	m = n/60;
	n = n%60;
	printf("%d:%d:%d\n", g, m, n );
	return 0;
	
}
