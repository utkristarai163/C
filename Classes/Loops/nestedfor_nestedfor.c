//Printing the multiplication tables upto 12 for multiple numbers//
#include <stdio.h>
void main()
{
    int n, ans, i, j;

    printf("Enter the number:");
    scanf("%d", &n);

    for(j=1;j<=n;j++)
       {
            for (i=1;i<=10;i++)
            {
                ans=j*i;
                printf("\n%d*%d=%d",j, i, ans);
                                                }
        printf("\n#############################\n");
                                                       }
}
