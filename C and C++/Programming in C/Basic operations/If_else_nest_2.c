#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the values of a and b");
	scanf("%d%d",&a,&b);
	if(a!=b)
	{
		printf("Both values are not equal\n");
		if(a>b)
		{
		printf("a is greater than b");
	}
	else
	{
		printf("b is greater than a");
	}
	}
else
{
printf("Both are equal");
}
getch();
}
