#include<iostream>
using namespace std;
#include<string.h>
class Shape
{
	int len,bre,side;
	//string a[5]={"Square","Rectangle","Circle","Ellipse","Line"};
	public:
		shape()
		{
			cout<<"SHAPE";
		}
};

class Square:public Shape
{																													
	int side;
	public:
		Square()
		{
			cout<<"It is Square."<<endl;
			cout<<"Enter the Side of Square: ";
			cin>>side;
		}
		void display()
		{
			cout<<"Area of the Square= "<<side*side<<endl;
		}
		
};
class Rectangle:public Shape
{
	int len,bre;
	public:
		Rectangle()
		{
			cout<<endl<<"It is Rectangle."<<endl;
			cout<<"Enter the Length: ";
			cin>>len;
			cout<<"Enter the bredth: ";
			cin>>bre;
		}
		void display()
		{
			cout<<"Area of the Rectangle= "<<len*bre<<endl;
		}
};
class Circle: public Shape
{
	float pie=3.142f;
	int rad;
	public:
		Circle()
		{
			cout<<endl<<"It is a Circle."<<endl;
			cout<<"Enter the radius of circle: ";
			cin>>rad;
		}
		void display()
		{
			cout<<"Area of Circle= "<<pie*rad*rad<<endl;
		}
};
class Ellipse: public Shape
{
	float pie=3.142f;
	int a,b;
	public:
		Ellipse()
		{
			cout<<endl<<"It is an Ellipse."<<endl;
			cout<<"Enter the value of a: ";
			cin>>a;
			cout<<"Enter the value of b: ";
			cin>>b;
		}
		void display()
		{
			cout<<"Area of Ellipse= "<<pie*a*b<<endl;
		}
	
	
};
class Line:public Shape
{
	char line[200];
	public:
		Line()
		{
			cout<<endl<<"Enter the Line: ";
			cin>>line;
		}
		void display()
		{
		   cout<<endl<<"The Length of the line= "<<strlen(line)<<endl;
			
		}
	
};
int main()
{
	int num;
	cout<<"Enter 1 for Square."<<endl;
	cout<<"Enter 2 for Rectangle."<<endl;
	cout<<"Enter 3 for Circle."<<endl;
    cout<<"Enter 4 for Ellipse."<<endl;
    cout<<"Enter 5 for Line."<<endl<<endl;
	cout<<"Enter the number: ";
	cin>>num;
	switch(1)
	{
	case 1:
		cout<<"Square.";
		Square s1;
	    s1.display();
	    break;
	}
	switch(2)
	{
	case 2:
		cout<<"Rectangle.";
		Rectangle r1;
	    r1.display();
	    break;
    }
	switch(3)
	{
    case 3:
		cout<<"Circle.";
		Circle c1;
	    c1.display();
	    break;
    }
	switch(4)
	{
	case 4:
		cout<<"Ellipse.";
		Ellipse e1;
	    e1.display();
	    break;
	}
	switch(5)
	{
	case 5:
		cout<<"Line.";
		Line l1;
	    l1.display();
	    break;
	}    
}

