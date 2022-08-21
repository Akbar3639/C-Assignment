//print the first N natural numbers
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value last natural number (n) =");
    scanf("%d",&n);
while(i<=n)
{
    printf("%d\n",i);
    i++;
}
    return 0;
}