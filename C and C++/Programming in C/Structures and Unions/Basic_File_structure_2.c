#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		char name[20];
		int age;
	}i;//ignore this variable
	struct student z={"saho rey",15};
	printf("%d \n%d \n",sizeof(z),sizeof(i));
	printf("Name of student is %s \n age of student is %d",z.name,z.age);
	getch();
}
