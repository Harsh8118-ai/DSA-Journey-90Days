#include <iostream>
using namespace std;

void prefixSum(int arr[], int prefix[], int size)
{
    prefix[0]=arr[0];
    for(int i=1; i<size ; i++)
    {
        prefix[i]= prefix[i-1] + arr[i];
    }
}

int rangeSum(int prefix[], int l, int r)
{
    if(l==0)return prefix[r];
    return prefix[r]- prefix[l-1];
}

int main()
{
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int r, l;
    cout << "Enter L & R" << endl;
    cin >> l>>r;

    int prefix[size];

    prefixSum(array, prefix, size);

    int result = rangeSum(prefix, l, r);

    for (int i = l; i <= r; i++)
    {
        if (i < r)
            cout << array[i] << "+";
        else
            cout << array[i] << " ";
    }
    cout << "=" << result;

    return 0;
}
