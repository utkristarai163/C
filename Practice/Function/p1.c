#include<stdio.h>
int area(int,int);

void main()

{  int l,b,ans;

	printf("Enter the length and breadth of the rectangle:");
	scanf("%d %d",&l,&b);

	ans=area(l,b);

	printf("Area is %d\n",ans);

}

   int area(int x, int y)
   { return x*y;
   }
