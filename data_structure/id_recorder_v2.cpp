#include <iostream>
using namespace std;

int main(){
    while(1){
        int opera, arr[5];
        int arrSize = sizeof(arr)/sizeof(int);
        cout << "\n::id_recorder_v2.cpp::\n" << endl;
        cout << " 1. Insert ID \n 2. Delete ID \n 3. Search ID \n 4. Update ID \n 5. Sort ID \n 6. Display ID \n 7. Exit" << endl;
        cout << "\nInsert Operation: ";
        cin >> opera;
        if(opera >= 1 && opera <= 6){
            switch (opera){
                case 1:
                    static int ins = -1;
                    ins ++;
                    int id;
                    cout << "Enter ID to Insert: ";
                    cin >> id;
                    arr[ins] = id;
                    break;
                case 2:
                    int delete_id;
                    cout << "Enter ID to Delete: ";
                    cin >> delete_id;
                    for(int j=0; j<=ins; j++){
                        if(arr[j] == delete_id){
                            arr[j] = 0;
                            break;
                        }
                    }
                    break;
                case 3:
                    {
                        int flag_flag = 0, search_id;
                        cout << "Enter ID to Search: ";
                        cin >> search_id;
                        for(int k=0; k<=ins; k++){
                            if(arr[k] == search_id){
                                flag_flag = 1;
                            }
                        }
                        if(flag_flag == 1){
                            cout << search_id << " found" << endl;
                        }else{
                            cout << search_id << " not found" << endl;
                        }
                        break;
                    }
                case 4:
                    {
                        int update_id, updated_id;
                        cout << "Enter ID to Update: ";
                        cin >> update_id;
                        cout << "Enter ID to Updated to: ";
                        cin >> updated_id;
                        for(int k=0; k<=ins; k++){
                            if(arr[k] == update_id){
                                arr[k] = updated_id;
                            }
                        }
                        break;
                    }
                case 5:
                    {
                        for(int z=0; z<=ins; z++){
                            for(int y=z; y<=ins; y++){
                                if(arr[z] > arr[y]){
                                    int p = arr[z];
                                    arr[z] = arr[y];
                                    arr[y] = p;
                                }
                            }
                        }
                    }
                    cout << "Sorted Successfully :)" << endl;
                    break;
                case 6:
                    for(int i=0; i<=ins; i++){
                        cout << arr[i] << " ";
                    }
                    break;
            }

        }else if(opera == 7){
            cout << "Exited Successfully :)" << endl;
            break; // Exit the loop
        }else{
            cout << "Enter a valid operation." << endl;
        }
    }
}
