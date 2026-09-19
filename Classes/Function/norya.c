//no return,yes arguement
#include<stdio.h>
void sum(int,int);

void main()

{ int a,b;

  printf("\nEnter a and b:");
  scanf("%d %d",&a,&b);
  sum(a,b);
  printf("Finished\n");
}

void sum(int x,int y)
{ int ans;
  ans=x+y;
  printf("Sum is %d\n",ans);
}



