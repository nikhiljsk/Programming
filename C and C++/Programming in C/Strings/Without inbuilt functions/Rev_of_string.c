#include<stdio.h>
#include<conio.h>
void main()
{
	char s[100];
	char k[100];
	int i,j,n=0;
	printf("enter a string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		n++;
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		k[j]=s[i];
	}
	puts(k);
	getch();
}
