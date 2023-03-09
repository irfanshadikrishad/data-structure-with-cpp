#include <iostream>
using namespace std;

int main()
{
    int Arr[5] = {7,
                  9,
                  2,
                  5,
                  1};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    cout << n;
}