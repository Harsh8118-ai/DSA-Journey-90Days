#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void leftRotateByOne(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size-1; i++)
    {
        swap(arr[i], arr[i+1]);   
    }
    arr[size-1]=temp;

    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    leftRotateByOne(array, size);

    return 0;
}
