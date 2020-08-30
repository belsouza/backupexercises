
#include <iostream>
#include <iomanip>

using namespace std;

class Namedia{

    private:

        double pesoA;
        double pesoB;

        double calculamedia( double notaA, double notaB )
        {
            double poo;
            poo =  ((notaA * pesoA) + (notaB * pesoB))/ (pesoA + pesoB) ;
            return poo;
        }

    public:

        Namedia(){
            pesoA = 3.5;
            pesoB = 7.5;
        }

        void exibir()
        {
            double notaA, notaB, media;
            cin >> notaA;
            cin >> notaB;
            media = calculamedia(notaA, notaB);
            cout << "MEDIA = "<< std::fixed << setprecision(4) << media << "\n";
        }
};

int main(void)
{
    Namedia foo;
    foo.exibir();
    return 0;
}






