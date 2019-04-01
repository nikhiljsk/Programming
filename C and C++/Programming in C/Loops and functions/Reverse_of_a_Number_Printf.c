#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n;
	printf("Enter the value of any number");
	scanf("%d",&n);
	printf("the reverse of the number is ");
	do
	{
		r=n%10;
		n=n/10;
		printf("%d",r);
		
	}while(n!=0);
	getch();
}
