/*C program to find all roots of a quadratic equation using switch case*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,D;
    printf("enter the value of cofficient a and b & constant c :");
    scanf("%d%d%d",&a,&b,&c);
    printf("quadratic equation is %dx^x+%dx+%d=0\n",a,b,c);
    D=b*b-4*a*c;
    switch(D<0)
    {
        case 0:
        {
            switch(D>0)
            {
                case 0:
                printf(" roots are equal and same is %d",(-b)/2*a);
                break;
                case 1:
                {
                    printf("%d and %d are roots of quadratic equation",(-b+sqrt(D))/2*a,(-b-sqrt(D))/2*a);
                }
            }
        } 
        break;
        case 1:
        printf("imaginary roots");
        break;
    }
    return 0;
}