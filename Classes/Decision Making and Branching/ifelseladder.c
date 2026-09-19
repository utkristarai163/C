#include<stdio.h>
void main()
{
int x;

printf("input x:");
scanf("%d", &x) ;
    
    if (x%3==0) 
    {printf("Divisible by 3");
    }
   
    else 
    if (x%5==0) 
    {printf("Divisible by 5");
    }
   
    else
    if (x%7==0) 
    {printf("Divisible by 7");
    }
    
    else
    printf("Invalid number");
    
printf("\nThank you");   
}  