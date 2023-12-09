#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			cout<<"in default of A\n";
		}
		A(int a)
		{
			cout<<"in para of A\n";
			this->a=a;
		}
		void display()
		{
			cout<<"in display of A class\n";
			cout<<"value of a="<<a<<endl;
		}
};
class B:public A
{
	int b;
	public:
		B()
		{
			cout<<"in default of B\n";
		}
		B(int b):A(10)
		{
			cout<<"in para of B\n";
			this->b=b;
		}
		void display()
		{
			A::display();
			cout<<"in display of base class \n";
			cout<<b;
		}
	};
	int main()
	{
		B bobj(20);
		B bobj1();
		bobj.display();
		cout<<" "<<sizeof(bobj);
	
			
				
}
