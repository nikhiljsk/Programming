#include<stdio.h>
#include<conio.h>
int fun();
void main()
{
	printf("%d",fun());
	getch();
}
int fun()
{
	int a,b,c;
	printf("enter two values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
