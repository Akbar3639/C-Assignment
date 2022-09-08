//Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int HCF(int ,int);
int main()
{
    int x,y;
    printf("Enter any two number for HCF = ");
    scanf("%d%d",&x,&y);
    printf("HCF = %d",HCF(x,y));
    return 0;
}
int HCF(int x, int y)
{
	if (y == 0)
		return x;
	return HCF(y, x % y);
}