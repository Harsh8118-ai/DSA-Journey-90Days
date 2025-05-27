#include <iostream>
using namespace std;

int leftRotate(int arr[], int size, int d)
{
    int temp[d];

    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];
    }

    int j=0;

    for(int i=d; i<size; i++)
    {
        arr[j]=arr[i];
        j +=1;
    }

    int k=0;
    for( int i=j; i<size; i++)
    {
        arr[i]=temp[k];
        k += 1;
    }

    for(int i=0 ; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }


}

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int d;
    cin>>d;

    leftRotate(array, size, d);


    return 0;
}