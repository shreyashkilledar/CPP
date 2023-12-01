#include<iostream>
using namespace std;
class cDate
{
	int Day,Month,year;
	public:
		cDate()
		{
			Day=10;
			Month=11;
			year=1999;
		}
		cDate(int d,int m,int y)
		{
			cout<<"in date constructor\n";
			Day=d;
			Month=m;
			year=y;
		}
		void display()
		{
			cout<<"day"<<Day<<endl;
			cout<<"month"<<Month<<endl;
			cout<<"year"<<year<<endl;
		}
};
class cEmployee
{
	int Id;
	int Basicsal;
	cDate Bdate;
	public:
		cEmployee()
		{
			Id=1;
			Basicsal=10000;
			Bdate=cDate();
		}
		cEmployee(int i,int sal,int d,int m,int y):Bdate(d,m,y)
		{
			Id=i;
			Basicsal=sal;
		}
		void display()
		{
			cout<<"id:"<<Id<<endl;
	        cout<<"salary:"<<Basicsal<<endl;
	        Bdate.display();
		}
		
};
int main()
{
	cEmployee e2(2,20000,11,11,1999);
	e2.display();
	return 0;
}

