//swap values of two int variables
#include <stdio.h>
int main()
{
int a,b,c;
    printf("Enter the value of a and b =");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
    return 0;
}