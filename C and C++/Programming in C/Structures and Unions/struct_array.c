#include<stdio.h>
#include<conio.h>

	struct student
	{
		char name[5];
		int roll;
	}s[4];
	
	
void main()
{ int i;
	printf("enter the name of two students : \n");
	for(i=0;i<2;i++)
	{
		printf("enter the name of %d student : \n",i+1 );
		scanf("%s",s[i].name);
	}
	printf("enter the roll number of two students\n");
	for(i=0;i<2;i++)
	{
		printf("enter the roll no of %d student :\n",i+1);
		scanf("%d",&s[i].roll);
	}
	printf("The details entered are : \n");
	for(i=0;i<2;i++)
	{
		printf("%s \t %d\n",s[i].name,s[i].roll);
	}
	getch();
}
