//Binary Search(Sorted array)
#include<stdio.h>
void main()
{
	int n,i,first,mid,last,ele,a[20]={0},flag=0;

	printf("Enter n(<20):");
	scanf("%d",&n);

	printf("Enter the elements of the array in ascending order:\n");
	//Does not work for unsorted array

	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	//Sort array via bubble sort if unsorted

	printf("Now enter the element to be searched:");
	scanf("%d",&ele);

	first=0;
	last=n-1;
	mid=(first+last)/2;

	while(first<=last)
	{
		if(a[mid]==ele)
		{
			printf("Element found\n");
			flag=1;
			break;
		}

		else if(a[mid]>ele)
			{
				last=mid-1;
				mid=(first+last)/2;
			}

			else
			{
				first=mid+1;
				mid=(first+last)/2;
			}
	}

	if(flag==0)
	printf("Element not found\n");

}
