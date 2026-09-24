//Copy string into another string
#include<stdio.h>
#include<string.h>
void main()

{ char str1[20]={'\0'},str2[20]={'\0'},temp;
   int i;

	printf("Enter the string:");
	scanf("%s",str1);

	printf("\nOriginal String:%s\n\n",str1);

	i=0;

	while(str1[i]!='\0')

	{  str2[i]=str1[i];
	   i++;
	}
	str2[0]='\0';
	printf("Str 2:%s\n",str2);
}


