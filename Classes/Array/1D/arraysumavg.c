//Program to find sum and average of n numbers using arrays
#include<stdio.h>
void main() 
{
    int a[20]={0}, i, n, sum=0;
    float avg;
    
    printf("Enter n(<=20):");
    scanf("%d", &n);
    
    printf("\nEnter any %d numbers:\n",n);
    
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);
   
    printf("\n");
   
    for(i=0;i<n;i++)
    sum=sum+a[i];
    
    printf("Sum is %d\n", sum);
    printf("Average is %f", avg=(float)sum/n);
   
}