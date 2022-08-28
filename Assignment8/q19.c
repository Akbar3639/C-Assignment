
#include <stdio.h>
int main()
{
int i,j;
            printf("\n\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<=18;j++)
        {
            if(((j>=2-i)&&(j<=6+i))||((j>=12-i)&&(j<=16+i)))
            printf("*");
            else
            printf(" ");
        }
     printf("\n");
    }
     for(i=0;i<=9;i++)
    {
        for(j=0;j<=18;j++)
        {
            if(i==0&&j==6)
            {
                printf("MySirG");
            }
            if(i==0&&j>5&&j<12)
            continue;
            if(j>=i&&j<=18-i)
            printf("*");
            else
            printf(" ");
        }
       
     printf("\n");
    }
            printf("\n\n");


    return 0;
}