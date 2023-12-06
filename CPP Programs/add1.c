#include<iostream>
using namespace std;
void add();
int main()
{
	int a;
	int b;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	add();
	return 0;

}
void add()
{
	cout<<"sum is"<<a+b;
}


