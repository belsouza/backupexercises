#include <stdio.h>
#include <conio.h>
#include <iostream>
int main(void)
{
	float a, b, m;
	clrscr();
	printf("\nInforme as notas obtidas: ");
	scanf("%f  %f", &a, &b);
	m = (a + b) / 2;
	
	if(m >= 7.0)
	{
		textcolor(BLUE);
		cprintf("\n Aprovado");		
	}
	
	else
	{
		textcolor(RED);
		cprintf("\nReprovado");
	}
	getch();
}
