#include<iostream>
using namespace std;
int main()
{
    int base,expo,result=1;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponential: ";
    cin>>expo;
    while(expo!=0)
    {
    result *=base;
    --expo;
    }
    cout<<"Result is "<<result<<endl;

}