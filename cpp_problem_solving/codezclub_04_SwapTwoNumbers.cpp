// C++ Program to Swap Two Numbers Without Using third variable
#include <iostream>
using namespace std;

int main(){
    int x = 45, y = 25;
    cout << "..." << endl;
    cout << "value of x is: " << x << endl;
    cout << "value of y is: " << y << endl;
    cout << "..." << endl;
    // changing
    x = x + y;
    y = x - y;
    x = x - y;
    // changed
    cout << "value of x is: " << x << endl;
    cout << "value of y is: " << y << endl;
    cout << "..." << endl;
}