#include <stdio.h>
#include <stdlib.h>
int main()

{
int num;
printf("Enter number:");
scanf("%d", &num);

    if(num%2==0) 
    goto even;
    
    else 
    goto odd;

even:
printf("Number is even");
goto end;

odd:
printf("Number is odd");
goto end;

end:
printf("\nThe end");
return 0;
}