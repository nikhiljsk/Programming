#include<stdio.h>
#include<conio.h>
void main()
{
	//int n;
	//printf("Enter the size of string");
	//scanf("%d",&n);
	char s[20];
	int i;
	printf("Enter a string");
	scanf("%[^/n]s",s); //input is not terminated until /n is used in console screen
	//gets(s);
	//puts(s);
	printf("%s",s);
	//gets(s);
	/*for(i=0;s[i]!='\0';i++)
	{
	printf("%c",s[i]);
    }
    */
    
    getch();	
}
