#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r;
	printf("Enter the number to classify into even or odd :\n ");
	scanf("%d",&a);
	r=a%2;
	if(r=0)
	{
		printf("The entered value %d is EVEN\n Thank you ",a );
		
	}
	else
	{
		printf("The entered value %d is ODD\n Thank you ",a);
	}
getch();
}
