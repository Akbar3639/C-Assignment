//find next Prime number of a given number
#include<stdio.h>
int main()
{
 int n,i,j,manu;
    printf("Enter any number = ");
    scanf("%d",&n);
    for(i=++n;;i++)
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
       { 
            printf("%d\n",i);
             break;
       }
    }
    return 0;
}