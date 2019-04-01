#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
int a,b,c;
printf("Enter the operators +,- to perform corresponding operation");
scanf("%c",&ch);
printf("Enter values of a and b");
scanf("%d%d",&a,&b);
switch(ch)
{
case '+':

	c=a+b;
	printf("The value after addition is %d",c);
	break;

case '-':

	c=a-b;
	printf("The value after subtraction is %d",c);
	break;
	default:printf("hahaha");

}
	getch();

}
