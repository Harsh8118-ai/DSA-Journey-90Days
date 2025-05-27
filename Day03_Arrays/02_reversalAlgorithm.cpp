#include <iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while(start<end)
    {
        swap( arr[start], arr[end] );
        start++;
        end--;
    }
}

int leftRotate(int arr[], int size, int d)
{
    reverse(arr, 0, d-1);

    reverse(arr, d, size-1);

    reverse(arr, 0, size-1);
}

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int d;
    cin>>d;

    leftRotate(array, size, d);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;


    return 0;
}