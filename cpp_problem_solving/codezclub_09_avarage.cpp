// C++ Program to calculate sum and average of three numbers
#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "..." << endl;
    cout << "Number 1: ";
    cin >> x;
    cout << "Number 2: ";
    cin >> y;
    cout << "Number 3: ";
    cin >> z;

    int sum = x + y + z;
    int avg = sum / 3;
    cout << "..." << endl;
    cout << "Avarage of " << x << ", " << y << ", " << z << " is " << avg;
    cout << endl << "...";

}