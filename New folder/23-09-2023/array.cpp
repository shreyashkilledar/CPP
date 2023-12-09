#include<iostream>
using namespace std;
int main()
{
    char ar[10]={"shreyash"};
    for(int i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            cout<<ar[i];
        }
    }
    return 0;
}