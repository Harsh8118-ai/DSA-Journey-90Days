#include <iostream>
using namespace std;

int binarySearchUpperBound(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    int ans = size;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {   
            low = (mid + 1);
        }
    }

    return ans;
}

int main()
{

    int array[] = {5, 5, 5, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int target;
    cin >> target;

    int result = binarySearchUpperBound(array, size, target);

    cout << result;

    return 0;
}
