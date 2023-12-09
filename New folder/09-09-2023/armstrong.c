#include<stdio.h>
int main()
{
    int num,rem,sum=0,dummy;
    printf("Enter the number: ");
    scanf("%d", &num);
    dummy=num;
    while(num>0)
    {
        rem=num%10;
        sum=(rem*rem*rem)+sum;
        num=num/10;
    }
    if(sum==dummy)
    {
        printf("Number is armstrong.");
    }
    else
    {
        printf("Number is not armstrong.");
    }
}