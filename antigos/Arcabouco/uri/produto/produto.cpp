#include <iostream>

using namespace std;

class Main{
	
	private:
		
		int produto(int a, int b)
		{
			return a * b;
		}
	
	public:
		
		void show()
		{
			int a, b;
			cin >> a;
			cin >> b;
			cout << "PROD = " << produto(a, b) << "\n" ;
			
		}
};

int main(void)
{
	Main foo;
	foo.show();
	return 0;
}
