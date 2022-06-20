#include <iostream>
using namespace std;
int main()
{   int arr[5][5];
    int c = 0;
    for(int i =0 ; i < 5 ; i++)
    {
        for(int j =0 ; j < 5 ; j++)
        {
            arr[i][j] =c;
            c++; 
        }
    }
    cout << "Displaying Array" << endl;
    for(int i =0 ; i < 5 ; i++)
    {
        for(int j =0 ; j < 5 ; j++)
        {
            cout << arr[i][j] << " ";
            
        }
        cout << endl;
    }
    cout << "Displaying Lower triangular matrix" << endl;
    for(int i =0 ; i < 5 ; i++)
    {
        for(int j =0 ; j < 5 ; j++)
        {
            if(j <= i)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}