#include<iostream>
using namespace std;
template<class T> 
void swapping(T&a,T&b)


{
	T temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int i=10,j=30;
cout<<"before swapping a="<<i<<"b="<<j<<endl;

swapping(i,j);
cout<<"after swapping a="<<i<<"b="<<j<<endl;
}
