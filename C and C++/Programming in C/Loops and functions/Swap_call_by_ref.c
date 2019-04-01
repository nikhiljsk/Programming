#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
void main()
{
	int a,b;
	printf("Enter the values of a and b");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("The values of a and b in main function are %d and %d",a,b);
	getch();
}
void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
	printf("The values of a and b in called function after swapping are %d and %d \n",*x,*y);
}
