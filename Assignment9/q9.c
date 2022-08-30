/*Program to Convert even number into its upper nearest odd number
Switch Statement*/
#include<stdio.h>
int main()
{
    int n;

    printf("Enter any even number = ");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:
        printf("Upper nearest odd number is %d",n+1);
        break;
        case 0:
        printf("Please enter any even number");
        break;


    }
    return 0;
}