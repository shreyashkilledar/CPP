#include<iostream>
using namespace std;
class shape
{
	public:
	virtual int area()
	{
		return 0;
	}
    virtual	void display()
    {
		cout<<"Area of shape:=0"<<endl;
	}
};
class square:public shape
{
	int side;
	public:
		square(int s)
		{
			side=s;
		}
		int area()
		{
			cout<<"Area of Square= ";
			return side*side;
		}
		void show()
		{
			
			cout<<"side of square="<<side<<endl;
		}	
};
class rectangle:public shape
{
	int len,breadth;
	public:
		rectangle(int l,int b)
		{
			len=l;
			breadth=b;
		}
		int area()
		{
			cout<<"Area of Rectangle= ";
			return (len*breadth);
		}
		void display()
		{
			cout<<"length and breadth of rectangle is:"<<"("<<len<<","<<breadth<<")"<<endl;
		}
};
int main()
{
	shape *sptr=new shape();
	cout<<sptr->area()<<endl;
	sptr=new square(5);
	cout<<sptr->area()<<endl;
	sptr=new rectangle(5,10);
	cout<<sptr->area()<<endl;
	sptr -> display();	
}

