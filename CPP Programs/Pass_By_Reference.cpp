#include <iostream>
using namespace std;
void swap(int *, int *);
int main()
{
    int a = 10, b = 20;
    cout << "Before swapping value of a : " << a << " and b : " << b << endl;
    swap(&a, &b);
    cout << "After swapping value of a : " << a << " and b : " << b << endl;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
