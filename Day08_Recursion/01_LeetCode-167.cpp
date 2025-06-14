#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumArray(int arr[], int size, int target)
{
    int left=0;
    int right=size-1;
    int sum;

    while( left < right )
    {
        sum = arr[left] + arr[right];

        if(sum == target) return {left+1, right+1};
        else if ( sum < target) left++;
        else right--;
        
    };

    return {-1, -1};
}

int main() {
    
    int array[] = {2, 7, 11, 15};
    int size = sizeof(array) / sizeof(array[0]);

    int target;
    cout<<"Enter Target: "<<endl;
    cin>>target;

    vector<int> result= twoSumArray(array, size, target);
    if(result[0]== -1)
    {
        cout<<"Not Valid";
    }
    else
    {
        cout<<"Found at: "<<result[0]<<" and "<<result[1];
    }

    return 0;
}
