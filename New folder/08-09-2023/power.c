#include<stdio.h>
int main()
{
    int base,expo;
    long result= 1; 
    printf("Enter the Base: ");
    scanf("%d", &base);
    printf("Enter the Exponent: ");
    scanf("%d", &expo);
    while(expo!=0)
    {
       result *= base;
       --expo;
    }
    printf("The Result is %.0ld",result);
    return 0;
}