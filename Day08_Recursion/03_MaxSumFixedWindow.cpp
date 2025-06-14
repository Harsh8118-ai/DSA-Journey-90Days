#include <iostream>
using namespace std;

int maxSumSubarrayOfSizeK(int arr[], int size, int k) {
    if (size < k) return -1;

    int maxSum = 0;
    int windowSum = 0;

    
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    
    for (int i = k; i < size; i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    int arr[] = {100, 200, 300, 400};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << "Maximum sum of subarray of size " << k << ": ";
    cout << maxSumSubarrayOfSizeK(arr, size, k) << endl;

    return 0;
}
