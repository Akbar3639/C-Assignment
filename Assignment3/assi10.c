//which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage
#include <stdio.h>
int main()
{
float cp,sp,pr,lo;
    printf("Enter the cost price and selling price of product =  ");
    scanf("%f%f",&cp,&sp);
    if (sp>cp)
    {
        pr=(sp-cp)/cp*100;
        printf("%.2f percent profit ",pr);
    }
    else
    {
        lo=(cp-sp)/cp*100;
        printf("%.2f percent loss",lo);
    }
    
    return 0;
}