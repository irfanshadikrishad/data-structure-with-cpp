#include <iostream>
#include <string>

using namespace std;

int main(){
    // Declaring variables
    int a = 15;
    double c = 99.99;
    char A = 'a';
    char B = 69;
    string name = "Irfan Shadik Rishad";
    bool f = false;
    // Constant
    const double pi = 3.1416;
    // A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;

    // Multiple variables
    int x = 10, y = 2, z = 5;
    double m, n, o;
    m = n = o = 65;

    // Getting outputs
    cout << "this is int        : " << a << endl;
    cout << "this is double     : " << c << endl;
    cout << "this is char       : " << A << endl;
    cout << "this is char(ASCII): " << B << endl;
    cout << "this is string     : " << name << endl;
    cout << "this is bool       : " << f << endl;

    cout << "this is scientifi  : " << f1 << ", " << d1 << endl;
    cout << "this is const      : " << pi << endl;

    cout << "this is multi-var  : " << n << ", " << o << endl;
    cout << "this is multi-var  : " << x + y << endl;

    return 0;

}