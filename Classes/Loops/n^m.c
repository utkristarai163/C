//Sum of power m of first n natural numbers
#include<stdio.h>
#include<math.h>
void main() 
{
int sum=0, i, n, m, ip;

    printf("Enter n:");
    scanf("%d", &n);
    
    printf("\nEnter m:");
    scanf("%d", &m);
    
    
    for(i=1;i<=n;i++) 
    {
        ip=pow(i, m);
        sum=sum+ip;
                      }
                        
    printf("\nThe required sum is %d", sum);
}