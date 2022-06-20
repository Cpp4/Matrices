#include <iostream>
using namespace std;
class Matrix
{
    private:
        int size , *arr;
        public:
            Matrix(int n) : size(n)
            {
                arr = new int[2*size -1]; 
            }
            ~Matrix()
            {
                delete [] arr;
                free(arr);
            }
            void Set(int i , int j , int x);
            int Get(int i , int j);
            void Display();
};
void Matrix :: Set(int i , int j , int x)
{
    if(i <=j)
    {
        arr[j-i] = x;
    }
    else
    {
        arr[size + (i-j)-1] = x;
    }
}

int Matrix :: Get(int i , int j)
{   
    if(i <=j)
    {
        return arr[j-i];
    }
    else
    {
       return arr[size + (i-j)-1];
    }
}

void Matrix :: Display()
{
    for(int i =0 ;i < size ; i++)
    {
        for(int j =0 ; j < size ; j++)
        {
            if(i <=j)
            {
                cout << arr[j-i] << " ";
            }
            else
            {
               cout << arr[size + (i-j)-1] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n,c=2;
    cout << "Enter the size of the Matrix" << endl;
    cin >> n;
    Matrix obj(n);
    for(int  j =0 ; j < n; j++)
    {
        obj.Set(0 , j , c);
        c++;
    }
    for(int i =1 ; i < n ; i++)
    {
        obj.Set(i , 0 , c);
        c++;
    }
    obj.Display();
    return 0;
}