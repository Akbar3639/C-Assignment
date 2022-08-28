#include <stdio.h>
int main()
{
int i,j,count;
for(i=0;i<=6;i++)
{
    count=64;
    for(j=0;j<=6-i;j++)
    printf("%c",++count);
    for(j=0;j<2*i-1;j++)
    printf(" ");
    if(i==0)
    {
     count--;
    }
    for(j=0;j<=6-i;j++) 
    {
    printf("%c",count--);
    }
printf("\n");
}
    return 0;
}