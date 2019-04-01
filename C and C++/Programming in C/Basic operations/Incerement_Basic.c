#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("The new value of a is %d \n Thank you :) ",a++);
	printf("The stored value is %d",--a);
	getch();
}
