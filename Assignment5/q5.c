//print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{ 
    int n;
        printf("Enter the N number for odd natural numbers in reverse order = ");
        scanf("%d",&n);
    for (int i=n;i>=1;i--)
    {
        printf("%d\n",2*i-1);
    }
    
    return 0;
}