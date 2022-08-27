//check whether two given numbers are co-prime numbers or not
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
    if (HCF==1)
    printf("%d and %d are co-prime number",a,b);
    else
    printf("%d and %d are not co-prime number",a,b);

    return 0;
}