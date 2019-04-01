#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,m4,m5,per;
	printf("Enter the marks of 5 subjects to classify into I,II,III,IV classes");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	//Assume the max. marks for each subject is 100.
	per=(m1+m2+m3+m4+m5)/5;
	if(per>=60)
	{
		printf("This percentage corresponds to Ist class\n Congratulations! ");
	}
	if(per<60 && per>=50)
	{
		printf("This percentage corresponds to IInd class\n Well Done!");
	}	
	if(per<50 && per>=40)
	{
		printf("This percentage corresponds to IIIrd class\n Better luck next time!");
	}
	if(per<40)
	{
		printf("This percentage corresponds to IVth class\n Work hard amigo");
	}
	getch();
	
}
