#include<iostream>
using namespace std;
#include<string.h>
class Student
{
	int rno;
	int marks;
	char add[15];
	char nm[12];
	public:
		Student()
		{
			nm[12];
			rno;
			add[15];
			marks;
		}
		Student( char *name,int r,int mark,char *address)
		{
			char nm;
			strcpy(nm,name);
			strcpy(rno, r);
			strcpy(marks, mark);
			strcpy(add, address);
		}
		void display()
		{
			cout<<"name ="<<nm<<endl;
			cout<<"rno ="<<rno<<endl;
			cout<<"marks ="<<marks<<endl;
			cout<<"address ="<<add<<endl;
			
		}
};
int main()
{
	Student s1("Abhishek",45,99,"Pune",);
}
