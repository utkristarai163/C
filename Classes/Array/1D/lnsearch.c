//Linear search with position
#include<stdio.h>
void main()
{int n,ele,i,a[20]={0},flag=0,pos[20]={0};

printf("Enter no of elements(<20):");
scanf("%d",&n);

printf("Enter the elements of the array:\n");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Enter element to be searched:");
scanf("%d",&ele);

for(i=0;i<n;i++)
{
    if(ele==a[i])
    {
        pos[flag]=i+1;
        flag++;
                    }
                            }
if (flag>0)
   {
       printf("\n%d found %d times",ele,flag);
       printf("\nAt position\n:");

       for(i=0;i<flag;i++)
       printf("%d ",pos[i]);
                                                    }
else printf("\nNot found\n");
}
