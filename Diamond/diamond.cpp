#include<iostream>
using namespace std;
class A
{
	public:
		A(int a)
		{
			cout<<"base class A "<<a<<endl;
		}
};
class B:public A
{
	public:
		B(int a):A(a)
		{
			cout<<"derived class B "<<a<<endl;
		}
};
class C:public A
{

	public:
		C(int a):A(a)
		{
			cout<<"derived class C "<<a<<endl;
		}
};
class D:public B,public C
{
	
	public:
		D(int a):B(a),C(a)
		{
			cout<<"derived class D "<<a<<endl;
		}
};
int main()
{
	D d1(14);
	
}

