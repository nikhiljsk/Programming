
#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	printf("Enter the year to know the clssification of leap and non-leap year");
	scanf("%d",&y);
	if(y%4==0&&y%100!=0||y%400==0)
	{
		printf("The year you entered is leap year.");
	}
	else
	{
		printf("The year you entered is non-leap year");
	}
	getch();
}
