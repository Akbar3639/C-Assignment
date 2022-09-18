//Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
void sort(int [],int);
int main()
{
    int a[5];
    printf("Enter 5 values =\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,5);

    return 0;
}
void sort(int b[],int n)
{
    int c;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                c=b[i];
                b[i]=b[j];
                b[j]=c;
            }
        }
        printf("%d ",b[i]);
    }

}