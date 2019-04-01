#include<stdio.h>
#include<conio.h>
void fun(int x[],int n);
void main()
{
	int i,n;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,n);
	getch();
}
void fun(int x[],int n)
{int i;
for(i=0;i<=n-1;i++)
 {
 	
   printf("%d\t",x[i]);	
 }
}
