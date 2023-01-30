#include <iostream>
using namespace std;

int main(){
    int n = 28, sum = 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    if(sum == n){
        cout << n << " is a " << "Perfect Number" << endl;
    }else{
        cout << n << " is not a " << "Perfect Number" << endl;
    }
}