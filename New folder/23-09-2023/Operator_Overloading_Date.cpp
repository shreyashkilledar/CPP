#include<iostream>
using namespace std;
class Date
{
    int dd,mm,yy;
    public:
    Date(int d,int m, int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    friend void operator-(Date&,int);
    friend void operator+(Date&,int);
    void display()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
};
void operator-(Date&a,int b)
{
    a.dd=a.dd-b;
    a.mm=a.mm-3;
    a.yy=a.yy-5;
    cout<<a.dd<<"/"<<a.mm<<"/"<<a.yy<<endl;
}
void operator+(Date&a,int b)
{
    a.dd=a.dd+b;
    a.mm=a.mm+5;
    a.yy=a.yy+7;
    cout<<a.dd<<"/"<<a.mm<<"/"<<a.yy<<endl;
}
int main()
{
    int dd,mm,yy;
    cout<<"Enter the date= "<<endl;
    cin>>dd;
    cout<<"Enter the month= "<<endl;
    cin>>mm;
    cout<<"Enter the Year= "<<endl;
    cin>>yy;
    Date d(dd,mm,yy);
    d-3;
    d+7;

}