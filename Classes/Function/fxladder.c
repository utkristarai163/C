//Write a program to demonstrate the following steps using function
#include<stdio.h>
int fun1(void);
int fun2(void);
int fun3(void);

void main()
{
	printf("1-start of main\n\n");
	printf("2-start of fun1\n\n");
	fun1();
	printf("11-end of main\n\n");
}

int fun1()
{
	printf("3-body of fun1\n\n");
	printf("4-start of fun2\n\n");
	fun2();
	printf("10-end of fun1\n\n");
	return 0;
}

int fun2()
{
	printf("5-body of fun2\n\n");
	printf("6-start of fun3\n\n");
	fun3();
	printf("9-end of fun2\n\n");
	return 0;
}

int fun3()
{
	printf("7-body of fun3\n\n");
	printf("8-end of fun3\n\n");
	return 0;
}
