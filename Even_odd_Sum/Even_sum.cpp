#include<iostream>
using namespace std;
int main()
{
  int a,sum=0,i;
  cout<<"enter the number=";
  cin>>a;
  for(i=0;i<=a;i++)
  {
  	if(i%2==0)
  	{
  	sum=i+sum;
  	
	  
	}
  }
  cout<<"sum is "<<sum;
}
