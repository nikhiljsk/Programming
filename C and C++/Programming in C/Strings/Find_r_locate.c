#include<stdio.h>
#include<conio.h>
void main()
{
	char s[20];
	int i,count=0;
	//printf("Enter a string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='r'||s[i]=='R')
		{
			count++;
			//printf("%d\t",i);
		}
	}
	printf("\n%d",count);
}
