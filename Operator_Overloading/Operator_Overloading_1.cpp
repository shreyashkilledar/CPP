#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		Complex();
		Complex(int,int);
		void display();
		Complex operator+(Complex&);
		Complex operator-(Complex&);
		Complex operator-();
};
Complex::Complex()
{
		real=img=0;
};
Complex::Complex(int r,int i)
{
		real=r;
		img=i;
}
void Complex::display()
{
	int i;
	if(i>0)
	{
		cout<<"Complex numberb is "<<real<<"+"<<img<<"i"<<endl;
	}
	else
	{
		cout<<"Complex number is "<<real<<img<<"i"<<endl;
	}
};
Complex Complex::operator+(Complex &c)
{
	Complex temp;
	temp.real=real+c.real;
	temp.img=img+c.img;
	return temp;	
};
Complex Complex::operator-(Complex &c)
{
	Complex temp;
	temp.real=real-c.real;
	temp.img=img-c.img;
	return temp;
};
Complex Complex::operator-()
{
	Complex temp;
	temp.real=real;
	temp.img=img;
	return temp;
};
int main()
{
	Complex c1(2,3);
	Complex c2(4,6);
	Complex c3=c1-c2;
	c3.display();
	
	Complex c4(3,-6);
	Complex c5=-c4;
	c5.display(); 
}
