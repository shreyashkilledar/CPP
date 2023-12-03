#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int p,n,t;
	float r,ci;
	cout<<"enter the principle=";
	cin>>p;
	cout<<"enter the no of years=";
	cin>>n;
	cout<<"enter the rate of interest=";
	cin>>r;
	cout<<"enter the number of times interest applied=";
	cin>>t;
	ci = p * pow((1 + ( r / (t * 100) )), ( n * t ));
	cout<<"compound interest is "<<ci ;
}


