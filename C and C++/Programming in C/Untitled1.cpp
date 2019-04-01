#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,loc=0;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	int *p=a;//int *p=&a[0];
	printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	int max=*p;//Mind the location of declaration of max and size of array
	for(i=0;i<n;i++)
	{
		if(max<*(p+i))
		{
			max=*(p+i);
			loc=i+1;
		}
		else
		continue;
	}
	printf("Max value is %d\n",max);
	printf("Location of max value is at %d",loc);
	return 0;
	getch();
}
