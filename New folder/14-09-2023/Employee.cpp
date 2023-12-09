#include<iostream>
using namespace std;
class Employee
{
    int id,sal;
    char nm[20],add[20];
    public:
    void getdata()
    {
        cout<<"Enter the Name: "<<endl;
        cin>>nm;
        cout<<"Enter the ID: "<<endl;
        cin>>id;
        cout<<"Enter the Salary: "<<endl;
        cin>>sal;
        cout<<"Enter the Address: "<<endl;
        cin>>add;
    }
    void display()
    {
        cout<<"Name is "<<nm<<endl;
        cout<<"ID is "<<id<<endl;
        cout<<"Salary is "<<sal<<endl;
        cout<<"Address is "<<add<<endl;
    }
};
int main()
{
    Employee e;
    e.getdata();
    e.display();
    return 0;

}