#include <iostream>
using namespace std;

int main ()
{   int arr[5][5];
    int c = 1 , k=0;
    for(int  i=0 ; i < 5 ; i++)
    {
        for(int j =k; j < 5; j++)
        {
            arr[i][j] = c;
            arr[j][i] = c;
        }
        c++;
        k++;
    }
    cout << "Displaying Array" << endl;
    for(int  i=0 ; i < 5 ; i++)
    {
        for(int j =0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}