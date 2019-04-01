#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	struct student
	{
		char name[20];
		int age;
	}s;
	printf("Enter the name and age of the student");
	scanf("%s %d",s.name,&s.age);
	struct student z;
	//z=s;   //can be used directly without the following lines
	strcpy(z.name,s.name);
	z.age=s.age;
	printf("%s %d",z.name,z.age);
	getch();
}
