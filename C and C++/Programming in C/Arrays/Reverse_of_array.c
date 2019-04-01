#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	int b[n];
	printf("Enter elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[n-1-i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	getch();
	
}
