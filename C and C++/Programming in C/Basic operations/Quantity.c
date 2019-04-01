#include<stdio.h>
#include<conio.h>
void main()
{
	float qp,qpen,qc,t1,t2,t3,T;
	printf("Enter the quantity of pens");
	scanf("%f",&qpen);
	t1=qpen*20;
	printf("\nThe total cost of pens is %f",t1);
	printf("\nEnter the quantity of pencils");
	scanf("%f",&qp);
	t2=qp*10;
	printf("\nThe total cost of pencils is %f",t2);
	printf("\nEnter the quantity of colours");
	scanf("%f",&qc);
	t3=qc*30;
	printf("\nThe total cost of colours is %f",t3);
	T=t1+t2+t3;
	printf("\nThe total cost is %f",T);
	getch();
}
	
	

