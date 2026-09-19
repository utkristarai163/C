//Program to print n numbers of G. P.
#include <stdio.h>
void main() 
{
 int i, a, r, n, p, q;
 
     printf("Enter first term:");
     scanf("%d",&a);
   
     printf("\nEnter common quotient:");
     scanf("%d",&r);
     
     printf("\nHow many terms to print:");
     scanf("%d",&n);
     
     p=a*r;
     printf("\nThe G.P. is %d %d ",a, p);
     
     for(i=3;i<=n;i++) 
        { 
            q=p*r;
            printf("%d ",q);
            p=q;
                            }
}     