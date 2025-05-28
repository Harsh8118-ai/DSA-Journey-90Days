#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int removeDuplicate(int arr[], int size)
{
    int j=0;

    for (int i = 1; i < size; i++)
    {
        if(arr[j] != arr[i])
        {
            j += 1;
            arr[j]=arr[i];
        }
    }
    
    return j+1;

    
}

int main()
{
    int array[] = {1, 1, 2, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);

    int result = removeDuplicate(array, size);

    for(int i = 0; i < result; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}
