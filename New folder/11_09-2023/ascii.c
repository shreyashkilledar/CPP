#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);
    if(a>=65 && a<=90)
    {
        printf("It is Uppercase.");
    }
    else if (a>=97 && a<=122)
    {
        printf("It is Lowercase.");
    }
    else if(a>=48 && a<=57)
    {
        printf("It is a digit.");
    }
    else
    {
        printf("It is symbol.");
    }
    return 0;

}