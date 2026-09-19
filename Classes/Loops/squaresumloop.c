//Sum of square of first n natural numbers
#include<stdio.h>
void main() 
{
int sum=0, i, n;
    printf("Enter n:");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++) 
    {
        sum=sum+(i*i);
                        }
    printf("The required sum is %d", sum);
}