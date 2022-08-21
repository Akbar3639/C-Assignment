//print squares of the first N natural numbers
#include <stdio.h>
int main()
{
    int n;
        printf("Enter the last natural number = ");
        scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i*i);
    }

    return 0;
}