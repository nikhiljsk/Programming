#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *a,n=10;
	a=(int *)malloc(sizeof(int)*n);
	*a=1;
	//printf("%d  %d",a[0],a[1]);
	printf("%d",*a);
	printf("\n%p\n",a);
	free(a);
	//from now a is a dangling pointer
	//a = NULL; //to prevent 'a' from being a dangling pointer this step is used
	printf("%d\n",*a);
	printf("%p",a);
	return 0;
	getch(); 
}
