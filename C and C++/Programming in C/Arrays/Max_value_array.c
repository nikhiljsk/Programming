#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,loc=0;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	int *ptr=a;
	printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];//Mind the location of declaration of max and size of array
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			loc=i+1;
		}
		else
		continue;
	}
	printf("Max value is %d\n",max);
	printf("Location of max value is at %d",loc);
	getch();
}
