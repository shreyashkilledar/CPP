#include<iostream>
using namespace std;
int main()
{
	char*name[5]={"Rohan","Ram","Rahul","Rohit","Rachna"};
	for(int i=0;i<=5;i++)
	{
	
		cout<<name[i]<<endl;
		cout<<(name +i)<<endl;
		cout<<*(name+i)<<endl;
		int x= strlen();
		for(int j=0;j<=5;j++)
		cout<<*(*(name+i)+j);
		cout<<endl;
	}
	return 0;
	
}
