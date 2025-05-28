#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

bool sortedRotated(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[(i + 1) % size])
        {
            count++;
        }
    }
    return count <= 1;
}

int main()
{
    int array[] = {2, 1, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);

    bool result = sortedRotated(array, size);

    if(result)cout<<"Valid";
    else cout<<"Not Valid";

    return 0;
}
