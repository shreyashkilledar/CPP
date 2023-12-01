#include <iostream>
using namespace std;
int main()
{
    int a[10], i;
    cout<<"Enter 10 numbers\n";
    for(i=0; i<10; i++)
    {
        cin>>a[i];
    }
    cout<<"List of even numbers\n";
    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
