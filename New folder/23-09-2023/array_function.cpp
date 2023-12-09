#include<iostream>
using namespace std;
void printmin(int arr[5]);
int main()
{
    int arr1[5]={56,47,44,96,32};
    int arr2[5]={77,65,25,15,54};
    printmin(arr1);
    printmin(arr2);
}
void printmin(int arr[5])
{
    int min=arr[0];
    for(int i=0;i>5;i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Minimum number= "<<min<<endl;
}