#include <iostream>
using namespace std;

int main()
{
    int opera;
    while (1)
    {
        cout << ":: Welcome to Ultimate Sorting ::" << endl;
        cout << " 1. Selection Sort \n 2. Bubble Sort \n 3. Exit" << endl;
        cout << "Enter a Operation:";
        cin >> opera;
        if (opera >= 1 && opera <= 2)
        {
            switch (opera)
            {
            case 1:
            {
                int Arr[5], n = sizeof(Arr) / sizeof(Arr[0]);
                // taking array as input to sort later
                for (int i = 0; i < n; i++)
                {
                    cout << "Arr[" << i << "]: ";
                    cin >> Arr[i];
                }
                cout << endl
                     << "Default Array Without Sorted: ";
                for (int j = 0; j < n; j++)
                {
                    cout << Arr[j] << " ";
                }
                cout << endl;
                // Selection Sort
                for (int x = 0; x < n - 1; x++)
                {
                    int min = x;
                    for (int y = 0; y < n; y++)
                    {
                        if (Arr[y] < Arr[min])
                        {
                            min = y;
                        }
                        if (min != x)
                        {
                            swap(Arr[x], Arr[min]);
                        }
                    }
                }
                // Selection Sort Output
                cout << "Selection Sort              : ";
                for (int z = 0; z < n; z++)
                {
                    cout << Arr[z] << " ";
                }
                cout << endl
                     << endl;

                break;
            }
            // Bubble Sort
            case 2:
            {
                int Arr[5], n = sizeof(Arr) / sizeof(Arr[0]), temp;
                // taking default array as input
                for (int m = 0; m < n; m++)
                {
                    cout << "Arr[" << m << "]: ";
                    cin >> Arr[m];
                }
                // default array output
                cout << endl
                     << "Default Array Without Sorting : ";
                for (int o = 0; o < n; o++)
                {
                    cout << Arr[o] << " ";
                }
                cout << endl;
                // bubble sort here
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
                // bubble sort output
                cout << "Bubble Sort:                  : ";
                for (int b = 0; b < n; b++)
                {
                    cout << Arr[b] << " ";
                }
                cout << endl
                     << endl;
                break;
            }
            }
        }
        // Exit From While Loop
        else if (opera == 3)
        {
            cout << "Thank's for using 'Ultimate Sorting'" << endl;
            cout << "Come Back Later (> _ <)" << endl;
            break;
        }
        else
        {
            cout << "Please Enter a valid operation" << endl;
        }
    }
}