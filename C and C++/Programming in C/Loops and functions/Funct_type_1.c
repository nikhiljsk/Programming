#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
	fun();
	getch();
}
void fun()
{
	int a,b,c;
	printf("Enter any two values to display the remainder when divided by the other");
	scanf("%d%d",&a,&b);
	c=a%b;
	printf("%d",c);
	}

