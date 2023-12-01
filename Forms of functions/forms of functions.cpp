//function 

#include<iostream>
using namespace std;
class A
{
	char a[9];
	int rollnumber;
    int marks;
    
	public:
	A()
	{
		cout<<"Enter the name ";
		cin>>a;
		
		cout<<"Enter the rollnumber ";
		cin>>rollnumber;
		
		cout<<"Enter the marks  ";
		cin>>marks;
		
	}
	void display()
	{
		cout<<a<<" "<<rollnumber <<" "<<marks;
	}
	
};
int main()
{
	A A1;
	A1.display();
}

