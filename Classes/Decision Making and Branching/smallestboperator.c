//Program to find the smallest number 
#include <stdio.h>
void main() 
{
 int a, b, c;
 
     printf("Insert any three numbers:");
     scanf("%d %d %d",&a, &b, &c);
 
            (a<b)?
                    (a<c)? 
                           printf("\n%d is smallest",a) :
                           printf("\n%d is smallest",c) 
                                                  
                                                        :
                    (b<c)?
                           printf("\n%d is smallest",b) :  
                           printf("\n%d is smallest",c);
}                                           