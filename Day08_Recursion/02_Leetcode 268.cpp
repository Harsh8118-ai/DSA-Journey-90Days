#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size, int n)
{
    int sum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < size; i++)
    {
        arrSum += arr[i];
    }

    return sum - arrSum;
}

int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int range;
    cout << "Enter Range: " << endl;
    cin >> range;

    int result = findMissingNumber(array, size, range);

    cout << result;

    return 0;
}
