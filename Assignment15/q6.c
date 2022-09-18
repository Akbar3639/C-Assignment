//Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void reverse(int [],int );
int main()
{
    int a[10];
    printf("Enter 10 numbers= \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse number -----\n");
    reverse(a,10);

    return 0;
}
void reverse(int b[],int n)
{
    for(int j=n-1;j>=0;j--)
    {
        printf("%d ",b[j]);
    }
}