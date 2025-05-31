#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

void frequencyCount(int arr[], int size)
{
    unordered_map<int, int> freq;
    int count =0;

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
        count++;
    }

    for(int i=count ; i<size ; i++)
    {
        freq[i]++;
    }

    for (auto it : freq)
    {
        cout << "Element" << it.first << "->" << it.second << endl;
    }
}

int main()
{
    int array[] = {1, 2, 2, 1, 0};
    int size;
    cout<<"Enter Size:" << endl;
    cin>> size;

    frequencyCount(array, size);

    return 0;
}
