#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter the num";
	cin>>num;
	
	if(num>0)
	{
		cout<<"Number is positive"<<endl;
	}
	else if (num<0)
	{
		cout<<"number is negative"<<endl;
	}
	else
	{
		cout<<"number is 0";
	}
}
