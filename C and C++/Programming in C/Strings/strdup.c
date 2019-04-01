#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[20];
	int i;
	puts("enter a string");
	gets(s);
	puts(strdup(s));
	for(i=0;i<strlen(s);i++)
	{
		s[i]='b';
	}
	puts(s);
	puts(strdup(s));
	getch();
}
