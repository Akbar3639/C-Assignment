//Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size = \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers = ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse order is\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}