//Armstrong Number
#include<stdio.h>
#include<math.h>
void main()
{ int a[20]={0},i,j,num,n=0,temp,sum=0;

    printf("Enter any number:");
    scanf("%d",&num);

	i=0;
	temp=num;

	while(temp!=0)
        {  a[i]=temp%10;
           temp=temp/10;
           n++;
	   i++;
        }

	for(i=0;i<n;i++)
	sum=sum+pow(a[i],n);

	if(sum==num)
	printf("%d is an Armstrong number\n",num);

	else printf("%d is not an Armstrong number\n",num);
}
