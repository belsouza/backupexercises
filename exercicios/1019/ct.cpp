//1018
#include <iostream>

using namespace std;

int get(int n )
{
    if(n > 60){
        return get(n % 60);
    }
    else{
        return (n % 60);
    }

}

int main(){
    int n;
    cin >> n;
    cout << get(n/3600) << ":"<< get(n / 60) << ":" << get(n) << "\n";    
    return 0;
}
