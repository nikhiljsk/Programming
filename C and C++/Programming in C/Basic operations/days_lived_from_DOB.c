//WAP to enter your DOB and calculate how many days you have lived.
#include<stdio.h>
#include<conio.h>
void main()
{
	int y,m,d,n,a,b,c,dob,pre;
	printf("Enter you DOB");
	scanf("%d",&n);
	y=n%10000;
	a=n/10000;
	m=a%100;
	d=n/1000000;
	dob=d+(m*30)+(y*365);
	pre=1+(12*30)+(2016*365);
	printf("Number of days lived is %d",pre-dob);
	getch();
}
