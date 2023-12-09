#include<iostream>
using namespace std;
#include<string.h>
class student
{
	int rno,fee;
	char nm[10];
	
	public:
		student(int,char*,int);
		void display();
		student(student&,char*);
	
};
student::student(int rno,char*name,int fee)
{
	this->rno=rno;
	strcpy(nm,name);
	this->fee=fee;
}
void student::display()
{
	cout<<"My Roll No is "<<rno<<endl;
	cout<<"My Name is "<<nm<<endl;
    cout<<"Fee is "<<fee<<endl<<endl;
}
student::student(student&s_new,char*nm)
{
	char name[10];
	this->rno=s_new.rno;
	strcpy(nm,name);
	this->fee=35000;
}
int main()
{
	student s1(104,"Abhishek",45000);
	student s2(45,"Shreyash",65000);
	student s3(s2);
	s1.display();
	s2.display();
	s3.display();
}
	

