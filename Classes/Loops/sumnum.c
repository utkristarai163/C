//Program to stop loop after inputting five even numbers
#include<stdio.h>
void main() 
{
    int i, odd_c, even_c, odd_sum, even_sum, num;
    float odd_avg, even_avg;
    
    for(i=0;i<10;i++) 
    {
        printf("Enter the number:");
        scanf("%d",&num);
        
        if (num%2==0)
        { even_c++;
          even_sum+=num;
          printf("%d is even\n",num);
                                             }
        else 
        {    odd_c++;
             odd_sum+=num;
             printf("%d is odd\n",num);
                                              }
                                                  }
if(odd_c>0)
{odd_avg=(float)odd_sum/(float)odd_c;}

if(even_c>0)
{even_avg=(float)even_sum/(float)even_c;}

printf("Number of odd numbers=%d\nSum of odd numbers=%d\nAverage of odd mumbers=%f\n",odd_c, odd_sum, odd_avg);
        
printf("Number of even numbers=%d\nSum of even numbers=%d\nAverage of even mumbers=%f\n",even_c, even_sum, even_avg);
                                                                                                                        }