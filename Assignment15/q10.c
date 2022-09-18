//Write a function in C to count the frequency of each element of an array.
#include <stdio.h>
int main()
{
    int s1,count;
    printf("Enter array size = ");
    scanf("%d",&s1);
    int a[s1],fr[s1];
    printf("Enter %d number= \n",s1);
    for(int i=0;i<s1;i++)
    {
        fr[i]=-1;  //using hasing technique
        scanf("%d",&a[i]);
    }
    for(int i=0;i<s1;i++)
    {
        count=1;
        for(int j=i+1;j<s1;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0)
        {
            fr[i]=count;
        }
    }
    for(int i=0;i<s1;i++)
    {
        if(fr[i]!=0)
        {
            printf("%d comes %d times\n",a[i],fr[i]);
        }
    }

    return 0;
}