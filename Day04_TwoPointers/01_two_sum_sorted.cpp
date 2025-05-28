#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(int arr[], int size, int target)
{
    int left=0;
    int right=size-1;

    while( left < right )
    {
        int sum = arr[left] + arr[right] ;
        if( sum == target)return {left+1, right+1};
        else if( sum < target) left++;
        else if( sum > target) right--;
    }

    return {-1, -1};
}

int main()
{
    int array[] = {2, 7, 11, 15};
    int size = sizeof(array) / sizeof(array[0]);
    int target;

    cout<<"Enter target:"<<endl;
    cin>>target;

    vector<int> result = twoSum(array, size, target);

    if (result[0] == -1)
    {
        cout << "No valid pair found.";
    }
    else
    {
        cout << "Pair found at indices: " << result[0] << " and " << result[1];
    }



    return 0;
}
