//Find prime
#include<stdio.h>
void main() 
{
    int num, count=0, i;
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++) 
    {    
        if (num%i==0)
        count++;
                        }
  
   if (count==2) 
   printf("Prime");
   
   else printf("Not prime");
}