#include<iostream>
using namespace std;
class Base
{
	public:
		Base(int a)
		{
			cout<<"Base class "<<a<<endl;
		}
};
class Derived1:public Base
{
	public:
		Derived1(int a):Base(a)
		{
			cout<<"Derived1 class "<<a<<endl;
		}
		
};
class Derived2:public Base
{
	public:
		Derived2(int a):Base(a)
		{
			cout<<"Derived2 class "<<a<<endl;
		}
};
class result:public Derived1,public Derived2
{
	int a;
	public:
		result(int a):Derived1(a),Derived2(a)
		{
			cout<<"Result class "<<a<<endl;
		}
};
int main()
{
	result r(50);
}
