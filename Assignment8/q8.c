#include <stdio.h>
int main()
{
int i,j,count;
for(i=0;i<=3;i++)
{
    count=0;
    for(j=0;j<=2-i;j++)
    printf(" ");
    for(j=0;j<=i;j++)
    printf("%d",++count);
    for(j=0;j<i;j++)
    printf("%d",--count);

printf("\n");
}
    return 0;
}