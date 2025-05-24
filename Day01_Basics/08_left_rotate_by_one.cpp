#include <iostream>
using namespace std;

int leftRotateByOne(int arr[], int size)
{
    
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {

        if (i == size-1)
        {
            arr[i] = temp;
        }
        else
        {
            arr[i] = arr[i+1];
            
        }
    }

    return size;
}

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int newSize = leftRotateByOne(array, size);

    for (int i = 0; i < newSize; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}