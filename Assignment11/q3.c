//Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
int Prime(int); 
int main()
{
    int n;
    printf("Enter any positive number= ");
    scanf("%d",&n);
    if(Prime(n)==1)
    printf("%d is not a prime number ",n);
    else
    printf("%d is a prime number ",n);

    return 0;
}
int Prime(int x)
{
    int i;
    if(x!=1 && x!=2 && x!=3)
    {
    for (i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return 1;
            break;
        }
    }

    }

}