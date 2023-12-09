#include<iostream>
using namespace std;
int main()
{
	int temp[2][7];
	int i,j;
	for(i=0;i<=1;i++)
	{
		for(j=0; j<=6; j++)
		{
				cout<<"city="<<i+1<<" "<<"day="<<" "<<j+1<<endl;
				cin>>temp[i][j];
		}	
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=6;j++)
		{
			cout<<"city="<<i+1<<" "<<"day="<<j+1<<" "<<temp[i][j]<<endl;
		}
		cout<<"\n---------------\n";
	}
}
	
