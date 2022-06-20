//storing an diagonal Matrix into 1d matrix.
#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{   int arr[5][5] = {0}; // {0} to remove garbage value(s).
    int arr1[5];
    cout << "Enter the elements in the diagonal of the 2d Matrix" << endl;
    for(int i =0; i < 5 ; i++)
    {
        for(int j =0 ; j < 5; j++)
        {
            if(i==j)
            {
                cin >> arr[i][j];
            }
        }
    }
    cout << "Displaying 2d matrix" << endl;
    for(int i =0; i < 5 ; i++)
    {
        for(int j =0 ; j < 5; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    Sleep(1000);
    cout << "Storing the necessary elements into the 1d matrix" << endl;
    for(int i =0; i < 5 ; i++)
    {
        for(int j =0 ; j < 5; j++)
        {
            if(i==j)
            {
                arr1[i] = arr[i][j];
            }
        }
    }
    Sleep(250);
    cout << "Displaying the 1d Matrix" << endl;
    for(int i =0 ; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}