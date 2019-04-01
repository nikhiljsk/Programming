#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,sum=0;
	printf("Enter any number to reverse it");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		sum=sum+a;
		
	}
	printf("%d",sum);
	getch();
}
