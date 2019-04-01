#include<stdio.h>
#include<conio.h>
int recs(int n);
void main()
{
	int n,i;
	printf("Enter a number");
	scanf("%d",&n);
	printf("%d",recs(n));
	getch();	
}
int recs(int n)
{	if(n==0)
	return 0;
	else
	return n%10+recs(n/10);
}
