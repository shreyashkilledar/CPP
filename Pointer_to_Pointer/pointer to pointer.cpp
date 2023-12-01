//Pointer to pointer


#include<iostream>
using namespace std;
int main()
{
	int a;
	int*b;
	int**c;
	
	a=10;
	b=&a;
	c=&b;
	
	cout<<"Pointer is "<<a<<endl;
	cout<<"Pointer is "<<*b<<endl;
	cout<<"Pointer is "<<**c<<endl;
}
