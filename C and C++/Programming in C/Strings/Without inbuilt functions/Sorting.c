#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,t;
	char s[100];
	printf("enter a string");
	gets(s);
	n=strlen(s);
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	puts(s);
	getch();
}
