#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char k[20],s[20],a[20];
	printf("enter two strings");
	gets(s);
	gets(a);
	printf("enter a new string");
	gets(k);
	printf("%d\n%d\n",strlen(s),strlen(a));
	strcpy(a,s);
	puts(a);
	int n;
	printf("enter the number of characters you want to copy from string 1 to 2");
	scanf("%d",&n);
	strncpy(k,a,n);
	puts(k);
	printf("%d\n",strcmp(a,s));
	printf("%d\n",strncmp(s,a,n));
	getch();
	
}

