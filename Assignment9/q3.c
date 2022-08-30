/*Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the day number of a week = ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("start each day with a greatful heart");
        break;
    case 2:
        printf("Rain or Shine is going to be a beautiful day");
        break;
    case 3:
        printf("Stay positive better days are on their way");
        break;
    case 4:
        printf("Thrusday is how friday says hang on you are almost there");
        break;
    case 5:
        printf("Happiness is a day called friday");
        break;
    case 6:
        printf("Staurday turns your magic own");
        break;
    case 7:
        printf("The day i plan a lot but actually do nothing");
        break;
    default:
        printf("please enter the day of week between (1-7)");
        break;
    }
}