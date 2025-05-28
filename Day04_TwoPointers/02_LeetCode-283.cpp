#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void moveZeroes(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[temp] = arr[i];
            temp += 1;
        }
    }
    while (temp < size)
    {
        arr[temp] = 0;
        temp += 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int array[] = {0, 1, 0, 3, 12};
    int size = sizeof(array) / sizeof(array[0]);

    moveZeroes(array, size);

    return 0;
}
