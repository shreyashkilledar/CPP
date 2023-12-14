#include "Square.h"

Square::Square()
{
	int side;
	public:
		cout<<"Enter the side: "<<endl;
		cin>>side;
}
void Square::display()
{
	cout<<"Area of square: "<<side*side<<endl;
}
