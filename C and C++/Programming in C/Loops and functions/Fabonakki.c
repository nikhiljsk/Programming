#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,n=10,i;
	printf("%d %d ",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	getch();
}
