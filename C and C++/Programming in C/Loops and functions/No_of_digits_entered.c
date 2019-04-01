#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c=1,i;
	printf("Enter the number to know the number of digits in it");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=c*10;
		if(n/c==0)
		{
			printf("%d",i);
			break;
		}
		else
		continue;
	}
	getch();
}
