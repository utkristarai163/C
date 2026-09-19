//Reverse String without another string
#include<stdio.h>
#include<string.h>
void main()

{ char str1[20]={'\0'},temp;
   int i,j;

	printf("Enter the string:");
	scanf("%s",str1);

	printf("\nOriginal String:%s\n\n",str1);

	i=0;
	j=(strlen(str1)-1);

	while(i<strlen(str1)/2)

	{  temp=str1[i];
	   str1[i]=str1[j];
	   str1[j]=temp;
	   i++;
	   j--;
	}

	printf("Reverse:%s\n\n",str1);
}


