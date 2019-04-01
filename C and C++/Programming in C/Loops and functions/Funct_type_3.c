#include<stdio.h>
#include<conio.h>
int fun(int a,int b);
void main()
{
	int a,b,d;
	printf("Enter any two values to display the remainder when one is divided by another");
	scanf("%d%d",&a,&b);
	fun(a,b);
	d=fun(a,b);
	printf("%d",d);
	getch();
}
int fun(int a,int b)
{
	int c;
	c=a%b;
	return c;
}
