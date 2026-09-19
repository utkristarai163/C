//Printing number triangle using loop
#include<stdio.h>
void main() 
{
    int i, j, n,sp,k=1,ht;
    
    printf("Input n:");
    scanf("%d", &sp);
    ht=sp;
                            
    printf("\n");                    
  
    for (i=1;i<=ht;i++)
    {    
        for (j=0;j<sp;j++)
        printf(" ");
                        
        for (j=0;j<k;j++) 
        printf("*");
     
    printf("\n");
    k=k+2;
    sp--;
                            }                        
}            