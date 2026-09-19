//Program to find the smallest number 
#include <stdio.h>
void main() 
{
 int a, b, c;
 
     printf("Insert any three numbers:");
     scanf("%d %d %d",&a, &b, &c);
     
         if (a<b && a<c) 
         {    
             printf("%d is smallest",a);
          }  
          
  
    else if (b<a && b<c)
         {
             printf("%d is smallest",b);
          }  
           
   else if (c<a && c<b) 
         {
             printf("%d is smallest",c);
          }   
 }