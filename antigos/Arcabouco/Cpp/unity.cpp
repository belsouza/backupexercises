#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Car{
	
	private:
		int ano;
		string marca;
		string cor;	
		
	public:
		void setMarca( string marca ){
			this->marca = marca;
		}
		
		string getMarca(){
			return this->marca;
		}
		
		void setAno( int ano ){
			if(ano < 1990)
				this->ano = ano;
			else
				this->ano = 1990;
		}
		
		int getAno(){
			return  this->ano;
		}
		
};

int main( int argc, char** argv)
{
	Car p;
	p.setMarca("foo");
	p.setAno(1589);
	
	cout << p.getAno() << endl;
	cout << p.getMarca() << endl;
	return 0;
}
