#include <stdio.h>
int main()
{
int i,j,count;
for(i=0;i<=4;i++)
{
    count=64;
    for(j=0;j<=3-i;j++)
    printf(" ");
    for(j=0;j<=i;j++)
    printf("%c",++count);
    for(j=0;j<i;j++)
    printf("%c",--count);

printf("\n");
}
    return 0;
}