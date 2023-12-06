#include<iostream>
using namespace std;
class A
{
	public:
		A(int a)
		{
			cout<<"Base Class A "<<a<<endl;
		}
};
class B:public A
{
	public:
	B(int a):A(a)
	{
		cout<<"Derived class B "<<a<<endl;
	}
};
class C:public B
{
	public:
		C(int a):B(a)
		{
			cout<<"Derived class C "<<a<<endl;
		}
};
class D:public A
{
	public:
		D(int a):A(a)
		{
			cout<<"Derived class D "<<a<<endl;
		}
};
int main()
{
	B b1(15);
	C c1(12);
	D d1(14);
}
