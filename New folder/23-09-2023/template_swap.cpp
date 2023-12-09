#include<iostream>
using namespace std;
template<class T> 
int swap(T& a,T& b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}
int main()
{
    int i,j;
    i=20;
    j=10;
    swap(i,j);
    
    cout<<"After swapping a="<<i<<" b="<<j;
    return 0;
}