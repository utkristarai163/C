//Printing star triangles using loop
#include<stdio.h>
void main() 
{
    int i, j, n,d,k=1,d1,temp;
    
    printf("Input n:");
    scanf("%d", &d);
    d1=d;
    temp=d;
                            
    printf("\n");                    
  
    for (i=1;i<=d;i++)
    {   
        for (j=0;j<k;j++) 
        printf("*");
     
    printf("\n");
    k=k+1;
                            } 
                            
    printf("\n\n");
     
    k=1;   
    d1=temp;  
                
    for (i=1;i<=d;i++)
    {    
        for (j=0;j<d1;j++)
        printf(" ");
                        
        for (j=0;j<k;j++) 
        printf("*");
     
    printf("\n");
    k=k+1;
    d1--;                    }  
    
    printf("\n\n");
    
    k=1;   
    d1=temp;              
    
    for (i=1;i<=d;i++)
    {    
        for (j=0;j<d1;j++)
        printf(" ");
                        
        for (j=0;j<k;j++) 
        printf("*");
     
    printf("\n");
    k=k+2;
    d1--;                    } 
}            