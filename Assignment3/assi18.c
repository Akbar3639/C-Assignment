//takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
int n;
    printf("Enter the month number = ");
    scanf("%d",&n);

    if (n==2)
    {
        printf("This month have 28 or 29 days");
    }
    else if (n==4||n==6||n==9||n==11)
    {
        printf("This month have 30 days");
    }
    else
    {
        printf("This month have 31 days");
    }
    
    return 0;
}