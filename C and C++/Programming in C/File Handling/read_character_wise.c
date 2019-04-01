#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char ch;
	printf("the contents in the file are :");
	ptr=fopen("nikhil.txt","r");
	while((ch=fgetc(ptr))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(ptr);
	getch();
}
