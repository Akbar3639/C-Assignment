//print the first N natural numbers in reverse order
#include <stdio.h>
int main()
{
 int n,i;
    printf("Enter the last number (n) = ");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}