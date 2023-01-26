#include <iostream>
using namespace std;

int main(){
    string f_name, l_name;
    cout << "Whats your first name? ";
    cin >> f_name;
    cout << "Whats your last name? ";
    cin >> l_name;

    cout << endl << endl << "Welcome, " << f_name + " " + l_name << endl << endl;

    return 0;
}