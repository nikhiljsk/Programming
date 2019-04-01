#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100];
    int *ptr=a;
    int i,j,pos,val,n;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements in an array");
    for(i=0;i<n;i++)
    {
    	scanf("%d",(ptr+i));
    }
    printf("enter the position you want to insert an element");
    scanf("%d",&pos);
    printf("enter the value ");
    scanf("%d",&val);
    for(i=n-1;i>=pos-1;i--)
    {
    	*(ptr+i+1)=*(ptr+i);
    }
    *(ptr+pos-1)=val;
    for(i=0;i<=n;i++)
    {
    	printf("%d",*(ptr+i));
    }
    getch();
}
