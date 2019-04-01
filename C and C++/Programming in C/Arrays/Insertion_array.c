#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,pos,value;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values in an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position you want to insert an array\n");
	scanf("%d",&pos);
	printf("Enter the value you want to enter\n");
	scanf("%d",&value);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=value;
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
	
}
