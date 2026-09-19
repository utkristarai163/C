//Finding grade using switch case
#include<stdio.h>
void main() 
{
    int p, c, b, avg, index;
    
    printf("Enter the marks in Physics:");
    scanf("%d",&p);
    
    printf("Enter the marks in Chemistry:");
    scanf("%d",&c);
    
    printf("Enter the marks in Biology:");
    scanf("%d",&b);
    
    avg=(p+c+b)/3;
    index=avg/10;
    switch (index) 
  {
    case 10:
    printf("Grade is S");
    break;
    
    case 9:
    printf("Grade is A");
    break;
    
    case 80:
    printf("Grade is B");
    break;
    
    case 7:
    printf("Grade is C");
    break;
    
     case 6:
    printf("Grade is D");
    break;
    
    case 5:
    printf("Grade is E");
    break;
    
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
    printf("Grade is F");
    break;
    
    default:
    printf("Invalid score entered");
    break;
                                        }
 }                                     