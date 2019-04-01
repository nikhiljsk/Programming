#include<stdio.h>
#include<conio.h>
#include<string.h>
void ftoa(float f1,char s[])
{
	sprintf(s,"%f",f1);
}
void main()
{
	char str[20];
	float f=12.34;
	ftoa(f,str);
	printf("%s",str);
	getch();
}
