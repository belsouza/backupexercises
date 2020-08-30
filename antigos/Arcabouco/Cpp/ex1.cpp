#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class NyanNyan{
	public:
		int num;
		string myString;
};

int main()
{
	NyanNyan cookie;
	cookie.num = 15;
	cookie.myString = "Eu sou bakka";

	cout << cookie.num << "\n";
	cout << cookie.myString;
	return 0;
}
