//calculate HCF of two numbers
#include <stdio.h>
int main()
{
 int a,b,i,LCM,HCF;
    printf("Enter two number = ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if (i%a==0&&i%b==0)
        {
            LCM=i;
            break;
        }
        
    }
    HCF=(a*b)/LCM;
    printf("HCF=%d",HCF);

    return 0;
}