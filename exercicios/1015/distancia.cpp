#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Distancia{

    public:
        double xp1, xp2, yp1, yp2;

        double result( double xp1, double yp1, double xp2, double yp2 )
        {
            double res = ( (xp2 - xp1) * (xp2 - xp1)) + ((yp2 - yp1) * (yp2 - yp1));
            return sqrt(res);
        }

};

int main(void)
{
    Distancia dp;
    cin >> dp.xp1 >> dp.yp1;
    cin >> dp.xp2 >> dp.yp2;
    cout << fixed << setprecision(4) << dp.result( dp.xp1, dp.yp1, dp.xp2, dp.yp2) << "\n";
    return 0;
}