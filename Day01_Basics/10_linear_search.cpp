#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)return i;   
    }

    return -1;
}

int main()
{

    int array[] = {5, 3, 2, 10, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int target;
    cin >> target;

    int result = linearSearch(array, size, target);
    cout<<result;

    return 0;
}