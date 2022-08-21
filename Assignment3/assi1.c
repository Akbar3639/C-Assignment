//check whether a given number is positive or non-positive
#include <stdio.h>
int main()
{
  int n;
  printf("Enter any number = ");
  scanf("%d",&n);
  if (n>0)
  {
    printf("%d is positive number",n);
  }
  else
  {
    printf("%d is non-positive number ",n);
  }
  
  
    return 0;
}