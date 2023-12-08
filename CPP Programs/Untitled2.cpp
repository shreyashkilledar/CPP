#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int n;
	cout<<"Enter n=";
	cin>>n;
	if(n==1)
	{
		cout<<"square";
	}
	else if(n==2)
	{
		cout<<"rect";
	}
	else if(n==3)
	{
		cout<<"circle";
	}
	else
	{
		cout<<"Invalid";
	}
}
