#include <iostream>
using namespace std;

int main(){
    int num[3] = {5, 10, 15};
    string anime[5] = {"One Piece", "One Punch Man", "Dr. STONE", "Naruto", "Demon Slayer"};

    // changing the array with index
    anime[4] = "Attack on Titan";
    // array & loops
    for(int i=0; i<=4; i++){
        if(i==4){
            cout << anime[i];
        }else{
            cout << anime[i] << " - ";
        }
    }
    // blank line
    cout << endl;
    // for each with array
    for(int o: num){
        cout << o << " ";
    }
    // blank line
    cout << endl;
    // ommit array
    string food[] = {"Pizza", "Burger", "Dominos", "French Fries"};
    for(string fo: food){
        cout << fo << " ";
    }
    // Size of array
    cout << endl << "Size of food is " << sizeof(food) / 22;
    return 0;
}