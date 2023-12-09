#include<iostream>
using namespace std;
class Date
{
    int hr,mi,sec;
    public:
    Date(int h,int m, int s)
    {
        hr=h;
        mi=m;
        sec=s;
    }
    friend void operator-(Date&,int);
    friend void operator+(Date&,int);
    void display()
    {
        cout<<hr<<"/"<<mi<<"/"<<sec<<endl;
    }
};
void operator-(Date&a,int b)
{
    a.hr=a.hr-b;
    a.mi=a.mi-3;
    a.sec=a.sec-5;
    cout<<a.hr<<":"<<a.mi<<":"<<a.sec<<endl;
}
void operator+(Date&a,int b)
{
    a.hr=a.hr+b;
    a.mi=a.mi+5;
    a.sec=a.sec+7;
    cout<<a.hr<<":"<<a.mi<<":"<<a.sec<<endl;
}
int main()
{
    int dd,mm,yy;
    cout<<"Enter the hours= "<<endl;
    cin>>dd;
    cout<<"Enter the minutes= "<<endl;
    cin>>mm;
    cout<<"Enter the seconds= "<<endl;
    cin>>yy;
    Date d(dd,mm,yy);
    d-3;
    d+7;

}