//Write a program to print greater between two numbers
//Print one number of both are the same.
#include <stdio.h>
int main()
{
 int a,b;
    printf("Enter the two value =");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is a greater number",a);
    }
    else if (b>a)
    {
        printf("%d is a greater number",b);
    }
    else
    {
        printf("%d is a same number",a); 
    }
    
    return 0;
}