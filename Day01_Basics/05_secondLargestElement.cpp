#include <iostream>
#include <climits>

using namespace std;

int largestElement(int arr[], int size)
{
    int max = INT_MIN;
    int pre_max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            pre_max = max;
            max = arr[i];
        }
        else if (arr[i] > pre_max && arr[i] != max)
        {
            pre_max = arr[i];
        }
    }

    if (pre_max == INT_MIN) return -1;

    return pre_max;
}

int main()
{
    int array[] = {-1, -2, -3, -4};
    int size = sizeof(array) / sizeof(array[0]);

    int result = largestElement(array, size);

    if (result != -1)
    {
        cout << "Second Largest Element: " << result << endl;
    }
    else
    {
        cout << "There is no Second Largest Number" << endl;
    }

    return 0;
}
