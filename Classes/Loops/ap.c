//Program to print n numbers of A.P.
#include <stdio.h>
void main() 
{
 int i, a, d, n, p, q;
 
     printf("Enter first term:");
     scanf("%d",&a);
   
     printf("\nEnter common difference:");
     scanf("%d",&d);
     
     printf("\nHow many terms to print:");
     scanf("%d",&n);
     
     p=a+d;
     printf("\nThe A.P. is %d %d ",a, p);
     
     for(i=3;i<=n;i++) 
        { 
            q=p+d;
            printf("%d ",q);
            p=q;
                            }
}     