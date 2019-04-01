//WAP to ask user to enter his DOB and calculate how many independence days he had seen in his life
#include<stdio.h>
#include<conio.h>
void main()
{
	int y,a,n,m,d,py=2016;
	printf("Enter you DOB");
	scanf("%d",&n);
	y=n%10000;
	a=n/10000;
	m=a%100;
	d=n/1000000;
	if(d<15 && m<9)
		printf("You have seen %d independence days in your life",py-y);
	else
	printf("You have seen %d independence days in your life",py-y-1);
	getch();
}
