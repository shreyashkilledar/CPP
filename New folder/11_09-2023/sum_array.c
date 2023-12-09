#include<stdio.h>
int main()
{
    char a[]={1,2,3,4,5};
    int sum=0;
    char *p;
    for(p= &a[0];p<= &a[4];p++)
    {
        sum= *p+sum;
    }
    printf("Sum of the array is %d", sum);
    return 0;
}