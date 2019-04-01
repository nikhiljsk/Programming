#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,**k,a=5;
	p=&a;
	k=&p;
	printf("%u %u %u %u %u %u %u %u",*p,a,**k,p,&a,*k,k,&p);
	getch();
}
