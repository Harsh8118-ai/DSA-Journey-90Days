#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int target)
{
    int low=0;
    int high=size-1;

    while( low<=high)
    {
        int mid = low + (high - low) / 2;

        if( arr[mid]==target )return mid;
        else if ( arr[mid] < target)
        {
            low = mid+1;
        }
        else
        {
            high = (mid-1);
        }
    }

    
    return -1 -1;
}

int findLastOccurrence(int arr[], int size, int target)
{
    int low=0;
    int high=size-1;
    int last= -1;

    while( low<=high)
    {
        int mid = low + (high - low) / 2;

        if( arr[mid]==target )
        {
            last = mid;
            low = mid -1;
        }
        else if ( arr[mid] < target)
        {
            low = mid+1;
        }
        else
        {
            high = (mid-1);
        }

    }

    
    return last;
}

int main()
{

    int array[] = {2, 3, 4, 5, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int target;
    cin >> target;

    int first = findFirstOccurrence(array, size, target);
    int last = findLastOccurrence(array, size, target);   

    

    return 0;
}

