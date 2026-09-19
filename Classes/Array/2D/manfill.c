//User manually fills array
#include<stdio.h>
void main()

{  int a[10][10]={0};
   int i,j,row,col;

        printf("Enter row(<10):");
	scanf("%d",&row);
	printf("Enter column(<10):");
	scanf("%d",&col);

	printf("Now enter array elements row-wise:");

        for(i=0;i<row;i++)
        {  for(j=0;j<col;j++)
           scanf("%d",&a[i][j]);
        }

	printf("Array is:\n");

	for(i=0;i<row;i++)

        {  for(j=0;j<col;j++)
           printf("%d ",a[i][j]);
           printf("\n");
	}
}
