/*User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 11 , Year – 2022)*/
#include <stdio.h>
int main()
{
    int d,m,y;
    printf("Enter date in the form of DD/MM/YYYY \n");
    scanf("%d%d%d",&d,&m,&y);
    printf("(Day - %d , Month - %d , Year - %d)",d,m,y);

    return 0;
}