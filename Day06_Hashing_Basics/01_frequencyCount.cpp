#include <iostream>
#include <unordered_map>
using namespace std;

void frequencyCount(int arr[], int size)
{
    unordered_map< int, int> freq;

    for( int i=0; i<size; i++)
    {
        freq[arr[i]]++;
    }

    cout<<"Frequencies: ";
    
    for( auto it: freq)
    {
        cout<< it.first <<"-"<< it.second<<endl;
    }

    
}

int main()
{
    int array[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int size = sizeof(array) / sizeof(array[0]);

    frequencyCount(array, size);

    return 0;
}
