#include<iostream>
using namespace std;
int main()
{
	int m,n,i,sum=0;
	float avg;
	cout<<"Enter the marks of subject=";
	cin>>m;
	cout<<"Enter the no of characters=";
	cin>>n;
	int *marks_m= new int[m];
	char *name_n= new char[n+1];
	for(i=0;i<m;i++)
	{
		cin>>marks_m[i];
		sum=sum+marks_m[i];
	}
	avg=(float)sum/m;
	cout<<"Enter the name of student=";
	cin>>name_n;
	cout<<"Name is "<<name_n;
	cout<<"Average is "<<avg;
}
