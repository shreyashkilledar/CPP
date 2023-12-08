#include<iostream>
using namespace std;
class A
{
	public:
		int x =5;
	A()
	{
		cout<<"In default constructor of A \n";
	}
	
	~A()
	{
		cout<<"In destructor of A\n"<<endl;
	}
};

class B:public A
{
	public:
	B()
	{
		cout<<"In default constructor of B \n"<<endl;
	}
	
	~B()
	{
		cout<<"In destructor of B \n";
	}
};

class C:public A
{
	public:
	C()
	{
		cout<<"In default constructor of C \n"<<endl;
	}
	
	~C()
	{
		cout<<"In destructor of C \n";
	}
};

int main()
{
	C c1;
	B b1;
}
