#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"Enter the the Number: ";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        for(j=0;j<=num;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}