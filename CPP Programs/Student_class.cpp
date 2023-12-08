#include<iostream>
using namespace std;
class Student
{
	int rno,dd,mm,yy,marks;
	public:
		Student();
		void display();
		
};
Student::Student()
{
		cout<<"Enter a rno =";
		cin>>rno;
		cout<<"Enter a Date of Birth"<<endl;
		cout<<"Enter Date: "<<endl;
		cin>>dd;
		cout<<"Enter Month: "<<endl;
		cin>>mm;
		cout<<"Enter the Year: "<<endl;
		cin>>yy;;
		cout<<"Enter a marks =";
		cin>>marks;
}
void Student::display()
{
	cout<<endl<<"Roll No is "<<rno<<". Date of Birth is "<<dd<<"/"<<mm<<"/"<<yy<<". Marks are "<<marks<<endl;
	

}
int main()
{
	Student s1;
	Student s2;
	Student s3;
	Student s4;
	Student s5;
	Student s6;
	Student s7;
	Student s8;
	Student s9;
	Student s10; 
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	s5.display();
	s6.display();
	s7.display();
	s8.display();
	s9.display();
	s10.display(); 
	
}
