//yes return,no arguement
#include<stdio.h>
int sum(void);

void main()

{ int ans; //global variable
  ans=sum(); //calling sum f(x)
  printf("\nAns received in main=%d\n",ans);
}

int sum()
{  int a,b; //local variable

        printf("\nEnter a and b:");
        scanf("%d %d",&a,&b);
        return a+b;
}
