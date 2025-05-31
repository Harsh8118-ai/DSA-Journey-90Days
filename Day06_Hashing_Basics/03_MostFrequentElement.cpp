#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

void frequencyCount(int arr[], int size)
{
    unordered_map<int, int> freq;

    
    int maxFreq = INT_MIN;
    int maxElement = -1;

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    for (auto it : freq)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }
    cout << "Max frequency element: " << maxElement << " (Frequency: " << maxFreq << ")" << endl;
}

int main()
{
    int array[] = {1, 3, 2, 1, 4, 1};
    int size = sizeof(array) / sizeof(array[0]);

    frequencyCount(array, size);

    return 0;
}
