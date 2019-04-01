#include<stdio.h>
#include<conio.h>
int rec(int n,int i);
void main()
{
	int i=2,n,result;
	printf("Enter a number");
	scanf("%d",&n);
	result=rec(n,i);
	if(result==2)
	printf("not prime");
	else if(result==4)
	printf("prime");
	getch();
}
int rec(int n,int i)
{	
	while(i<n)
	{
	if(n%i==0)
	{
	return 2;
    }
    else
    return rec(n,++i);
	}
	if(i>=n)
	return 4;
}
