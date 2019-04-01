#include<stdio.h>
#include<conio.h>
void main()
{
	float no_1,no_2;
	printf("Enter the two numbers to be compared");
	scanf("%f%f",&no_1,&no_2);
	if(no_1>no_2)
	{
		printf("%f is greater than %f\n Thank you :)",no_1,no_2);
	}
	else
{
printf("%f is greater than %f\n Thank you :)",no_2,no_1);
}
getch();
}

