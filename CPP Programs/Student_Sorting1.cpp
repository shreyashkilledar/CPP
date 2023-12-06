#include <iostream>     
using  namespace std;  
#include<string.h>
class date
{
	int date,month,year;
	public:
		void get()
		{
			cout<<"enter date\n";
			cin>>date>>month>>year;
		}
		void put()
		{
			cout<<"\t"<<date<<"/"<<month<<"/"<<year<<endl;
		}
};
class student
{
	int rno;
	char nm[10];
	date d;
	
	public:
		void get()
		{
			cout<<"enter rollno\n";
			cin>>rno;
			cout<<"enter student name\n";
			cin>>nm;
			d.get();
		}
		void put()
		{
			cout<<rno<<"\t"<<nm;
			d.put();
		}
		int getrollno()
		{
			return rno;
		}
		char* getname()
		{
			return nm;
		}
		void setrollno(int r)
		{
			rno=r;
		}
		void setname(char* n)
		{
			strcpy(nm,n);
		}
		
		
};
int main()
{
	student s[10],temp;
	int i,n,j;
	cout<<"enter value of n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
	cout<<"sort information\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}
