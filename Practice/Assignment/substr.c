#include<stdio.h>
#include<string.h>

void main()
{   char str[20]={'\0'},sub[20]={'\0'},strext[20]={'\0'};
    int  i,j,strl,subl,k=0;

	printf("Enter main string:");
	scanf("%s",str);

	printf("Enter sub string to check for:");
	scanf("%s",sub);

	strl=strlen(str);
	subl=strlen(sub);

	for(i=0;i<=strl-subl;i++)
	{  k=0;

	   for(j=i;j<i+subl;j++)
	   {   strext[k]=str[j];
	       k++;
	   }

	   strext[k]='\0';

	   if(strcmp(strext,sub)==0)
	   printf("Extracted substring:%s\t(MATCH)\n",strext);

	   else
	   printf("Extracted substring:%s\t(NOT MATCH)\n",strext);
	}
}
