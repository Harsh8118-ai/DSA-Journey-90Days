#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
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

    return -1;
}

int main()
{

    int array[] = {2, 3, 4, 5, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int target;
    cin >> target;

    int result = binarySearch(array, size, target);
    
    if( result==-1 )
    {
        cout<<"Not Found";
    }
    else{
        cout<<"Found at "<<result;
    }

    return 0;
}

