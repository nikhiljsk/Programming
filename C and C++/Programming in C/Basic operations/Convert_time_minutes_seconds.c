#include<stdio.h>
#include<conio.h>
void main()
{
	int h,m,s;
	printf("Enter the value of time in hours");
	scanf("%d",&h);
	m=h*60;
	s=h*60*60;
	printf("The value of time in minutes is %d and in seconds is %d",m,s);
	getch();
}
