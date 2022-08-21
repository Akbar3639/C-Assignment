//Now display whether the candidate passed the examination or failed.
#include <stdio.h>
int main()
{
 int p,c,m,e,h;
    printf("Enter your marks of 5 subjects =\n");
    scanf("%d%d%d%d%d",&p,&c,&m,&e,&h);
    if (p>=33&&c>=33&&m>=33&&e>=33&&h>=33)
    {
        printf("congrats you are passed");
    }
    else
    {
        printf("you are failed");
    }
    
    return 0;
}