#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

void frequencyCount(int arr[], int size)
{
    unordered_map<int, int> freq;

    int minFreq = INT_MAX;
    int maxFreq = INT_MIN;
    int minElement = -1, maxElement = -1;

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    for (auto it : freq)
    {
        if (it.second < minFreq)
        {
            minFreq = it.second;
            minElement = it.first;
        }
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }
    cout << "Max frequency element: " << maxElement << " (Frequency: " << maxFreq << ")" << endl;
    cout << "Min frequency element: " << minElement << " (Frequency: " << minFreq << ")" << endl;
}

int main()
{
    int array[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int size = sizeof(array) / sizeof(array[0]);

    frequencyCount(array, size);

    return 0;
}
