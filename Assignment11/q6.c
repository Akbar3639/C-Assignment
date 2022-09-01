//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void Prime(int,int);
int main()
{
    int a,b;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    Prime(a,b);

    return 0;
}
void Prime(int x,int y)
{
    int j,i,count;
    for(j=++x;j<y;j++)
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

