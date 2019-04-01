#include<stdio.h>
#include<conio.h>
void main()
{
	void *p;
	int a=5;
	float b=2.3;
	p=&a;
	printf("%d\n",*(int *)p);
	p=&b;
	printf("%f",*(float *)p);
	getch();
}
