/*Write a program to find the second smallest number in an array.Take array values
from the user*/
#include<stdio.h>
int main()
{
    int a[10],c;//c take for swap
    printf("Enter ten numbers = ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);   
    
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
           {
                c=a[i];
                a[i]=a[j];
                a[j]=c;      
           }
        }
    }
    printf("second smallest number is %d",a[1]);
    return 0;
}