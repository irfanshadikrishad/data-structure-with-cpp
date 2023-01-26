#include <iostream>
using namespace std;

int main(){
    // Declaring variables
    int a = 15;
    double c = 99.99;
    char A = 'a';
    string name = "Irfan Shadik Rishad";
    bool f = false;
    // Constant
    const double pi = 3.1416;

    // Multiple variables
    int x = 10, y = 2, z = 5;
    double m, n, o;
    m = n = o = 65;

    // Getting outputs
    cout << "this is int        : " << a << endl;
    cout << "this is double     : " << c << endl;
    cout << "this is char       : " << A << endl;
    cout << "this is string     : " << name << endl;
    cout << "this is bool       : " << f << endl;

    cout << "this is const      : " << pi << endl;

    cout << "this is multi-var  : " << n << ", " << o << endl;
    cout << "this is multi-var  : " << x + y << endl;

    return 0;

}