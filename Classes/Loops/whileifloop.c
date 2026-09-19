//Program to print name even number of times
#include<stdio.h>
void main() 
{
    int num,i=0;
    
    while(1)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        
        if (num%2==0)
        {   
           while(i!=num)
           {
             printf("Utkrista Rai\n");
               i++;                       
                                        }
         break;                               
                                                   }
        else printf("\nOdd.Number rejected.\n\n");
        continue;
                                                      }
        printf("\nThank you");                                             
}                                                          