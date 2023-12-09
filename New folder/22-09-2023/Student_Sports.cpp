#include<iostream>
using namespace std;
class Student
{
    public:
    int rno,m1,m2,m3,m4,sum;
    char nm[15];
    Student()
    {
        cout<<"Enter Name: ";
        cin>>nm;
        cout<<"Enter Roll No: ";
        cin>>rno;
        cout<<"Enter Marks of 4 subjects: ";
        cin>>m1>>m2>>m3>>m4;
    }
};
class Sports
{
    public:
    int mark1,mark2;
    Sports()
    {
        cout<<"Enter the 2 Sports marks: ";
        cin>>mark1>>mark2;
    }
};
class Avg:public Student,public Sports
{
    public:
    float avg,avg1,average;
    void display()
    {
       cout<<endl<<"Name is "<<nm<<endl;
       cout<<"Roll No is "<<rno<<endl;
       avg=(m1+m2+m3+m4)/4.0f;
       cout<<"Average score in 4 subjects is "<<avg<<"%"<<endl;
       avg1=(mark1+mark2)/2.0f;
       cout<<"Average marks of the sports is "<<avg1<<"%"<<endl;
       average=(avg+avg1)/2.0f;
       cout<<"Total average marks of the student including 4 subjects and 2 sports are "<<average<<"%"<<endl;
    }
};

int main()
{
    Avg s1;
    s1.display();
}