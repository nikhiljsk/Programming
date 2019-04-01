//multiplication of two matrices
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,q,r,sum=0;
	int i,j,m,n,f[10][10],s[10][10],multi[10][10];
	printf("enter the order of the matrix 1");
	scanf("%d %d",&p,&q);
	printf("enter the elements in the matrix");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&f[i][j]);
		}
	}
	printf("enter the order of second matrix");
	scanf("%d %d",&m,&n);
	if(q!=m)
	printf("two matrices cannot be multiplied");
	else
	{
		printf("enter the elements in the 2nd matrix");
	    for(i=0;i<m;i++)
	    {
	    	for(j=0;j<n;j++)
	    	{
	    	scanf("%d",&s[i][j]);
	        }
		}
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				for(r=0;r<q;r++)
				{
					sum=sum+f[i][r]*s[r][j];
				}
				multi[i][j]=sum;
				sum=0;
			}
		}
		printf("the multiplied matrix is :\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",multi[i][j]);
			}
			printf("\n");
		}
		
	}
	getch();
}
