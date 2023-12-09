#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,flag;
    cout<<"Enter the number: ";
    cin>>num;
    flag=num;
    while(num>0)
    {
        rem=num%10;
        sum=(rem*rem*rem)+sum;
        num=num/10;
    }
    if(flag==sum)
    {
        cout<<"Number is Armstrong.";
    }
    else
    {
        cout<<"Number is not Armstrong.";
    }
    return 0;
}