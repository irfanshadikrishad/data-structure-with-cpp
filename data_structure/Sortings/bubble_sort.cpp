#include <iostream>
using namespace std;

int main()
{
    int Arr[5] = {7, 8, 5, 9, 1};
    int n = sizeof(Arr) / sizeof(Arr[0]), temp;
    // Unsorted Array
    cout << "Unsorted Array: ";
    for (int l = 0; l < n; l++)
    {
        cout << Arr[l] << " ";
    }
    cout << endl;
    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
    // Showing Sorted Output
    cout << "Bubble Sort: ";
    for (int k = 0; k < n; k++)
    {
        cout << Arr[k] << " ";
    }
}
