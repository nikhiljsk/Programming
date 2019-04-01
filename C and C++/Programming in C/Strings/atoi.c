#include<stdio.h>
#include<conio.h>
void main()
{
	int z,t;
	char x[10]="1234";
	//similarly atof,atol can be used.{float,long}
	z=atoi(x);
	printf("%d\n",z);
	t=z-1;
	printf("%d",t);
	getch();
}
