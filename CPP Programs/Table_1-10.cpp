#include <iostream>
using namespace std;
int main() 
{
	for (int table = 1; table <= 10; table++) 
	{
		for (int i = 1; i <= 10; i++) 
		{
			cout << table << " * " << (i) << " = " << (table * (i))<< "\n";
		}
		cout << "------------------------------------\n";
	}
}
