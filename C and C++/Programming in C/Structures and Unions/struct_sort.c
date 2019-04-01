#include<stdio.h>
#include<conio.h>
void main()
{
	struct sort
	{
		char name[10];
		int price;
	}a[2];
	int i,j;
	struct sort tmp;
	printf("Enter the name and price");
	for(i=0;i<2;i++)
	{
		fflush(stdin);
		gets(a[i].name);
		scanf("%d",&a[i].price);
	}
	for(i=0;i<2;i++)
	{
		for(j=1;j<2-i;j++)
		{
			if(a[i].price<a[j].price)
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		printf("%s %d \n",a[i].name,a[i].price);
	}
	getch();
}
