#include <stdio.h>
void main()
{
char x;
while(1) 
printf("Enter any character:");
scanf("%c", &x);

     if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'
       ||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
      {printf("Vowel %c",x);
      }
     else 
     {printf("Consonant %c",x);
     }
}