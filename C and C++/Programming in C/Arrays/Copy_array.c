#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter the size of an array");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	getch();
}
