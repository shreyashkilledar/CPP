#include<iostream>
using namespace std;
int main()
{
	int num,rem,result=0,temp;
	cout<<"Enter number= ";
	cin>>num;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		result=(rem*rem*rem)+result;
		num=num/10;
	}
	if(temp==result)
	{
		cout<<"Number is armstrong.";
	}
	else
	{
		cout<<"Number is Not Armstrong.";
	}
} 
