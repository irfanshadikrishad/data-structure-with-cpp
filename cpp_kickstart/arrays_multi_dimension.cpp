#include <iostream>
using namespace std;

int main(){
    // Two Dimension Arrays
    int n[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    for(int i=0; i<=1; i++){
        for(int j=0; j<=3; j++){
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    // Three Dimension Arrays
    int o[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    for(int x = 0; x <= 1; x++){
        for(int y = 0; y <= 1; y++){
            for(int z = 0; z <= 1; z++){
                cout << o[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}