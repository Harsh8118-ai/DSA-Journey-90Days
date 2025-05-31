#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

void frequencyCount(int arr[], int size)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    for (auto it : freq)
    {
        if( it.second > 1)cout<<it.first<<endl;
    }

}

int main()
{
    int array[] = {1, 3, 2, 1, 4, 1, 2, 2, 4, 4};
    int size = sizeof(array) / sizeof(array[0]);

    frequencyCount(array, size);

    return 0;
}
