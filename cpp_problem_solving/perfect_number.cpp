#include <iostream>
using namespace std;

int main(){
    int min, max, sum = 0;
    cout << "Minimum Value: ";
    cin >> min;
    cout << "Maximum Value: ";
    cin >> max;
    for(int i = min; i <= max; i++){
        for(int j = 1; j < i; j++){
            // checking the divisors and adding to the sum variable
            if(i%j == 0){
                sum += j;
            }
        }
        // checking if the sum is equal to the number
        if(sum == i){
            cout << i << " ";
        }
        // reseting the sum value to count on it again
        sum = 0;
    }
}

// irfanshadikrishad