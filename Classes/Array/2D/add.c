//Array addition/subtraction
#include<stdio.h>
void main()

{  int a[10][10]={0},b[10][10]={0},c[10][10]={0};
   int i,j,row,col;

        printf("Enter row(<10):");
        scanf("%d",&row);
        printf("Enter column(<10):");
        scanf("%d",&col);

        printf("Now enter array elements for array a row-wise:\n");

        for(i=0;i<row;i++)
        {  for(j=0;j<col;j++)
           scanf("%d",&a[i][j]);
        }

	printf("Now enter array elements for array b row-wise:\n");

        for(i=0;i<row;i++)
        {  for(j=0;j<col;j++)
           scanf("%d",&b[i][j]);
        }

        for(i=0;i<row;i++)

        {  for(j=0;j<col;j++)
           c[i][j]=a[i][j]+b[i][j];//or other operator
	}

	printf("\nResultant array c:\n");
	for(i=0;i<row;i++)
        {  for(j=0;j<col;j++)
           printf("%d ",c[i][j]);
           printf("\n");
	}
}
