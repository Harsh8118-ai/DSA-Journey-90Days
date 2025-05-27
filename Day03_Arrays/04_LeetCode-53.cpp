#include <iostream>
#include<climits>
using namespace std;

void maxSubArray(int arr[], int size)
{
    int currentSum= 0;
    int maxSum= INT_MIN;

    for(int i=0; i<size;i++)
    {
        
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        
        if(currentSum<=0)currentSum=0;
    } 

    cout<<maxSum;
}

int main()
{
    int array[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(array) / sizeof(array[0]);

    maxSubArray(array, size);


    return 0;
}
