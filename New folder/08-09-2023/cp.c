#include<stdio.h>
int main(){
   int base, exponent;
   long value = 1;
   printf("Enter a base value: ");
   scanf("%d", &base);
   printf("Enter an exponent value: ");
   scanf("%d", &exponent);
   while (exponent != 0){
      value *= base;
      --exponent;
   }
   printf("result = %ld", value);
   return 0;
}
