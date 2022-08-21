//print the first N even natural numbers
#include<stdio.h>
int main()
{ 
    int n;
        printf("Enter the N number for even natural number = ");
        scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("%d\n",2*i);
    }
    
    return 0;
}