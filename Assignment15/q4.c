//Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. 
//(For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left,
// then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
int main()
{
    int s1,n,temp;
    int direction;
    printf("Enter array size = ");
    scanf("%d",&s1);
    int a[s1];
    printf("Enter %d number = \n",s1);
    for(int i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Now Enter from which position to which direction(11 for left and 12 for right) = ");
    scanf("%d%d",&n,&direction);
    if(direction==11)
       {
            for(int i=0;i<n;i++)
            {
                temp=a[0];
                for(int j=0;j<s1;j++)
                {
                    a[j]=a[j+1];
                }
                a[s1-1]=temp;
            }
            for(int i=0;i<s1;i++)
            {
                printf("%d ",a[i]);
            }
       }
       if(direction==12)
       {
            for(int i=0;i<n;i++)
            {
                temp=a[s1-1];
                for(int j=s1-1;j>=0;j--)
                {
                    a[j]=a[j-1];
                }
                a[0]=temp;
            }
            for(int i=0;i<s1;i++)
            {
                printf("%d ",a[i]);
            }
       }
    return 0;
}