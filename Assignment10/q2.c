//Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
float SI(int,int,int);
int main()
{
    int p,r,t;
    printf("Enter principal value , rate and time respectivily = ");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple interest is %f ",SI(p,r,t));
    return 0;
}
float SI(int x,int y,int z)
{
    return x*y*z/100;
}