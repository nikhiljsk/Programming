#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int z=5;
	char c[20];
	printf("%s",itoa(z,c,2));
	/*2 indicates base-----2 for binary,10 for decimal,8 for octal*/
	getch();	
}

