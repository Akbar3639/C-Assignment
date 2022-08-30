/*Program to check whether a year is a leap year or not. Using switch statement*/
#include <stdio.h>
int main()
{
    int y;
    printf("Enter any year = ");
    scanf("%d",&y);
    switch(y%4)
    {
        case 0:
        printf("This year is leap year");
        break;
        default :
        printf("This year is not leap year");

    }
    return 0;
}