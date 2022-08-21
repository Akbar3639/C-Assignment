/*User Input date format – “HH:MM”
Output format – “HH hour and MM Minute */
#include <stdio.h>
int main()
{
    int H,M;
    printf("Enter time in the form of HH:MM\n");
    scanf("%d%d",&H,&M);
    printf("%d hour and %d Minute",H,M);

    return 0;
}