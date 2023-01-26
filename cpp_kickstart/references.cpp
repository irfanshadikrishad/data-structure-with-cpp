#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string &meal = food;

    cout << food << endl; // Pizza
    cout << meal << endl; // Pizza
    cout << &meal << endl; // 0x61ff00
    cout << &food << endl; // 0x61ff00

    return 0;
}