#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;



class Mybonus{

    public:

    string nome;
    double salario, montante;

    double meubonus( double salario, double montante )
    {
        return ( salario + ((montante * 15)/100));
    }
};

int main(void){
    
    Mybonus bonus;
    getline(cin, bonus.nome);
    cin >> bonus.salario;
    cin >> bonus.montante;
    cout << fixed << setprecision(2) << "TOTAL = R$ " << bonus.meubonus( bonus.salario, bonus.montante) << "\n";
}
