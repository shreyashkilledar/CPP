//call by reference

#include<iostream>
using namespace std;
void swap(int*x,int*y)
{
	int swap;
	swap=*x;
	*x=*y;
	*y=swap;
}
int main()
{
	
	int x=10;
	int y=20;
	swap(&x,&y);
	cout<<x<<" "<< y;
}
