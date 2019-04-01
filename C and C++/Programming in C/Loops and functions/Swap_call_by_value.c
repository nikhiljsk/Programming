#include<stdio.h>
#include<conio.h>
 void swap(int a ,int b);
void main()
{
	int a,b;
	printf("Enter the values of any two numbers to swap");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("The values in main function are %d and %d",a,b);
	getch();
	
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("The values after swapping in called function are %d and %d\n ",a,b);
}

