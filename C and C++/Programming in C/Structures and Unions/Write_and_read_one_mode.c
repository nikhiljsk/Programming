//WAP to perform reading and writing within same mode
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *q;
	char s[20];
	q=fopen("nikhil.txt","r+");
	printf("enter");
	scanf("%s",s);
	fputs(s,q);
	fgets(s,10,q);
	puts(s);
	fclose(q);
	getch();
}
