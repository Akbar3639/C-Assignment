//Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include<stdio.h>
int duplicate(int b[],int);
int main()
{
    int a[10];
    printf("Enter 10 values \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Adjecent duplicate number is %d",duplicate(a,10));
    
    return 0;
}
int duplicate(int b[],int n)
{
    for(int j=0;j<n;j++)
    {
        if(b[j]==b[j+1])
        return b[j];
    }
}