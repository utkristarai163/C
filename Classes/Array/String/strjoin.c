//Join one string at the end of another
#include<stdio.h>
#include<string.h>
void main()

{ char str1[30]={'\0'},str2[30]={'\0'},str3[30]={'\0'};
   int i,j;

	printf("Enter two strings:");
	scanf("%s %s",str1,str2);

	strcpy(str3,str1);

	strcat(str1,str2);
	//Joins str2 to end of str1
	printf("Concatenated string=%s\n\n",str1);

	i=0;

	strcpy(str1,str3);

	while(str1[i]!='\0')
	i++;

	j=0;

	while(str2[j]!='\0')
	{  str1[i]=str2[j];
	   i++;
	   j++;
	}

	str1[i]='\0';

	printf("Manual concatenation=%s\n\n",str1);

}
