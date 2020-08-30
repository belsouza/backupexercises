#include <iostream>

using namespace std;

int Soma( int a, int b);

int main()
{
	int a, b, x;
	cin >> a;
	cin >> b;
	x = Soma( a, b );
	cout << "X = " << x << "\n";
	return (0);	
}

int Soma(int a, int b)
{
	return (a + b);
}

