#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter the number of lines to be printed");
	scanf("%d",&n);
	for(i=1;i>=n;i++)
	{
		for(j=n;j<=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
