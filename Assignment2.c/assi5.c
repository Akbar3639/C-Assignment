//input a three-digit number and display the sum of the digits
#include <stdio.h>
int main()
{
int a,b,c,s=0;
    printf("Enter the three number = ");
    scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
    printf("sum = %d",s);
    return 0;
}