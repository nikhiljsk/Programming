#include<stdio.h>
#include<conio.h>
void main()
{
	char s[100],k[100];
	printf("Enter a string");
	gets(s);
	int n=0,i;
	for(i=0;s[i]!='\0';i++)
	n++;
	for(i=0;i<n;i++)
	{
		k[i]=s[i]-32;
		
	}
	puts(k);
	getch();
}
