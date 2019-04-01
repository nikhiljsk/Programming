#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,rev=0,b;
	printf("Enter any number to reverse it");
	scanf("%d",&n);
	b=n;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		rev=rev*10+a;
		
	}
	printf("%d ",rev);
	if(rev==b)
	printf("It is a pallindrome");
	else
	printf("It is not a pallindrome");
	getch();
}
