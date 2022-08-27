//print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
int a,b,manu,i,j;
    printf("Enter any two numbers =");
    scanf("%d%d",&a,&b);
    for(i=++a;i<b;i++)
    {
        manu=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                manu=1;
                break;
            }
        }
        if(manu==0&&i!=1)
        printf("%d\n",i);
    }
    return 0;
}