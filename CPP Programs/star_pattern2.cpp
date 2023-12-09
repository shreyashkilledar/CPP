#include<iostream>
using namespace std;
int main()
{
	int i,j,num;
	cout<<"Enter Number=";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
