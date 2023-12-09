#include<iostream>
using namespace std;
class Date
{
    int day,month,year;
    public:
    Date()
    {
        day=24;
        month=11;
        year=2001;
    }
    Date(int d,int m,int y)
    {
        cout<<"in date constructor\n";
        day=d;
        month=m;
        year=y;
    }
    void display()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
class Employee
{
    int id;
    int basicsal;
    Date Bdate;
    public:
    Employee()
    {
        id=1;
        basicsal=15000;
        Bdate=Date();
    }
    Employee(int,int,int,int,int);
    void display();
};
Employee::Employee(int i,int sal,int d,int m,int y):Bdate(d,m,y)
{
    cout<<"in Emp constructor\n";
    id=i;
    basicsal=sal;
}
void Employee::display()
{
    cout<<"ID is "<<id<<endl;
    cout<<"Salary is "<<basicsal<<endl;
    Bdate.display();
}
int main()
{
    Employee e1(1,35000,9,3,1999);
    e1.display();
    Employee e2(2,40000,24,11,2001);
    e2.display();
    return 0;
}