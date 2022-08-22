//check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
 int n,manu=0;
    printf("Enter any number = ");
    scanf("%d",&n);
        for (int i=2; i<n; i++)
        {
            if (n%i==0)
            {
             manu=1;
             break;
            }
        }
    if (manu==1)
    {
        printf("%d is not a prime number ",n);
    }
    else
    {
        printf("%d is a prime number ",n);
    }

    return 0;
}