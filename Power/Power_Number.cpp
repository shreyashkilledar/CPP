#include <iostream>
using namespace std;

int main()
{
	int base,exponent,result=1;
	cout<<"enter the base =";
	cin>>base;
	cout<<"enter the expo =";
	cin>>exponent;
	while(exponent!=0)
	{
		result *= base;
		--exponent;
	}
	cout<<"Result= "<<result;
	return 0;
	
}
