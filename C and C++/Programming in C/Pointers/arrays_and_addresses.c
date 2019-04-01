#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],*p[4];
	int i,n;
	for(i=0;i<4;i++)
	p[4]=&a[4];
	printf("enter any 4 elements");
	for(i=0;i<4;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<4;i++)
	{
		printf("%d\t",*(p+i));
	}
	getch();
}
