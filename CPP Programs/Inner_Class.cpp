#include<iostream>
using namespace std;
class Employee
{
	public:
		class emp 
		{
			int id, salary;
			public:
				void get(int a, int b)
				{
					this->id=a;
					this->salary=b;
					cout<<"Id is : "<<id<<endl;
					cout<<"Salary is: "<<salary;
				}
		};
};
int main()
{
	Employee::emp e1;
	e1.get(11,160000);
}
