#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	int* ptr;
	ptr= (int*) malloc(n*sizeof(int));
	printf("Accept elements from array: ");
	for(i=0;i<n;i++)
	scanf("%d", (ptr+i));
	for(i=0;i<n;i++)
	sum=sum+ *(ptr+i);
	printf("Summation= ",sum);
	free(ptr);
}
