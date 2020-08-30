#include <iostream>
#include <iomanip>

using namespace std;

typedef struct salario{
    int num;
    int horastrabalhadas;
    double paghora;
} Salario;

class URI{

    private:
        double calculasalario( int horas, double paghoras ){
            return ( horas * paghoras);
        }
    public:
        void show(){

            Salario func;
            cin >> func.num;
            cin >> func.horastrabalhadas;
            cin >> func.paghora;
            cout << "NUMBER = " << func.num << "\n";
            cout << "SALARY = U$ " << fixed << setprecision(2) << calculasalario(func.horastrabalhadas, func.paghora) << "\n";
        }
};

int main(void){
    URI pool;
    pool.show();
    return 0;
}
