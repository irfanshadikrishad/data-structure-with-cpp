// C++ Program to raise any number X to power N
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, n;
    cout << "..." << endl;
    cout << "Value of X: ";
    cin >> x;
    cout << "Value of N: ";
    cin >> n;

    cout << "X^N: " << pow(x, n) << endl;
    cout << "..." << endl;
}