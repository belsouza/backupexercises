//1016
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    float ql, v, th;
    cin >> th;
    cin >> v;
    ql = (v * th) / 12.0;
    cout << fixed << setprecision(3) << ql << "\n";
    return 0;
}
