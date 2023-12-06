#include<iostream>
using namespace std;
class Student
{
	public:
	char nm[15];
	int rno,m1,m2,m3;
	char add[15];
	Student()
	{
		cout<<"Enter name= ";
		cin>>nm;
		cout<<"Enter roll no= ";
		cin>>rno;
		cout<<"Enter add= ";
		cin>>add;
	    cout<<"Enter marks= ";
		cin>>m1>>m2>>m3;
	}
	void display()
	{
		cout<<"Name= "<<nm<<endl;
		cout<<"Roll No= "<<rno<<endl;
		cout<<"Address= "<<add<<endl;
		float avg;
		avg=(m1+m2+m3)/3.0f;
		cout<<"Marks= "<<avg;
	}
};
int main()
{
	Student s1;
	s1.display();
}
