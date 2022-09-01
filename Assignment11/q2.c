//Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int HCF(int,int);
int main()
{
    int x,y;
    printf("Enter two number = ");
    scanf("%d%d",&x,&y);
    printf("HCF = %d",HCF(x,y));

    return 0;
}
int HCF(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            return a*b/i;
            break;
        }
    }

}