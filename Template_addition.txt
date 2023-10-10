#include<iostream>
using namespace std;
template<class T>
T add(T&a,T&b)
{
	T result=a+b;
	return result;
}
int main()
{
	int i=3,j=5;
	float m=5.4,n=3.6;
	cout<<"Addition of i & j= "<<add(i,j)<<endl;
	cout<<"Addition of m & n= "<<add(m,n);
}
