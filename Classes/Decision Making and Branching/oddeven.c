#include <stdio.h>
#include <math.h>

void main() 
{
int a, b, sum;

while(1)
{
printf("Insert any two odd numbers:");
scanf("%d %d", &a, &b);
 
  if (a%2==0) 
  {
  printf("Invalid number\n");
  }
  if (b%2==0) 
  {
  printf("Invalid number\n");
  }
  else
  printf("\nThe required sum is %d\n\n", sum=a+b);
}
}