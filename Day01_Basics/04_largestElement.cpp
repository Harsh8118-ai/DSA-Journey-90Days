#include <iostream>
using namespace std;

void largestElement(int arr[], int size)
{
    int max= arr[0];
    for(int i=0;i<size;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout<<max;
}

int main() {
    
    int array[6]= {12, 35, 1, 10, 34, 1};
    int size= 6;

    largestElement(array, size);

    return 0;
}