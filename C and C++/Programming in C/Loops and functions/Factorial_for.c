#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int fact=1;
	printf("Enter any number to know the factorial");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;	
	}
		printf("factorial=%d",fact);
	getch();
}
