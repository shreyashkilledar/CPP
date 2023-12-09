#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex(int,int);
		void show();
};
complex::complex( int i,int r)
{
	real=r;
	img= i;
}
void complex::show()
{
	cout<<real<<"+"<<img<<"i"<<endl;
}
int main()
{
	complex c1(9,6);
	complex c2(c1);
	c1.show();
	c2.show();
}
