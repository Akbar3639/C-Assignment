//check whether a given number is an Armstrong number or not
#include <stdio.h>
#include <math.h>
int main()
{
    int x,count=1,n,s=0,r,t,c;                     
    printf("Enter  any number = ");
    scanf("%d",&x);
    t=x;
    c=x;
        while(x/10!=0)
        {
            x=x/10;
           count++;
        }
    n=count;
    while(t!=0)
    {
        r=t%10;
        s=s+pow(r,n); //pow(a, b) = a^b
        t=t/10;
    }   
     if(s==c)
      {
        printf("%d is Armstrong number",c);
      }
      else
      {
        printf("%d is not Armstrong number",c);
      }
      
    return 0;
}