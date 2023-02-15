#include <iostream>
using namespace std;

int Delete(int ins, int array[]){
    int delete_id;
    cout << "Enter ID to Delete: ";
    cin >> delete_id;
    for(int j=0; j<=ins; j++){
        if(array[j] == delete_id){
            array[j] = 0;
            break;
        }
    }
}
int Search(int ins, int array[]){
    int flag_flag = 0, search_id;
    cout << "Enter ID to Search: ";
    cin >> search_id;
    for(int k=0; k<=ins; k++){
        if(array[k] == search_id){
            flag_flag = 1;
        }
        }
        if(flag_flag == 1){
            cout << search_id << " found" << endl;
        }else{
            cout << search_id << " not found" << endl;
        }
}
int Update(int ins, int array[]){
    int update_id, updated_id;
    cout << "Enter ID to Update: ";
    cin >> update_id;
    cout << "Enter ID to Updated to: ";
    cin >> updated_id;
    for(int k=0; k<=ins; k++){
        if(array[k] == update_id){
            array[k] = updated_id;
        }
    }
}
int Sort(int ins, int array[]){
    for(int z=0; z<=ins; z++){
        for(int y=z; y<=ins; y++){
            if(array[z] > array[y]){
                int p = array[z];
                array[z] = array[y];
                array[y] = p;
            }
        }
    }
    cout << "Sorted Successfully :)" << endl;
}
int Display(int inss, int array[]){
    for(int dis=0; dis<=inss; dis++){
        cout << array[dis] << " ";
    };
}

int main(){
    while(1){
        int opera, arr[5];
        static int ins = -1;
        cout << "\n::id_recorder_v2.cpp::\n" << endl;
        cout << " 1. Insert ID \n 2. Delete ID \n 3. Search ID \n 4. Update ID \n 5. Sort ID \n 6. Display ID \n 7. Exit" << endl;
        cout << "\nInsert Operation: ";
        cin >> opera;
        if(opera >= 1 && opera <= 6){
            switch (opera){
                case 1:
                    {
                        ins ++;
                        int insert_id;
                        cout << "Enter ID to Insert: ";
                        cin >> insert_id;
                        arr[ins] = insert_id;
                        break;
                    }
                case 2:
                    {
                        Delete(ins, arr);
                        break;
                    }
                case 3:
                    {
                        Search(ins, arr);
                        break;
                    }
                case 4:
                    {
                        Update(ins, arr);
                        break;
                    }
                case 5:
                    {
                        Sort(ins, arr);
                        break;
                    }
                case 6:
                    {
                        Display(ins, arr);
                        break;
                    }
            }

        }else if(opera == 7){
            cout << "Exited Successfully :)" << endl;
            break; // Exit the loop
        }else{
            cout << "Enter a valid operation." << endl;
        }
    }
}