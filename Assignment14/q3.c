/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],sumofeven=0,sumofodd=0;
    printf("Enter ten values for sum = ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            sumofeven=sumofeven+a[i];
        }
        else
        {
            sumofodd=sumofodd+a[i];
        }
    }
    printf("sum of all even numbers is %d \n",sumofeven);
    printf("sum of all odd numbers is %d",sumofodd);

    return 0;
}