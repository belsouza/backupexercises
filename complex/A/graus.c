
#include <stdio.h>
#include <stdlib.h>

int converter(int grau, int referencia ){

	return (( grau * referencia ) / 360 );
}

void coordenar( int horas, int minutos ){

	int a, b;
	a = converter( horas, 12 );
	b = converter( minutos, 60 );
	printf("%02d:%02d\n", a, b);
}

int main(void){

	int horas, minutos;
	while(fscanf(stdin, "%d  %d", &horas, &minutos) != EOF){		
		coordenar( horas, minutos );		
	}	
	return 0;
}

