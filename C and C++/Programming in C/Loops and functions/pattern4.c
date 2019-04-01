#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,j,n,c=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		c++;
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("%d",c+j);
		}
		printf("\n");
	}
	getch();
}
