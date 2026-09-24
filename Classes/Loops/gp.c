//Program to print n numbers of G. P.
#include <stdio.h>
void main()
{
     int i, a, r, n;

     printf("Enter first term:");
     scanf("%d",&a);

     printf("\nEnter common quotient:");
     scanf("%d",&r);

     printf("\nHow many terms to print:");
     scanf("%d",&n);

     printf("\nThe G.P. is \n");

     for(i=1;i<=n;i++)
        {
            printf("%d ",a);
            a=a*r;
        }
}
