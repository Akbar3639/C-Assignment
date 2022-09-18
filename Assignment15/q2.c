//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int [] ,int);
int main()
{
    int a[5];
    printf("Enter 5 numbers = \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Smallest number is %d ",smallest(a,5));

    return 0;
}
int smallest(int b[],int n)
{
    int min=b[0];
    for(int i=1;i<n;i++)
    {
        if(min>b[i])
        min=b[i];
    }
    return min;

}