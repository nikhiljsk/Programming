//WAP to print A-Z n the form of AB   CD   EF....
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k;
	for(i=65;i<91;i++)
	{
		if(i%2!=0)
		{
			printf(" ");
		}
		printf("%c",i);
	}
	getch();
}
