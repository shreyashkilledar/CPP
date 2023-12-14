#include<iostream>
using namespace std;
class Shape
{
	int len,bre,area;
		public:
		Shape();
		void display();
};
class Rectangle : public Shape
{
	public:
		Rectangle();
		void display();
};




