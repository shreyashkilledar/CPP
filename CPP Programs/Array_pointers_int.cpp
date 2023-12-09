#include<iostream>
using namespace std;
int main()
{
	int ptr1[5];
	int* ptr2[5];
	cout<<"Enter the five numbers:"<<endl;
	for(int i=0;i<=5;i++)
	{
		cin>>ptr1[1];
	}
	for(int i=0;i<=5;i++)
	{
		ptr2[i]=&ptr1[i];
	}
	cout<<"The values are "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*ptr2[i]<<endl;
	}
	cout<<sizeof(ptr1)<<endl;
	cout<<sizeof(ptr2)<<endl;
}
