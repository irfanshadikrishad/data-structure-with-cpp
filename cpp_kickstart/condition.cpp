#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 10;

    // if(a > b){
    //     cout << "A is greater" << endl;
    // }else if(a < b){
    //     cout << "B is greater" << endl;
    // }else{
    //     cout << "A and B is equal" << endl;
    // }
    
    // Short hand if-else
    string result = (a > b)? "A is greater than B" : "B is greater than A";
    cout << result;

    return 0;
}