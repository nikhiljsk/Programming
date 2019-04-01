#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr[3][3];
	int i,j,m,n;
	printf("enter the no of rows and columns");
	scanf("%d%d",&m,&n);
	printf("enter the elements in the matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(ptr+i)+j);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(ptr+i)+j));
		}
		printf("\n");
	}
}
