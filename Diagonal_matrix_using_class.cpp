#include <iostream>
#include <windows.h>
using namespace std;
class Matrix
{
    private:
        int size;
        int * A;
    public:
        Matrix(int n) // Constructor
        {
            this->size = n;
            A = new int[n];
        }
        void Set(int i , int j , int x);
        int Get(int i , int j);
        void Display();
        ~Matrix() // Destructor
        {
            delete [] A;
            free(A);
        }
};
void Matrix::Set(int i , int j , int x)
{
    if(i==j)
    {
        A[i] = x;
    }
}
int Matrix :: Get(int i , int j)
{
    if(i==j)
    {
        return A[i];
    }
    else
    {
        return 0;
    }
}
void Matrix :: Display()
{
    for(int i=0; i < size; i++)
    {
        for(int j=0; j < size ; j++)
        {
            if(i==j)
            {
                cout << A[i] << " ";
            }
            else
            {
                cout << 0 <<" ";
            }
        }
        cout << endl;
    }
}
int main ()
{
    Matrix obj(4);
    obj.Set(0,0,1);
    obj.Set(1,1,2);
    obj.Set(2,2,3);
    obj.Set(3,3,4);
    obj.Display();
    return 0;
}
/*
   0  1  2  3
0 00 01 02 03
1 10 11 12 13
2 20 21 22 23
3 30 31 32 33

Diagonal Matrix is :
00
  11
    22
      33

key:
when index of both rows and columns are equal.
(i==j)
if j------------>
   i
   |
   |
   v

*/