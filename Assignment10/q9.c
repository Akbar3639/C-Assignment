//Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
int check(int , int );
int main()
{
    int n,d;
    printf("Enter any number and any digit = ");
    scanf("%d%d",&n,&d);
    if(check(n,d)==1)
    printf("%d is contain in %d ",d,n);
    else
    printf("%d is not contain in %d ",d,n);

    return 0;
}

int check(int n,int d)
{
    int s;
    while(n!=0)
    {
       s=n%10;
       if(s==d)
       {
        return 1;
       }
       n=n/10;
    }
}