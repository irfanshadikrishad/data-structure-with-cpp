#include <iostream>
using namespace std;

int main(){
    double n1, n2;
    int oparetor;
    cout << "\n*********************\nWhat do you wanna do?\n\n 1. Addition\n 2. Substraction \n 3. Multiplication \n 4. Division\n\n*********************" << endl;
    
    cout << "Input oparetor (1, 2, 3 or 4): ";
    cin >> oparetor;
    cout << "Input number 1: ";
    cin >> n1;
    cout << "Input number 2: ";
    cin >> n2;

    if(oparetor == 1){
        cout << "Addition of " << n1 << " and " << n2 << " is: " << n1 + n2 << endl;
    }else if(oparetor == 2){
        cout << "Substraction of " << n1 << " and " << n2 << " is: " << n1 - n2 << endl;
    }else if(oparetor == 3){
        cout << "Multiplication of " << n1 << " and " << n2 << " is: " << n1 * n2 << endl;
    }else if(oparetor == 4){
        cout << "Division of " << n1 << " and " << n2 << " is: " << n1 / n2 << endl;
    }else{
        cout << "Something went wrong, Please try again. :(";
    }
    cout << "\nKeep it up <3" << endl << "*********************";


    return 0;
}