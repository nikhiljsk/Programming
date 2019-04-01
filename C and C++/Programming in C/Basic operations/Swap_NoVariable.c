#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the values of a and b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of a is %d and b is %d",a,b);
	getch();
}
