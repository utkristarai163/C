//Fibonacci Series//
#include <stdio.h>
void main() 
{
int n, first, second, next, i;
printf("Enter the number of terms:");
scanf("%d", &n);

    first=1;
    second=1;  
    printf("%d %d", first,second);
  
        for (i=1;i<=(n-2);i++) 
            {
                next=first+second;
                printf(" %d", next);
                first=second;
                second=next;
                                     }
}       
