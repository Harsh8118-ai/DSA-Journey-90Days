#include <iostream>
using namespace std;

void printNumbers(int n)
{
    if(n==0)return;
    cout<<n<<endl;
    printNumbers(n-1);
}

int main() {
    
    int n;
    cout<<"Enter N"<<endl;
    cin>>n;
    printNumbers(n);
    
    return 0;
}