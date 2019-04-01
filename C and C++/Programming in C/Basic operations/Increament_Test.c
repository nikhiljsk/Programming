#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x,y,z;
	printf("Enter the values of a and b : ");
	scanf("%d %d",&a,&b);
	x=a*b++;
	y=++a*b;
	z=a++*b++;
	printf("The result of x is %d\n The result of y is %d\n The result of z is %d ",x,y,z);
	getch();
}
