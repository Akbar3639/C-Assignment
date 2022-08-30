/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include <stdio.h>
int main()
{
    printf("---------------------------\n");
    printf("        Calculator       \n\n");
    printf(" + . Addition\n"               );
    printf(" - . Subtraction\n"     );
    printf(" * . Multiplication\n"  );
    printf(" \\ . Division\n"        );
    printf(" e . Exit  \n          ");
    printf("\n---------------------------\n");

    int x,y,result=0;
    char oprator;
    printf("Choose any operator: ");
    scanf("%c",&oprator);
    printf("Enter two values= ");
    scanf("%d%d",&x,&y);
    switch (oprator)
    {
    case '+':
        printf("Addition = %d",x+y);
        break;
    case '-':
        printf("Subtraction = %d",x-y);
        break;
    case '*':
        printf("Multiplication = %d",x*y);
        break;
    case '/':
        printf("Division = %d",x/y);
        break;
    default:
        printf("Exit");
        break;
    }

    return 0;
}