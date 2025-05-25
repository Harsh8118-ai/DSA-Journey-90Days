#include <iostream>
using namespace std;

int name(int x)
{
    if(x>0)
    {
        cout<<"Harsh"<<endl;
        name(x-1);
    }

        return x;
}

int main()
{

    int n;
    cout << "enter n= " << endl;
    cin >> n;

    name(n);

    return 0;
}