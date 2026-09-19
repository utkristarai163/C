//Kaprekar's Constant
#include<stdio.h>
void main()

{ int a[4]={0},b[4]={0},i,j,num,n,temp,num1=0,num2=0,flag=0;

    printf("Enter any four digit mumber with atleast one distinct number:");
    scanf("%d",&num);
    printf("The given number:%d\n",num);

     for(;;)
     {
    	i=0;
   	n=num;

    	while(n!=0)
    	{  a[i]=n%10;
           b[i]=a[i];
           i++;
	   n=n/10;
        }

	if(i>4 || a[0]==a[1] && a[1]==a[2] && a[2]==a[3] && a[3]==a[0])
	{  printf("Invalid number\n\n");
	   break;
	}

        for(i=0;i<3;i++)
        {
          for(j=0;j<3-i;j++)
          {
              if(a[j]>a[j+1])
              {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
              }
              if(b[j]<b[j+1])
              {
                 temp=b[j];
                 b[j]=b[j+1];
                 b[j+1]=temp;
              }
          }
        }

        printf("Step 1:Arrange the digits in ascending and descending order:");

        num1=0;
        num2=0;

        printf("\nAscending=");
        for(i=0;i<4;i++)
        {   printf("%d",a[i]);
            num1=num1*10+a[i];
        }

        printf("\nDescending=");
        for(i=0;i<4;i++)
        {   printf("%d",b[i]);
            num2=num2*10+b[i];
        }

        printf("\nStep 2:Subtract descending from ascending:");
        num=num2-num1;
        printf("%d-%d=%d\n",num2,num1,num);

        printf("New number=%d\n",num);

        if(num==6174)
        {  printf("Found Kaprekar's constant\n\n");
           break;
        }

        else printf("Step 3:Repeat:\n\n");

     }
}
