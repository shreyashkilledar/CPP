#include "Rectangle.h"

Rectangle::Rectangle()
{
	int len,bre;
	public:
	cout<<"Enter the length: "<<endl;
	cin>>len;
	cout<<"Enter the breadth: "<<endl;
	cin>>bre;
}
void Rectangle::display()
{
	cout<<"Area of the rectangle: "<<len*bre<<endl;
}
