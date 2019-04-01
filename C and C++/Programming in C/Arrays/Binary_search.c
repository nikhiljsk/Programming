#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,key,beg=0,mid;
	printf("Enter the size of array");
	scanf("%d",&n);
	int end=n-1;
	mid=(beg+end)/2;
	int a[n];
	printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to search");
	scanf("%d",&key);
	while(beg<=end)
	{
		if(key>a[mid])
		{
			beg=mid+1;
		}
		else if(key<a[mid])
		{
			end=mid-1;
			
		}
		else if(key==a[mid])
		{
			printf("The value is found at %d",mid+1);
			break;
		}
		mid=(beg+end)/2;
		
	}
	if(end<beg)
	{
		printf("Value not found");
	}
	getch();
}
