// C++ program to generate random numbers
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "..." << endl;
    cout << "Generated random numbers are: " << endl;
    for(int i = 1; i <= 10; i++){
        num = rand()%100;
        cout << num << " ";
    }
    cout << endl << "..." << endl;

}