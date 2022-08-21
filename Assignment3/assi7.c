//check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include <stdio.h>
int main()
{
 int a,b,c,D;
    printf("Enter the value of a,b and c = ");
    scanf("%d%d%d",&a,&b,&c);
    printf("your quadratic equation is %dx^2+%dx+%d=0\n",a,b,c);
  
  D=b*b-(4*a*c);
    if (D==0)
    {
        printf("Roots are real and equal");
    }
    else if (D>0)
    {
        printf("Roots are real and distinct");
    }
    else
    {
        printf("Roots are imaginary");
    }
    
  
    return 0;
}