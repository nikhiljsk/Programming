#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
