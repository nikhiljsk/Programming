#include<stdio.h>
#include<conio.h>
void main()
{
	char s[200];
	puts("enter a string");
	gets(s);
	char k[200];
	int i,j,n=0,flag=0;
	for(i=0;s[i]!='\0';i++)
    {
    	n++;
    }
    for(i=n-1,j=0;i>=0;i--,j++)
    {
    	k[j]=s[i];
    }
    for(i=0;i<n;i++)
    {
    	if(k[i]==s[i])
    	{
    		flag=2;
    	}
    	else
    	{
    		flag=1;
    		break;
    	}
    }
    if(flag==1)
    printf("The string %s is not palindrome",s);
    else
    printf("The string %s is a palindrome",s);
    getch();
}
