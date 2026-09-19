
#include <stdio.h>
#include <math.h>

int disc(int,int,int);

int main()
{
        int a,b,c,d;
        printf("Enter a,b and c:");
        scanf("%d %d %d",&a,&b,&c);
        d=disc(a,b,c);
        printf("\nDiscriminant is %d\n",d);
        return 0; 
}

int disc(int x, int y, int z)
{
        int ans;
        ans=pow(y,2)-(4*x*z);
        return ans;
}