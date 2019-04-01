#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n]; //size of array is only defined after n value declaration.(else some random value of n)
	printf("Enter the elements in each array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",0[a]);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
