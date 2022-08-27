//print all Armstrong numbers under 1000
#include <stdio.h>
#include <math.h>
int main()
{
    int s,r,t,i;
    for(int j=1;j<10;j++)
    {
        printf("%d\n",j);//all single digit number are armstrong number
    }                     
    for ( i=10;i<=1000;i++)
{   
    s=0;
    t=i;    
    while(t!=0)
    {
        r=t%10;
        s=s+pow(r,3); //pow(a, b) = a^b
        t=t/10;
    }
      if(s==i)
      {
        printf("%d\n",i);
      }
      
}
    return 0;
}