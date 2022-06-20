// Column major Lower triangular Matrix
#include <iostream>
using namespace std;
class Matrix
{
    private:
        int size , *arr;
    public:
        Matrix(int n) : size(n)
        {
            arr = new int[(size * (size+1))/2] {0};
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
    if(j <=i)
    {
        arr[size * (j -(j * (j-1))/2 * size)] = x;
    }
    else
    {
        cout << "Illegal Criteria" << endl;
    }
}

int Matrix :: Get(int i , int j)
{
    if(j <= i)
    {
        return arr[size * (j -(j * (j-1))/2 * size)];
    }
    else
    {
        cout << "Illegal Criteria" << endl;
        return -1;
    }
}
void Matrix :: Display()
{
    for(int i = 0 ; i < (size* (size+1))/2 ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main ()
{   cout << "Enter the size of the matrix" << endl;
    int n;
    cin >> n;
    Matrix obj(n);
    obj.Set(2,1,6);
    cout << obj.Get(2,1) << endl;
    obj.Display();
    return 0;
}