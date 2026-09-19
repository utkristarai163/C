//Quadratic Formula
#include<stdio.h>
#include<math.h>
void main()

{
float a, b, c, x1, x2, p, q;

    printf("Enter the coefficient of x²:");
    scanf("%f",&a);
    
    printf("Enter the coefficient of x:");
    scanf("%f",&b);
  
    printf("Enter the value of constant:");
    scanf("%f",&c);
    
    
    p=(b*b)-(4*a*c);
    q=sqrt(p);
    
    a=2*a;
  
    x1=(-b+q)/a;
    x2=(-b-q)/a;
    
    printf("\nThe values of x are %f and %f", x1, x2);
}