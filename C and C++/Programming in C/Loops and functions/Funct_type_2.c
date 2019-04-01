#include<stdio.h>
#include<conio.h>
void fun(int a,int b);
void main()
{
	int a,b;
	printf("Enter any two values to display the remainder when one is divided by another");
	scanf("%d%d",&a,&b);
	fun(a,b);
	getch();
}
void fun(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}

