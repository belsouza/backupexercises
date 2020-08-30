#include <iostream>
#include <string.h>
using namespace std;

class Movement
{
	public:
		string brand;
		string model;
		int year;
};

int main()
{
	Movement obj;
	obj.brand = "Fiat";
	obj.model = "Uno";
	obj.year = 1990;
	
	Movement obj2;
	obj2.brand = "Ford";
	obj2.model = "Eco Sport";
	obj2.year = 2008;
	
	cout << obj.brand << " " << obj.model << " " << obj.year << "\n";
	cout << obj2.brand << " " << obj2.model << " " << obj2.year << "\n";
	return 0;
}

