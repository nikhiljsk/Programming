#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[20];
}s[2];
void display()
{
int i;
FILE *q;
/*for(i=0;i<2;i++)
{
printf("The entered roll no is %d and name is %s\n",s[i].roll,s[i].name);	
}*/
q=fopen("rail.txt","r");
fread(&s,sizeof(s),1,q);
   for(i=0;i<2;i++)
   {  

   printf("%d %s ",s[i].roll,s[i].name);
   }
   fclose(q);
}
void input()
{
	int i;
	FILE *q;
    for(i=0;i<2;i++)
   {
   	printf("Enter the roll and name");
	scanf("%d %s",&s[i].roll,s[i].name);
   }
   q=fopen("rail.txt","w");
   fwrite(&s,sizeof(s),1,q);
   fclose(q);
}

void main()
{
  input();
  display();
  getch();
}
