//print all Prime numbers under 100
#include <stdio.h>
int main()
{ int i,j,manu;
 for( i=1;i<=100;i++)
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