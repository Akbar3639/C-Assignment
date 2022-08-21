//print a table of 5.
#include <stdio.h>
int main()
{
    printf("*** Table of 5 ***\n");
    for(int i=1;i<=10;i++)
    {
        printf("5*%d = %d\n",i,i*5);
    }
    return 0;
}