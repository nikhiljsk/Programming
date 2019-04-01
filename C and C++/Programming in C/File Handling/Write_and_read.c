#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	FILE *ptr;
	ptr=fopen("nikhil.txt","w");
	
	printf("enter the data");
	while(ch!='.')
	{
		ch=getche();
		fputc(ch,ptr);
	}
	fclose(ptr);
	ptr=fopen("nikhil.txt","r");
	printf("the contents in the file are");
	//while((ch=getc(ptr))!=EOF)
	while(ch!=EOF)
	{
		ch=fgetc(ptr);
		printf("%c",ch);
	}
	fclose(ptr);
	getch();
}
