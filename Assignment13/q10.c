//Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int power(int , int);
int main()
{
    int x,y;
    printf("Enter your base number = ");
    scanf("%d",&x);
    printf("Enter your power = ");
    scanf("%d",&y);
    printf("%d^%d = %d",x,y,power(x,y));

    return 0;
}
int power(int base,int pow)
{
    if (pow==0)
    return 1;
    return base*power (base,pow-1);



}