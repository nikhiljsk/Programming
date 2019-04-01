#include<stdio.h>
#include<conio.h>
int fabo(int n);
void main()
{
	int n,i;
	printf("Enter  a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d ",fabo(i));
	getch();
}
int fabo(int n)
{
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	else
	return fabo(n-1)+fabo(n-2);
	
}
