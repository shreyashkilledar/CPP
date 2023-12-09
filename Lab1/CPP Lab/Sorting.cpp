#include<iostream>
#include<string.h>
using namespace std;
class Date
{
    int dd,mm,yy;
    public:
    void get()
    {
        cout<<"Enter the date=";
        cin>>dd>>mm>>yy;
    }
    void put()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy;
    }
};
class Student
{
    int rno;
    char nm[10];
    int mark;
    Date d;
    public:
    void get()
    {
        cout<<"Enter roll no="<<endl;
        cin>>rno;
        cout<<"Enter the name="<<endl;
        cin>>nm;
        cout<<"Enter the Marks="<<endl;
        cin>>mark;
        d.get();
    }
    void put()
    {
        cout<<rno<<"\t"<<nm<<"\t"<<mark<<endl;
        d.put();
    }
    int getrno()
    {
        return rno;
    }
    char* getnm()
    {
        return nm;
    }
    int getmark()
    {
        return mark;
    }
    void setrno(int r)
    {
        rno=r;
    }
    void setnm(char*n)
    {
        strcpy(nm,n);
    }
    void setmark(int m)
    {
        mark=m;
    }
};
int main()
{
    Student s[10], temp;
    int i,j,n;
    cout<<"Enter the value of n=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].get(); 
    }
    for(i=0;i<n;i++)
    {
        s[i].put();
    }
    cout<<"Sort Information"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i].getmark()>s[j].getmark())
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    s[i].put();
}