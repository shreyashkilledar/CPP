#include<iostream>
using namespace std;
class A
{
	int c;
	public:
		int a;
	protected:
		int b;
   	public:
   		A(){
			cout<<"in default of A\n";
			a=10;
		}
		void dispaly()
		{
			cout<<a<<b;
		}
};
class B: protected A
{
	public:
		B(){
			cout<<"in default of B\n";
			b=20;
		}
		void show()
		{
			cout<<a<<b;
		}
};

class C: protected B
{
	c(){
		cout<<"in default of C \n";
	}
	public:
	void show()
	{
		cout<<a<<b;
	}
};
int main()
{
	B bobj;
	bobj.show();
	C cobj;
	cobj.show();
//	cobj.dispaly();
}
