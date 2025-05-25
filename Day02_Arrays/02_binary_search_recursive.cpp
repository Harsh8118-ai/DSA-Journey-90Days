#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int size, int target, int low, int high)
{

    int mid = low + (high - low) / 2;

    if (low > high)
        return -1;

    if (arr[mid] == target)
        return mid;
      else if (arr[mid] < target)
        return recursiveBinarySearch(arr, size, target, mid + 1, high);
    else
        return recursiveBinarySearch(arr, size, target, low, mid - 1);

    return -1;
}
 
int main()
{

    int array[] = {2, 3, 4, 5, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int target;
    cin >> target;

    int low = 0;
    int high = size - 1;

    int result = recursiveBinarySearch(array, size, target, low, high);

    if (result == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found at " << result;
    }

    return 0;
}