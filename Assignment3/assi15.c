//check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("%d is positive number ",n);
    }
    else if (n<0)
    {
        printf("%d is negative number ",n);
    }
    else
    {
        printf("%d is a zero number ",n);
    }
    
    return 0;
}