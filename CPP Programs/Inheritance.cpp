#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"in display of A class\n";
		}
};
class B:public A
{
	public:
	void show()
	{
			cout<<"in display of B class\n";
	}
	
};
int main()
{
	B bobj;
	bobj.display();
	bobj.show();
}
