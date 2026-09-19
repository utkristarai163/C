//Introduction to 2D Arrays
#include<stdio.h>
void main()

{  int a[3][3]={{1,2,3},  //or {1,2,3,4,5,6,7,8,9};
		{4,5,6},
		{7,8,9}}; //3 rows, 3 columns
   int i,j;

	printf("The content of a[2][2] is:%d\n",a[2][2]);
	//print element in *third row, *third column
	//first is [0][0]

	printf("Entire 2D array elements:\n");

	for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)
	   printf("%d ",a[i][j]);
	   printf("\n");
	}


}
