#include <iostream>
using namespace std;

int main(){
    int n = 1, *p = &n;

    cout << "exact value of n: " << n << endl;
    cout << "memory adress of n: " << &n << endl; // Dereference
    cout << "without * it gives memory adress: " << p << endl; // Reference
    cout << "*pointer gives value: " << *p << endl;
    // modifying value with pointer
    *p = 2;
    cout << "modified value: " << n << endl;

    return 0;
}