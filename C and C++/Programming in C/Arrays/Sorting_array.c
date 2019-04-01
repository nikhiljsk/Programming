#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,temp;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				continue;
			}
			else
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	getch();
}
