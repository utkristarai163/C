//Sum of n natural mumbers////
#include <stdio.h>
void main() 
{
int n, sum=0, i;
  
    printf("Enter the number:");
    scanf("%d", &n);
    
    for (i=1;i<=n;i++) 
    {    
        sum+=i;         
                    }   

        printf("Sum is %d",sum);
                                
}       