#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a & b= ";
    cin>>a>>b;
    cout<<"Befor swapping, value of a & b is a= "<<a<<" ,b= "<<b<<endl;
    c=b;
    b=a;
    a=c;
    cout<<"After swapping value of a & b is a= "<<a<<" ,b= "<<b;
    return 0;
}