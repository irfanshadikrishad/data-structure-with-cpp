#include <iostream>
using namespace std;

int main(){
    int arr[5], opera;
    static int insertCounter = 0;
    while(1){
        cout << "\n\tID_RECORDER.CPP" << endl;
        cout << "Choose An Operation:" << endl;
        cout << "\n 1. Insert ID \n 2. Delete ID \n 3. Update ID \n 4. Search ID \n 5. Sort ID \n 6. Display ID \n 7. Exit" << endl;
        cout << "Enter A Operation: ";
        cin >> opera;
        if(opera >= 1 && opera <=6){
            switch(opera){
                // Insert Operation
                case 1:
                    static int n = -1;
                    n++;
                    insertCounter ++;   // to calculate how many id's are inserted to display later
                    cout << "Enter ID to Insert: ";
                    cin >> arr[0+n];
                    break;
                case 4:
                    int id;
                    cout << "ID to Search: ";
                    cin >> id;
                    for(int j = 0; j<insertCounter; j++){
                        if(arr[j] == id){
                            cout << id << " Exist's in index: [" << j << "]" << endl;
                            break;
                        }else{
                            cout << j << " ";
                        }
                    }
                    break;
                // Display Operation
                case 6:
                    for(int i = 0; i<insertCounter; i++){
                        cout << arr[i]<< " ";
                    }
                    break;
            }

        }else if(opera == 7){   // Exit Operation
            cout << "Exited Programm Successfully. :)" << endl;
            break;
        }else{  // Invalid Range 
            cout << "[Enter a valid operation (between 1-6)]" << endl;
        }
    }
    
}