#include<stdio.h>
#include<conio.h>
void main()
{
	float s,da,hra,g;
	printf("Enter the basic salary\n");
	scanf("%f",&s);
	da=(s/100)*10;
	hra=(s/100)*30;
	g=s+da+hra;
	printf("The total gross is %f",g);
	getch();
}
