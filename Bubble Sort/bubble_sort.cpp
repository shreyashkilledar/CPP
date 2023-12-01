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
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
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
	int a[5]={45,12,47,52,68};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Before sorting ";
	print(a,n);
	bubble(a,n);
	cout<<endl<<"After sorting ";
	print(a,n);
;}
