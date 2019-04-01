#include<stdio.h>
#include<conio.h>
int suma(int a[],int n);
void main()
{
	int n,a[20],i;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	suma(a,n);
	getch();
}
int suma(int a[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
    }
    printf("%d",sum);
}
