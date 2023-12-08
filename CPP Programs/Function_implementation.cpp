#include<iostream>
using namespace std;
int num1,num2;
void number();
void check();
int main()
{
    number();
    check();		
}
void number()
{
	cout<<"Enter a number: ";
	cin>>num1;
	cout<<"enter another number:";
	cin>>num2;
}
void check()
{
	if(num1>num2) 
	{	
	     cout<<num1<<"is greater than"<<num2;
	}
	else if(num1<num2)
	{	
	    cout<<num1<<"is less than"<<num2;
	}
	else
	{
		cout<<num1<<" is equal to "<<num2;
	}
}
