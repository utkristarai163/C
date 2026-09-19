//Printing the multiplication table upto 12 for any number//
#include <stdio.h>
void main() 
{
int num, ans, i;
  
    printf("Enter the number:");
    scanf("%d", &num);
    
    for (i=1;i<=12;i++) 
    {    
        ans=num*i;
        printf("\n%d*%d=%d",num, i, ans);
                                            }
                                            
}        