#include <iostream>
using namespace std;

int upperBound(int array[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if( array[i] > target)return i;
    }

    return size;
}

int main()
{

    int array[] = {1, 2, 4, 4, 6, 8};
    int size = sizeof(array) / sizeof(array[0]);
    int target;
    cin >> target;

    int result = upperBound(array, size, target);

    if (result == size)
    {
        cout << size;
    }
    else
    {
        cout << result;
    }

    return 0;
}