#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("After swap value of a=%d and b=%d.", a,b );
    return 0;
}