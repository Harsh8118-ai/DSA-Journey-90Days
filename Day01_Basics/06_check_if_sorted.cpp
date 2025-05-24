#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size-1 ; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}


int main()
{

    int array[6] = {3, 2, 5, 6};
    int size = 6;

    bool result = isSorted(array, size);

    if(result)
    {
        cout<<"Array is sorted ";
    }
    else
    {
        cout<<"Array is not sorted";
    }

    return 0;
}