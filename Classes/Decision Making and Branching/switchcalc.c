//Switch case caclculator
#include<stdio.h>
#include<math.h>
void main() 
{
    int a, b, result;
    char op;
    
    printf("Enter the expression:");
    scanf("%d%c%d", &a, &op, &b);
    
    switch(op) 
  {
    case '+':
    printf("%d",result=a+b);
    break;
    
    case '-':
    result=a-b;
    printf("%d",result);
    break;
    
    case '*':
    result=a*b;
    printf("%d",result);
    break;
    
    case '/':
    result=a+b;
    printf("%d",result);
    break;
    
    case '^':
    result=pow(a, b) ;
    printf("%d",result);
    break;
    
    default:
    printf("Invalid operation");
    break;
                                        }
 }                                     