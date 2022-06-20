//Row major Mapping
#include <iostream>
using namespace std;
class UpTriangular
{
    private:
        int size;
        int *arr;
    public:
        UpTriangular(int n) : size(n)
        {   cout << "Size = " << size << endl;
            arr = new int [(size*(size+1))/2] {0};
            cout << "Blocks Allocated = "<<  (size*(size+1))/2 << endl;
        }
        
        int Get(int i , int j);
        void Set(int i , int j , int x);
        void Display();
        ~UpTriangular()
        {
            delete [] arr;
            free(arr);
        }
};

void UpTriangular :: Set(int i , int j, int x)
{
    if(j >= i)
    {
        arr[(size * (i - ((i-1) * i)/2 * size)) + (j-i)] = x;
    }
    else
    {
        cout << "Illegal Critera" << endl;
    }
}

int UpTriangular :: Get(int i , int j)
{   
    if(j >= i)
    {
        return arr[(size * (i - ((i-1) * i)/2 * size)) + (j-i)];
    }
    else
    {
        cout << "Illegal Criteria" << endl;
        return -1;
    }
    return 0;
}

void UpTriangular :: Display()
{
    cout << "Displaying Array" << endl;
    int temp = (size*(size+1))/2;
    for(int i = 0 ; i < temp; i++)
    {
        cout << arr[i] << " ";
    }
}

int main ()
{   int n;
    cout << "Enter the size of the 2d Matrix" << endl;
    cin >> n;
    UpTriangular obj (n);
    obj.Set(2 , 3 , 69);
    cout << obj.Get(2 , 3) << endl;
    obj.Display();
    return 0;
}
