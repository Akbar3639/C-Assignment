//print unit digit of a given number
#include <stdio.h>

int main()
{
    int n,u;
    printf("Enter any number = ");
    scanf("%d",&n);
    u=n%10;
    printf("%d",u);
    return 0;
}