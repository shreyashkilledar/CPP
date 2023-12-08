#include<iostream>
using namespace std;


class Complex{
	int real,img;
	
	public : void display();
	         Complex();
	         void setReal();
	         void setImg();
	
};
Complex::Complex(){
	cout<<"Enter real and img"<<endl;
	cin>>real>>img;
}
void Complex::display(){
	cout<<"The value of real and img is : "<<real<<"+"<<img<<"i"<<endl;
}
void Complex::setReal(){
	cout<<"Enter real value"<<endl;
	cin>>real;
}
void Complex::setImg(){
	cout<<"Enter img value"<<endl;
	cin>>img;
}
int main(){
	Complex *obj=new Complex();
	obj->display();
	obj->setReal();
	obj->setImg();
	obj->display();
	return 0;
}
