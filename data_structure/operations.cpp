#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    // Traversal : Traversing in Data Structure means systematically visiting every element of it. 
    // Traversing is a process in which each element of a data structure is accessed. 
    // Accessing an element of data structure means visiting every element at least once.
    cout << "Traversal:" << endl;
    for(int j=0; j<=(sizeof(arr)/sizeof(arr[0]))-1; j++){
        cout << "arr[" << j << "] : " << arr[j] << endl;
    }
    
}