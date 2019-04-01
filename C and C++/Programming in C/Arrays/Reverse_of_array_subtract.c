#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],b[20],i,j,n;
	//printf("enter the number of elements in the array");
	scanf("%d",&n);
	//printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    for(i=n-1,j=0;a[i]!='\0';i--,j++)
    {
    	b[j]=a[i];
    }
    //printf("The elements in the reversed array");
    //for(i=0;i<n;i++)
    //{
   // 	printf("%d\t",b[i]);
    //}
    for(i=0;i<n;i++)
    {
    	b[i]=b[i]-2;
    }
    
    for(i=0;i<n;i++)
    {
    	printf("\n%d\t",b[i]);
    }
getch();

}

