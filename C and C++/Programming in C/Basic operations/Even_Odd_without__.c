#include<stdio.h>
#include<conio.h>
void main()
{
	int b;
	float n,a;
	printf("Enter a number");
	scanf("%f",&n);
	a=n/2;
	//printf(" a is %f\n",a);
	b=(int)a;
	//printf("b is %d\n",b);
	if((a-b)>0)
	printf("%d is odd",(int)n);
	else
	printf("%d is even",(int)n);
	getch();
	
}
