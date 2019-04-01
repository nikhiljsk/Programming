#include<stdio.h>
#include<conio.h>
void main()
{
	int km,m,cm;
	printf("Enter the value of distance in Kilometers");
	scanf("%d",&km);
	m=km*1000;
	cm=km*10000;
	printf("The distance in meters is %d and in centi-meters is %d",m,cm);
	getch();
	
}
