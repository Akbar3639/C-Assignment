//Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void binary(int);
int main()
{
   int x;
   printf("Enter any decimal number = ");
   scanf("%d",&x);
    binary(x);
    return 0;
}
void binary(int x)
{
    if (x>0)
    {
        binary(x/2);
        printf("%d ",x%2);
    }
     
}