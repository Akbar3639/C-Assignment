//Write a program to sort elements of an array of size 10. Take array values from the user.
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
    printf("%d ",a[i]);

    }
    return 0;
}