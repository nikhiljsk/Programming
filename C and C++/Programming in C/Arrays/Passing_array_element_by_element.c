#include<stdio.h>
#include<conio.h>
void fun(int x);
void main()
{
	int i,n,x;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
    printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		x=a[i];
		fun(x);
	}
	getch();
}
void fun(int x)
{
	printf("%d\t",x);
}
