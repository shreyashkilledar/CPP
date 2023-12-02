#include<iostream>
using namespace std;
class Date1
{
	int dd,mm,yy;
	public:
		Date1(int d,int m,int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
		friend void operator-(Date1&,int);
		friend void operator+(Date1&,int);
		void display()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy;
			
		}
		
};
void operator-(Date1&x,int y)
{
	x.dd=x.dd-y;
	x.mm=x.mm-2;
	x.yy=x.yy-3;
	cout<<x.dd<<"/"<<x.mm<<"/"<<x.yy;
	
};
void operator+(Date1&x,int y)
{
	x.dd=x.dd+y;
	x.mm=x.mm+4;
	x.yy=x.yy+2;
	cout<<endl<<x.dd<<"/"<<x.mm<<"/"<<x.yy;
	
};
int main()
{
	int dd,mm,yy;
	cout<<"enter the date"<<endl;
	cin>>dd;
	cout<<"enter the month"<<endl;
	cin>>mm;
	cout<<"enter the year"<<endl;
	cin>>yy;
	
	Date1 d1(dd,mm,yy);
	d1-1;
	d1+2;
	return 0;
}
