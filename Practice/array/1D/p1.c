//To find greatest continuous sum of 3 elements
#include<stdio.h>
void main()
{int n,ele,i,j,a[20]={0},sum=0;

printf("Enter no of elements(<20):");
scanf("%d",&n);

printf("Enter the elements of the array:\n");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)

    for(j=0;j<3;j++)
    sum=a[i]+a[i+1]+a[i+3];

sum=max;
}
