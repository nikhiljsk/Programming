#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char s[20];
	printf("the contents of the file are :");
	ptr=fopen("nikhil.txt","r");
    fgets(s,10,ptr);
    puts(s);
    fclose(ptr);
    getch();
	
	
}
