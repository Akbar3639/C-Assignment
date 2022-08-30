/*Write a program which takes the month number as an input and display
number of days in that month*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the any month number= ");
    scanf("%d",&n);
    switch (n)
    {
    
    case 1:
        printf("31 days in january");
        break;
    case 2:
        printf("28 or 29 days in febuary");
        break;
    case 3:
        printf("31 days in March");
        break;
    case 4:
        printf("30 days in April");
        break;
    case 5:
        printf("31 days in may");
        break;
    case 6:
        printf("30 days in june");
        break;
    case 7:
        printf("31 days in july");
        break;
    case 8:
        printf("31 days in Auguest");
        break;
    case 9:
        printf("30 days in September");
        break;
    case 10:
        printf("31 days in October");
        break;
    case 11:
        printf("30 days in November");
        break;
    case 12:
        printf("31 days in December");
        break;
    default:
        printf("please enter valid month number (1 to 12)");
        break;
    }
    return 0;
}