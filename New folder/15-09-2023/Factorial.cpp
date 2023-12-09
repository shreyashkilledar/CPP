#include<iostream>
using namespace std;
int main()
{
    int num,i,fact=1;
    cout<<"Enter the number=";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of the number is "<<fact;
}