//make the last digit of a number stored in a variable as zero.
#include <stdio.h>
int main()
{
int n;
    printf("Enter the any number =");
    scanf("%d",&n);
    printf("%d",n-(n%10));
    return 0;
}