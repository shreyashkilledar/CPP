#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int* ptr;
	ptr= (int*) malloc(n*sizeof(int));
	cout<<"Accept elements from array: ";
	for(int i=0;i<n;i++)
	cin>>(ptr+i);
	for(int i=0;i<n;i++)
	int sum=sum+ *(ptr+i);
	int sum;
	cout<<"Summation= "<<sum;
	free(ptr);
}
