#include<iostream>
using namespace std;
int main()
{
	int n1=0,n2=1,n3,num,i;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<n1<<" "<<n2<<" ";
	for(i=1;i<=num;i++)
	{
	n3=n1+n2;
	cout<<n3<<" ";
	n1=n2;
	n2=n3;
    }
}
