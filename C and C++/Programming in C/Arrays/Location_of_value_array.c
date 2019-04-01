#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,loc=6,k;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value you want to search in a given array");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	  if(k==a[i])
	  {
	  	loc=i+1;
	  	break;
	  }	
	  
	}
	if(loc!=6)
	printf("Value is found at %d",loc);
	else
	printf("Value is not found");
	getch();
}
