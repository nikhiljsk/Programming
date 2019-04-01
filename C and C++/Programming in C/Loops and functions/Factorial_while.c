#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	int fact=1;
	printf("Enter the value to find the factorial");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
	printf("%d\n",fact);
		i=++i;
	}
	
	getch();
}
