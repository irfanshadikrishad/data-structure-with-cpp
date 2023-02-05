// C++ Program to convert inches into yard, feet and inches
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double inch;
    cout << "\nInch to convert: ";
    cin >> inch;
    cout << "..." << endl;
    cout << "Yard   :" << floor((inch / 36) * 100.0) / 100.0 << endl;
    cout << "Foot   :" << floor((inch / 12) * 100.0) / 100.0 << endl;
    cout << "Cent.M.:" << floor((inch * 2.54) * 100.0) / 100.0 << endl;
    cout << "..." << endl;
}