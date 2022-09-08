//Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void octal(int);
int main()
{
   int x;
   printf("Enter any decimal number = ");
   scanf("%d",&x);
    octal(x);
    return 0;
}
void octal(int x)
{
    if (x>0)
    {
        octal(x/8);
        printf("%d ",x%8);
    }
     
}