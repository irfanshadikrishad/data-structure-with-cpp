#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // max-min function doesn't required header
    cout << "Maximum: " << max(5, 10) << endl;
    cout << "Minimum: " << min(5, 10) << endl;
    // required <cmath> header
    cout << "Sqrt   : " << sqrt(5) << endl;
    cout << "Round  : " << round(2.67) << ", " << round(2.4) << endl;
    cout << "log    : " << log(5) << endl;
    cout << "abs    : " << abs(-5.68) << endl;
    cout << "pow    : " << pow(2, 5) << endl; // 2^5
    cout << "cbrt   : " << cbrt(3) << endl;   // cubic root
    // ..

    return 0;
}