#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
