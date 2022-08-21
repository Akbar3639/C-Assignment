//print a given number without its last digit
#include <stdio.h>
int main()
{
int n,l;
    printf("Enter any digit = ");
    scanf("%d",&n);
    
    l=n/10;
    
    printf("%d",l);

    return 0;
}