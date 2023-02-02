#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6}, opera;
    while(true){
        cout << "====================\nSelect an operation: " << endl << "\n 1. Insert \n 2. Delete \n 3. Search \n 4. Sort \n 5. Merge \n 6. Traversal \n 7. Exit \n====================" << endl;
        cout << "Insert your operation: ";
        cin >> opera;
        // Exit
        if(opera == 7){
            break;
        // Traversal
        }else if(opera == 6){
            cout << "Traversal:" << endl;
            for(int j=0; j<=(sizeof(arr)/sizeof(arr[0]))-1; j++){
                cout << "arr[" << j << "] : " << arr[j] << endl;
            }
        }
    }
}