#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	int fact=1;
	printf("Enter any value" );
	scanf("%d",&n);
	do
	{
		
		fact=fact*i;
		i=i+1;
		printf("%d\n",fact);
	}while(i<=n);
	
	getch();
}
