#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,pos;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position of the array you want to delete");
	scanf("%d",&pos);
	for(i=pos-1;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
