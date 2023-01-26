#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 10, c = 15;

    //Arithmatic Operators
    cout << "arithmatic    : " << a + b << endl;
    cout << "arithmatic    : " << a - b << endl;
    cout << "arithmatic    : " << a * b << endl;
    cout << "arithmatic    : " << a / b << endl;
    cout << "arithmatic    : " << a % b << endl;
    cout << "arithmatic    : " << ++a << endl;
    cout << "arithmatic    : " << --b << endl;
    cout << "arithmatic    : " << b++ << endl;
    cout << "arithmatic    : " << a-- << endl;
    //Assignment Operator
    int x = a+=3, y= x-=2;
    cout << "assignment    : " << x << endl;
    cout << "assignment    : " << y << endl;
    //Comparison Operator
    cout << "comparison    : " << (a > b) << endl;
    cout << "comparison    : " << (a < b) << endl;
    cout << "comparison    : " << (a == b) << endl;
    cout << "comparison    : " << (a <= b) << endl;
    cout << "comparison    : " << (a >= b) << endl;
    cout << "comparison    : " << (a != b) << endl;
    //Logical Operator
    cout << "logical       : " << (a < b && b > c) << endl;
    cout << "logical       : " << (a < b || b > c) << endl;
    cout << "logical       : " << (a < b != b > c) << endl; // (!) is logical (!=) is comparison operator

    return 0;
}