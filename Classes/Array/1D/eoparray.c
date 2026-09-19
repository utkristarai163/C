//Program to find number of even, odd and prime numbers using array
#include<stdio.h>
void main() 
{
    int a[20]={0}, i, n, counte=0,counto=0, countp=0, cp=0,j;
    float avg;
    
    printf("Enter n(<=20):");
    scanf("%d", &n);
    
    printf("\nEnter any %d numbers:\n",n);
    
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);
   
    printf("\n");
   
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        counte++;
        
        else counto++;
                           
    for(j=1;j<=a[i];j++)
        {
           if (a[i]%j==0)
            countp++;
                        }
         if (countp==2) 
         cp++;
         countp=0;
                         }
                         
  printf("Even=%d, Odd=%d, Prime=%d", counte, counto, cp);  
  }         