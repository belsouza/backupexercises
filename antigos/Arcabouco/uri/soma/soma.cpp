#include <iostream>

using namespace std;

class Soma{

    public:

    int soma(int a, int b)
    {
        return a + b;
    }

};

int main(){

    int a, b;
    Soma foo;
    cin >> a;
    cin >> b;    
    cout << "SOMA = " << foo.soma(a, b) << "\n";
    return 0;
}