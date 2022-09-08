/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user*/
#include<stdio.h>
int main()
{
    int a[10],greatest;
    printf("Enter ten numbers = ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);   
    
    }
    greatest=a[0];
    for(int i=1;i<10;i++)
    {
            if(greatest<a[i])
            greatest=a[i];
                
    }
    printf("gretaest number = %d",greatest);

    return 0;
}