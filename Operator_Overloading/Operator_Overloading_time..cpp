#include<iostream>
using namespace std;
class time
{
	int hrs,min,sec;
	public:
		time(int h,int m,int s)
		
		{
			hrs=h;
			min=m;
			sec=s;
		}
		friend void operator-(time&,int);
		friend void operator+(time &,int );
		void display()
		{
			cout<<hrs<<":"<<min<<":"<<sec;	
		}
};
   void operator-(time&t,int hr)
   {
   	t.hrs=t.hrs-hr;
   	t.min=t.min-10;
   	t.sec=t.sec-10;
   	cout<<t.hrs<<":"<<t.min<<":"<<t.sec<<endl;
   };
   
   void operator+(time&t,int hr)
   {
   	t.hrs=t.hrs+hr;
   	t.min=t.min+10;
   	t.sec=t.sec+05;
   	
   	cout<<t.hrs<<":"<<t.min<<":"<<t.sec;
   };
int main()
{
	int hrs,min,sec;
	cout<<"Enter the hrs ";
	cin>>hrs;
	
	cout<<"Enter the min ";
	cin>>min;
	
	cout<<"Enter the sec ";
	cin>>sec;
	
	time t1 (hrs,min,sec);
	int t;
	t1-t;
	t1+t;
	
}
   
   
   
   
   
