#include<stdio.h>
#include<conio.h>
void main()
{
	char s[100],k[100];
	int i,j,n=0;
	printf("Enter two strings");
	gets(s);
	gets(k);
	for(i=0;s[i]!='\0';i++)//backslash 0 is used and not forward slash
{
	n++;
}
	for(i=n,j=0;k[j]!='\0';i++,j++)
	{
	s[i]=k[j];
	}
	printf("The string after concatenation is ");
	puts(s);
	getch();
}
