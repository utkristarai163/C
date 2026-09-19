#include<stdio.h>
void main()
{
int num;

printf("input num:");
scanf("%d", &num) ;

if (num%4==0) 
{
 if (num%5==0)
 
 {if (num%10==0) 
   {printf("Valid");}
  else
  printf("Invalid");
  }
  
  
 else printf("Invalid");
}
else printf("Invalid");
}
