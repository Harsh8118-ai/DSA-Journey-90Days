#include <iostream>
using namespace std;

void moveZeroes(int arr[], int size)
{

    int j = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j += 1;
        }
    }

    while (j < size)
    {
        arr[j++] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int array[] = {0, 1, 0, 0, 3, 12};
    int size = sizeof(array) / sizeof(array[0]);

    moveZeroes(array, size);

    return 0;
}