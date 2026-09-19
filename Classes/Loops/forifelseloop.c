#include<stdio.h>
void main()

{
int n, i;
printf("Enter n:");
scanf("%d", &n);

i=0;
for(;;)
    {
        if (i<n)
            {    printf("Looping the Classrooms %d\n",i+1);
                 i++;
            }
         else
         break;     
    }
}