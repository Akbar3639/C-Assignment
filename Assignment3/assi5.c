//check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
 int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    if (n/1000==0&&n/100!=0)
    {
        printf("%d is  a three digit number",n);
    }
    else
    {
        printf("%d is not a three digit number",n);
    }
    
    return 0;
}