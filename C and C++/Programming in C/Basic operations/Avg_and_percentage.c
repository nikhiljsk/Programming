#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e,avg,perc;
	printf("Enter the values of the five subjects namely a,b,c,d,e");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	//consider the total marks of each subject to be 100 and so 500 for 5 subjects
	perc=((a+b+c+d+e)/500)*100;
	printf("The average of 5 subjects is %f and percentage obtained is %f",avg,perc);
	getch();
}
