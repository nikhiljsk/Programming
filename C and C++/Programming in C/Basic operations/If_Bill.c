#include<stdio.h>
#include<conio.h>
void main()
{
	int u,t;
	printf("Enter the value of units consumed");
	scanf("%d",&u);
	if(u<=200)
	{
		t=u*2;
		printf("Amount of bill is %d",t);
		
	}
	if(u>200 && u<=400)
	{
		t=u*4;
		printf("Amount of bill is Rs.%d",t);
		
	}
	else
	{
		printf("Invalid input");
	}
	getch();
}
