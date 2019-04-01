#include<stdio.h>
#include<conio.h>
void main()
{
	char c='a';
	char b[20]="hello world";
	char *p=&c;
	char *q=b;
	int i;
	for(i=0;i<11;i++)
	{
		printf("%c",*q);
		q++;
	}
	q=b;
	printf("%s",*q);//This cannot be used
	getch();
	
	
}
