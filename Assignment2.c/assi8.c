/*check whether the given number is even or odd using a bitwise operator.*/
#include <stdio.h>
int main()
{
int n,eo;
    printf("Enter any number = ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is even",n);
    }
    else 
    {
        printf("%d is odd",n);
    }
    return 0;
}