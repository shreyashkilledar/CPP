#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the value of a=";
	cin>>a;
	cout<<"Enter the value of b=";
	cin>>b;
	temp=b;
	b=a;
	a=temp;
	cout<<"After Swapping Value of a & b is "<<a<<" & "<<b<<endl;
	
}
