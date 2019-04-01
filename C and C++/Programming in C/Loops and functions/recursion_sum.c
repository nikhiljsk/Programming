#include<stdio.h>
#include<conio.h>
int recs(int n);
void main()
{
	int i,n;
	printf("Enter a number");
	scanf("%d",&n);
	printf("%d",recs(n));
	getch();
}
int recs(int n)
{
	if(n==1)
	return 1;
	else
	return n+recs(n-1);
}
