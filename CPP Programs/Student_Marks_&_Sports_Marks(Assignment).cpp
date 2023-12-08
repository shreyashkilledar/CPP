#include<iostream>
using namespace std;
class Result
{
	public:
	int rno,id,m1,m2,m3,m4,sum,sm1,sm2,sm3,ssum;
	float avg,savg;
	char nm[10];
		void display()
		{
			sum=(m1+m2+m3+m4);
			avg=(sum)/4.0f;
			cout<<"Name of the student= "<<nm<<endl;
			cout<<"Roll No of the student= "<<rno<<endl;
			cout<<"ID of the student="<<id<<endl;
			cout<<"Average marks of the student="<<avg<<endl;
		}
		void show()
		{
			ssum=(sm1+sm2+sm3);
			savg=(ssum)/3.0f;
			cout<<"Average Sports marks of the student is "<<savg;
		}		
};
class Student:public Result
{
	public:
		Student()
		{
		cout<<"Enter roll no = "<<endl;
		cin>>rno;
		cout<<"Enter Name = "<<endl;
		cin>>nm;
		cout<<"Enter id = "<<endl;
		cin>>id;
		cout<<"Enter 4 subject marks = "<<endl;
		cin>>m1>>m2>>m3>>m4;
		}
};
class Sports:public Result
{
	public:
		Sports()
		{
		cout<<endl<<"Enter 3 different sports marks = "<<endl;
		cin>>sm1>>sm2>>sm3;
		}
};
int main()
{
	Student s1;
	s1.display();
	Sports c1;
	c1.show();
}
