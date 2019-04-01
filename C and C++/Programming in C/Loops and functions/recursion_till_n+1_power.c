//WAP to find sum of series 1^2+2^3+3^4+……n^(n+1)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int recss(int n);
void main()
{
	int i,n;
	printf("Enter a number");
	scanf("%d",&n);
	printf("%d",recss(n));
	getch();
}
int recss(int n)
{
	if(n==1)
	return 1;
	else
	return pow(n,n+1)+pow(n-1,n);
	
}
