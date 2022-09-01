//Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int NPrime(int); 
int main()
{
    int n;
    printf("Enter any positive number  = ");
    scanf("%d",&n);

    printf("%d is a  next prime number ",NPrime(n));

    return 0;
}
int NPrime(int x)
{
    int j,i,count;
    for(j=++x;;j++)
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
        return j;
        break;
    }
  }
}