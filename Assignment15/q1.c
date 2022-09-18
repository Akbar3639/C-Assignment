//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int [] ,int);
int main()
{
    int a[5];
    printf("Enter 5 numbers = \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Greatest number is %d ",greatest(a,5));

    return 0;
}
int greatest(int b[],int n)
{
    int max=b[0];
    for(int i=1;i<n;i++)
    {
        if(max<b[i])
        max=b[i];
    }
    return max;

}