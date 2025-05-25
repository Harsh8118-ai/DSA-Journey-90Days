#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int size)
{
    if (size == 0) return 0;
    
    int j=0;   

    for (int i = 0; i < size-1 ; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++]=arr[i];
        }
    }

      arr[j++] = arr[size - 1];

    return j;
}


int main()
{

    int array[6] = {1, 1, 2, 2, 3};
    int size = 6;

    int newSize = removeDuplicates(array, size);

    for(int i=0; i<newSize; i++)
    {
        cout<<array[i]<<" ";
    }
    

    return 0;
}