#include <iostream>
#include <iomanip>

using namespace std;

class ob{

    public:
        int cod;
        int npecas;
        float valor;        
};

class calc{

    public:
        float calcular( ob x, ob y )
        {
            return ((x.npecas * x.valor) + (y.npecas * y.valor));
        }
};

int main( int argc, char **argv )
{
    float resultado;
    ob x, y;
    calc p;
    cin >> x.cod >> x.npecas >> x.valor;
    cin >> y.cod >> y.npecas >> y.valor;
    resultado = p.calcular(x,y);
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << resultado << "\n";
    return 0;
}
