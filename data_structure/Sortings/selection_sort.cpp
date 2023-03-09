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
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = 0; j < n; j++)
        {
            if (Arr[j] < Arr[min])
            {
                min = j;
            }
            if (min != i)
            {
                swap(Arr[i], Arr[min]);
            }
        }
    }
    // Output Sorted Array
    cout << "Selection Sort: ";
    for (int k = 0; k < n; k++)
    {
        cout << Arr[k] << " ";
    }
}
