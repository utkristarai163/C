#include <stdio.h>
#include <math.h>
#define perlaptop 1000

void main() 
{
int age, hrs, rate, wage;
while(1) 
{
 printf("\n Enter AGE and HRS:");
 scanf("%d %d",&age,&hrs);
 
 if(age>=20 && age<=60)
 {
  
     if (age>=20 && age<=30) 
       {rate=5;}
       
else if(age>=31 && age<=50) 
       {rate=10;}
       
else if(age>=51 && age<=60) 
       {rate=3;}
 
 wage=perlaptop*(rate*hrs);
 printf(" \n Wage=%d\n",wage);
}

 else printf("Invalid age");
}
}