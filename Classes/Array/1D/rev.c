//Reverse an array using another array
#include<stdio.h>
void main()
{
    int a[10]={0},b[10]={0},n,i,j;

    printf("Enter n(<=10):");
    scanf("%d", &n);

    printf("\nEnter any %d numbers:\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("The content of original array:\n");

    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    j=n-1;

    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        j--;
                    }

    printf("\nThe reverse of the array:\n");

    for(i=0;i<n;i++)
    printf("%d ",b[i]);

	printf("\n");
}
