#include <iostream>
using namespace std;
int main()
{
   int arr[5][5] , c = 1;
   for(int i =0 ; i < 5 ; i++)
   {
       for(int j =0; j < 5 ;j++)
       {
           if(j>=i)
           {
               arr[i][j] = c;
               c++;
           }
           else
           {
               arr[i][j] = 0;
           }
       }
   }
   cout << "Displaying the matrix" << endl;
   for(int i =0 ; i < 5 ; i++)
   {
       for(int j =0; j < 5 ;j++)
       {
           cout << arr[i][j] << " ";
       }
       cout << endl;
   }
   
    return 0;

}
