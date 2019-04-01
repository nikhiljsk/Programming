#include<stdio.h>
#include<conio.h>
int fun(int x,int y);
void main()
{
	int x,y;
	printf("enter any two numbers");
	scanf("%d%d",&x,&y);
	printf("%d",fun(x,y));
	getch();
	
	
}
int fun(int x,int y)
{
	int d;
	d=x+y;
	printf("%d\n",d);
	return d;
}
