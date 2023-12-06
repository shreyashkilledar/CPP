//armstrong number


#include<iostream>
using namespace std;
int main()
{
	int num;
	int reminder;
	int result=0;
	int temp;
	
	
	cout<<"Number is";
	cin>>num;
	
	temp=num;
	while(num>0)
	{
		reminder=num%10;
 	 result=(reminder*reminder*reminder)+result;
  
  	num=num/10;
	}
	if(temp==result)
	{
		cout<<"It is armstrong no";
	}
	else
	{
		cout<<"it is not armstrong";
	}
	
}
