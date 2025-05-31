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

    cout<<"Elements with the same highest frequency :"<<endl;
    
    for (auto it : freq)
    {
        if( it.second == maxFreq)cout<<it.first<<"->"<<it.second<<endl;
    }
    
}

int main()
{
    int array[] = {1, 3, 2, 1, 4, 1, 2, 2, 4, 4};
    int size = sizeof(array) / sizeof(array[0]);

    frequencyCount(array, size);

    return 0;
}
