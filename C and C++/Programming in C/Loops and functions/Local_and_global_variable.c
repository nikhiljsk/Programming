#include<stdio.h>
#include<conio.h>
int x=6;//extern int is the default for global
void main()
{
	int x=7;//auto int is the default for local
	printf("%d",x);
	getch();
}
