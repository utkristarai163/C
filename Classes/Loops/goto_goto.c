#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("Start\n\n");

    goto b;

a:
    printf("A part\n");
    goto c;
b:
    printf("B part\n");
    goto a;

c:
    printf("End\n");

}