//Program to find sum, average, smallest and largest of 2D array
#include<stdio.h>
void main()
{
    int a[3][3]={0}, i, j, row, col, sum=0,max, min;
    float avg;

    printf("Enter row:");
    scanf("%d",&row);

    printf("Enter column:");
    scanf("%d",&col);

    printf("Enter %d array elements:\n",row*col);

    for(i=0;i<row;i++)
    { for(j=0;j<col;j++)
      scanf("%d",&a[i][j]);
    }

    max=a[0][0];
    min=a[0][0];

    for(i=0;i<row;i++)

    { for(j=0;j<col;j++)

      {  if (a[i][j]<min)
         min=a[i][j];

        if (a[i][j]>max)
        max=a[i][j];

        sum=sum+a[i][j];
      }
    }

    printf("\nSum is %d\n", sum);
    printf("Average is %f\n", avg=(float)sum/9);
    printf("\nSmallest is %d\nLargest is %d\n",min, max);

}
