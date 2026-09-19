//Program to count number of exact pairs in array
#include<stdio.h>
void main() 
{
    int a[20]={0}, i, n, sum=0,j, cnt1=0, cnt2=0;
    float avg;
    
    printf("Enter n(<=20):");
    scanf("%d", &n);
    
    printf("Enter any %d numbers:\n",n);
    
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);
   
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++) 
        { if(a[j]==a[i]) 
          cnt1++;
        }    
        
        if(cnt1==2) 
       {printf("Exact pair of %d found\n", a[i]);
        cnt2++;
       }
        cnt1=0;
    }
    
    printf("%d perfect pairs found", cnt2);
   
}