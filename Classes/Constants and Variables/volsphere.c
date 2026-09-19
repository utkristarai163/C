//Program to calculate volume of a sphere
#include <stdio.h>
#define pi 3.14
void main() 
{
int radius,r,vol;

    printf("Insert the radius of the sphere in m:");
    scanf("%d",radius);
    
    r=radius*radius*radius;
    vol=4/3*pi*r;
    
    printf("\nThe volume of the sphere is %d m³",vol);
    
}    