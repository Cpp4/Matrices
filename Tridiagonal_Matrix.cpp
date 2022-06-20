#include <iostream>
using namespace std;
class Matrix
{
    private:
        int size  ,* arr;
    public:
        Matrix(int n): size(n)
        {
            arr = new int[3*size -2] {0};
        }
        ~Matrix()
        {
            delete[] arr;
            free(arr);
        }
        void Set(int i , int j , int x);
        int Get(int i , int j);
        void Display();
};


void Matrix :: Set(int i , int j, int x)
{
    if(i-j == 1)
    {
        arr[j] = x;
    }
    else if (i-j == 0)
    {
        arr[(size-1) + i] = x;
    }
    else if(i-j == -1)
    {
        arr[(2*size-1) + i] = x;
    }
    else
    {
        cout << "Illegal Criteria Value not Assigned. " << endl;  
    }
}


int Matrix :: Get(int i , int j)
{
    if(i-j == 1)
    {
        return arr[j];
    }
    else if(i-j == 0)
    {
        return arr[(size-1) + i];
    }
    else if(i-j == -1)
    {
        return arr[(2*size-1) + i];
    }
    else
    {
        cout << "Illegal Critera value not found" << endl;
        return 1;
    }
}


void Matrix :: Display()
{   int temp = 3*size -2;
    
    for(int i =0; i < size ; i++)
    {
        for(int j =0; j < size ; j++)
        {
            if(i-j == 1)
            {
               cout << arr[j] <<" ";
            }
            else if(i-j == 0)
            {
                cout << arr[(size-1) + i] << " ";
            }
            else if( i-j == -1)
            {
               cout << arr[(2*size-1) + i] << " ";
            }
            else
            {
                cout << 0 <<" ";
            }
        }
        cout << endl;
    }
} 

int main()
{
    int n, c=1;
    cout << "Enter the size of the Matrix" << endl;
    cin >> n;
    Matrix obj(n);
    for(int i=0; i< n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(i-j == 1 || i-j == 0 || i-j == -1)
            {
                obj.Set(i , j , c);
                c++;
            }
        }
    }
    obj.Display();
    return 0;
}