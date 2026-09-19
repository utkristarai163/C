//Simple bubble sort in an array
#include<stdio.h>
void main()
{
    int a[20]={0},i,j,n,temp;

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter the elemnts:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }

    printf("The sorted array:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

printf("\n");
}
