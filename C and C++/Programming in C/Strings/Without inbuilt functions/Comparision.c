#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=0,len,i,z=0;
	char s[100],k[100];
	puts("Enter two strings");
	gets(s);
	gets(k);
	for(i=0;s[i]!='\0';i++)
	n1++;
	printf("n1 = %d\n",n1);
	for(i=0;k[i]!='\0';i++)
	n2++;
	printf("n2 = %d\n",n2);
	if(n1>n2)
	len=n1;
	else if(n1==n2)
	len=n1;
	else
	len=n2;
	for(i=0;i<len;i++)
	{
		if(s[i]>k[i])
		{
			printf(" +1 : s>k");
			z=2;
			break;
		}
		else if(s[i]==k[i])
		{
			z=1;
			continue;
		
		}
		else
		{
			printf(" -1 : s<k");
			z=2;
			break;
		}
	}
	if(z==1)
	printf(" 0 : s=k");
	getch();
	
}
