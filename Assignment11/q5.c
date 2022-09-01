//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void Prime(int);
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d",&n);
    Prime(n);

    return 0;
}
void Prime(int x)
{
    int j,i,count;
    for(j=2;j<=x;j++)
  { 
    count=0;
    for (i=2;i<=j/2;i++)
    {
        if(j%i==0)
        {
            count = 1;
            break;
        }
    }
    if(count==0&&j!=1)
    {
        printf("%d ",j);
        
    }
  }
}

