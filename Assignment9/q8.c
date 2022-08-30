/*Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1:
        printf("negative number is %d",-n);
            break;
        case 0:
        printf("positive number is %d",-n);
        break;
    }
    return 0;
}