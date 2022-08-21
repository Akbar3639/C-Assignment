//check whether a given number is an even number or an odd number without using % operator
#include <stdio.h>
int main()
{
int n,u,s;
    printf("Enter any number = ");
    scanf("%d",&n);
    s=n*5;
    u=s-(s/10*10);
    if (u==0)
    {
        printf("%d is even number",n);
    }
    else
    {
        printf("%d is odd number",n);
    }
    
    return 0;
}