//Write a function in C to merge two arrays of the same size sorted in descending order.
#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter first array size = ");
    scanf("%d",&s1);
    int a[s1];
    printf("Enter %d number =\n",s1);
    for(int i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter second array size = ");
    scanf("%d",&s2);
    int b[s2];
    printf("Enter %d number =\n",s2);
    for(int i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }
    //merge two arrays
    s3=s1+s2;
    int c[s3],i,j;
    for( i=0;i<s1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<s2;j++)
    {
        c[i]=b[j];
        i++;
    }
    //sorting
    int temp;
    for( i=0;i<s3;i++)
    {
        for(j=i+1;j<s3;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
        printf("%d ",c[i]);
    }

    return 0;
}