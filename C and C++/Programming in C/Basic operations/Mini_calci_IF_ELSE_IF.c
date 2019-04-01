#include<stdio.h>
#include<conio.h>
void main()
{
	int op,a,b,c;
	printf("Enter the operation to be performed");
	scanf("%d",&op);
	if(op==1)
	{
		printf("Enter the values of a and b to perform addition");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("The sum of two numbers is %d",c);
			
	}
	else if(op==2)
	{
		printf("Enter the values of a and b to perform subtraction");
		scanf("%d%d",&a,&b);
		c=a-b;
		printf("The difference of two numbers is %d",c);
	}
	getch();
}
