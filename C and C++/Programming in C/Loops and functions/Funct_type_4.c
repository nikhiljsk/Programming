#include<stdio.h>
#include<conio.h>
int fun();
void main()
{
	int d;
	d=fun();
	printf("%d",d);
	getch();
}
int fun()
{
	int a,b,c;
	printf("Enter the value of any two numbers to display the remainder when one is divided by the other");
	scanf("%d%d",&a,&b);
	c=a%b;
	return c;
}
