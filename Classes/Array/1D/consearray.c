//Program to find the greatest sum of three consecutive numbers
#include<stdio.h>
void main() 
{
    int a[20]={0},n,i,sum[20]={0},max=0;
    
    printf("Enter n(<=20):");
    scanf("%d", &n);
    
    printf("\nEnter any %d numbers:\n",n);
    
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);
   
   for(i=0;i<n-2;i++)
   sum[i]=a[i]+a[i+1]+a[i+2];
   
   for(i=0;i<20;i++)
   {
       if(sum[i]>max) 
       max=sum[i];
                       }
 
printf("Largest sum is %d",max);
}         