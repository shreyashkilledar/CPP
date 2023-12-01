#include<iostream>
using namespace std;
int main()
{
	int ptr1[6];
	int *ptr2[6];
	cout<<"Enter Six Numbers: ";
	for(int i=0;i<=5;i++)
	{
		cin>>ptr1[i];
	}
	for(int i=0;i<=5;i++)
	{
		ptr2[i]=&ptr1[i];
	}
	cout<<"Values are ";
	for(int i=0;i<=5;i++)
	{
		cout<<*ptr2[i]<<endl;
	}
	cout<<sizeof(ptr1)<<endl;
}
