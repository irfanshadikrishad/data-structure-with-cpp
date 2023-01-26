#include <iostream>
using namespace std;

int add(int &a, int b = 0){
    return a + b;
}
int sub(int a, int b = 0){
    return a - b;
}
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}
int main(){
    int a = 5, b = 10;
    cout << a << " + " << b << " is: " << add(a, b) << endl;
    cout << "Substraction: " << sub(a) << endl;
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // Pass Array in Function
    myFunction(myNumbers);

    return 0;
}