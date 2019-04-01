//WAP to count number of characters, words and lines within file
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *q;
	char ch,fn[10],s[100];
	int c=0,w=1,l=1;
	printf("Enter the file name");
	scanf("%s",fn);
	q=fopen(fn,"w");
	printf("Enter the content in file");
	fflush(stdin);
	gets(s);
	//scanf("%[^/n]s",s);
	fputs(s,q);
	fclose(q);
	printf("Data saved\n");
	q=fopen(fn,"r");
	while((ch=fgetc(q))!=EOF)
	{
		c++;
		if(ch==' '||ch=='13')
		w++;
		else if(ch=='13')
		l++;
	}
	printf("Number of characters %d\nNumber of words %d\nNumber of lines %d",c,w,l);
	fclose(q);
	getch();
}
