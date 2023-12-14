#include "Employee.h"

Employee::Employee()
{
	cout<<"Enter Name: ";
	cin>>nm;
	cout<<"Enter Salary: ";
	cin>>sal;
	cout<<"Enter Address: ";
	cin>>add;
}
void Employee::display()
{
	cout<<"Name is: "<<nm<<endl;
	cout<<"Salary is: "<<sal<<endl;
	cout<<"Address is: "<<add<<endl;
}
