#include <stdio.h>

void copicopy( char *destino, char *origem)
{
	while(*origem)
	{
		*destino = *origem;
		origem++;
		destino++;
	}
	
	*destino = '\0';
}

in cont (char *destino)
{

}
	
int main()
{
	char strgr[10];
	char strby[10];
	char strnh[10];
	
	gets(strgr);
	copicopy(strby, strgr);
	copicopy(strnh, "Fanho");
	printf("\n%s, %s,",strby, strnh );
}

