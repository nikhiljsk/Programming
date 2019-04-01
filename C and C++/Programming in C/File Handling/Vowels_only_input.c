#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("nikhil.txt","w");
	printf("enter any data");
	while(ch!='.')
	{
		//scanf("%c",&ch);
		ch=getche();
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{
			//fprinf(ptr,"%c",ch);
		    fputc(ch,ptr);
		}
	}
	fclose(ptr);
	getch();
	
}
