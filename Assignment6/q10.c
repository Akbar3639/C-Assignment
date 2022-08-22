//Write a program to reverse a given number

#include <stdio.h>
int main()
{
 int n,remainder,reverse=0;
    printf("Enter any number = ");
    scanf ("%d",&n);
        while(n%10!=0)
        {
            remainder=n%10;
            reverse=reverse*10+remainder;
            n=n/10;
        }
    printf("revese number is %d",reverse);
    return 0;
}