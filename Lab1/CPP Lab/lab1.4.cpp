#include<iostream>
using namespace std;
int main()
{
    int base,expo,result=1;
    cout<<"Enter the base= ";
    cin>>base;
    cout<<"Enter the exponent= ";
    cin>>expo;
    while(expo!=0)
    {
    result*= base;
    --expo;
    }
    cout<<"Result= "<<result<<endl;
    return 0;
}