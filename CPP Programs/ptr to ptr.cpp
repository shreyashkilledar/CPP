#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *b=&a;
	int **c=&b;
	cout<<"value of a"<<a<<endl;
	cout<<"value of *b"<<*b<<endl;
	cout<<"value of **c"<<**c<<endl;
	
 
}
