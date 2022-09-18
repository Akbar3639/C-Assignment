//Write a function in C to print all unique elements in an array.
#include <stdio.h>
void dupll(int [],int);
int main()
{
    int a[10];
    printf("Enter 10 numbers = \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("unique elements is ---\n");
    dupll(a,10);

    return 0;
}
void dupll(int b[],int n)
{
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(b[i]==b[j])
                {
                        count++;
                    
                }
            }
        }
        if(count==0)
        printf("%d ",b[i]);
    }
}