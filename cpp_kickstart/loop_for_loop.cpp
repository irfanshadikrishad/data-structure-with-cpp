#include <iostream>
using namespace std;

int main(){
    // Nested for loop
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=5; j++){
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // For Each Loop
    int arr[5] = {5, 10, 15, 20, 25};
    // reality check
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " " << endl;
    for(int o: arr){
        cout << o << " ";
    }
    return 0;
}