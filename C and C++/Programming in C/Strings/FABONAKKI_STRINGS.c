/*WAP that generates and prints the fibonacci word of order 0 through 5.If f(0)="a",
f(1)="b",f(2)="ba",f(3)="bab",f(4)="babba",etc.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	//char *l,*m,*n;
	char s[10]="a";
	char k[10]="b";
	char j[10];
	int i;
	printf("a b ");
	for(i=0;i<5;i++)
	{
		strcpy(j,s);
		strcpy(s,k);
		strcat(k,j);
		printf("%s ",k);
    	/*for(i=0;i<strlen(k);i++)
    	{
    		s[i]=k[i];
    	}*/
	
	}
	getch();
}
