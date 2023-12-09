#include<iostream>
using namespace std;
class Student
{
	int rno,fee;
	char nm[10];
	public:
		student();
		void display();
};
Student::student(int,const char*,int)
{
	cout<<"Enter the Roll Number= ";
	cin>>rno;
	cout<<"Enter the Name= ";
	cin>>nm;
	cout<<"Enter the Fee= ";
	cin>>fee;
}
void Student::display()
{
	cout<<rno<<"\t"<<nm<<"\t"<<fee<<endl;
}
int main()
{
	Student s1(28,"Abhi",67000);
	Student s2(s1);
	s1.display();
	s2.display();

}
