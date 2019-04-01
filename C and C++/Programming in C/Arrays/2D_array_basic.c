#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	printf("Enter the elements in the array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements in the array are : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
