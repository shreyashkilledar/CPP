#include<iostream>
using namespace std;
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int i,j,temp;
    int a[5]={45,32,69,45,86};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting"<<endl;
    print(a,n);
    bubble(a,n);
    cout<<"after sorting"<<endl;\
    print(a,n);
}