//Write a function in C to count a total number of duplicate elements in an array.
#include <stdio.h>
void dupll(int [],int);
int main()
{
    int a[10];
    printf("Enter 10 numbers (any number not more than 2 times)= \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("duplicate elements is ---\n");
    dupll(a,10);

    return 0;
}
void dupll(int b[],int n)
{
    int count,k=0;
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
                        break;
                }
            }
        }
        if(count!=0)
        k++;
    }
        printf("%d ",k/2);

}