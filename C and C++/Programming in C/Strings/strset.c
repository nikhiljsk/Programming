#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[20];
	int n;
	puts("enter a string");
	gets(s);
	puts(strset(s,'z'));
	printf("Enter the number ");
	scanf("%d",&n);
	puts(strnset(s,'a',n));
	getch();
}
