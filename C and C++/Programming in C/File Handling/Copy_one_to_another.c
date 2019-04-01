#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p1,*p2;
	char ch;
	p1=fopen("source.txt","w");
	printf("enter the contents");
	while(ch!='.')
	{
		ch=getche();
		fputc(ch,p1);
		
	}
	printf("record saved\n");
	fclose(p1);
	p1=fopen("source.txt","r");
	p2=fopen("target.txt","w");
	while((ch=fgetc(p1))!=EOF)
	{
		fputc(ch,p2);
	}
	printf("file copied");
	fclose(p1);
	fclose(p2);
	getch();
}
