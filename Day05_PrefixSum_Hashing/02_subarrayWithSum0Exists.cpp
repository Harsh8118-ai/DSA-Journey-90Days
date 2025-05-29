#include <iostream>
#include <unordered_set>
using namespace std;

bool hasSubarrayWithZeroSum(int arr[], int size)
{
    unordered_set<int> prefixSums;
    int prefix = 0;

    for (int i = 0; i < size; i++)
    {
        prefix += arr[i];

        if (prefix == 0 || prefixSums.find(prefix) != prefixSums.end())
        {
            return true;
        }

        
        prefixSums.insert(prefix);
    }

    return false;
}

int main()
{
    int array[] = {4, 2, -3, 1, 6};
    int size = sizeof(array) / sizeof(array[0]);

    bool result = hasSubarrayWithZeroSum(array, size);

    if (result)
        cout << "Yes, subarray with sum 0 exists";
    else
        cout << "No, such subarray does not exist";

    return 0;
}
