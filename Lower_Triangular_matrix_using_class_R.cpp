//Row Major Mapping
#include <iostream>
#include <windows.h>
using namespace std;
class Matrix
{
    private:
        int size ;
        int * a;
    public:
        Matrix(int n) : size(n) // for initialization purposes.
        {
            a = new int[(n*(n+1))/2];
        }
        void Set(int i , int j , int x);
        int Get(int i , int j);
        void Display();
        ~Matrix() // destructor for clearing memory allocated in heap
        {
            delete [] a;
            free(a);
        }
};

void Matrix :: Set(int i , int j , int x)
{   
    if(j <= i)
    {
        a[((i*(i+1))/2) + j] = x; 
    }
    else
    {
        cout << "Invalid Assignment / Overwrite , Criteria not met" << endl;
    }
}
int Matrix :: Get(int i , int j)
{   if(j <= i)
    {
        return a[((i*(i+1))/2) + j];
    }
    else
    {
        return 0;
    }   

    return 0;   
}
void Matrix :: Display()
{
    for(int i =0 ;i < size ; i++)
    {
        for(int j =0 ; j <= i ; j++)
        {
            cout << a[((i*(i+1))/2) + j] << " ";
        }
        cout << endl;
    }
}
int main ()
{   int n;
    cout << "Enter the no. of rows and columns" << endl;
    cin >> n; 
    //Matrix obj(5);
    Matrix obj(n);
    int c = 1;
    for(int i =0; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            obj.Set(i , j , c);
            c++;
        }
    }
    obj.Display();
    return 0;
}
/*
   0  1  2  3  4 
0 00 01 02 03 04
1 10 11 12 13 14
2 20 21 22 23 24
3 30 31 32 33 34
4 40 41 42 43 44

Lower_triangular_Matrix (Row Major) Matrix is :
00 
10 11
20 21 22
30 31 32 33 
40 41 42 43 44

key:
no. of rows = 5 = size or height.
total blocks of memory allocated in Heap = 5(5+1)/2 = 5*6/2 = 15 = size of 1D array
Converison of 2D indexing into 1D indexing:
    A[3][3] = arr[(1+2+3) + (3)] = arr[7].
    A[2][1] = arr[(1+2)+(1)] = arr[4].
    A[i][j] = arr[(i(i+1)/2) + (j)].
if j------------>
   i   
   |
   |
   v

*/