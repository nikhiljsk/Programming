#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[20],a[20];int n=4;
	printf("Enter two arrays");
	gets(s);
	gets(a);
	puts(strrev(s));
	puts(strstr(s,a)); //strstr is used for finding string using a string to print the following text
	puts(strupr(s));
	puts(s);
	puts(strlwr(s));
	puts(strcat(s,a));
	puts(strncat(s,a,n));
	puts(a);
	printf("%d",stricmp(a,s));//ignores case sensitivity
	char s1;
	printf("enter a character to use strchr and find a substring");
	scanf("%c",&s1);
	puts(strchr(a,s1));//strchr is used to find substring using a character
	getch();
}
