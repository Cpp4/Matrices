// Column Major Mapping in Upper Triangular Matrix
#include <iostream>
using namespace std;
class Matrix
{
    private:
        int size , *arr;
    public:
        Matrix(int n) : size(n)
        {
            arr =new int [size * (size+1)/2] {0};
        }
        
        int Get(int i ,int j);
        void Set(int i , int j ,int x);
        void Display();
        ~Matrix()
        {
            delete [] arr;
            free(arr);
        }
};

int Matrix :: Get(int i , int j)
{
    if(j >=i)
    {
        return arr[((j* (j+1))/2) + i];
    }
    else
    {
        cout << "Illegal Critera" << endl;
        return -1;
    }
}
void Matrix :: Set(int i , int j , int x)
{
    if(j >= i)
    {
        arr[((j* (j+1))/2) + i] = x;
    }
    else
    {
        cout << "Illegal Criteria" << endl;
    }
}

void Matrix :: Display()
{
    int temp = (size*(size +1))/2;
    for(int i =0; i < temp ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main ()
{   int n , c=1;
    cout << "Enter the size of the Matrix" << endl;
    cin >> n;
    Matrix obj(n);
    
    
    for(int i = 0; i < n ;i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j >= i)
            {
                obj.Set(i , j , c);
                c++;
            }
        }
    }

    obj.Display();
    return 0;
}