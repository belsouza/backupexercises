
#include <iostream>
#include <iomanip>

using namespace std;

class Namedia{

    private:

        double pesoA;
        double pesoB;
        double pesoC;

        double calculamedia( double notaA, double notaB, double notaC )
        {
            double poo;
            poo =  ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC) )/ (pesoA + pesoB + pesoC);
            return poo;
        }

    public:

        Namedia(){
            pesoA = 2.0;
            pesoB = 3.0;
            pesoC = 5.0;
        }

        void exibir()
        {
            double notaA, notaB, notaC, media;
            cin >> notaA;
            cin >> notaB;
            cin >> notaC;
            media = calculamedia(notaA, notaB, notaC);
            cout << "MEDIA = "<< std::fixed << setprecision(1) << media << "\n";
        }
};

int main(void)
{
    Namedia foo;
    foo.exibir();
    return 0;
}






