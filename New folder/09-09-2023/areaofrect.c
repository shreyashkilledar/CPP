#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Enter the Length: ");
    scanf("%d", &l);
    printf("Enter the Breadth: ");
    scanf("%d", &b);
    area=l*b;
    printf("Area of Rectangle is %d.", area);
    return 0;
}