#include <iostream>
#include <iomanip>      

using namespace std;

class Urimain{
	
	private:
		
		double areadocirculo( double raio ){
			double pi = 3.14159;
			return( pi * raio * raio);
		}		
	
	public:
			
		void showareadocirculo(){
			double raio, area;
			cin >> raio;
			area = this->areadocirculo(raio);
			cout << "A="<< std::fixed << setprecision(4) << area << "\n";
		}	
};

int main()
{
	Urimain foo;
	foo.showareadocirculo();	
}
