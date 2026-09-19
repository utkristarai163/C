//Finding greatest number out of three integers//
#include<stdio.h>
void main()
{
int a, b, c;
printf("Enter any three values:");
scanf("%d %d %d", &a, &b, &c);

    (a>b)?
            (a>c)? printf("%d is greatest\n",a) : 
                   printf("%d is greatest\n",c)  
                                                    :
            (b>c)? printf("%d is greatest\n",b) :
                   printf("%d is greatest\n",c);
}                   