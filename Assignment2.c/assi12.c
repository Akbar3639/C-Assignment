//Write a program to take the amount in INR and convert it into USD.
//Assume price of 1 USD is INR 76.23
#include <stdio.h>
int main()
{
 float rupee,USD;
    printf("Enter your rupee =");
    scanf("%f",&rupee);
USD=rupee/76.23;
    printf("%f doller",USD);
    return 0;
}