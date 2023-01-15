#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main( )
{
    double moneyAmountOne;
    double roundDown;

    cout << fixed << setprecision(2);

    cin >> moneyAmountOne;

    roundDown = moneyAmountOne - 0.01;

    cout << roundDown << endl;

    return( 0 );
}