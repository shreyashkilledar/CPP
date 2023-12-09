#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int p,n;
    double r,ci;
    cout<<"Enter the Principle= ";
    cin>>p;
    cout<<"Enter the rate of interest= ";
    cin>>r;
    cout<<"Enter the years= ";
    cin>>n;
    ci=p*pow((1+r/100),n)-p;
    cout<<"Compound interest= "<<ci;
}