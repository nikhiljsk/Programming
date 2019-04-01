#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a=5,b=0;
	printf("Enter");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{if(j%2==0)
			printf("%d",b);
		else
		printf("%d",a);	
		}
		printf("\n");
	}
	getch();
}
