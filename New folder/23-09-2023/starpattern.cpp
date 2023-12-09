#include<iostream>
using namespace std;
int main()
{
    int i,j,k,num;
    cout<<"Enter the number= ";
    cin>>num;
    for(i=0;i<=num-1;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<=num-1-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}