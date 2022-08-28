#include <stdio.h>
int main()
{
int i,j,count;
for(i=0;i<=3;i++)
{
    count=64;
    for(j=0;j<=i-1;j++)
    printf(" ");
    for(j=0;j<=3-i;j++)
    printf("%c",++count);
    for(j=0;j<=2-i;j++)
    printf("%c",--count);

printf("\n");
}
    return 0;
}