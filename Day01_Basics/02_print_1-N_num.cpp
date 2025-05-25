#include <iostream>
using namespace std;

void printNumbers(int x, int number)
{
    if(x==0) return;

    cout<<number<<endl;
    printNumbers(x-1, number+1);
}

int main() {

    int n;
    int number=1;
    cout<<"Enter N"<<endl;
    cin>>n;
    printNumbers(n, number);
    
    return 0;
}
