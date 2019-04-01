#include<stdio.h>
#include<conio.h>
struct student
{
	int rn;
	float per;
	char ss[20];
}s;
void main()
{
	printf("enter the roll number, percentage and name of student");
	scanf("%d %f %s",&s.rn,&s.per,s.ss);
	printf("The roll number entered is %d \n The percentage of the student is %f \n The name of the student is %s",s.rn,s.per,s.ss);
	printf("\n size of rn is %d\n size of per is %d \n size of string is %d\nsize of structure is %d\n",sizeof(s.rn),sizeof(s.per),sizeof(s.ss),sizeof(s));	
    getch();
}
