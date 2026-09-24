//Program to print n numbers of A.P.
#include <stdio.h>
void main()
{
 int i, a, d, n;

     printf("Enter first term:");
     scanf("%d",&a);

     printf("\nEnter common difference:");
     scanf("%d",&d);

     printf("\nHow many terms to print:");
     scanf("%d",&n);

     printf("\nThe A.P. is \n");

     for(i=1;i<=n;i++)
        {
            printf("%d ",a);
            a=a+d;
                            }
}
