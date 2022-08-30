
#include <stdio.h>
int main()
{
    printf("-------------------------\n\n");
    printf("Enter 1 for check isosceles triangle or not\n");
    printf("Enter 2 for check right angle triangle or not\n");
    printf("Enter 3 for check equilateral triangle or not\n");
    printf("Enter any key for exit \n");
    printf("\n--------------------------\n");
    int n;
    printf("Choose what you want\n");
    scanf("%d",&n);
    int x,y,z;
    char ch;
    printf("Enter three value of lengths = ");
    scanf("%d%d%d",&x,&y,&z);
    switch(n)
    {
        case 1:
        if(x==y||y==z||z==x)
        {
            printf("Isosceles triangle");
        }
        else
        printf("Not isosceles triangle");
        break;
        case 2:
        if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==x*x+y*y)
        {
            printf("Right angle triangle");
        }
        else
            printf("not right angle triangle");
            break;
        case 3:
        if(x==y&&y==z)
        printf("Equilateral triangle");
        else
        printf("not equilateral triangle");
            break;
        default :
        printf("Exit");

    }
    return 0;
}