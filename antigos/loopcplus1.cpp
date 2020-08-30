#include <iostream>

int main(void)
{
	int cont = 10;
	int guess;
	
	std::cout << "Entre com um numero de 1 a 10: ";
	std::cin >> guess;
	
	while( guess!= 8 && cont > 1 )
	{
		std::cout << "Numero errado\n";
		std::cin >> guess;
		cont--;
	}
	
	if(guess == 8)
	{
		std::cout << "O numero certo eh 8 \n";
	}
	return 0;
}
