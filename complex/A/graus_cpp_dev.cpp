#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int converter(int grau, int referencia ){

	return (( grau * referencia ) / 360 );
}

void coordenar( int horas, int minutos ){

	int a, b;
	a = converter( horas, 12 );
	b = converter( minutos, 60 );
	cout << fixed << setw(2) << setfill('0') << a << ":";
	cout << fixed << setw(2) << setfill('0') << b << endl;
}

int main(void){
	int i = 0;
	int horas, minutos;
	while( i < 3 ){
	    fscanf(stdin, "%d  %d", &horas, &minutos) ;		
		coordenar( horas, minutos );
		i++;		
	}	
	return 0;
}
