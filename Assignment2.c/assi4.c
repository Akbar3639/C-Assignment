//swap values of two int variables without using a third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf ("Enter the value of a and b =");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    printf("a=%d,b=%d",b,a);

    return 0;
}