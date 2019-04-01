#include<stdio.h>
#include<conio.h>
void main()
{
	struct student 
	{
		char name[20];
		int age;
	};
	struct student d,*p;
	p=&d;
	printf("enter the name and age of the student");
	scanf("%s %d",d.name,&d.age);
	printf("name is %s \n age is %d\n",(*p).name,(*p).age);
	printf("name is %s \n age is %d",p->name,p->age);
	getch();
}
