#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "type a number: ";
    cin >> x;
    switch(x){
        case 1:
            cout << "typed 1";
            break;
        case 2:
            cout << "typed 2";
            break;
        case 3:
            cout << "typed 3";
            break;
        // triggered when no case matches
        default:
            cout << "default triggered";
            break;
    }
    return 0;
}