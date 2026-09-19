//no return,no arguement
#include<stdio.h>
void sum(void);

void main()

{ printf("Calling sum()");
  sum(); //calling sum f(x)
  printf("\nEnd of main\n");
}

void sum() //f(x) definition
{  int a,b,ans;

	printf("\nEnter a and b:");
	scanf("%d %d",&a,&b);
	ans=a+b;
	printf("\nThe sum is %d",ans);
}
