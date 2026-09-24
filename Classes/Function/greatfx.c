//Program to find greatest among two numbers in a function where function arguements are two numbers that should
//be compared and function returns the result to the main

#include<stdio.h>
int max(int,int);

void main()
{
	int a,b,c;
	printf("Enter any two numbers:");
	scanf("%d %d",&a,&b);

	if (a==b)
	printf("Equal\n");
	else
	{
		c=max(a,b);
		printf("Greatest is %d\n",c);
	}
}

int max(int x, int y)
{
	if(x>y)
	return x;

	else
	return y;
}
