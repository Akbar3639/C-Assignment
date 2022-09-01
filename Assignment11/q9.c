//Write a program in C to find the square of any number using the function
# include <stdio.h>
int square (int);
int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    printf("square is %d",square(n));
    
    return 0;
}
int square(int x)
{
    return x*x;
}