/*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include <stdio.h>
int main()
{
    float unit;
    printf("Enter electricity unit charge = ");
    scanf("%f",&unit);
    switch(unit<=50.0)
    {
        case 1:
        printf("Total electricity bill = %.2f rupees",unit*0.50+unit*0.50*0.20);
        break;
        case 0:
        {
            switch(unit <=150.0)
            {
                case 1:
                printf("Total electricity bill = %.2f rupees",25+(unit-50)*0.75+(25+(unit-50)*0.75)*0.20);
                break;
                case 0:
                {
                    switch(unit <=250.0)
                    {
                        case 1:
                        printf("Total electricity bill = %.2f rupees",100+(unit-150)*1.20+(100+(unit-150)*1.20)*0.20);
                        break;
                        case 0:
                        printf("Total electricity bill = %.2f rupees",220+(unit-250)*1.50+(220+(unit-250)*1.50)*0.20);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}