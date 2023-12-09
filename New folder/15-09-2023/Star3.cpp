#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"Enter the the Number: ";
    cin>>num;
    for(i=num;i>0;i--)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}