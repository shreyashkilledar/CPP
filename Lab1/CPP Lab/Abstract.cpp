#include<iostream>
using namespace std;
class Emp
{
    int id;
    public:
    Emp();
    Emp(int);
    void display();
    virtual int findsalary()=0;
};
Emp::Emp()
{
    cout<<"default of Emp."<<endl;
    id=0;
}
Emp::Emp(int i)
{
    id=i;
}
void Emp::display()
{
    cout<<"ID of employee is "<<id<<endl;
}
class Wagemp:public Emp
{
    int hrs,rate;
    public:
    Wagemp();
    Wagemp(int,int,int);
    void display();
    int findsalary();
};
Wagemp::Wagemp()
{
    cout<<"Default of Wagemp"<<endl;
    hrs=0;
    rate=0;
}
Wagemp::Wagemp(int i,int h,int r):Emp(i)
{
    hrs=h;
    rate=r;
}
int Wagemp::findsalary()
{
    return hrs*rate;
}
void Wagemp::display()
{
    Emp::display();
    cout<<"Hrs:"<<hrs<<"rate:"<<rate;
}
class salemanager:public Wagemp
{
    int sale,comm;
    public:
    salemanager();
    salemanager(int,int,int,int,int);
    void display();
    int findsalary();
};
salemanager::salemanager()
{
    cout<<"Default of Salemanager"<<endl;
    sale=0;
    comm=0;
}
salemanager::salemanager(int i,int h,int r,int sales,int comm):Wagemp(i,h,r)
{
    sale=sales;
    this->comm=comm;
}
void salemanager::display()
{
    Wagemp::display();
    cout<<"Sales: "<<sale<<"Commision: "<<comm<<endl;
        
}
int salemanager::findsalary()
{
    return (Wagemp::findsalary()+ sale*comm);
}
int main()
{
    salemanager s1;
    s1.display();
    Emp*ptr=new salemanager(101,10,15,200,10);
    ptr->findsalary();
    cout<<"Salary is "<<ptr->findsalary();
    return 0;
}