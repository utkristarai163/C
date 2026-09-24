//WAP using multiple functions as follows:the main function will input single integer number and forward it to function even_odd()
//If num is even, this will called fact()
//If off, number is checked for prime()

#include<stdio.h>

void even_odd(int);
void fact(int);
void prime(int);

void main()
{
	int num;

	printf("Enter number:");
	scanf("%d",&num);
	even_odd(num);
	printf("\nEnd of program\n");
}

void even_odd(int x)
{
	if(x%2==0)
	{
		printf("\nEven");
		fact(x);
	}

	else
	{
		printf("\nOdd");
		prime(x);
	}
}

void fact(int y)
{
	int ans=1;

	for(;y>0;y--)
	ans*=y;
	printf("\nFactorial is %d",ans);
}

void prime(int z)
{
	int i,count=0;

	for(i=1;i<=z;i++)
	{
		if(z%i==0)
		count++;
	}

	if(count==2)
	printf("\nPrime number");

	else
	printf("\nNot prime number");
}
