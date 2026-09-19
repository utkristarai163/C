//Program to stop loop after inputting five even numbers
#include<stdio.h>
void main() 
{
    int num, count=0;
    
    while(1)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        
        if (num%2==0)
        {    
            count++;
            printf("\nEven. Number accepted.\n\n");
            
                if (count!=5)
                {
                    continue;
                                }
                else break;                         }   
        
        else printf("\nOdd. Number rejected.\n\n");
                                                 }
      printf("Thank you.");                                         
}