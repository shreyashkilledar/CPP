#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"in default of A\n";
		}
		void display()
		{
			cout<<"in display of A class\n";
		}
};
class B:public A
{

public:
	B()
	{
			cout<<"in default of B\n";
		}
		void display()
		{
			cout<<"in display of B class\n";
		}
		
	};
	int main()
	{
		B bobj;
		bobj.display();
	}
