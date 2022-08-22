//count digits in a given number
#include <stdio.h>
int main()
{
    int n,count=1;                     
    printf("Enter  any number = ");
    scanf("%d",&n);
        while(n/10!=0)
        {
            n=n/10;
            count++;
        }
    printf("no of digits is %d",count);
    return 0;
}