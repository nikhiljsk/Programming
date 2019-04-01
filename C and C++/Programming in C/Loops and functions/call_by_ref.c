//WAP to show the working of call by value and call by reference for sum of two numbers.
#include<stdio.h>
#include<conio.h>
int swapr(int *,int *);
void main()
{
	int a=4,b=7;
	swapr(&a,&b);
	printf("The actual values are %d and %d",a,b);
	getch();
}
int swapr(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("The formal values are %d and %d\n",*x,*y);
}
