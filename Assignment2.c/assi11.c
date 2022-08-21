/*input a number from the user and also input a digit. Append a digit in the number and print the resulting number*/
#include <stdio.h>
int main()
{
int n,r,d;
    printf("Enter number  and any digit =");
    scanf("%d%d",&n,&d);
    r=n*10+d;
    printf("Resulting number is %d",r);
    return 0;
}