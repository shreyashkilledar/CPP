#include<iostream>
using namespace std;
template<class T> T add(T&a,T&b)
{
    T result=a+b;
    return result;
}
int main()
{
    int i=3,j=5;
    float x=5.5f,y=3.5f;
    cout<<"Addition= "<<add(i,j)<<endl;
    cout<<"Addition= "<<add(x,y)<<endl;
    return 0;
}