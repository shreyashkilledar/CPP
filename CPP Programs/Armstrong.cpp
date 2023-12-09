#include<iostream>
using namespace std;
int main()
{
	int n,rem,i,sum=0,temp;
	cout<<"Enter the Number:"<<endl;
	cin>>n;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=(rem*rem*rem)+sum;
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<"Number is armstrong."<<endl;
	}
	else
	{
		cout<<"Number is not armstrong."<<endl;
	}
	return 0;
}

