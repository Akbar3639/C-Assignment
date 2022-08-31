//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);
int main()
{
    int r;
    printf("Enter the area of radius = ");
    scanf("%d",&r);
    printf("Area of circle is %f",area(r));

    return 0;
}

float area(int r)
{
    return 3.14*r*r;
}