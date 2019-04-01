#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,n,c=0;
	printf("Enter the value of any number");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			c=1;
			break;
	
		}
		
	
		i++;
		
	}
	if(c==1)
	printf("The entered number is not prime");
	else
	printf("The entered number is prime number");
	getch();
}
