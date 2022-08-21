//take a three-digit number from the user and rotate its digits by one position towards the right.
#include <stdio.h>
int main()
{
 int a,b,c,d;
    printf("Enter any three digit = ");
    scanf ("%d%d%d",&a,&b,&c);
    printf("%d%d%d\n",a,b,c);
 d=a;
 a=c;
 c=b;
 b=d;
    printf("%d%d%d",a,b,c);
    return 0;
}