//yes return,yes arguement
#include<stdio.h>
int sum(int,int);

void main()

{ int a,b,ans;

  printf("\nEnter a and b:");
  scanf("%d %d",&a,&b);
  ans=sum(a,b);
  printf("Sum is %d\nFinished\n",ans);
}

  int sum(int x,int y)
{ return x+y;
}
